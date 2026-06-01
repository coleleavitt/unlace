/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4345D0
// Address: 0x00000000004345D0

//----- (00000000004345D0) ----------------------------------------------------
void __fastcall sub_4345D0(
        _QWORD *a1,
        double a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  double v10; // xmm4_8
  double v11; // xmm5_8
  void *v12; // rdi
  __int64 v13; // r12
  __int64 i; // rbp
  __int64 v15; // rax
  void *v16; // rdi
  void *v17; // rdi
  void *v18; // rdi
  void *v19; // rdi
  void *v20; // rdi
  void *v21; // rdi
  void *v22; // rdi
  void *v23; // rdi
  char *v24; // rdx
  __int64 v25; // r12
  __int64 j; // rbp
  char *v27; // rax
  void *v28; // rdi
  char *v29; // rdx
  __int64 v30; // r12
  __int64 k; // rbp
  char *v32; // rax
  void *v33; // rdi
  char *v34; // rdx
  __int64 v35; // r12
  __int64 m; // rbp
  char *v37; // rax
  void *v38; // rdi
  void *v39; // rdi

  sub_430D20((__int64)a1);
  v12 = (void *)a1[53];
  a1[23] = 0;
  if ( v12 )
  {
    v13 = a1[54];
    if ( v13 )
    {
      for ( i = 0; i != v13; ++i )
      {
        v15 = i;
        sub_441540((__int64)v12 + 32 * v15, a2, a3, a4, a5, v10, v11, a8, a9);
        v12 = (void *)a1[53];
      }
    }
    a1[54] = 0;
    j__free(v12);
  }
  v16 = (void *)a1[49];
  if ( v16 )
  {
    a1[50] = 0;
    j__free(v16);
  }
  v17 = (void *)a1[46];
  if ( v17 )
  {
    a1[47] = 0;
    j__free(v17);
  }
  v18 = (void *)a1[43];
  if ( v18 )
  {
    a1[44] = 0;
    j__free(v18);
  }
  v19 = (void *)a1[40];
  if ( v19 )
  {
    a1[41] = 0;
    j__free(v19);
  }
  v20 = (void *)a1[37];
  if ( v20 )
  {
    a1[38] = 0;
    j__free(v20);
  }
  v21 = (void *)a1[34];
  if ( v21 )
  {
    a1[35] = 0;
    j__free(v21);
  }
  v22 = (void *)a1[31];
  if ( v22 )
  {
    a1[32] = 0;
    j__free(v22);
  }
  v23 = (void *)a1[28];
  if ( v23 )
  {
    a1[29] = 0;
    j__free(v23);
  }
  v24 = (char *)a1[20];
  if ( v24 )
  {
    v25 = a1[21];
    if ( v25 )
    {
      for ( j = 0; j != v25; ++j )
      {
        v27 = &v24[24 * j];
        v28 = *(void **)v27;
        if ( *(_QWORD *)v27 )
        {
          *((_QWORD *)v27 + 1) = 0;
          j__free(v28);
          v24 = (char *)a1[20];
        }
      }
    }
    a1[21] = 0;
    j__free(v24);
  }
  v29 = (char *)a1[17];
  if ( v29 )
  {
    v30 = a1[18];
    if ( v30 )
    {
      for ( k = 0; k != v30; ++k )
      {
        v32 = &v29[24 * k];
        v33 = *(void **)v32;
        if ( *(_QWORD *)v32 )
        {
          *((_QWORD *)v32 + 1) = 0;
          j__free(v33);
          v29 = (char *)a1[17];
        }
      }
    }
    a1[18] = 0;
    j__free(v29);
  }
  v34 = (char *)a1[14];
  if ( v34 )
  {
    v35 = a1[15];
    if ( v35 )
    {
      for ( m = 0; m != v35; ++m )
      {
        v37 = &v34[24 * m];
        v38 = *(void **)v37;
        if ( *(_QWORD *)v37 )
        {
          *((_QWORD *)v37 + 1) = 0;
          j__free(v38);
          v34 = (char *)a1[14];
        }
      }
    }
    a1[15] = 0;
    j__free(v34);
  }
  v39 = (void *)a1[5];
  if ( v39 )
  {
    a1[6] = 0;
    j__free(v39);
  }
}
// 43461E: variable 'v10' is possibly undefined
// 43461E: variable 'v11' is possibly undefined
