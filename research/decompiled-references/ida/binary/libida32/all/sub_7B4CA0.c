__int64 __fastcall sub_7B4CA0(
        char *a1,
        double a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9,
        __int64 a10,
        _QWORD *a11,
        __int64 *a12)
{
  __int64 v12; // r15
  unsigned __int64 v14; // r12
  __int64 v15; // rbp
  unsigned __int64 func_qty; // rax
  __int64 v17; // rdx
  void **v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __m128 v21; // xmm4
  __m128 v22; // xmm5
  unsigned __int64 v23; // rbp
  __int64 v24; // rbx
  unsigned int *v25; // rax
  unsigned int *v26; // r14
  void *v27; // r14
  __int64 v28; // rax
  _QWORD *v29; // rsi
  unsigned __int64 v30; // rdi
  void *v31; // rsi
  __int64 i; // rax
  __int64 v34; // rax
  char v35; // [rsp+0h] [rbp-11D8h]
  void *v37; // [rsp+50h] [rbp-1188h] BYREF
  int v38[4]; // [rsp+58h] [rbp-1180h]
  void *v39; // [rsp+B0h] [rbp-1128h] BYREF
  unsigned __int64 v40; // [rsp+1198h] [rbp-40h]

  v12 = (__int64)a1;
  v40 = __readfsqword(0x28u);
  v14 = a11[3];
  if ( v14 == -1 )
    v14 = (int)sub_5E44B0();
  v15 = a11[1];
  v37 = nullptr;
  *(_OWORD *)v38 = 0;
  if ( v15 )
  {
    v37 = (void *)qvector_reserve(&v37, 0, v15, 8);
    a1 = (char *)v37 + 8 * *(_QWORD *)v38;
    memset(a1, 0, 8 * (v15 - *(_QWORD *)v38));
    *(_QWORD *)v38 = v15;
    for ( i = 0; i != v15; ++i )
    {
      v18 = (void **)v37;
      v17 = *(unsigned int *)(*a11 + 4 * i);
      if ( (_DWORD)v17 == -1 )
        v17 = -1;
      *((_QWORD *)v37 + i) = v17;
    }
    if ( *(_QWORD *)v38 )
LABEL_27:
      sub_79C9B0(
        v12,
        (__m128)0LL,
        a3,
        a4,
        a5,
        v21,
        v22,
        a8,
        a9,
        (__int64)"Calculating metadata",
        v17,
        (__int64)v18,
        v19,
        v20,
        v35);
  }
  func_qty = get_func_qty(a1);
  v23 = func_qty;
  if ( *(_QWORD *)&v38[2] < func_qty )
  {
    v37 = (void *)qvector_reserve(&v37, v37, func_qty, 8);
  }
  else if ( !func_qty )
  {
    goto LABEL_16;
  }
  v24 = 0;
  do
  {
    while ( 1 )
    {
      v25 = (unsigned int *)getn_func(v24);
      v26 = v25;
      if ( v25 )
      {
        if ( (get_flags_ex(*v25, 4) & 0xC000) == 0x4000 && (unsigned int)calc_func_size(v26) >= v14 )
          break;
      }
      if ( v23 == ++v24 )
        goto LABEL_16;
    }
    v27 = (void *)*v26;
    v28 = *(_QWORD *)v38;
    v29 = v37;
    v17 = *(_QWORD *)&v38[2];
    v39 = v27;
    v30 = *(_QWORD *)v38 + 1LL;
    if ( &v39 >= v37 && (v18 = (void **)((char *)v37 + 8 * *(_QWORD *)&v38[2]), &v39 < v18) )
    {
      if ( *(_QWORD *)&v38[2] < v30 )
      {
        v37 = (void *)qvector_reserve(&v37, v37, *(_QWORD *)v38 + 1LL, 8);
        v29 = v37;
        v28 = *(_QWORD *)v38;
      }
    }
    else if ( *(_QWORD *)&v38[2] < v30 )
    {
      v37 = (void *)qvector_reserve(&v37, v37, *(_QWORD *)v38 + 1LL, 8);
      v29 = v37;
      v27 = v39;
      v28 = *(_QWORD *)v38;
    }
    ++v24;
    v29[v28] = v27;
    ++*(_QWORD *)v38;
  }
  while ( v23 != v24 );
LABEL_16:
  if ( *(_QWORD *)v38 )
    goto LABEL_27;
  if ( a12 )
  {
    v31 = (void *)*a12;
    if ( (unsigned __int64)a12[2] <= 0xC )
    {
      v34 = qvector_reserve(a12, v31, 13, 1);
      *a12 = v34;
      v31 = (void *)v34;
    }
    a12[1] = 13;
    qmemcpy(v31, "No functions", 12);
    *(_BYTE *)(*a12 + 12) = 0;
  }
  if ( v37 )
  {
    *(_QWORD *)v38 = 0;
    qfree(v37);
  }
  return 0;
}

