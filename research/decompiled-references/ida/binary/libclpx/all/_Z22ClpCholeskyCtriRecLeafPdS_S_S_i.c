void __fastcall ClpCholeskyCtriRecLeaf(double *a1, double *a2, double *a3, double *a4, int a5)
{
  double *v5; // rbx
  double *v6; // r9
  __int64 i; // rbp
  double v8; // xmm2_8
  __int64 v9; // rax
  double v10; // xmm0_8
  double *v11; // r13
  double *v12; // rbx
  double *v13; // r12
  unsigned __int64 v14; // rbp
  __int64 v15; // r15
  __int64 v16; // rdx
  double v17; // xmm7_8
  double v18; // xmm6_8
  double *v19; // r8
  double v20; // xmm9_8
  double v21; // xmm8_8
  double v22; // xmm4_8
  double v23; // xmm5_8
  double *v24; // rdi
  double *v25; // rsi
  double *v26; // rax
  double v27; // xmm1_8
  double v28; // xmm3_8
  double v29; // xmm2_8
  double v30; // xmm3_8
  double v31; // xmm1_8
  double v32; // xmm0_8
  double v33; // xmm9_8
  double v34; // xmm0_8
  double v35; // xmm4_8
  unsigned int v36; // [rsp+0h] [rbp-54h]
  double *v37; // [rsp+Ch] [rbp-48h]

  if ( a5 == 16 )
  {
    v11 = a1 + 1;
    v12 = a1;
    v13 = a4;
    v37 = a2 + 16;
    v36 = -1;
    v14 = 0;
    v15 = 0;
    v16 = 1;
    do
    {
      v17 = a3[v15];
      v18 = a3[v16];
      v19 = &a2[v14 / 0xFFFFFFFFFFFFFFF8LL];
      do
      {
        v20 = *v19;
        v21 = v19[16];
        v22 = v19[1];
        v23 = v19[17];
        if ( (_DWORD)v15 )
        {
          v24 = &v19[v14 / 8];
          v25 = v12;
          v26 = a4;
          do
          {
            v27 = *v26++;
            v28 = *v24;
            v24 += 16;
            v29 = *v25;
            v30 = v28 * v27;
            v31 = v27 * *(v24 - 15);
            v32 = v25[v16 - v15];
            v25 += 16;
            v21 = v21 - v30 * v32;
            v20 = v20 - v30 * v29;
            v23 = v23 - v32 * v31;
            v22 = v22 - v29 * v31;
          }
          while ( &a4[v36 + 1] != v26 );
        }
        v19 += 2;
        v33 = v20 * v17;
        v34 = *v11 * *v13;
        v35 = v22 * v17;
        *(v19 - 2) = v33;
        *(v19 - 1) = v35;
        v19[14] = (v21 - v33 * v34) * v18;
        v19[15] = (v23 - v35 * v34) * v18;
      }
      while ( &v37[v14 / 0xFFFFFFFFFFFFFFF8LL] != v19 );
      v15 += 2;
      v11 += 34;
      v13 += 2;
      v12 += 2;
      v16 += 2;
      v14 -= 256LL;
      v36 += 2;
    }
    while ( v15 != 16 );
  }
  else if ( a5 > 0 )
  {
    v5 = a2;
    v6 = a1;
    for ( i = 0; i != 16; ++i )
    {
      v8 = a3[i];
      v9 = 0;
      do
      {
        v10 = v5[v9];
        if ( i )
        {
          v10 = v10 - a2[v9] * *v6 * *a4;
          if ( (_DWORD)i != 1 )
          {
            v10 = v10 - a2[(int)v9 + 16] * v6[16] * a4[1];
            if ( (_DWORD)i != 2 )
            {
              v10 = v10 - a2[(int)v9 + 32] * v6[32] * a4[2];
              if ( (_DWORD)i != 3 )
              {
                v10 = v10 - a2[(int)v9 + 48] * v6[48] * a4[3];
                if ( (_DWORD)i != 4 )
                {
                  v10 = v10 - a2[(int)v9 + 64] * v6[64] * a4[4];
                  if ( (_DWORD)i != 5 )
                  {
                    v10 = v10 - a2[(int)v9 + 80] * v6[80] * a4[5];
                    if ( (_DWORD)i != 6 )
                    {
                      v10 = v10 - a2[(int)v9 + 96] * v6[96] * a4[6];
                      if ( (_DWORD)i != 7 )
                      {
                        v10 = v10 - a2[(int)v9 + 112] * v6[112] * a4[7];
                        if ( (_DWORD)i != 8 )
                        {
                          v10 = v10 - a2[(int)v9 + 128] * v6[128] * a4[8];
                          if ( (_DWORD)i != 9 )
                          {
                            v10 = v10 - a2[(int)v9 + 144] * v6[144] * a4[9];
                            if ( (_DWORD)i != 10 )
                            {
                              v10 = v10 - a2[(int)v9 + 160] * v6[160] * a4[10];
                              if ( (_DWORD)i != 11 )
                              {
                                v10 = v10 - a2[(int)v9 + 176] * v6[176] * a4[11];
                                if ( (_DWORD)i != 12 )
                                {
                                  v10 = v10 - a2[(int)v9 + 192] * v6[192] * a4[12];
                                  if ( (_DWORD)i != 13 )
                                  {
                                    v10 = v10 - a2[(int)v9 + 208] * v6[208] * a4[13];
                                    if ( (_DWORD)i != 14 )
                                      v10 = v10 - a2[(int)v9 + 224] * a1[239] * a4[14];
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        v5[v9++] = v10 * v8;
      }
      while ( (unsigned int)(a5 - 1) + 1LL != v9 );
      v5 += 16;
      ++v6;
    }
  }
}

