__int64 __fastcall sub_1AD7660(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __m128i a5, double a6)
{
  unsigned int v6; // r13d
  __int64 v7; // rbp
  __int64 v8; // rax
  int v9; // r12d
  unsigned int v10; // eax
  __int64 *v11; // rbx
  unsigned int v12; // edx
  unsigned int v13; // r13d
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // r12
  unsigned int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  unsigned __int64 v22; // r15
  __int64 v23; // rdx
  char v24; // al
  _QWORD *v25; // rax
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  unsigned int v29; // eax
  unsigned int v30; // eax
  unsigned __int64 v31; // rdi
  __int64 v32; // [rsp+8h] [rbp-E0h]
  __int64 v33; // [rsp+10h] [rbp-D8h]
  __int64 v34; // [rsp+18h] [rbp-D0h]
  _BYTE v35[200]; // [rsp+20h] [rbp-C8h] BYREF

  v6 = a4;
  v7 = a2;
  v8 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)&byte_8[*(_QWORD *)(a3 + 8) & 0xFFFFFFFFFFFFFFF0LL]
                                         & 0xFFFFFFFFFFFFFFF0LL)
                             + 32LL)
                 & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v8 + 16) != 26 )
    v8 = sub_F63050(
           *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)&byte_8[*(_QWORD *)(a3 + 8) & 0xFFFFFFFFFFFFFFF0LL]
                                             & 0xFFFFFFFFFFFFFFF0LL)
                                 + 32LL)
                     & 0xFFFFFFFFFFFFFFF0LL),
           a2,
           a3,
           a4);
  v9 = *(_DWORD *)(a2 + 16);
  v10 = v6 + *(unsigned __int16 *)(v8 + 22);
  if ( v10 == v9 )
  {
    if ( v10 - 1 < v6 )
      return 0;
    v15 = v6;
    v16 = ~v6 + v10;
    v17 = 8LL * v6;
    v13 = 0;
    v34 = 8 * (v15 + v16 + 1);
    while ( 1 )
    {
      v32 = sub_A63CE0(*(_QWORD **)(a1 + 248));
      v22 = *(_QWORD *)(v17 + v7 + 8 * (((*(_BYTE *)(v7 + 2) & 8) != 0) + 1LL) + 32);
      v23 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v22 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                      & 0xFFFFFFFFFFFFFFF0LL);
      v24 = *(_BYTE *)(v23 + 16);
      switch ( v24 )
      {
        case 13:
          if ( (((*(_WORD *)(v23 + 18) >> 3) + 76) & 0x1FFu) <= 0x13 )
            goto LABEL_18;
          break;
        case 47:
          v33 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v22 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                          & 0xFFFFFFFFFFFFFFF0LL);
          v25 = sub_F60F10(v33, a2, v23, v19, v20, v21);
          if ( ((*((_BYTE *)v25 + 74) & 1) != 0 || (v25[16] & 0xFFFFFFFFFFFFFFF8LL) != 0)
            && *((char *)sub_F60F10(v33, a2, v33, v26, v27, v28) + 76) >= 0 )
          {
LABEL_18:
            v29 = sub_EEB7E0(v22, a2, *(double *)a5.m128i_i64);
            a2 = v22;
            sub_16F1980(a1, v22, v32, v29, nullptr, 0, a5, a6);
            goto LABEL_12;
          }
          break;
        case 10:
          goto LABEL_18;
      }
      v13 = 1;
      v18 = sub_EEB7E0(v22, a2, *(double *)a5.m128i_i64);
      a2 = a1 + 8;
      sub_168B9F0((__int64)v35, (__int64 *)(a1 + 8), v18, 0x1247u, 0);
      sub_15F7200(v35);
LABEL_12:
      v17 += 8;
      if ( v34 == v17 )
        return v13;
    }
  }
  v11 = (__int64 *)(a1 + 8);
  if ( (*(_BYTE *)(a2 + 3) & 1) != 0 )
  {
    v12 = *(_DWORD *)(a2 + 24);
  }
  else if ( *(char *)(a2 + 2) >= 0
         || (v12 = sub_EEB7E0(
                     *(_QWORD *)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 32),
                     a2,
                     *(double *)a5.m128i_i64)) == 0 )
  {
    v30 = sub_EEB7E0(*(_QWORD *)(a2 + 32), a2, *(double *)a5.m128i_i64);
    v12 = v30;
    if ( v9 )
    {
      if ( !v30 )
      {
        v31 = *(_QWORD *)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 32);
        if ( v31 )
          v12 = sub_EEB7E0(v31, a2, *(double *)a5.m128i_i64);
      }
    }
  }
  v13 = 1;
  sub_168B9F0((__int64)v35, v11, v12, 0x1248u, 0);
  sub_15F7200(v35);
  return v13;
}
