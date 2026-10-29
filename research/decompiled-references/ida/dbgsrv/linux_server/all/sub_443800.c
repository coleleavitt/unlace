/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_443800
// Address: 0x0000000000443800

//----- (0000000000443800) ----------------------------------------------------
void __fastcall sub_443800(
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
  _QWORD *v11; // r12
  _QWORD *v12; // rbp
  _QWORD *v13; // r13
  __int64 v14; // r14
  void *v15; // r8
  double v16; // xmm4_8
  double v17; // xmm5_8
  _QWORD *v18; // r14
  _QWORD *v19; // rbp
  _QWORD *v20; // rbp
  _QWORD *v21; // rbx
  _QWORD *v22; // rbx
  _QWORD *v23; // rbx
  _QWORD *v24; // rbx
  _QWORD *v25; // [rsp+0h] [rbp-58h]
  _QWORD *v26; // [rsp+8h] [rbp-50h]
  _QWORD *v27; // [rsp+10h] [rbp-48h]
  void *v28; // [rsp+18h] [rbp-40h]
  _QWORD *v29; // [rsp+18h] [rbp-40h]

  v27 = a1;
  if ( a1 )
  {
    while ( 1 )
    {
      v25 = (_QWORD *)v27[3];
      if ( v25 )
      {
        while ( 1 )
        {
          v26 = (_QWORD *)v25[3];
          if ( v26 )
          {
            while ( 1 )
            {
              v9 = (_QWORD *)v26[3];
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
                                    sub_443800(*(_QWORD **)(v14 + 24));
                                    v15 = (void *)v14;
                                    v14 = *(_QWORD *)(v14 + 16);
                                    v28 = v15;
                                    sub_441540((__int64)v15 + 40, a2, a3, a4, a5, v16, v17, a8, a9);
                                    operator delete(v28, 0x48u);
                                  }
                                  v18 = (_QWORD *)v13[2];
                                  sub_441540((__int64)(v13 + 5), a2, a3, a4, a5, a6, a7, a8, a9);
                                  operator delete(v13, 0x48u);
                                  if ( !v18 )
                                    break;
                                  v13 = v18;
                                }
                              }
                              v29 = (_QWORD *)v12[2];
                              sub_441540((__int64)(v12 + 5), a2, a3, a4, a5, a6, a7, a8, a9);
                              operator delete(v12, 0x48u);
                              if ( !v29 )
                                break;
                              v12 = v29;
                            }
                          }
                          v20 = (_QWORD *)v11[2];
                          sub_441540((__int64)(v11 + 5), a2, a3, a4, a5, a6, a7, a8, a9);
                          operator delete(v11, 0x48u);
                          if ( !v20 )
                            break;
                          v11 = v20;
                        }
                      }
                      v19 = (_QWORD *)v10[2];
                      sub_441540((__int64)(v10 + 5), a2, a3, a4, a5, a6, a7, a8, a9);
                      operator delete(v10, 0x48u);
                      if ( !v19 )
                        break;
                      v10 = v19;
                    }
                  }
                  v21 = (_QWORD *)v9[2];
                  sub_441540((__int64)(v9 + 5), a2, a3, a4, a5, a6, a7, a8, a9);
                  operator delete(v9, 0x48u);
                  if ( !v21 )
                    break;
                  v9 = v21;
                }
              }
              v22 = (_QWORD *)v26[2];
              sub_441540((__int64)(v26 + 5), a2, a3, a4, a5, a6, a7, a8, a9);
              operator delete(v26, 0x48u);
              if ( !v22 )
                break;
              v26 = v22;
            }
          }
          v23 = (_QWORD *)v25[2];
          sub_441540((__int64)(v25 + 5), a2, a3, a4, a5, a6, a7, a8, a9);
          operator delete(v25, 0x48u);
          if ( !v23 )
            break;
          v25 = v23;
        }
      }
      v24 = (_QWORD *)v27[2];
      sub_441540((__int64)(v27 + 5), a2, a3, a4, a5, a6, a7, a8, a9);
      operator delete(v27, 0x48u);
      if ( !v24 )
        break;
      v27 = v24;
    }
  }
}
// 4438AD: variable 'v16' is possibly undefined
// 4438AD: variable 'v17' is possibly undefined
// 4438CE: variable 'a6' is possibly undefined
// 4438CE: variable 'a7' is possibly undefined
