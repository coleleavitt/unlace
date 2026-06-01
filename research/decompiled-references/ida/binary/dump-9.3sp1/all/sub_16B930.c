__int64 __fastcall sub_16B930(__int128 a1, __int64 a2)
{
  unsigned int v2; // r14d
  __int64 v4; // r14
  const __m128i *v6; // rbx
  __int64 v7; // r13
  _DWORD *v8; // r12
  int v9; // eax
  int v10; // edx
  __int64 v11; // rax
  _DWORD *v12; // rcx
  int v13; // r8d
  unsigned int v14; // eax
  __int32 v15; // eax
  __int32 v16; // eax
  int v17; // ecx
  int v18; // [rsp-10h] [rbp-A0h]
  int v19; // [rsp+0h] [rbp-90h]
  int v20; // [rsp+8h] [rbp-88h]
  __int64 v21; // [rsp+8h] [rbp-88h]
  __int64 v22; // [rsp+10h] [rbp-80h]
  __int64 v23; // [rsp+10h] [rbp-80h]
  __int64 v24; // [rsp+10h] [rbp-80h]
  __int64 *v25; // [rsp+18h] [rbp-78h]
  __int64 v26; // [rsp+20h] [rbp-70h] BYREF
  __int64 v27; // [rsp+28h] [rbp-68h] BYREF
  _QWORD v28[3]; // [rsp+30h] [rbp-60h] BYREF
  __int128 v29; // [rsp+48h] [rbp-48h]
  unsigned __int64 v30; // [rsp+58h] [rbp-38h]

  v30 = __readfsqword(0x28u);
  if ( *(_BYTE *)(*((_QWORD *)&a1 + 1) + 32LL) != 4 )
    return 0;
  v4 = *(_QWORD *)(*((_QWORD *)&a1 + 1) + 40LL);
  if ( v4 == 0 || *(_DWORD *)v4 != 24 )
    return 0;
  v6 = (const __m128i *)a1;
  v7 = *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL);
  if ( !(unsigned __int8)sub_11FD80((char *)(v4 + 48), v28, 0) )
    return 0;
  if ( v28[0] != 1 )
    return 0;
  v8 = (_DWORD *)sub_1229A0(*(_QWORD *)(a2 + 48));
  v9 = sub_330DE0(a2);
  v10 = v9;
  if ( v9 <= 0 )
    return 0;
  if ( **(_DWORD **)(a2 + 56) == 55 )
    v10 = v9 - 1;
  if ( v10 == 1
    && *v8 == 12
    && (v11 = sub_11C8E0((__int64)v8, &v26, 9)) != 0
    && *(_BYTE *)(v11 + 32) == 4
    && (v22 = v11,
        *((_QWORD *)&a1 + 1) = v26,
        v27 = *(_QWORD *)(a1 + 56),
        *(_QWORD *)&a1 = sub_129440(a1, (__int64)&v27, 0),
        (_QWORD)a1)
    && sub_125B90((unsigned __int8 *)a1, v7, (unsigned int *)v4, 0)
    && (v12 = *(_DWORD **)(v22 + 40), *v12 == 20)
    && (v23 = *(_QWORD *)(v22 + 40), sub_A2350((__int64)(v12 + 12), 1, 0))
    && (unsigned __int8)sub_12EA80(v7, v6, v6[3].m128i_i64[1], v23 + 32, v6[3].m128i_i64[1], v4 + 32, 1) )
  {
    memset(v28, 0, sizeof(v28));
    v29 = 0;
    sub_127FE0((__int64)v6, (__int64)v28, (__int64)(v8 + 16), 0, v13, v18, v19, v20, v23, (int)v28, v26);
    v24 = sub_129150((__int64)v6, v25, v6[3].m128i_i64[1], 0, 0, 0, 0x101u);
    if ( v24 && (LOBYTE(v14) = sub_125B90((unsigned __int8 *)v24, v7, (unsigned int *)v4, 0), v2 = v14, (_BYTE)v14) )
    {
      v21 = sub_167E70(v6[4].m128i_i64[0], *(_DWORD *)(v6[3].m128i_i64[1] + 72));
      sub_11D5A0(v6[3].m128i_i64[1]);
      v15 = v6[1].m128i_i32[2];
      BYTE1(v15) &= ~2u;
      LOBYTE(v15) = v15 | 0x80;
      v6[1].m128i_i32[2] = v15;
      sub_11D5A0((__int64)v8);
      v16 = v6[1].m128i_i32[2];
      BYTE1(v16) &= ~2u;
      LOBYTE(v16) = v16 | 0x80;
      v6[1].m128i_i32[2] = v16;
      v17 = *(_DWORD *)(v24 + 36);
      *(_DWORD *)v24 = 16;
      sub_120A10(v24 + 48, v7, 2, v17, -1, 0);
      sub_112550((__int64)v6, a2, v21);
      sub_A2520((__int64)v6, (__int64)"SDIV2A");
    }
    else
    {
      v2 = 0;
    }
    sub_93B40(v25);
  }
  else
  {
    return 0;
  }
  return v2;
}
