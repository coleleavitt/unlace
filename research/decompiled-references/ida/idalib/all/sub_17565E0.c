__int64 __fastcall sub_17565E0(__int64 *a1, __int64 *a2, __int64 *a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  void **v11; // r14
  void **v12; // r13
  void **v13; // r15
  __int64 v14; // rax
  void **v15; // rbx
  char *v16; // rdi
  __int64 v17; // rax
  __m128 v18; // xmm0
  __int64 v19; // rax
  unsigned int v20; // r14d
  void **v21; // r12
  void **v22; // rbx
  void **v24; // rbx
  double v25[3]; // [rsp+0h] [rbp-2F8h] BYREF
  void ***v26; // [rsp+18h] [rbp-2E0h]
  void **v27; // [rsp+20h] [rbp-2D8h] BYREF
  unsigned int v28; // [rsp+28h] [rbp-2D0h]
  void **v29; // [rsp+170h] [rbp-188h] BYREF
  unsigned int v30; // [rsp+178h] [rbp-180h]
  __int64 v31; // [rsp+180h] [rbp-178h] BYREF

  v26 = &v27;
  sub_1754C50(&v27, a1, a2, a4, a5, a6);
  sub_17559B0(&v29, a1, a3, v8, v9, v10);
  v11 = v27;
  v12 = v29;
  v13 = &v27[8 * (unsigned __int64)v28];
  if ( v27 == v13 )
  {
    v20 = 1;
    v24 = &v29[8 * (unsigned __int64)v30];
  }
  else
  {
    v14 = v30;
    do
    {
      v15 = &v12[8 * v14];
      if ( v15 == v12 )
      {
        v24 = v12;
      }
      else
      {
        do
        {
          v16 = (char *)*v11;
          v17 = *((unsigned int *)v11 + 2);
          *(_QWORD *)&v25[0] = a1;
          v18 = _mm_loadh_ps(v25);
          v25[1] = *(double *)&v18.m128_u64[1];
          *(_QWORD *)&v25[0] = &v16[4 * v17];
          v19 = sub_1757310(v16, *(_QWORD *)&v25[0], v18.m128_u64[0], v18.m128_u64[1]);
          if ( *(_QWORD *)&v25[0] == v19 )
          {
            v12 = v29;
            v20 = 0;
            v24 = &v29[8 * (unsigned __int64)v30];
            goto LABEL_8;
          }
          v12 += 8;
        }
        while ( v15 != v12 );
        v14 = v30;
        v12 = v29;
        v24 = &v29[8 * (unsigned __int64)v30];
      }
      v11 += 8;
    }
    while ( v13 != v11 );
    v20 = 1;
  }
LABEL_8:
  if ( v12 != v24 )
  {
    do
    {
      while ( 1 )
      {
        v24 -= 8;
        if ( *v24 == v24 + 2 )
          break;
        free(*v24);
        if ( v24 == v12 )
          goto LABEL_11;
      }
    }
    while ( v24 != v12 );
LABEL_11:
    v24 = v29;
  }
  if ( v24 != (void **)&v31 )
    free(v24);
  v21 = v27;
  v22 = &v27[8 * (unsigned __int64)v28];
  if ( v27 != v22 )
  {
    do
    {
      while ( 1 )
      {
        v22 -= 8;
        if ( *v22 == v22 + 2 )
          break;
        free(*v22);
        if ( v21 == v22 )
          goto LABEL_17;
      }
    }
    while ( v21 != v22 );
LABEL_17:
    v22 = v27;
  }
  if ( v22 != (void **)(v26 + 2) )
    free(v22);
  return v20;
}
