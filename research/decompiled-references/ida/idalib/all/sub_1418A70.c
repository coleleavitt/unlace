__int64 __fastcall sub_1418A70(__int64 a1, void **a2, __int64 a3, _QWORD *a4)
{
  void **v6; // rbx
  void **v7; // r12
  char *v8; // r8
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // r13
  __int64 v11; // rax
  int v12; // ecx
  char *v13; // r13
  __int64 v14; // r13
  void **v15; // r14
  void *v16; // rax
  int v17; // edx
  __int64 v18; // r14
  void **v19; // r13
  void *v20; // rax
  int v21; // eax
  void **i; // rbp
  __int64 result; // rax
  __m128 v24; // xmm0
  __int64 v25; // [rsp+8h] [rbp-60h]
  __int64 v26; // [rsp+10h] [rbp-58h] BYREF
  __int64 v27; // [rsp+18h] [rbp-50h]
  char *v28; // [rsp+20h] [rbp-48h]
  __int64 v29; // [rsp+28h] [rbp-40h]

  v6 = *(void ***)(a1 + 8);
  v7 = *(void ***)a1;
  v8 = (char *)a2 - *(_QWORD *)a1;
  if ( !(0xAAAAAAAAAAAAAAABLL * (((__int64)v6 - *(_QWORD *)a1) >> 4)) )
  {
    v9 = 1;
    goto LABEL_30;
  }
  v9 = 0x5555555555555556LL * ((__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 4);
  v10 = -16;
  if ( 0xAAAAAAAAAAAAAAABLL * (((__int64)v6 - *(_QWORD *)a1) >> 4) > 0x5555555555555556LL
                                                                   * (((__int64)v6 - *(_QWORD *)a1) >> 4)
    || v9 > 0x555555555555555LL )
  {
    goto LABEL_3;
  }
  if ( v9 )
  {
LABEL_30:
    v10 = 48 * v9;
LABEL_3:
    v29 = a3;
    v28 = v8;
    v11 = operator new(v10);
    v8 = v28;
    a3 = v29;
    v25 = v11;
    v27 = v11 + v10;
    v26 = v11 + 48;
    goto LABEL_4;
  }
  v26 = 48;
  v27 = 0;
  v25 = 0;
LABEL_4:
  v12 = *(_DWORD *)(a3 + 8);
  v13 = &v8[v25];
  *(_QWORD *)v13 = &v8[v25 + 16];
  *((_QWORD *)v13 + 1) = 0x100000000LL;
  if ( v12 )
    sub_1418990((void **)v13, (char **)a3);
  *((_QWORD *)v13 + 5) = *a4;
  if ( a2 != v7 )
  {
    v14 = v25;
    v15 = v7;
    do
    {
      *(_DWORD *)(v14 + 8) = 0;
      *(_DWORD *)(v14 + 12) = 1;
      v17 = *((_DWORD *)v15 + 2);
      *(_QWORD *)v14 = v14 + 16;
      if ( v17 )
        sub_1418990((void **)v14, (char **)v15);
      v16 = v15[5];
      v15 += 6;
      v14 += 48;
      *(_QWORD *)(v14 - 8) = v16;
    }
    while ( a2 != v15 );
    v26 = v25
        + 16
        * (3 * ((0xAAAAAAAAAAAAAABLL * ((unsigned __int64)((char *)(a2 - 6) - (char *)v7) >> 4)) & 0xFFFFFFFFFFFFFFFLL)
         + 6);
  }
  v18 = v26;
  v19 = a2;
  if ( a2 != v6 )
  {
    do
    {
      *(_DWORD *)(v18 + 8) = 0;
      *(_QWORD *)v18 = v18 + 16;
      v21 = *((_DWORD *)v19 + 2);
      *(_DWORD *)(v18 + 12) = 1;
      if ( v21 )
        sub_1418990((void **)v18, (char **)v19);
      v20 = v19[5];
      v19 += 6;
      v18 += 48;
      *(_QWORD *)(v18 - 8) = v20;
    }
    while ( v6 != v19 );
    v26 += 16
         * (3 * ((0xAAAAAAAAAAAAAABLL * ((unsigned __int64)((char *)v6 - (char *)a2 - 48) >> 4)) & 0xFFFFFFFFFFFFFFFLL)
          + 3);
  }
  for ( i = v7; i != v6; i += 6 )
  {
    while ( *i != i + 2 )
    {
      free(*i);
      i += 6;
      if ( v6 == i )
        goto LABEL_21;
    }
  }
LABEL_21:
  if ( v7 )
    operator delete(v7);
  result = v27;
  v24 = _mm_loadh_ps((const double *)&v26);
  *(_QWORD *)(a1 + 16) = v27;
  *(__m128 *)a1 = v24;
  return result;
}
