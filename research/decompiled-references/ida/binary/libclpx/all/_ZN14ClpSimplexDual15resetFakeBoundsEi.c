void __fastcall ClpSimplexDual::resetFakeBounds(ClpSimplexDual *this, int a2)
{
  char *v3; // rdi
  __int64 v4; // rdx
  int v5; // r11d
  int v6; // ebp
  __int64 v7; // r8
  __int64 v8; // rsi
  __int64 v9; // rcx
  __int64 v10; // r10
  double v11; // xmm4_8
  __int64 v12; // r9
  __int64 v13; // rax
  double v14; // xmm0_8
  double v15; // xmm1_8
  double v16; // xmm0_8
  __int64 v17; // rdx
  __int64 v18; // r8
  char *v19; // rdi
  __int64 v20; // rdx
  __int64 v21; // rsi
  __int64 v22; // rcx
  double v23; // xmm4_8
  __int64 v24; // r9
  __int64 v25; // rax
  double v26; // xmm0_8
  double v27; // xmm1_8
  double v28; // xmm0_8
  __int64 v29; // rdx
  __int64 v30; // r8
  unsigned __int8 v31; // cl
  double *v32; // r11
  double *v33; // r10
  double *v34; // rdi
  double v35; // xmm1_8
  double v36; // xmm2_8
  double v37; // xmm0_8
  double v38; // xmm1_8
  char *v39; // rsi
  char v40; // cl
  int v41; // eax
  char v42; // r9
  double v43; // xmm0_8
  int v44; // r8d
  double v45[4]; // [rsp+8h] [rbp-20h] BYREF

  if ( a2 )
  {
    if ( a2 >= 0 )
    {
      v3 = *((char **)this + 123);
      if ( v3 )
      {
        v4 = *((int *)this + 27);
        v5 = *((_DWORD *)this + 26);
        v6 = v5 + v4;
        if ( *((_QWORD *)this + 29) )
        {
          if ( (int)v4 > 0 )
          {
            v7 = *((_QWORD *)this + 31);
            v8 = *((_QWORD *)this + 22);
            v9 = *((_QWORD *)this + 23);
            v10 = *((_QWORD *)this + 126);
            v11 = *((double *)this + 12);
            v12 = 8LL * (unsigned int)(v4 - 1) + 8;
            v13 = 0;
            do
            {
              while ( 1 )
              {
                v14 = *(double *)(v8 + v13);
                v15 = *(double *)(v7 + v13) * v11;
                if ( v14 > -1.0e30 )
                  v14 = v14 * v15;
                *(double *)&v3[v13] = v14;
                v16 = *(double *)(v9 + v13);
                if ( v16 >= 1.0e30 )
                  break;
                *(double *)(v10 + v13) = v16 * v15;
                v13 += 8;
                if ( v13 == v12 )
                  goto LABEL_11;
              }
              *(double *)(v10 + v13) = v16;
              v13 += 8;
            }
            while ( v12 != v13 );
          }
LABEL_11:
          if ( v5 > 0 )
          {
            v17 = 8 * v4;
            v18 = *((_QWORD *)this + 28);
            v19 = &v3[v17];
            v20 = *((_QWORD *)this + 126) + v17;
            v21 = *((_QWORD *)this + 18);
            v22 = *((_QWORD *)this + 19);
            v23 = *((double *)this + 12);
            v24 = 8LL * (unsigned int)(v5 - 1) + 8;
            v25 = 0;
            do
            {
              while ( 1 )
              {
                v26 = *(double *)(v21 + v25);
                v27 = *(double *)(v18 + v25) * v23;
                if ( v26 > -1.0e30 )
                  v26 = v26 * v27;
                *(double *)&v19[v25] = v26;
                v28 = *(double *)(v22 + v25);
                if ( v28 >= 1.0e30 )
                  break;
                *(double *)(v20 + v25) = v28 * v27;
                v25 += 8;
                if ( v25 == v24 )
                  goto LABEL_17;
              }
              *(double *)(v20 + v25) = v28;
              v25 += 8;
            }
            while ( v24 != v25 );
          }
        }
        else
        {
          memcpy(v3, *((const void **)this + 22), 8 * v4);
          memcpy(*((void **)this + 126), *((const void **)this + 23), 8LL * *((int *)this + 27));
          memcpy(
            (void *)(*((_QWORD *)this + 123) + 8LL * *((int *)this + 27)),
            *((const void **)this + 18),
            8LL * *((int *)this + 26));
          memcpy(
            (void *)(*((_QWORD *)this + 126) + 8LL * *((int *)this + 27)),
            *((const void **)this + 19),
            8LL * *((int *)this + 26));
        }
LABEL_17:
        *((_DWORD *)this + 334) = 0;
        if ( v6 > 0 )
        {
          v29 = 0;
          v30 = (unsigned int)(v6 - 1) + 1LL;
          while ( 1 )
          {
            v39 = (char *)(v29 + *((_QWORD *)this + 33));
            v40 = *v39;
            v41 = ((unsigned __int8)*v39 >> 3) & 3;
            if ( !v41 )
              goto LABEL_25;
            v42 = v40 & 3;
            if ( (v40 & 3) == 1 )
            {
              ++v29;
              *v39 = v40 & 0xE7;
              if ( v30 == v29 )
                return;
            }
            else
            {
              v31 = v40 & 7;
              v32 = (double *)(8 * v29 + *((_QWORD *)this + 123));
              v33 = (double *)(8 * v29 + *((_QWORD *)this + 126));
              v34 = (double *)(*((_QWORD *)this + 150) + 8 * v29);
              v35 = *v32;
              v36 = *v33;
              v37 = *v34;
              ++*((_DWORD *)this + 334);
              if ( v41 == 2 )
              {
                v43 = *((double *)this + 98) + v35;
                *v33 = v43;
                if ( v31 == 3 )
                {
                  *v34 = v35;
                  goto LABEL_25;
                }
                if ( v31 != 2 )
                {
                  v44 = 8360;
LABEL_46:
                  printf(
                    "Unknown status %d for variable %d in %s line %d\n",
                    v31,
                    v29,
                    "/build/src/Clp/ClpSimplexDual.cpp",
                    v44);
                  abort();
                }
LABEL_32:
                *v34 = v43;
                goto LABEL_25;
              }
              if ( v41 == 1 )
              {
                v43 = v36 - *((double *)this + 98);
                *v32 = v43;
                if ( v31 == 3 )
                  goto LABEL_32;
                if ( v31 != 2 )
                {
                  v44 = 8371;
                  goto LABEL_46;
                }
                *v34 = v36;
              }
              else if ( v31 == 3 )
              {
                *v32 = v37;
                *v33 = v37 + *((double *)this + 98);
              }
              else if ( v31 == 2 )
              {
                *v33 = v37;
                *v32 = v37 - *((double *)this + 98);
              }
              else
              {
                if ( v42 )
                {
                  v44 = 8387;
                  goto LABEL_46;
                }
                v38 = *((double *)this + 98) * 0.5;
                *v32 = v37 - v38;
                *v33 = v37 + v38;
              }
LABEL_25:
              if ( v30 == ++v29 )
                return;
            }
          }
        }
      }
    }
  }
  else
  {
    ClpSimplex::createRim1(this, 0);
    v45[0] = 0.0;
    ClpSimplexDual::changeBounds(this, 3, nullptr, v45);
  }
}

