void __fastcall bucket_fuzzy_sorting_t__::vfunc_2(
        double a1,
        double a2,
        double a3,
        double a4,
        __int64 a5,
        void *a6,
        __int64 a7,
        __int64 *a8,
        __int64 a9)
{
  __int64 v9; // r8
  __int64 v10; // rbp
  __int64 v11; // rax
  char *v12; // rbx
  char *v13; // rbp
  char *v16; // rax
  void *v17; // rdx
  char *v18; // r15
  unsigned __int64 v19; // rbx
  char *v20; // rsi
  char *v21; // [rsp+0h] [rbp-48h]
  __int64 v22; // [rsp+8h] [rbp-40h]

  v9 = 8 * a9;
  v10 = *a8;
  v11 = 8 * a8[1];
  if ( v9 != v11 )
  {
    v12 = (char *)(v10 + v11);
    v13 = (char *)(v9 + v10);
    v21 = v12;
    v22 = (((v11 - v9) >> 3) + 1) / 2;
    v16 = (char *)sub_4E66F0(v22);
    v18 = v16;
    if ( v16 )
    {
      v19 = 8LL * (_QWORD)v17;
      if ( (void *)v22 != v17 )
      {
        sub_4EA810(v13, v21, v16, v17, a6, a7, a1, a2, a3, a4);
        goto LABEL_6;
      }
      v20 = &v13[v19];
    }
    else
    {
      v20 = v13;
      v19 = 0;
      if ( v22 )
      {
        sub_4E9B80(v13, v21, (__int64)a6, a7, a1, a2, a3, a4);
        v19 = 0;
        goto LABEL_6;
      }
    }
    sub_4EA780(v13, v20, v21, v16, a6, a7, a1, a2, a3, a4);
LABEL_6:
    operator delete(v18, v19);
  }
}
