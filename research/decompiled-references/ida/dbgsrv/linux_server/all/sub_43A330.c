/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43A330
// Address: 0x000000000043A330

//----- (000000000043A330) ----------------------------------------------------
void __fastcall sub_43A330(
        __int64 a1,
        double a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  void **v10; // rbp
  __int64 v11; // r14
  void **v12; // rbx
  void *v13; // rdi
  char *v14; // rdx
  void *v15; // r15
  void *i; // r12
  char *v17; // rax
  void *v18; // rdi
  void *v19; // rdi
  char *v20; // r12
  char *j; // r15
  void *v22; // rax
  void *v23; // rdi
  void *v24; // rdi
  double v25; // xmm4_8
  double v26; // xmm5_8

  v10 = *(void ***)a1;
  v11 = *(_QWORD *)a1 + 8LL * *(_QWORD *)(a1 + 8);
  if ( v11 != *(_QWORD *)a1 )
  {
    do
    {
      v12 = (void **)*v10;
      if ( *v10 )
      {
        v13 = v12[14];
        if ( v13 )
        {
          v12[15] = nullptr;
          j__free(v13);
        }
        v14 = (char *)v12[11];
        if ( v14 )
        {
          v15 = v12[12];
          if ( v15 )
          {
            for ( i = nullptr; i != v15; i = (char *)i + 1 )
            {
              v17 = &v14[32 * (_QWORD)i];
              v18 = *((void **)v17 + 1);
              if ( v18 )
              {
                *((_QWORD *)v17 + 2) = 0;
                j__free(v18);
                v14 = (char *)v12[11];
              }
            }
          }
          v12[12] = nullptr;
          j__free(v14);
        }
        v19 = v12[8];
        if ( v19 )
        {
          v20 = (char *)v12[9];
          if ( v20 )
          {
            for ( j = nullptr; j != v20; ++j )
            {
              v22 = j;
              sub_441540((__int64)v19 + 32 * (_QWORD)v22, a2, a3, a4, a5, a6, a7, a8, a9);
              v19 = v12[8];
            }
          }
          v12[9] = nullptr;
          j__free(v19);
        }
        v23 = v12[4];
        if ( v23 )
        {
          v12[5] = nullptr;
          j__free(v23);
        }
        v24 = *v12;
        if ( *v12 )
        {
          v12[1] = nullptr;
          j__free(v24);
        }
        operator delete(v12, 0x90u);
      }
      ++v10;
    }
    while ( (void **)v11 != v10 );
    v10 = *(void ***)a1;
  }
  if ( v10 )
  {
    *(_QWORD *)(a1 + 8) = 0;
    j__free(v10);
    *(_QWORD *)a1 = 0;
    *(_QWORD *)(a1 + 16) = 0;
  }
  sub_43A070(a1, a2, a3, a4, a5, a6, a7, a8, a9);
  sub_4415D0((char **)(a1 + 64), a2, a3, a4, a5, v25, v26, a8, a9);
  sub_44BC40(*(_QWORD **)(a1 + 24));
  *(_QWORD *)(a1 + 24) = 0;
  sub_451910(*(void **)(a1 + 32));
  *(_QWORD *)(a1 + 32) = 0;
}
// 43A40E: variable 'a6' is possibly undefined
// 43A40E: variable 'a7' is possibly undefined
// 43A4A3: variable 'v25' is possibly undefined
// 43A4A3: variable 'v26' is possibly undefined
