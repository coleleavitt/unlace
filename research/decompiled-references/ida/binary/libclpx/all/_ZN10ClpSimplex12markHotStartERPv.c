char __fastcall ClpSimplex::markHotStart(ClpSimplex *this, void **a2)
{
  _DWORD *v3; // rax
  CoinMessageHandler *v4; // rdi
  double **v5; // rbp
  char *v6; // rax
  int v7; // ecx
  int v8; // edx
  double v9; // xmm1_8
  double *v10; // rdx
  double v11; // xmm0_8
  int v12; // ecx
  double *v13; // r10
  double *v14; // rsi
  double *v15; // rdi
  __int64 v16; // rax
  bool v17; // dl
  double *v18; // rdx
  double *v19; // rax
  double v20; // xmm0_8
  __int64 v21; // rax
  double *v22; // r8
  double *v23; // rdx
  double *v24; // rax
  double v25; // xmm0_8
  __int64 v26; // rax

  v3 = (_DWORD *)operator new(0x18u);
  *a2 = v3;
  v4 = *((CoinMessageHandler **)this + 43);
  v5 = (double **)v3;
  *((_DWORD *)this + 80) = 0;
  v3[4] = *((_DWORD *)v4 + 26);
  if ( *((int *)v4 + 26) <= 1 )
    CoinMessageHandler::setLogLevel(v4, 0);
  v6 = (char *)operator new[](
                 16 * *((_DWORD *)this + 27)
               + 8 * (4 * (*((_DWORD *)this + 26) + *((_DWORD *)this + 27)) + 1)
               + 4 * (4 * *((_DWORD *)this + 26) + 1 + 2 * *((_DWORD *)this + 27))
               + *((_DWORD *)this + 26)
               + *((_DWORD *)this + 27));
  v7 = *((_DWORD *)this + 27);
  v8 = *((_DWORD *)this + 26);
  *v5 = (double *)v6;
  v16 = ClpSimplexDual::setupForStrongBranching(this, v6, v8, v7, 1);
  v9 = *(double *)this;
  v10 = *v5;
  v11 = *((double *)this + 9);
  v5[1] = (double *)v16;
  *v10 = (v11 * v9 - *((double *)this + 5)) * v9;
  v12 = *((_DWORD *)this + 27);
  v13 = *((double **)this + 22);
  v14 = &v10[4 * v12 + 1 + 4 * *((_DWORD *)this + 26)];
  v15 = &v14[v12];
  LOBYTE(v16) = v12 == 0;
  v17 = v12 == 0;
  if ( v14 != v13 && v12 )
  {
    if ( v12 >> 3 > 0 )
    {
      v18 = *((double **)this + 22);
      v19 = v14;
      do
      {
        v20 = *v18;
        v19 += 8;
        v18 += 8;
        *(v19 - 8) = v20;
        *(v19 - 7) = *(v18 - 7);
        *(v19 - 6) = *(v18 - 6);
        *(v19 - 5) = *(v18 - 5);
        *(v19 - 4) = *(v18 - 4);
        *(v19 - 3) = *(v18 - 3);
        *(v19 - 2) = *(v18 - 2);
        *(v19 - 1) = *(v18 - 1);
      }
      while ( v19 != &v14[8 * (unsigned int)((v12 >> 3) - 1) + 8] );
      v21 = ((v12 >> 3) - 1 + 1LL) << 6;
      v13 = (double *)((char *)v13 + v21);
      v14 = (double *)((char *)v14 + v21);
    }
    LODWORD(v16) = (unsigned int)(v12 >> 31) >> 29;
    switch ( v12 % 8 )
    {
      case 1:
        goto LABEL_16;
      case 2:
        goto LABEL_15;
      case 3:
        goto LABEL_14;
      case 4:
        goto LABEL_13;
      case 5:
        goto LABEL_12;
      case 6:
        goto LABEL_11;
      case 7:
        v14[6] = v13[6];
LABEL_11:
        v14[5] = v13[5];
LABEL_12:
        v14[4] = v13[4];
LABEL_13:
        v14[3] = v13[3];
LABEL_14:
        v14[2] = v13[2];
LABEL_15:
        v14[1] = v13[1];
LABEL_16:
        *v14 = *v13;
        break;
      default:
        break;
    }
    v12 = *((_DWORD *)this + 27);
    v17 = v12 == 0;
  }
  v22 = *((double **)this + 23);
  if ( v15 != v22 && !v17 )
  {
    if ( v12 >> 3 > 0 )
    {
      v23 = *((double **)this + 23);
      v24 = v15;
      do
      {
        v25 = *v23;
        v24 += 8;
        v23 += 8;
        *(v24 - 8) = v25;
        *(v24 - 7) = *(v23 - 7);
        *(v24 - 6) = *(v23 - 6);
        *(v24 - 5) = *(v23 - 5);
        *(v24 - 4) = *(v23 - 4);
        *(v24 - 3) = *(v23 - 3);
        *(v24 - 2) = *(v23 - 2);
        *(v24 - 1) = *(v23 - 1);
      }
      while ( v24 != &v15[8 * (unsigned int)((v12 >> 3) - 1) + 8] );
      v26 = ((v12 >> 3) - 1 + 1LL) << 6;
      v22 = (double *)((char *)v22 + v26);
      v15 = (double *)((char *)v15 + v26);
    }
    LODWORD(v16) = (unsigned int)(v12 >> 31) >> 29;
    switch ( v12 % 8 )
    {
      case 1:
        goto LABEL_31;
      case 2:
        goto LABEL_30;
      case 3:
        goto LABEL_29;
      case 4:
        goto LABEL_28;
      case 5:
        goto LABEL_27;
      case 6:
        goto LABEL_26;
      case 7:
        v15[6] = v22[6];
LABEL_26:
        v15[5] = v22[5];
LABEL_27:
        v15[4] = v22[4];
LABEL_28:
        v15[3] = v22[3];
LABEL_29:
        v15[2] = v22[2];
LABEL_30:
        v15[1] = v22[1];
LABEL_31:
        *v15 = *v22;
        break;
      default:
        return v16;
    }
  }
  return v16;
}

