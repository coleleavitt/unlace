__int64 __fastcall sub_156560(__int64 a1, const __m128i *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r14
  __int64 v5; // rax
  unsigned int v6; // r13d
  _DWORD *v9; // rdi
  char *v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r12
  __int64 v18; // r15
  __int64 v19; // r12
  char *v20; // rax
  __int128 v21; // rdi
  __int64 v22; // rax
  __int64 v23; // [rsp+18h] [rbp-50h] BYREF
  _QWORD v24[9]; // [rsp+20h] [rbp-48h] BYREF

  v24[1] = __readfsqword(0x28u);
  v4 = *(_QWORD *)(a4 + 72);
  v5 = *(_QWORD *)(v4 + 24);
  if ( *(_BYTE *)(v5 + 160) == 4
    && (v9 = *(_DWORD **)(v5 + 168), *v9 == 12)
    && v9
    && (v13 = (char *)sub_1183E0((__int64)v9, &v23)) != nullptr
    && (unsigned __int8)sub_11B8C0(v13, v24, 1u)
    && v24[0] == 1
    && *(_BYTE *)v23 == 4
    && (v14 = *(_QWORD *)(v23 + 8), *(_DWORD *)v14 == 56)
    && v14
    && *(_BYTE *)(v14 + 64) == 8
    && (v15 = *(_QWORD *)(v14 + 72), *(_DWORD *)(v15 + 284) == 7)
    && (v6 = sub_12A5C0(a1, a2, a3, *(_QWORD *)(v4 + 24) + 80LL, a3, *(_QWORD *)(v15 + 24), 0), (_BYTE)v6) )
  {
    v16 = *(_QWORD *)(v4 + 24);
    if ( *(_DWORD *)(v16 + 216) == 1 )
    {
      v22 = *(_QWORD *)(v16 + 224) + *(int *)(v4 + 12);
      if ( *(int *)(v4 + 16) > v22 )
        *(_DWORD *)(v4 + 16) = v22;
    }
    v17 = *(_QWORD *)(a1 + 96);
    *(_DWORD *)(v4 + 8) = 2;
    v18 = v17 + 200;
    sub_7DF80((_QWORD *)(v4 + 24), 2u);
    copy_tinfo_t(*(_QWORD *)(v4 + 24) + 24LL, v17 + 200);
    copy_tinfo_t(*(_QWORD *)(v4 + 24) + 104LL, v17 + 208);
    *(_DWORD *)(v4 + 284) = 6;
    sub_118FE0(a4 + 32, (__int64)"strcpy");
    v19 = *(_QWORD *)(a4 + 16);
    if ( v19 && *(_DWORD *)v19 == 4 && sub_1216A0((unsigned __int8 *)(v19 + 32), *(_QWORD *)(v4 + 24), 0) )
    {
      v20 = (char *)sub_156500((__int64 *)(v4 + 48));
      sub_118550((char *)(v19 + 64), v20);
      *(_DWORD *)(a4 + 68) = *(_DWORD *)(*(_QWORD *)(v4 + 24) + 4LL);
      copy_tinfo_t(v4 + 72, v18);
      *((_QWORD *)&v21 + 1) = v4 + 96;
      *(_QWORD *)&v21 = a2;
      sub_11F9E0(v21, v19 + 32, 1u, 0xFFFF0000);
      sub_14A410((__int64 *)(v4 + 136), (__int64 *)(v4 + 96));
      sub_EE070((__int64)a2, a4, 0);
      sub_1190E0(v19);
    }
  }
  else
  {
    return 0;
  }
  return v6;
}
