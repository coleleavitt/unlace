__int64 __fastcall sub_14100E0(__int64 a1, char *a2, __int64 a3)
{
  char *v6; // rbx
  char *v7; // r12
  char *v8; // rcx
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // r13
  __int64 v11; // rax
  char *v12; // r13
  __int64 v13; // rcx
  __int64 v14; // r14
  char *v15; // r13
  __int64 v16; // rdx
  __int64 v17; // r14
  char *v18; // r13
  __int64 v19; // rcx
  char *i; // rbp
  __int64 v21; // rax
  __int64 v22; // rdi
  __int64 result; // rax
  __m128 v24; // xmm0
  __int64 v25; // [rsp+0h] [rbp-58h]
  __int64 v26; // [rsp+8h] [rbp-50h] BYREF
  __int64 v27; // [rsp+10h] [rbp-48h]
  char *v28; // [rsp+18h] [rbp-40h]

  v6 = *(char **)(a1 + 8);
  v7 = *(char **)a1;
  v8 = &a2[-*(_QWORD *)a1];
  if ( !(0x8E38E38E38E38E39LL * ((__int64)&v6[-*(_QWORD *)a1] >> 4)) )
  {
    v9 = 1;
    goto LABEL_29;
  }
  v9 = 0x1C71C71C71C71C72LL * ((__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 4);
  v10 = -16;
  if ( 0x8E38E38E38E38E39LL * ((__int64)&v6[-*(_QWORD *)a1] >> 4) > 0x1C71C71C71C71C72LL
                                                                  * ((__int64)&v6[-*(_QWORD *)a1] >> 4)
    || v9 > 0x1C71C71C71C71C7LL )
  {
    goto LABEL_3;
  }
  if ( v9 )
  {
LABEL_29:
    v10 = 144 * v9;
LABEL_3:
    v28 = v8;
    v11 = operator new(v10);
    v8 = v28;
    v25 = v11;
    v27 = v11 + v10;
    v26 = v11 + 144;
    goto LABEL_4;
  }
  v26 = 144;
  v27 = 0;
  v25 = 0;
LABEL_4:
  v12 = &v8[v25];
  v13 = *(unsigned __int8 *)(a3 + 136);
  v12[136] = -1;
  if ( (_BYTE)v13 != 0xFF )
  {
    ((void (__fastcall *)(char *, __int64))funcs_141018C[v13])(v12, a3);
    v12[136] = *(_BYTE *)(a3 + 136);
  }
  if ( a2 != v7 )
  {
    v14 = v25;
    v15 = v7;
    do
    {
      *(_BYTE *)(v14 + 136) = -1;
      v16 = (unsigned __int8)v15[136];
      if ( (_BYTE)v16 != 0xFF )
      {
        ((void (__fastcall *)(__int64, char *))funcs_14101D2[v16])(v14, v15);
        *(_BYTE *)(v14 + 136) = v15[136];
      }
      v15 += 144;
      v14 += 144;
    }
    while ( a2 != v15 );
    v26 = v25 + 16 * (9 * ((0xE38E38E38E38E39LL * ((unsigned __int64)(a2 - 144 - v7) >> 4)) & 0xFFFFFFFFFFFFFFFLL) + 18);
  }
  v17 = v26;
  v18 = a2;
  if ( a2 != v6 )
  {
    do
    {
      v19 = (unsigned __int8)v18[136];
      *(_BYTE *)(v17 + 136) = -1;
      if ( (_BYTE)v19 != 0xFF )
      {
        ((void (__fastcall *)(__int64, char *))funcs_14101D2[v19])(v17, v18);
        *(_BYTE *)(v17 + 136) = v18[136];
      }
      v18 += 144;
      v17 += 144;
    }
    while ( v18 != v6 );
    v26 += 16 * (9 * ((0xE38E38E38E38E39LL * ((unsigned __int64)(v6 - a2 - 144) >> 4)) & 0xFFFFFFFFFFFFFFFLL) + 9);
  }
  for ( i = v7; i != v6; i += 144 )
  {
    while ( 1 )
    {
      v21 = (unsigned __int8)i[136];
      if ( (_BYTE)v21 == 0xFF )
        break;
      v22 = (__int64)i;
      i += 144;
      ((void (__fastcall *)(__int64))funcs_13F3420[v21])(v22);
      if ( v6 == i )
        goto LABEL_20;
    }
  }
LABEL_20:
  if ( v7 )
    operator delete(v7);
  result = v27;
  v24 = _mm_loadh_ps((const double *)&v26);
  *(_QWORD *)(a1 + 16) = v27;
  *(__m128 *)a1 = v24;
  return result;
}
