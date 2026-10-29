/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_437590
// Address: 0x0000000000437590

//----- (0000000000437590) ----------------------------------------------------
void __fastcall sub_437590(
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
  _QWORD *v9; // r15
  _QWORD *v10; // rbx
  _QWORD *v11; // rbp
  _QWORD *v12; // r13
  _QWORD *v13; // r14
  __int64 v14; // r12
  _QWORD *v15; // rax
  double v16; // xmm4_8
  double v17; // xmm5_8
  void *v18; // rdi
  _QWORD *v19; // r12
  void *v20; // rdi
  _QWORD *v21; // rbp
  void *v22; // rdi
  _QWORD *v23; // r12
  void *v24; // rdi
  _QWORD *v25; // rbx
  void *v26; // rdi
  _QWORD *v27; // r12
  void *v28; // rdi
  _QWORD *v29; // rbx
  void *v30; // rdi
  _QWORD *v31; // rbx
  void *v32; // rdi
  _QWORD *v33; // rbx
  void *v34; // rdi
  _QWORD *v35; // [rsp+0h] [rbp-58h]
  _QWORD *v36; // [rsp+8h] [rbp-50h]
  _QWORD *v37; // [rsp+10h] [rbp-48h]
  _QWORD *v38; // [rsp+18h] [rbp-40h]

  v37 = a1;
  if ( a1 )
  {
    while ( 1 )
    {
      v35 = (_QWORD *)v37[3];
      if ( v35 )
      {
        while ( 1 )
        {
          v36 = (_QWORD *)v35[3];
          if ( v36 )
          {
            while ( 1 )
            {
              v9 = (_QWORD *)v36[3];
              if ( v9 )
              {
                while ( 1 )
                {
                  v10 = (_QWORD *)v9[3];
                  if ( v10 )
                  {
                    while ( 1 )
                    {
                      v11 = (_QWORD *)v10[3];
                      if ( v11 )
                      {
                        while ( 1 )
                        {
                          v12 = (_QWORD *)v11[3];
                          if ( v12 )
                          {
                            while ( 1 )
                            {
                              v13 = (_QWORD *)v12[3];
                              if ( v13 )
                              {
                                while ( 1 )
                                {
                                  v14 = v13[3];
                                  while ( v14 )
                                  {
                                    sub_437590(*(_QWORD **)(v14 + 24));
                                    v15 = (_QWORD *)v14;
                                    v14 = *(_QWORD *)(v14 + 16);
                                    v38 = v15;
                                    sub_441540((__int64)(v15 + 7), a2, a3, a4, a5, v16, v17, a8, a9);
                                    v18 = (void *)v38[4];
                                    if ( v18 )
                                    {
                                      v38[5] = 0;
                                      j__free(v18);
                                    }
                                    operator delete(v38, 0x58u);
                                  }
                                  v19 = (_QWORD *)v13[2];
                                  sub_441540((__int64)(v13 + 7), a2, a3, a4, a5, a6, a7, a8, a9);
                                  v20 = (void *)v13[4];
                                  if ( v20 )
                                  {
                                    v13[5] = 0;
                                    j__free(v20);
                                  }
                                  operator delete(v13, 0x58u);
                                  if ( !v19 )
                                    break;
                                  v13 = v19;
                                }
                              }
                              v27 = (_QWORD *)v12[2];
                              sub_441540((__int64)(v12 + 7), a2, a3, a4, a5, a6, a7, a8, a9);
                              v28 = (void *)v12[4];
                              if ( v28 )
                              {
                                v12[5] = 0;
                                j__free(v28);
                              }
                              operator delete(v12, 0x58u);
                              if ( !v27 )
                                break;
                              v12 = v27;
                            }
                          }
                          v23 = (_QWORD *)v11[2];
                          sub_441540((__int64)(v11 + 7), a2, a3, a4, a5, a6, a7, a8, a9);
                          v24 = (void *)v11[4];
                          if ( v24 )
                          {
                            v11[5] = 0;
                            j__free(v24);
                          }
                          operator delete(v11, 0x58u);
                          if ( !v23 )
                            break;
                          v11 = v23;
                        }
                      }
                      v21 = (_QWORD *)v10[2];
                      sub_441540((__int64)(v10 + 7), a2, a3, a4, a5, a6, a7, a8, a9);
                      v22 = (void *)v10[4];
                      if ( v22 )
                      {
                        v10[5] = 0;
                        j__free(v22);
                      }
                      operator delete(v10, 0x58u);
                      if ( !v21 )
                        break;
                      v10 = v21;
                    }
                  }
                  v25 = (_QWORD *)v9[2];
                  sub_441540((__int64)(v9 + 7), a2, a3, a4, a5, a6, a7, a8, a9);
                  v26 = (void *)v9[4];
                  if ( v26 )
                  {
                    v9[5] = 0;
                    j__free(v26);
                  }
                  operator delete(v9, 0x58u);
                  if ( !v25 )
                    break;
                  v9 = v25;
                }
              }
              v29 = (_QWORD *)v36[2];
              sub_441540((__int64)(v36 + 7), a2, a3, a4, a5, a6, a7, a8, a9);
              v30 = (void *)v36[4];
              if ( v30 )
              {
                v36[5] = 0;
                j__free(v30);
              }
              operator delete(v36, 0x58u);
              if ( !v29 )
                break;
              v36 = v29;
            }
          }
          v31 = (_QWORD *)v35[2];
          sub_441540((__int64)(v35 + 7), a2, a3, a4, a5, a6, a7, a8, a9);
          v32 = (void *)v35[4];
          if ( v32 )
          {
            v35[5] = 0;
            j__free(v32);
          }
          operator delete(v35, 0x58u);
          if ( !v31 )
            break;
          v35 = v31;
        }
      }
      v33 = (_QWORD *)v37[2];
      sub_441540((__int64)(v37 + 7), a2, a3, a4, a5, a6, a7, a8, a9);
      v34 = (void *)v37[4];
      if ( v34 )
      {
        v37[5] = 0;
        j__free(v34);
      }
      operator delete(v37, 0x58u);
      if ( !v33 )
        break;
      v37 = v33;
    }
  }
}
// 437642: variable 'v16' is possibly undefined
// 437642: variable 'v17' is possibly undefined
// 43767E: variable 'a6' is possibly undefined
// 43767E: variable 'a7' is possibly undefined
