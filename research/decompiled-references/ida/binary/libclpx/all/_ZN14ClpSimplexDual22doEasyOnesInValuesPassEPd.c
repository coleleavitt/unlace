void __fastcall ClpSimplexDual::doEasyOnesInValuesPass(ClpSimplexDual *this, double *a2)
{
  const CoinPackedMatrix *v2; // r12
  __int64 v5; // rdi
  __int64 (*v6)(void); // rax
  void *v7; // rax
  unsigned __int64 v8; // rdi
  int v9; // r14d
  double v10; // xmm5_8
  int v11; // ecx
  __int64 v12; // rdx
  __int64 v13; // rdi
  __int64 v14; // rcx
  double *v15; // r15
  double v16; // xmm2_8
  double v17; // xmm3_8
  __int64 v18; // rcx
  double *v19; // r9
  __int64 v20; // r10
  __int64 v21; // rcx
  int v22; // r11d
  double v23; // xmm1_8
  __int64 v24; // r13
  __int64 v25; // rcx
  __int64 v26; // rsi
  char v27; // r13
  __int64 v28; // r8
  double v29; // xmm0_8
  double v30; // xmm1_8
  double v31; // xmm8_8
  double v32; // xmm8_8
  __int64 v33; // rcx
  __int64 v34; // rsi
  double v35; // xmm0_8
  double v36; // [rsp+8h] [rbp-D0h]
  int v37; // [rsp+14h] [rbp-C4h]
  __int64 v38; // [rsp+20h] [rbp-B8h]
  __int64 v39; // [rsp+28h] [rbp-B0h]
  __int64 v40; // [rsp+30h] [rbp-A8h]
  __int64 v41; // [rsp+38h] [rbp-A0h]
  _BYTE v42[32]; // [rsp+40h] [rbp-98h] BYREF
  __int64 v43; // [rsp+60h] [rbp-78h]
  __int64 v44; // [rsp+68h] [rbp-70h]
  __int64 v45; // [rsp+70h] [rbp-68h]
  __int64 v46; // [rsp+78h] [rbp-60h]

  v2 = nullptr;
  v5 = *((_QWORD *)this + 24);
  if ( v5 )
  {
    v6 = **(__int64 (***)(void))v5;
    if ( (char *)v6 == (char *)ClpPackedMatrix::getPackedMatrix )
      v2 = *(const CoinPackedMatrix **)(v5 + 88);
    else
      v2 = (const CoinPackedMatrix *)v6();
  }
  CoinPackedMatrix::CoinPackedMatrix((CoinPackedMatrix *)v42);
  CoinPackedMatrix::setExtraGap((CoinPackedMatrix *)v42, 0.0);
  CoinPackedMatrix::setExtraMajor((CoinPackedMatrix *)v42, 0.0);
  CoinPackedMatrix::reverseOrderedCopyOf((CoinPackedMatrix *)v42, v2);
  v39 = v44;
  v40 = v45;
  v36 = 1.001 * *((double *)this + 109);
  v41 = v46;
  v38 = v43;
  v7 = *((void **)this + 28);
  if ( v7 )
  {
    v8 = *((int *)this + 27);
    if ( v8 > 0xFFFFFFFFFFFFFFFLL )
      __cxa_throw_bad_array_new_length();
    v7 = (void *)operator new[](8 * v8);
    v9 = *((_DWORD *)this + 26);
    if ( v9 <= 0 )
    {
LABEL_22:
      operator delete[](v7);
      goto LABEL_23;
    }
  }
  else
  {
    v9 = *((_DWORD *)this + 26);
    if ( v9 <= 0 )
      goto LABEL_23;
  }
  v10 = -v36;
  v37 = *((_DWORD *)this + 27);
  v11 = v37;
  v12 = 0;
  while ( 1 )
  {
    v13 = *((_QWORD *)this + 33);
    if ( (*(_BYTE *)(v13 + (int)v12 + v11) & 7) == 1 )
    {
      v14 = v37 + (int)v12;
      v15 = &a2[v14];
      v16 = *v15;
      if ( fabs(*v15) > v36 )
      {
        if ( v16 <= 0.0 )
          v17 = *(double *)(*((_QWORD *)this + 126) + 8 * v14);
        else
          v17 = -*(double *)(*((_QWORD *)this + 123) + 8 * v14);
        v18 = *(int *)(v40 + 4 * v12);
        v19 = (double *)(v38 + 8 * v18);
        v20 = v39 + 4 * v18;
        v21 = *((_QWORD *)this + 28);
        v22 = *(_DWORD *)(v41 + 4 * v12);
        if ( v21 )
        {
          v23 = *(double *)(v21 + 8 * v12);
          if ( v22 > 0 )
          {
            v24 = *((_QWORD *)this + 29);
            v25 = 0;
            do
            {
              *((double *)v7 + v25) = v19[v25] * v23 * *(double *)(v24 + 8LL * *(int *)(v20 + 4 * v25));
              ++v25;
            }
            while ( (unsigned int)(v22 - 1) + 1LL != v25 );
            v19 = (double *)v7;
LABEL_19:
            v26 = 0;
            v27 = 1;
            while ( 2 )
            {
              v28 = *(int *)(v20 + 4 * v26);
              v29 = v19[v26];
              v30 = a2[v28];
              switch ( *(_BYTE *)(v13 + v28) & 7 )
              {
                case 0:
                case 4:
                  goto LABEL_28;
                case 1:
                  if ( v10 > v30
                    && (v31 = *(double *)(*((_QWORD *)this + 126) + 8 * v28),
                        fabs(*(double *)(*((_QWORD *)this + 150) + 8 * v28) - v31) < 0.00000001) )
                  {
                    v17 = v17 + v31 * v29;
LABEL_42:
                    if ( v30 + v29 * v16 > v36 )
                      v27 = 0;
                  }
                  else if ( v30 > v36
                         && (v32 = *(double *)(*((_QWORD *)this + 123) + 8 * v28),
                             fabs(*(double *)(*((_QWORD *)this + 150) + 8 * v28) - v32) < 0.00000001) )
                  {
                    v17 = v17 + v32 * v29;
LABEL_37:
                    if ( v10 > v30 + v29 * v16 )
                      v27 = 0;
                  }
                  else
                  {
LABEL_28:
                    v27 = 0;
                  }
LABEL_29:
                  if ( v22 > (int)++v26 )
                    continue;
                  if ( !v27 || v17 * v16 <= 1.0e-12 && fabs(v17) >= 0.00000001 )
                    goto LABEL_8;
                  v33 = 0;
                  do
                  {
                    v34 = *(int *)(v20 + 4 * v33);
                    v35 = v19[v33++];
                    a2[v34] = v35 * v16 + a2[v34];
                  }
                  while ( v22 > (int)v33 );
                  break;
                case 2:
                  v17 = v17 + *(double *)(*((_QWORD *)this + 126) + 8 * v28) * v29;
                  goto LABEL_42;
                case 3:
                  v17 = v17 + *(double *)(*((_QWORD *)this + 123) + 8 * v28) * v29;
                  goto LABEL_37;
                case 5:
                  v17 = v17 + v29 * *(double *)(*((_QWORD *)this + 126) + 8 * v28);
                  goto LABEL_29;
                default:
                  goto LABEL_29;
              }
              break;
            }
LABEL_35:
            *v15 = 0.0;
            goto LABEL_8;
          }
        }
        else if ( v22 > 0 )
        {
          goto LABEL_19;
        }
        if ( v16 * v17 > 1.0e-12 || fabs(v17) < 0.00000001 )
          goto LABEL_35;
      }
    }
LABEL_8:
    if ( v9 <= (int)++v12 )
      break;
    v11 = *((_DWORD *)this + 27);
  }
  if ( v7 )
    goto LABEL_22;
LABEL_23:
  CoinPackedMatrix::~CoinPackedMatrix((CoinPackedMatrix *)v42);
}

