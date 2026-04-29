__int64 __fastcall sub_15AC80(__int64 a1, const __m128i *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r13
  __int64 v5; // rax
  unsigned int v6; // r14d
  _DWORD *v9; // rdi
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // r12
  __int64 v16; // r12
  char *v17; // rax
  __int128 v18; // rdi
  __int64 v19; // [rsp+8h] [rbp-80h]
  char *v20; // [rsp+28h] [rbp-60h] BYREF
  _QWORD v21[11]; // [rsp+30h] [rbp-58h] BYREF

  v21[3] = __readfsqword(0x28u);
  v4 = *(_QWORD *)(a4 + 72);
  v5 = *(_QWORD *)(v4 + 24);
  if ( *(_BYTE *)v5 == 4
    && (v9 = *(_DWORD **)(v5 + 8), *v9 == 12)
    && v9
    && (v13 = sub_11C8E0((__int64)v9, &v20, 56)) != 0
    && *(_BYTE *)(v13 + 64) == 8
    && (v14 = *(_QWORD *)(v13 + 72), *(_DWORD *)(v14 + 284) == 7)
    && (v6 = sub_12EA80(a1, a2, a3, (__int64)v20, a3, *(_QWORD *)(v14 + 24), 0), (_BYTE)v6) )
  {
    v15 = *(_QWORD *)(a1 + 96);
    *(_DWORD *)(v4 + 8) = 2;
    sub_82440((_QWORD *)(v4 + 24), 2u);
    v21[0] = 0xFFFFFFFF00000000LL;
    v21[1] = 0;
    sub_11CA10((char *)v21, v20);
    sub_125180(*(_QWORD *)(v4 + 24), (unsigned __int8 *)v21);
    v19 = v15 + 200;
    copy_tinfo_t(*(_QWORD *)(v4 + 24) + 24LL, v15 + 200);
    copy_tinfo_t(*(_QWORD *)(v4 + 24) + 104LL, v15 + 208);
    *(_DWORD *)(v4 + 284) = 8;
    sub_11D4A0(a4 + 32, (__int64)"strcat");
    v16 = *(_QWORD *)(a4 + 16);
    if ( v16 && *(_DWORD *)v16 == 4 && sub_125B60((unsigned __int8 *)(v16 + 32), *(_QWORD *)(v4 + 24), 0) )
    {
      v17 = (char *)sub_15A9C0((__int64 *)(v4 + 48));
      sub_11CA10((char *)(v16 + 64), v17);
      *(_DWORD *)(a4 + 68) = *(_DWORD *)(*(_QWORD *)(v4 + 24) + 4LL);
      copy_tinfo_t(v4 + 72, v19);
      *((_QWORD *)&v18 + 1) = v4 + 96;
      *(_QWORD *)&v18 = a2;
      sub_123EA0(v18, v16 + 32, 1u, 0xFFFF0000);
      sub_14E8D0((__int64 *)(v4 + 136), (__int64 *)(v4 + 96));
      sub_F2530((__int64)a2, a4, 0);
      sub_11D5A0(v16);
    }
    sub_11CDA0((__int64)v21);
  }
  else
  {
    return 0;
  }
  return v6;
}
