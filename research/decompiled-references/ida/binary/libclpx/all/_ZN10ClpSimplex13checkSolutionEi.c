__int64 __fastcall ClpSimplex::checkSolution(ClpSimplex *this, int a2)
{
  int v3; // edx
  __int64 v4; // rdi
  int v5; // ecx
  char v6; // r8
  char *v7; // rax
  char v8; // r9
  __int64 v9; // rcx
  __int64 v10; // rdx
  CoinPackedMatrix *v11; // rdi
  __int64 (__fastcall *v12)(ClpPackedMatrix *); // rax
  const double *v13; // rdx
  const double *v14; // rsi
  int v15; // eax
  double *v17; // rax
  double v18; // xmm1_8
  double v19; // xmm0_8
  __int64 v20; // rax
  char *v21; // r10
  char v22; // di
  char v23; // r9
  __int64 v24; // rdx
  double v25; // xmm13_8
  double v26; // xmm12_8
  double v27; // xmm0_8
  char v28; // r9
  __int64 v29; // rax
  double *v30; // rax
  double v31; // xmm1_8
  double v32; // xmm0_8
  char v33; // di
  __int64 v34; // rdx
  double v35; // xmm13_8
  double v36; // xmm12_8
  double v37; // xmm0_8
  char v38; // di
  int v39; // eax
  _QWORD *v40; // rsi
  int v41; // eax
  __int64 v42; // rdi
  _QWORD *v43; // rax
  int v44; // ecx
  _QWORD *v45; // rdi

  v3 = *((_DWORD *)this + 26);
  if ( a2 )
  {
    if ( v3 > 0 )
    {
      v4 = 0;
      v5 = 0;
      v6 = 0;
      while ( 1 )
      {
        v7 = (char *)(*((_QWORD *)this + 33) + v5 + *((_DWORD *)this + 27));
        v8 = *v7;
        switch ( *v7 & 7 )
        {
          case 0:
          case 1:
            v17 = (double *)(v4 + *((_QWORD *)this + 14));
            v18 = *v17;
            v19 = *v17;
            goto LABEL_18;
          case 2:
            v27 = *((double *)this + 94);
            v18 = *(double *)(*((_QWORD *)this + 19) + v4);
            if ( v18 <= v27 )
              goto LABEL_33;
            v28 = v8 & 0xF8;
            v18 = *(double *)(*((_QWORD *)this + 18) + v4);
            if ( v18 <= -v27 )
            {
              *v7 = v28;
              v29 = *((_QWORD *)this + 14);
              v18 = 0.0;
            }
            else
            {
              *v7 = v28 | 3;
              v29 = *((_QWORD *)this + 14);
            }
            v17 = (double *)(v4 + v29);
            v19 = *v17;
            goto LABEL_18;
          case 3:
          case 5:
            v18 = *(double *)(*((_QWORD *)this + 18) + v4);
            if ( -*((double *)this + 94) <= v18 )
              goto LABEL_33;
            v23 = v8 & 0xF8;
            v18 = *(double *)(*((_QWORD *)this + 19) + v4);
            if ( *((double *)this + 94) > v18 )
              goto LABEL_32;
            *v7 = v23;
            v18 = 0.0;
            v17 = (double *)(v4 + *((_QWORD *)this + 14));
            v19 = *v17;
            goto LABEL_18;
          case 4:
            v23 = v8 & 0xF8;
            v18 = *(double *)(*((_QWORD *)this + 19) + v4);
            v24 = *((_QWORD *)this + 18);
            v25 = -*((double *)this + 94);
            v26 = *(double *)(v24 + v4);
            if ( v18 <= *((double *)this + 94) )
            {
              if ( v26 <= v25 || fabs(0.0 - v18) <= fabs(0.0 - v26) )
              {
LABEL_32:
                *v7 = v23 | 2;
LABEL_33:
                v17 = (double *)(v4 + *((_QWORD *)this + 14));
                v19 = *v17;
                goto LABEL_18;
              }
            }
            else if ( v26 <= v25 )
            {
              *v7 = v23;
              v18 = 0.0;
              v17 = (double *)(v4 + *((_QWORD *)this + 14));
              v19 = *v17;
              goto LABEL_18;
            }
            v18 = *(double *)(v24 + v4);
            *v7 = v23 | 3;
            v17 = (double *)(v4 + *((_QWORD *)this + 14));
            v19 = *v17;
LABEL_18:
            if ( fabs(v18 - v19) <= 1.0e-12 )
            {
              ++v5;
              v4 += 8;
              if ( *((_DWORD *)this + 26) <= v5 )
                goto LABEL_20;
            }
            else
            {
              *v17 = v18;
              ++v5;
              v4 += 8;
              v6 = 1;
              if ( *((_DWORD *)this + 26) <= v5 )
                goto LABEL_20;
            }
            break;
          default:
            v18 = 0.0;
            v17 = (double *)(v4 + *((_QWORD *)this + 14));
            v19 = *v17;
            goto LABEL_18;
        }
      }
    }
    v6 = 0;
LABEL_20:
    if ( *((int *)this + 27) > 0 )
    {
      v9 = 0;
      while ( 1 )
      {
        v20 = 8 * v9;
        v21 = (char *)(v9 + *((_QWORD *)this + 33));
        v22 = *v21;
        switch ( *v21 & 7 )
        {
          case 0:
          case 1:
            v30 = (double *)(*((_QWORD *)this + 15) + v20);
            v31 = *v30;
            v32 = *v30;
            goto LABEL_35;
          case 2:
            v37 = *((double *)this + 94);
            v31 = *(double *)(*((_QWORD *)this + 23) + 8 * v9);
            if ( v31 <= v37 )
              goto LABEL_48;
            v38 = v22 & 0xF8;
            v31 = *(double *)(*((_QWORD *)this + 22) + 8 * v9);
            if ( v31 <= -v37 )
            {
              *v21 = v38;
              v30 = (double *)(*((_QWORD *)this + 15) + v20);
              v31 = 0.0;
            }
            else
            {
              *v21 = v38 | 3;
              v30 = (double *)(*((_QWORD *)this + 15) + v20);
            }
            v32 = *v30;
            goto LABEL_35;
          case 3:
          case 5:
            v31 = *(double *)(*((_QWORD *)this + 22) + 8 * v9);
            if ( -*((double *)this + 94) <= v31 )
              goto LABEL_48;
            v33 = v22 & 0xF8;
            v31 = *(double *)(*((_QWORD *)this + 23) + 8 * v9);
            if ( *((double *)this + 94) > v31 )
              goto LABEL_47;
            *v21 = v33;
            v30 = (double *)(*((_QWORD *)this + 15) + v20);
            v31 = 0.0;
            v32 = *v30;
            goto LABEL_35;
          case 4:
            v33 = v22 & 0xF8;
            v31 = *(double *)(*((_QWORD *)this + 23) + 8 * v9);
            v34 = *((_QWORD *)this + 22);
            v35 = -*((double *)this + 94);
            v36 = *(double *)(v34 + 8 * v9);
            if ( v31 <= *((double *)this + 94) )
            {
              if ( v36 <= v35 || fabs(0.0 - v31) <= fabs(0.0 - v36) )
              {
LABEL_47:
                *v21 = v33 | 2;
LABEL_48:
                v30 = (double *)(*((_QWORD *)this + 15) + v20);
                v32 = *v30;
                goto LABEL_35;
              }
            }
            else if ( v36 <= v35 )
            {
              *v21 = v33;
              v30 = (double *)(*((_QWORD *)this + 15) + v20);
              v31 = 0.0;
              v32 = *v30;
              goto LABEL_35;
            }
            v31 = *(double *)(v34 + 8 * v9);
            *v21 = v33 | 3;
            v30 = (double *)(*((_QWORD *)this + 15) + v20);
            v32 = *v30;
LABEL_35:
            if ( fabs(v31 - v32) <= 1.0e-12 )
            {
              if ( *((_DWORD *)this + 27) <= (int)++v9 )
                goto LABEL_6;
            }
            else
            {
              *v30 = v31;
              if ( *((_DWORD *)this + 27) <= (int)++v9 )
                goto LABEL_53;
              v6 = 1;
            }
            break;
          default:
            v30 = (double *)(*((_QWORD *)this + 15) + v20);
            v31 = 0.0;
            v32 = *v30;
            goto LABEL_35;
        }
      }
    }
LABEL_6:
    if ( v6 || a2 != 1 )
    {
LABEL_53:
      ClpSimplex::startup(this, 0, 0);
      ClpSimplex::gutsOfSolution(this, nullptr, nullptr, 0);
      goto LABEL_14;
    }
    v3 = *((_DWORD *)this + 26);
  }
  if ( v3 )
  {
    v39 = v3 + 7;
    v40 = *((_QWORD **)this + 14);
    if ( v3 >= 0 )
      v39 = v3;
    v41 = v39 >> 3;
    if ( v41 > 0 )
    {
      v42 = (unsigned int)(v41 - 1);
      v43 = *((_QWORD **)this + 14);
      v44 = v42;
      v45 = &v40[8 * v42 + 8];
      do
      {
        *v43 = 0;
        v43[1] = 0;
        v43 += 8;
        *(v43 - 6) = 0;
        *(v43 - 5) = 0;
        *(v43 - 4) = 0;
        *(v43 - 3) = 0;
        *(v43 - 2) = 0;
        *(v43 - 1) = 0;
      }
      while ( v43 != v45 );
      v40 += 8 * v44 + 8;
    }
    switch ( v3 % 8 )
    {
      case 1:
        goto LABEL_67;
      case 2:
        goto LABEL_66;
      case 3:
        goto LABEL_65;
      case 4:
        goto LABEL_64;
      case 5:
        goto LABEL_63;
      case 6:
        goto LABEL_62;
      case 7:
        v40[6] = 0;
LABEL_62:
        v40[5] = 0;
LABEL_63:
        v40[4] = 0;
LABEL_64:
        v40[3] = 0;
LABEL_65:
        v40[2] = 0;
LABEL_66:
        v40[1] = 0;
LABEL_67:
        *v40 = 0;
        break;
      default:
        break;
    }
  }
  v10 = *((_QWORD *)this + 24);
  v11 = nullptr;
  if ( v10 )
  {
    v12 = **(__int64 (__fastcall ***)(ClpPackedMatrix *))v10;
    if ( v12 == ClpPackedMatrix::getPackedMatrix )
      v11 = *(CoinPackedMatrix **)(v10 + 88);
    else
      v11 = (CoinPackedMatrix *)v12(*((ClpPackedMatrix **)this + 24));
  }
  CoinPackedMatrix::times(v11, *((const double **)this + 15), *((double **)this + 14));
  ClpSimplex::createRim(this, 63, 0, 0);
  v13 = *((const double **)this + 152);
  v14 = *((const double **)this + 151);
  *(_OWORD *)((char *)this + 872) = *(_OWORD *)((char *)this + 24);
  ClpSimplex::checkPrimalSolution(this, v14, v13);
  ClpSimplex::checkDualSolution(this);
LABEL_14:
  v15 = -1;
  if ( !*((_DWORD *)this + 306) )
    v15 = -(*((_DWORD *)this + 308) != 0);
  *((_DWORD *)this + 80) = v15;
  return ClpSimplex::deleteRim(this, 0);
}

