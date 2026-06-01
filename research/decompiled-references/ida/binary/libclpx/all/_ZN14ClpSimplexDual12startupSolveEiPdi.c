__int64 __fastcall ClpSimplexDual::startupSolve(ClpSimplexDual *this, int a2, double *a3, int a4)
{
  unsigned int v6; // r13d
  int v7; // r12d
  unsigned __int64 v8; // rsi
  int v9; // edi
  int v10; // ecx
  unsigned __int64 v11; // r14
  double *v12; // r9
  unsigned int v13; // r8d
  unsigned __int64 v14; // rdx
  double *v15; // r11
  double *v16; // r10
  unsigned __int64 v17; // rdx
  __int64 v18; // rax
  signed int v19; // eax
  __int64 v20; // rdx
  int v21; // eax
  double *v22; // r9
  __int64 v23; // r8
  __int64 v24; // rax
  unsigned int v25; // r10d
  unsigned __int64 v26; // rax
  unsigned int v27; // edx
  unsigned __int64 v28; // r14
  double *v29; // r11
  double *v30; // r8
  __int64 v31; // rax
  signed int v32; // eax
  __int64 v33; // r8
  int v34; // edx
  int v35; // eax
  double *v36; // r8
  double *v37; // rdx
  double *v38; // rax
  double v39; // xmm0_8
  __int64 v40; // rax
  double *v41; // rax
  int v42; // ebp
  int *v43; // rdi
  int v45; // esi
  __int64 v46; // rax
  __int64 v47; // rcx
  char v48; // dl
  int v49; // ecx
  double *v50; // r8
  int v51; // edi
  double *v52; // rdx
  double *v53; // rax
  __int64 v54; // xmm0_8
  __int64 v55; // rax
  double *v56; // rsi
  __int64 v57; // rax
  __int64 v58; // rdx
  __int64 v59; // rax
  _BYTE *v60; // rax
  double *v61; // rdx
  __int64 v62; // rax
  __int64 v63; // xmm0_8
  __int64 v64; // rax
  double *v65; // r9
  _QWORD *v66; // rax
  __int64 v67; // rax
  unsigned __int64 v68; // rax
  CoinMessageHandler *v69; // rax
  CoinMessageHandler *v70; // rax
  CoinMessageHandler *v71; // rax
  CoinMessageHandler *v72; // rax
  CoinMessageHandler *v73; // rax
  double v74; // xmm0_8
  CoinMessageHandler *v75; // rax
  CoinMessageHandler *v76; // rax
  __int64 v77; // rax
  int v78; // [rsp+8h] [rbp-50h]
  int v79; // [rsp+8h] [rbp-50h]
  unsigned int v80; // [rsp+Ch] [rbp-4Ch]
  double v81[8]; // [rsp+18h] [rbp-40h] BYREF

  v6 = 1;
  *((_QWORD *)this + 167) = 0;
  if ( (unsigned int)ClpSimplex::startup(this, 0, a4) )
    return v6;
  if ( a2 )
  {
    v6 = *((_DWORD *)this + 80);
    v7 = 0;
    if ( v6 )
    {
      v6 = 0;
      if ( *((int *)this + 327) <= 99 )
        v6 = ClpSimplexDual::perturb(this);
    }
    v8 = *((_QWORD *)this + 16);
    v9 = *((_DWORD *)this + 26);
    v10 = *((_DWORD *)this + 27);
    if ( *((int *)this + 64) <= 0 )
    {
      if ( v9 && (double *)v8 != a3 )
      {
        if ( v9 >> 3 <= 0 )
        {
          v66 = *((_QWORD **)this + 16);
          v65 = a3;
        }
        else
        {
          v61 = a3;
          v62 = *((_QWORD *)this + 16);
          do
          {
            v63 = *(_QWORD *)v61;
            v62 += 64;
            v61 += 8;
            *(_QWORD *)(v62 - 64) = v63;
            *(double *)(v62 - 56) = *(v61 - 7);
            *(double *)(v62 - 48) = *(v61 - 6);
            *(double *)(v62 - 40) = *(v61 - 5);
            *(double *)(v62 - 32) = *(v61 - 4);
            *(double *)(v62 - 24) = *(v61 - 3);
            *(double *)(v62 - 16) = *(v61 - 2);
            *(double *)(v62 - 8) = *(v61 - 1);
          }
          while ( v62 != v8 + (((unsigned int)((v9 >> 3) - 1) + 1LL) << 6) );
          v64 = ((v9 >> 3) - 1 + 1LL) << 6;
          v65 = (double *)((char *)a3 + v64);
          v66 = (_QWORD *)(v8 + v64);
        }
        switch ( v9 % 8 )
        {
          case 1:
            goto LABEL_114;
          case 2:
            goto LABEL_113;
          case 3:
            goto LABEL_112;
          case 4:
            goto LABEL_111;
          case 5:
            goto LABEL_110;
          case 6:
            goto LABEL_109;
          case 7:
            v66[6] = *((_QWORD *)v65 + 6);
LABEL_109:
            v66[5] = *((_QWORD *)v65 + 5);
LABEL_110:
            v66[4] = *((_QWORD *)v65 + 4);
LABEL_111:
            v66[3] = *((_QWORD *)v65 + 3);
LABEL_112:
            v66[2] = *((_QWORD *)v65 + 2);
LABEL_113:
            v66[1] = *((_QWORD *)v65 + 1);
LABEL_114:
            *v66 = *(_QWORD *)v65;
            break;
          default:
            break;
        }
      }
      if ( v9 <= 0 )
        goto LABEL_25;
      v11 = v8 + 16;
    }
    else
    {
      if ( v9 <= 0 )
        goto LABEL_25;
      v11 = v8 + 16;
      v12 = *((double **)this + 30);
      if ( ((unsigned __int64)v12 >= v8 + 16 || v8 >= (unsigned __int64)(v12 + 2))
        && ((unsigned __int64)a3 >= v8 + 16 || v8 >= (unsigned __int64)(a3 + 2))
        && (unsigned int)v9 > 0xE )
      {
        v78 = 0;
        if ( (((unsigned __int64)a3 >> 3) & 1) != 0 )
        {
          v78 = 1;
          *(double *)v8 = *a3 * *v12;
        }
        v13 = 0;
        v14 = ((unsigned __int64)a3 >> 3) & 1;
        v80 = v9 - (((unsigned __int64)a3 >> 3) & 1);
        v15 = &a3[v14];
        v16 = &v12[v14];
        v17 = v8 + v14 * 8;
        v18 = 0;
        do
        {
          ++v13;
          *(__m128d *)(v17 + v18 * 8) = _mm_mul_pd(*(__m128d *)&v16[v18], *(__m128d *)&v15[v18]);
          v18 += 2;
        }
        while ( v80 >> 1 > v13 );
        v19 = (v80 & 0xFFFFFFFE) + v78;
        if ( v80 != (v80 & 0xFFFFFFFE) )
        {
          v20 = v19;
          v21 = v19 + 1;
          *(double *)(v8 + 8 * v20) = a3[v20] * v12[v20];
          if ( v21 < v9 )
            *(double *)(v8 + 8LL * v21) = a3[v21] * v12[v21];
        }
      }
      else
      {
        v68 = 0;
        do
        {
          *(double *)(v8 + v68) = a3[v68 / 8] * v12[v68 / 8];
          v68 += 8LL;
        }
        while ( v68 != 8LL * (unsigned int)(v9 - 1) + 8 );
      }
    }
    v22 = *((double **)this + 130);
    v23 = v10;
    if ( (&a3[v23] >= v22 + 2 || v22 >= &a3[v23 + 2])
      && (v8 >= (unsigned __int64)&a3[v23 + 2] || (unsigned __int64)&a3[v23] >= v11)
      && v9 > 14 )
    {
      v24 = (v8 >> 3) & 1;
      if ( 2 - (unsigned int)((_DWORD)v24 == 0) > v9 - 1 )
      {
        v35 = 1;
        a3[v10] = *v22 + *(double *)v8;
LABEL_24:
        a3[v10 + v35] = v22[v35] + *(double *)(v8 + 8LL * v35);
        goto LABEL_25;
      }
      v79 = 0;
      if ( (_DWORD)v24 )
      {
        v79 = 1;
        a3[v10] = *v22 + *(double *)v8;
      }
      v25 = v9 - v24;
      v26 = v24;
      v27 = 0;
      v28 = v8 + v26 * 8;
      v29 = &v22[v26];
      v30 = &a3[v26 + v23];
      v31 = 0;
      do
      {
        ++v27;
        *(__m128d *)&v30[v31] = _mm_add_pd(*(__m128d *)&v29[v31], *(__m128d *)(v28 + v31 * 8));
        v31 += 2;
      }
      while ( v25 >> 1 > v27 );
      v32 = (v25 & 0xFFFFFFFE) + v79;
      if ( (v25 & 0xFFFFFFFE) != v25 )
      {
        v33 = v32;
        v34 = v32 + v10;
        v35 = v32 + 1;
        a3[v34] = v22[v33] + *(double *)(v8 + 8 * v33);
        if ( v35 < v9 )
          goto LABEL_24;
      }
    }
    else
    {
      v67 = 0;
      do
      {
        a3[v23 + v67] = v22[v67] + *(double *)(v8 + 8 * v67);
        ++v67;
      }
      while ( v9 > (int)v67 );
    }
LABEL_25:
    v36 = *((double **)this + 131);
    if ( v10 && v36 != a3 )
    {
      if ( v10 >> 3 <= 0 )
      {
        v41 = a3;
      }
      else
      {
        v37 = a3;
        v38 = *((double **)this + 131);
        do
        {
          v39 = *v38;
          v38 += 8;
          v37 += 8;
          *(v37 - 8) = v39;
          *(v37 - 7) = *(v38 - 7);
          *(v37 - 6) = *(v38 - 6);
          *(v37 - 5) = *(v38 - 5);
          *(v37 - 4) = *(v38 - 4);
          *(v37 - 3) = *(v38 - 3);
          *(v37 - 2) = *(v38 - 2);
          *(v37 - 1) = *(v38 - 1);
        }
        while ( v38 != &v36[8 * (unsigned int)((v10 >> 3) - 1) + 8] );
        v40 = ((v10 >> 3) - 1 + 1LL) << 6;
        v36 = (double *)((char *)v36 + v40);
        v41 = (double *)((char *)a3 + v40);
      }
      switch ( v10 % 8 )
      {
        case 1:
          goto LABEL_53;
        case 2:
          goto LABEL_52;
        case 3:
          goto LABEL_51;
        case 4:
          goto LABEL_50;
        case 5:
          goto LABEL_49;
        case 6:
          goto LABEL_48;
        case 7:
          v41[6] = v36[6];
LABEL_48:
          v41[5] = v36[5];
LABEL_49:
          v41[4] = v36[4];
LABEL_50:
          v41[3] = v36[3];
LABEL_51:
          v41[2] = v36[2];
LABEL_52:
          v41[1] = v36[1];
LABEL_53:
          *v41 = *v36;
          break;
        default:
          break;
      }
    }
    ClpModel::transposeTimes(this, -1.0, (const double *)v8, a3);
    v45 = *((_DWORD *)this + 27);
    if ( v45 > 0 )
    {
      v46 = 0;
      v47 = (unsigned int)(v45 - 1) + 1LL;
      do
      {
        while ( 1 )
        {
          v48 = *(_BYTE *)(*((_QWORD *)this + 33) + v46) & 7;
          if ( v48 == 3 )
            break;
          if ( v48 == 2 && a3[v46] > 0.0 )
          {
            a3[v46] = 0.0;
            goto LABEL_61;
          }
LABEL_57:
          if ( ++v46 == v47 )
            goto LABEL_62;
        }
        if ( a3[v46] >= 0.0 )
          goto LABEL_57;
        a3[v46] = 0.0;
LABEL_61:
        ++v46;
      }
      while ( v46 != v47 );
    }
LABEL_62:
    v49 = *((_DWORD *)this + 26);
    v50 = *((double **)this + 147);
    v51 = v49 + v45;
    if ( v49 + v45 && v50 != a3 )
    {
      if ( v51 >> 3 <= 0 )
      {
        v56 = a3;
      }
      else
      {
        v52 = a3;
        v53 = *((double **)this + 147);
        do
        {
          v54 = *(_QWORD *)v52;
          v53 += 8;
          v52 += 8;
          *((_QWORD *)v53 - 8) = v54;
          *(v53 - 7) = *(v52 - 7);
          *(v53 - 6) = *(v52 - 6);
          *(v53 - 5) = *(v52 - 5);
          *(v53 - 4) = *(v52 - 4);
          *(v53 - 3) = *(v52 - 3);
          *(v53 - 2) = *(v52 - 2);
          *(v53 - 1) = *(v52 - 1);
        }
        while ( v53 != &v50[8 * (unsigned int)((v51 >> 3) - 1) + 8] );
        v55 = ((v51 >> 3) - 1 + 1LL) << 6;
        v56 = (double *)((char *)a3 + v55);
        v50 = (double *)((char *)v50 + v55);
      }
      switch ( v51 % 8 )
      {
        case 1:
          goto LABEL_77;
        case 2:
          goto LABEL_76;
        case 3:
          goto LABEL_75;
        case 4:
          goto LABEL_74;
        case 5:
          goto LABEL_73;
        case 6:
          goto LABEL_72;
        case 7:
          v50[6] = v56[6];
LABEL_72:
          v50[5] = v56[5];
LABEL_73:
          v50[4] = v56[4];
LABEL_74:
          v50[3] = v56[3];
LABEL_75:
          v50[2] = v56[2];
LABEL_76:
          v50[1] = v56[1];
LABEL_77:
          *v50 = *v56;
          break;
        default:
          break;
      }
    }
    v57 = 0;
    if ( v51 > 0 )
    {
      do
      {
        *(_BYTE *)(v57 + *((_QWORD *)this + 33)) &= ~0x20u;
        ++v57;
        v49 = *((_DWORD *)this + 26);
      }
      while ( v49 + *((_DWORD *)this + 27) > (int)v57 );
    }
    if ( v49 > 0 )
    {
      v58 = 0;
      do
      {
        v59 = *(int *)(*((_QWORD *)this + 157) + v58);
        if ( fabs(a3[v59]) > *((double *)this + 109) )
        {
          v60 = (_BYTE *)(*((_QWORD *)this + 33) + v59);
          if ( (*v60 & 7) != 0 )
          {
            *v60 |= 0x20u;
            v49 = *((_DWORD *)this + 26);
          }
        }
        ++v7;
        v58 += 4;
      }
      while ( v7 < v49 );
    }
    if ( !*((_DWORD *)this + 334) )
      ClpSimplexDual::changeBounds(this, 1, nullptr, v81);
    if ( *((int *)this + 80) >= 0 || *((int *)this + 327) > 99 )
    {
LABEL_89:
      if ( v6 )
        *((_DWORD *)this + 80) = 10;
      return v6;
    }
LABEL_38:
    v42 = *((_DWORD *)this + 84) & 0x3000000;
    if ( !v42 )
      v6 = ClpSimplexDual::perturb(this);
    ClpSimplex::gutsOfSolution(this, nullptr, nullptr, 0);
    v43 = *((int **)this + 43);
    if ( v43[26] > 2 )
    {
      v69 = (CoinMessageHandler *)CoinMessageHandler::message(
                                    (CoinMessageHandler *)v43,
                                    6,
                                    (ClpSimplexDual *)((char *)this + 416));
      v70 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v69);
      CoinMessageHandler::operator<<(v70);
      v71 = (CoinMessageHandler *)CoinMessageHandler::printing(
                                    *((CoinMessageHandler **)this + 43),
                                    *((double *)this + 112) > 0.0);
      v72 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v71);
      CoinMessageHandler::operator<<(v72);
      v73 = (CoinMessageHandler *)CoinMessageHandler::printing(
                                    *((CoinMessageHandler **)this + 43),
                                    *((double *)this + 111) > 0.0);
      v74 = *((double *)this + 111);
      v75 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v73);
      CoinMessageHandler::operator<<(v75);
      v76 = (CoinMessageHandler *)CoinMessageHandler::printing(
                                    *((CoinMessageHandler **)this + 43),
                                    *((_DWORD *)this + 307) < *((_DWORD *)this + 306));
      CoinMessageHandler::operator<<(v76);
      v77 = CoinMessageHandler::message(*((CoinMessageHandler **)this + 43), -1);
      CoinMessageHandler::operator<<(v77, 0, v74);
    }
    if ( v42 )
    {
      if ( *((_DWORD *)this + 308) )
      {
        v6 = ClpSimplexDual::perturb(this);
        if ( *((int *)this + 327) > 100 )
        {
          ClpSimplex::computeDuals(this, nullptr);
          ClpSimplex::checkDualSolution(this);
        }
      }
      else if ( *((_DWORD *)this + 306) )
      {
        *((_DWORD *)this + 80) = 10;
        return 1;
      }
    }
    goto LABEL_89;
  }
  if ( !*((_DWORD *)this + 334) )
    ClpSimplexDual::changeBounds(this, 1, nullptr, v81);
  if ( *((_DWORD *)this + 306) || *((_DWORD *)this + 308) )
  {
    if ( *((int *)this + 80) < 0 && *((int *)this + 327) <= 99 )
    {
      v6 = 0;
      goto LABEL_38;
    }
  }
  else
  {
    *((_DWORD *)this + 80) = 0;
  }
  ClpSimplex::gutsOfSolution(this, nullptr, nullptr, 0);
  if ( *((_DWORD *)this + 306) || *((_DWORD *)this + 308) )
    *((_DWORD *)this + 80) = -1;
  return 0;
}

