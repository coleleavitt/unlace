__int64 __fastcall ClpDynamicMatrix::partialPricing(
        ClpDynamicMatrix *this,
        ClpSimplex *a2,
        double a3,
        double a4,
        int *a5,
        int *a6)
{
  __int64 result; // rax
  int v11; // esi
  int v12; // r15d
  int v13; // ecx
  __int64 v14; // r10
  double v15; // xmm3_8
  int v16; // eax
  int v17; // eax
  double v18; // xmm4_8
  int v19; // edx
  int v20; // r11d
  int v21; // edi
  double v22; // xmm7_8
  __int64 v23; // r14
  __int64 v24; // rdx
  int v25; // eax
  double v26; // xmm2_8
  int v27; // esi
  __int64 v28; // r13
  __int64 v29; // r12
  _BYTE *v30; // r8
  int v31; // ecx
  __int64 v32; // r9
  __int64 v33; // rax
  int v34; // edi
  double v35; // xmm1_8
  __int64 v36; // r9
  __int64 v37; // rbp
  __int64 v38; // r11
  __int64 v39; // rax
  double v40; // xmm0_8
  __int64 v41; // rsi
  __int64 v42; // rcx
  __int64 v43; // rax
  int v44; // ecx
  __int64 v45; // r8
  __int64 v46; // r11
  __int64 v47; // r9
  __int64 v48; // rax
  double v49; // xmm0_8
  char v50; // al
  int v51; // eax
  int v52; // [rsp+Ch] [rbp-7Ch]
  int v53; // [rsp+10h] [rbp-78h]
  __int64 v54; // [rsp+20h] [rbp-68h]
  int v56; // [rsp+30h] [rbp-58h]
  int v57; // [rsp+34h] [rbp-54h]
  int v59; // [rsp+40h] [rbp-48h]
  int v60; // [rsp+44h] [rbp-44h]
  int v61; // [rsp+48h] [rbp-40h]
  int v62; // [rsp+4Ch] [rbp-3Ch]

  *a6 = *((_DWORD *)this + 11);
  if ( *((_DWORD *)this + 50) )
  {
    result = ClpPackedMatrix::partialPricing(this, a2, a3, a4, a5, a6);
    v12 = *a6;
    v11 = v12;
    if ( v12 > 0 )
    {
      v13 = *((_DWORD *)this + 50);
      v14 = *((_QWORD *)a2 + 16);
      v15 = *((double *)a2 + 109);
      v52 = (int)(a3 * (double)v13);
      v16 = (int)((double)v13 * a4 + 0.1);
      if ( v16 > v13 )
        v16 = *((_DWORD *)this + 50);
      v53 = v16;
      v17 = *((_DWORD *)a2 + 26) + *((_DWORD *)this + 65);
      v60 = v13 + v17;
      v61 = *a5;
      if ( *a5 < 0 )
      {
        v18 = *((double *)a2 + 109);
        if ( v52 )
          v13 = v53;
      }
      else if ( *a5 == *((_DWORD *)this + 12) )
      {
        v18 = *((double *)this + 4);
        v13 = v53;
      }
      else
      {
        v13 = v53;
        v18 = fabs(*(double *)(*((_QWORD *)a2 + 147) + 8LL * v61));
      }
      v19 = *((_DWORD *)this + 16);
      v20 = *((_DWORD *)this + 17);
      v21 = 5;
      if ( v19 < 0 )
        v19 = 5;
      if ( v20 >= 0 )
        v21 = v20;
      v56 = v21;
      if ( v52 >= v13 )
      {
        result = (unsigned int)v61;
      }
      else
      {
        v22 = 0.0;
        v23 = 0;
        v59 = -1;
        v57 = v52 + v19;
        v54 = (unsigned int)(~v52 + v13) + 1LL;
        v62 = v52 + v17;
        while ( v12 + v56 >= *((_DWORD *)this + 10) || v57 >= v52 + (int)v23 )
        {
          if ( v52 + (_DWORD)v23 == v53 && *a5 >= 0 )
            goto LABEL_34;
          v24 = v52 + v23;
          v25 = *(_DWORD *)(*((_QWORD *)this + 23) + 4 * v24);
          if ( v25 < 0 )
          {
            v26 = 0.0;
            v41 = *(int *)(*((_QWORD *)this + 22) + 4 * v24);
            if ( (int)v41 < *((_DWORD *)this + 75) )
            {
              v42 = *((_QWORD *)this + 41);
              v43 = *(int *)(v42 + 4 * v41);
              v44 = *(_DWORD *)(v42 + 4 * v41 + 4);
              if ( (int)v43 >= v44 )
              {
                v26 = 0.0;
              }
              else
              {
                v45 = (unsigned int)(v44 - v43 - 1) + 1LL;
                v46 = *((_QWORD *)this + 42) + 4 * v43;
                v47 = *((_QWORD *)this + 43) + 8 * v43;
                v48 = 0;
                do
                {
                  v49 = *(double *)(v14 + 8LL * *(int *)(v46 + 4 * v48)) * *(double *)(v47 + 8 * v48);
                  ++v48;
                  v26 = v26 - v49;
                }
                while ( v45 != v48 );
              }
              v26 = v26 + *(double *)(*((_QWORD *)this + 44) + 8 * v41);
              v50 = *(_BYTE *)(*((_QWORD *)this + 29) + v24) & 7;
              if ( v50 == 3 )
              {
                if ( -v26 > v15 )
                {
                  v51 = v12 - 1;
                  *a6 = v12 - 1;
                  if ( -v26 <= v18 )
                    goto LABEL_54;
                  if ( (*(_BYTE *)(*((_QWORD *)this + 46) + v24) & 8) != 0 )
                  {
                    *a6 = v12;
                    abort();
                  }
                  v22 = v26;
                  v18 = -v26;
                  *a5 = v62 + v23;
                  v12 = *a6;
                  v59 = v52 + v23;
LABEL_55:
                  v27 = *(_DWORD *)(*((_QWORD *)this + 39) + 4 * v24);
                  if ( v27 < 0 )
                  {
LABEL_32:
                    if ( v12 <= 0 )
                      break;
                    goto LABEL_33;
                  }
LABEL_20:
                  v28 = *((_QWORD *)this + 46);
                  v29 = *((_QWORD *)this + 40);
                  while ( 1 )
                  {
                    v30 = (_BYTE *)(v28 + v27);
                    v31 = *v30 & 7;
                    if ( (unsigned int)(v31 - 2) > 1 )
                      goto LABEL_21;
                    v32 = *((_QWORD *)this + 41);
                    v33 = *(int *)(v32 + 4LL * v27);
                    v34 = *(_DWORD *)(v32 + 4LL * v27 + 4);
                    v35 = *(double *)(*((_QWORD *)this + 44) + 8LL * v27) - v26;
                    if ( v34 > (int)v33 )
                    {
                      v36 = (unsigned int)(v34 - v33 - 1) + 1LL;
                      v37 = *((_QWORD *)this + 42) + 4 * v33;
                      v38 = *((_QWORD *)this + 43) + 8 * v33;
                      v39 = 0;
                      do
                      {
                        v40 = *(double *)(v14 + 8LL * *(int *)(v37 + 4 * v39)) * *(double *)(v38 + 8 * v39);
                        ++v39;
                        v35 = v35 - v40;
                      }
                      while ( v36 != v39 );
                    }
                    if ( v31 == 3 )
                      v35 = -v35;
                    if ( v35 <= v15 )
                      goto LABEL_21;
                    *a6 = v12 - 1;
                    if ( v35 <= v18 )
                      break;
                    if ( (*v30 & 8) != 0 )
                    {
                      *a6 = v12;
LABEL_21:
                      v27 = *(_DWORD *)(v29 + 4LL * v27);
                      if ( v27 < 0 )
                        goto LABEL_32;
                      continue;
                    }
                    v22 = v26;
                    v18 = v35;
                    *a5 = v60 + v27;
                    v27 = *(_DWORD *)(v29 + 4LL * v27);
                    v12 = *a6;
                    v59 = v52 + v23;
                    if ( v27 < 0 )
                      goto LABEL_32;
                  }
                  --v12;
                  goto LABEL_21;
                }
              }
              else if ( v50 == 2 && v26 > v15 )
              {
                v51 = v12 - 1;
                *a6 = v12 - 1;
                if ( v26 > v18 )
                {
                  if ( (*(_BYTE *)(*((_QWORD *)this + 46) + v24) & 8) != 0 )
                  {
                    *a6 = v12;
                    abort();
                  }
                  v22 = v26;
                  v18 = v26;
                  *a5 = v62 + v23;
                  v12 = *a6;
                  v59 = v52 + v23;
                  goto LABEL_55;
                }
LABEL_54:
                v12 = v51;
                goto LABEL_55;
              }
            }
          }
          else
          {
            v26 = *(double *)(v14 + 8LL * (*((_DWORD *)this + 66) + v25));
          }
          v27 = *(_DWORD *)(*((_QWORD *)this + 39) + 4 * v24);
          if ( v27 >= 0 )
            goto LABEL_20;
LABEL_33:
          if ( v54 == ++v23 )
            goto LABEL_34;
        }
        *a6 = 0;
LABEL_34:
        result = (unsigned int)*a5;
        if ( v61 != (_DWORD)result )
        {
          *((_DWORD *)this + 12) = result;
          *((double *)this + 19) = v22;
          *((double *)this + 4) = v18;
          *((_DWORD *)this + 40) = v59;
          result = (unsigned int)*a5;
        }
        v11 = *a6;
      }
      if ( v52 )
      {
        if ( (int)result < 0 )
          goto LABEL_40;
      }
      else if ( (int)result < 0 )
      {
        result = *((_QWORD *)this + 30);
        *((_QWORD *)this + 36) = *(_QWORD *)(result + 904);
        goto LABEL_40;
      }
      result = 0xBFF0000000000000LL;
      *((_QWORD *)this + 36) = 0xBFF0000000000000LL;
    }
LABEL_40:
    *((_DWORD *)this + 11) = v11;
    return result;
  }
  return ClpPackedMatrix::partialPricing(this, a2, a3, a4, a5, a6);
}

