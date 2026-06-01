__int64 __fastcall ClpSimplex::fastDual2(ClpSimplex *this, ClpNodeStuff *a2)
{
  int v3; // r9d
  bool v4; // zf
  int v5; // r9d
  _QWORD *v6; // rcx
  _QWORD *v7; // r10
  bool v8; // bp
  int v9; // r12d
  __int64 v10; // rdx
  __int64 *v11; // rax
  __int64 v12; // xmm0_8
  __int64 v13; // rax
  _QWORD *v14; // rsi
  _QWORD *v15; // rdi
  __int64 v16; // rbx
  _QWORD *v17; // rcx
  __int64 *v18; // rdx
  _QWORD *v19; // rax
  __int64 v20; // xmm0_8
  __int64 v21; // rax
  _QWORD *v22; // rax
  _QWORD *v23; // rdi
  _QWORD *v24; // rcx
  __int64 *v25; // rdx
  _QWORD *v26; // rax
  __int64 v27; // xmm0_8
  __int64 v28; // rax
  __int64 v29; // r13
  int v30; // eax
  unsigned int v31; // r14d
  char v32; // r13
  bool v33; // al
  _QWORD *v34; // r8
  _QWORD *v35; // rdi
  __int64 v36; // rdx
  __int64 *v37; // rax
  __int64 v38; // xmm0_8
  __int64 v39; // rax
  __int64 v41; // rcx
  int v42; // esi
  __int64 v43; // rax
  int v44; // edx
  int v45; // ecx
  int v46; // eax
  __int64 v47; // rsi
  __int64 v48; // rdi
  __int64 v49; // rdx
  int v50; // r11d
  __int64 v51; // rsi
  __int64 v52; // rdx
  int v53; // eax
  int v54; // ecx
  __int64 v55; // rdi
  __int64 v56; // rsi
  __int64 v57; // rcx
  int v58; // eax
  int v59; // edx
  int v60; // eax
  int v61; // eax
  __int64 v62; // rax
  int v63; // r14d
  __int64 v64; // rdi
  int v65; // eax
  _QWORD *v66; // rsi
  _QWORD *v67; // rdi
  __int64 *v68; // rdx
  _QWORD *v69; // rax
  __int64 v70; // xmm0_8
  __int64 v71; // rax
  _QWORD *v72; // rcx
  _QWORD *v73; // r10
  _QWORD *v74; // r11
  _QWORD *v75; // rax
  __int64 *v76; // rdx
  __int64 v77; // rdi
  __int64 v78; // xmm0_8
  __int64 v79; // rax
  __int64 *v80; // rsi
  __int64 *v81; // rbx
  __int64 *v82; // rdx
  __int64 *v83; // rax
  __int64 v84; // xmm0_8
  __int64 v85; // rax
  int v86; // eax
  __int64 v87; // rax
  _BYTE *v88; // rcx
  double v89; // xmm2_8
  double *v90; // rdx
  double v91; // xmm3_8
  double v92; // xmm1_8
  int v93; // edx
  int v94; // edx
  int v96; // [rsp+14h] [rbp-54h]
  char v97; // [rsp+1Bh] [rbp-4Dh]
  int v98; // [rsp+1Ch] [rbp-4Ch]
  double v99[8]; // [rsp+28h] [rbp-40h] BYREF

  v3 = *((_DWORD *)this + 27);
  v4 = *((_DWORD *)this + 26) + v3 == 0;
  v5 = *((_DWORD *)this + 26) + v3;
  v6 = *((_QWORD **)a2 + 11);
  v7 = *((_QWORD **)this + 129);
  v8 = v4;
  v9 = v5;
  if ( v7 != v6 && !v4 )
  {
    if ( v5 >> 3 <= 0 )
    {
      v14 = *((_QWORD **)a2 + 11);
    }
    else
    {
      v10 = *((_QWORD *)this + 129);
      v11 = *((__int64 **)a2 + 11);
      do
      {
        v12 = *v11;
        v11 += 8;
        v10 += 64;
        *(_QWORD *)(v10 - 64) = v12;
        *(_QWORD *)(v10 - 56) = *(v11 - 7);
        *(_QWORD *)(v10 - 48) = *(v11 - 6);
        *(_QWORD *)(v10 - 40) = *(v11 - 5);
        *(_QWORD *)(v10 - 32) = *(v11 - 4);
        *(_QWORD *)(v10 - 24) = *(v11 - 3);
        *(_QWORD *)(v10 - 16) = *(v11 - 2);
        *(_QWORD *)(v10 - 8) = *(v11 - 1);
      }
      while ( v11 != &v6[8 * (unsigned int)((v5 >> 3) - 1) + 8] );
      v13 = ((v5 >> 3) - 1 + 1LL) << 6;
      v14 = (_QWORD *)((char *)v6 + v13);
      v7 = (_QWORD *)((char *)v7 + v13);
    }
    switch ( v5 % 8 )
    {
      case 1:
        goto LABEL_14;
      case 2:
        goto LABEL_13;
      case 3:
        goto LABEL_12;
      case 4:
        goto LABEL_11;
      case 5:
        goto LABEL_10;
      case 6:
        goto LABEL_9;
      case 7:
        v7[6] = v14[6];
LABEL_9:
        v7[5] = v14[5];
LABEL_10:
        v7[4] = v14[4];
LABEL_11:
        v7[3] = v14[3];
LABEL_12:
        v7[2] = v14[2];
LABEL_13:
        v7[1] = v14[1];
LABEL_14:
        *v7 = *v14;
        break;
      default:
        break;
    }
  }
  v15 = *((_QWORD **)this + 123);
  v16 = v5;
  v17 = &v6[v16];
  if ( v15 != v17 && !v4 )
  {
    if ( v5 >> 3 <= 0 )
    {
      v22 = v17;
    }
    else
    {
      v18 = *((__int64 **)this + 123);
      v19 = v17;
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
      while ( v19 != &v17[8 * (unsigned int)((v5 >> 3) - 1) + 8] );
      v21 = ((v5 >> 3) - 1 + 1LL) << 6;
      v15 = (_QWORD *)((char *)v15 + v21);
      v22 = (_QWORD *)((char *)v17 + v21);
    }
    switch ( v5 % 8 )
    {
      case 1:
        goto LABEL_28;
      case 2:
        goto LABEL_27;
      case 3:
        goto LABEL_26;
      case 4:
        goto LABEL_25;
      case 5:
        goto LABEL_24;
      case 6:
        goto LABEL_23;
      case 7:
        v22[6] = v15[6];
LABEL_23:
        v22[5] = v15[5];
LABEL_24:
        v22[4] = v15[4];
LABEL_25:
        v22[3] = v15[3];
LABEL_26:
        v22[2] = v15[2];
LABEL_27:
        v22[1] = v15[1];
LABEL_28:
        *v22 = *v15;
        break;
      default:
        break;
    }
  }
  v23 = *((_QWORD **)this + 126);
  v24 = &v17[v16];
  if ( v23 != v24 && !v4 )
  {
    if ( v5 >> 3 > 0 )
    {
      v25 = *((__int64 **)this + 126);
      v26 = v24;
      do
      {
        v27 = *v25;
        v26 += 8;
        v25 += 8;
        *(v26 - 8) = v27;
        *(v26 - 7) = *(v25 - 7);
        *(v26 - 6) = *(v25 - 6);
        *(v26 - 5) = *(v25 - 5);
        *(v26 - 4) = *(v25 - 4);
        *(v26 - 3) = *(v25 - 3);
        *(v26 - 2) = *(v25 - 2);
        *(v26 - 1) = *(v25 - 1);
      }
      while ( v26 != &v24[8 * (unsigned int)((v5 >> 3) - 1) + 8] );
      v28 = ((v5 >> 3) - 1 + 1LL) << 6;
      v23 = (_QWORD *)((char *)v23 + v28);
      v24 = (_QWORD *)((char *)v24 + v28);
    }
    switch ( v5 % 8 )
    {
      case 1:
        goto LABEL_42;
      case 2:
        goto LABEL_41;
      case 3:
        goto LABEL_40;
      case 4:
        goto LABEL_39;
      case 5:
        goto LABEL_38;
      case 6:
        goto LABEL_37;
      case 7:
        v24[6] = v23[6];
LABEL_37:
        v24[5] = v23[5];
LABEL_38:
        v24[4] = v23[4];
LABEL_39:
        v24[3] = v23[3];
LABEL_40:
        v24[2] = v23[2];
LABEL_41:
        v24[1] = v23[1];
LABEL_42:
        *v24 = *v23;
        break;
      default:
        break;
    }
  }
  ClpSimplexDual::changeBounds(this, 3, nullptr, v99);
  *((_DWORD *)this + 308) = 1;
  *((_QWORD *)this + 114) = 0;
  *((_QWORD *)this + 112) = 0x3FE0000000000000LL;
  *((_QWORD *)this + 115) = 0x3FE0000000000000LL;
  ClpSimplex::checkDualSolution(this);
  *((_DWORD *)this + 84) |= 0x80000u;
  v29 = *((_QWORD *)this + 20);
  v30 = ClpSimplexDual::fastDual(this, 1);
  *((_DWORD *)this + 84) &= ~0x80000u;
  v31 = *((_DWORD *)this + 80);
  if ( v30 )
  {
    if ( v31 == 3 )
    {
LABEL_45:
      v32 = 1;
      v33 = v31 == 11 || v31 == 0;
      goto LABEL_46;
    }
    ClpSimplex::checkPrimalSolution(this, *((const double **)this + 151), *((const double **)this + 152));
    v31 = *((_DWORD *)this + 308);
    if ( !v31
      && *((double *)this + 1) > (*((double *)this + 9) * *(double *)this - *((double *)this + 5)) * *(double *)this )
    {
      *((_DWORD *)this + 80) = 0;
      v32 = 1;
      goto LABEL_67;
    }
    goto LABEL_111;
  }
  if ( v31 != 10 )
    goto LABEL_45;
  v60 = *((_DWORD *)this + 182);
  if ( (v60 & 0x200000) != 0 )
  {
    ClpSimplex::checkPrimalSolution(this, *((const double **)this + 151), *((const double **)this + 152));
    if ( !*((_DWORD *)this + 308)
      && *((double *)this + 1) > (*((double *)this + 9) * *(double *)this - *((double *)this + 5)) * *(double *)this )
    {
      *((_DWORD *)this + 80) = 11;
      v31 = 11;
      v32 = 1;
      goto LABEL_67;
    }
LABEL_111:
    v31 = *((_DWORD *)this + 80);
    if ( v31 != 10 )
      goto LABEL_45;
    v60 = *((_DWORD *)this + 182);
  }
  BYTE1(v60) |= 1u;
  *((_DWORD *)this + 182) = v60;
  v96 = *((_DWORD *)this + 327);
  v61 = *(_DWORD *)(*((_QWORD *)this + 43) + 104LL);
  *((_DWORD *)this + 327) = 100;
  v98 = v61;
  v97 = ClpSimplex::initialDenseFactorization(this);
  ClpSimplex::setInitialDenseFactorization(this, 1);
  v62 = *((unsigned int *)this + 77);
  v63 = *((_DWORD *)this + 74);
  if ( (int)((int)&stru_186A0 + v62) < v63 )
    *((_DWORD *)this + 74) = *((_DWORD *)this + 27) + v62 + 2 * *((_DWORD *)this + 26) + 1000;
  *((_DWORD *)this + 183) = v62;
  ClpSimplexPrimal::primal(this, 1, 7);
  v64 = *((_QWORD *)this + 20);
  *((_DWORD *)this + 183) = 0;
  if ( v64 != v29 )
  {
    if ( v64 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v64 + 80LL))(v64);
    v65 = *((_DWORD *)this + 80);
    *((_QWORD *)this + 20) = v29;
    if ( v65 )
      goto LABEL_100;
    ClpSimplexPrimal::primal(this, 1, 7);
  }
  v65 = *((_DWORD *)this + 80);
LABEL_100:
  if ( v65 == 3 )
  {
    v86 = *((_DWORD *)this + 77);
    if ( v86 < v63 )
    {
      if ( v9 > 0 )
      {
        v87 = 0;
        do
        {
          v88 = (_BYTE *)(v87 + *((_QWORD *)this + 33));
          if ( (*v88 & 7) != 1 )
          {
            *v88 = *v88 & 0xF8 | 4;
            v89 = *((double *)this + 110);
            v90 = (double *)(*((_QWORD *)this + 150) + 8 * v87);
            v91 = *(double *)(*((_QWORD *)this + 123) + 8 * v87);
            if ( v89 >= fabs(*v90 - v91) )
            {
              *v90 = v91;
              *(_BYTE *)(v87 + *((_QWORD *)this + 33)) = *(_BYTE *)(v87 + *((_QWORD *)this + 33)) & 0xF8 | 3;
            }
            else
            {
              v92 = *(double *)(*((_QWORD *)this + 126) + 8 * v87);
              if ( v89 >= fabs(*v90 - v92) )
              {
                *v90 = v92;
                *(_BYTE *)(v87 + *((_QWORD *)this + 33)) = *(_BYTE *)(v87 + *((_QWORD *)this + 33)) & 0xF8 | 2;
              }
            }
          }
          ++v87;
        }
        while ( (unsigned int)(v9 - 1) + 1LL != v87 );
        v86 = *((_DWORD *)this + 77);
      }
      v93 = *((_DWORD *)this + 26);
      *((_DWORD *)this + 80) = -1;
      *((_DWORD *)this + 183) = v86;
      v94 = *((_DWORD *)this + 27) + v86 + 2 * v93 + 1000;
      *((_DWORD *)this + 327) = v96;
      if ( v94 > v63 )
        v94 = v63;
      *((_DWORD *)this + 74) = v94;
      ClpSimplexPrimal::primal(this, 0, 0);
      *((_DWORD *)this + 183) = 0;
      ClpSimplex::computeObjectiveValue(this, 0);
      memset(*((void **)this + 17), 0, 8LL * *((int *)this + 27));
    }
  }
  *((_DWORD *)this + 182) &= ~0x100u;
  *((_DWORD *)this + 74) = v63;
  ClpSimplex::setInitialDenseFactorization(this, v97);
  v4 = *((_DWORD *)this + 80) == 10;
  *((_DWORD *)this + 327) = v96;
  if ( v4 )
    *((_DWORD *)this + 80) = 4 * (*((_DWORD *)this + 308) != 0);
  CoinMessageHandler::setLogLevel(*((CoinMessageHandler **)this + 43), v98);
  v66 = *((_QWORD **)this + 123);
  v67 = (_QWORD *)(v16 * 8 + *((_QWORD *)a2 + 11));
  if ( v66 != v67 && !v8 )
  {
    if ( v9 >> 3 <= 0 )
    {
      v72 = (_QWORD *)(v16 * 8 + *((_QWORD *)a2 + 11));
    }
    else
    {
      v68 = (__int64 *)(v16 * 8 + *((_QWORD *)a2 + 11));
      v69 = *((_QWORD **)this + 123);
      do
      {
        v70 = *v68;
        v69 += 8;
        v68 += 8;
        *(v69 - 8) = v70;
        *(v69 - 7) = *(v68 - 7);
        *(v69 - 6) = *(v68 - 6);
        *(v69 - 5) = *(v68 - 5);
        *(v69 - 4) = *(v68 - 4);
        *(v69 - 3) = *(v68 - 3);
        *(v69 - 2) = *(v68 - 2);
        *(v69 - 1) = *(v68 - 1);
      }
      while ( v69 != &v66[8 * (unsigned int)((v9 >> 3) - 1) + 8] );
      v71 = ((v9 >> 3) - 1 + 1LL) << 6;
      v72 = (_QWORD *)((char *)v67 + v71);
      v66 = (_QWORD *)((char *)v66 + v71);
    }
    switch ( v9 % 8 )
    {
      case 1:
        goto LABEL_134;
      case 2:
        goto LABEL_133;
      case 3:
        goto LABEL_132;
      case 4:
        goto LABEL_131;
      case 5:
        goto LABEL_130;
      case 6:
        goto LABEL_129;
      case 7:
        v66[6] = v72[6];
LABEL_129:
        v66[5] = v72[5];
LABEL_130:
        v66[4] = v72[4];
LABEL_131:
        v66[3] = v72[3];
LABEL_132:
        v66[2] = v72[2];
LABEL_133:
        v66[1] = v72[1];
LABEL_134:
        *v66 = *v72;
        break;
      default:
        break;
    }
  }
  v80 = *((__int64 **)this + 126);
  v81 = &v67[v16];
  v32 = v8 || v80 == v81;
  if ( v32 )
  {
    v31 = *((_DWORD *)this + 80);
    v32 = 0;
    v33 = v31 == 11 || v31 == 0;
  }
  else
  {
    if ( v9 >> 3 > 0 )
    {
      v82 = v81;
      v83 = *((__int64 **)this + 126);
      do
      {
        v84 = *v82;
        v83 += 8;
        v82 += 8;
        *(v83 - 8) = v84;
        *(v83 - 7) = *(v82 - 7);
        *(v83 - 6) = *(v82 - 6);
        *(v83 - 5) = *(v82 - 5);
        *(v83 - 4) = *(v82 - 4);
        *(v83 - 3) = *(v82 - 3);
        *(v83 - 2) = *(v82 - 2);
        *(v83 - 1) = *(v82 - 1);
      }
      while ( v83 != &v80[8 * (unsigned int)((v9 >> 3) - 1) + 8] );
      v85 = ((v9 >> 3) - 1 + 1LL) << 6;
      v81 = (__int64 *)((char *)v81 + v85);
      v80 = (__int64 *)((char *)v80 + v85);
    }
    switch ( v9 % 8 )
    {
      case 1:
        goto LABEL_147;
      case 2:
        goto LABEL_146;
      case 3:
        goto LABEL_145;
      case 4:
        goto LABEL_144;
      case 5:
        goto LABEL_143;
      case 6:
        goto LABEL_142;
      case 7:
        v80[6] = v81[6];
LABEL_142:
        v80[5] = v81[5];
LABEL_143:
        v80[4] = v81[4];
LABEL_144:
        v80[3] = v81[3];
LABEL_145:
        v80[2] = v81[2];
LABEL_146:
        v80[1] = v81[1];
LABEL_147:
        *v80 = *v81;
        break;
      default:
        break;
    }
    v31 = *((_DWORD *)this + 80);
    v33 = v31 == 11 || v31 == 0;
  }
LABEL_46:
  if ( !v33 )
    goto LABEL_47;
LABEL_67:
  v41 = *((_QWORD *)this + 29);
  v42 = *((_DWORD *)this + 27);
  if ( v41 )
  {
    if ( v42 > 0 )
    {
      v43 = 0;
      v44 = 0;
      while ( 1 )
      {
        ++v44;
        *(double *)(*((_QWORD *)this + 15) + v43) = *(double *)(*((_QWORD *)this + 150) + v43) * *(double *)(v41 + v43);
        v43 += 8;
        if ( *((_DWORD *)this + 27) <= v44 )
          break;
        v41 = *((_QWORD *)this + 29);
      }
    }
  }
  else
  {
    v73 = *((_QWORD **)this + 15);
    v74 = *((_QWORD **)this + 150);
    if ( v42 && v73 != v74 )
    {
      if ( v42 >> 3 > 0 )
      {
        v75 = *((_QWORD **)this + 15);
        v76 = *((__int64 **)this + 150);
        v77 = (unsigned int)((v42 >> 3) - 1);
        do
        {
          v78 = *v76;
          v75 += 8;
          v76 += 8;
          *(v75 - 8) = v78;
          *(v75 - 7) = *(v76 - 7);
          *(v75 - 6) = *(v76 - 6);
          *(v75 - 5) = *(v76 - 5);
          *(v75 - 4) = *(v76 - 4);
          *(v75 - 3) = *(v76 - 3);
          *(v75 - 2) = *(v76 - 2);
          *(v75 - 1) = *(v76 - 1);
        }
        while ( v75 != &v73[8 * v77 + 8] );
        v79 = ((int)v77 + 1LL) << 6;
        v74 = (_QWORD *)((char *)v74 + v79);
        v73 = (_QWORD *)((char *)v73 + v79);
      }
      switch ( v42 % 8 )
      {
        case 1:
          goto LABEL_167;
        case 2:
          goto LABEL_166;
        case 3:
          goto LABEL_165;
        case 4:
          goto LABEL_164;
        case 5:
          goto LABEL_163;
        case 6:
          goto LABEL_162;
        case 7:
          v73[6] = v74[6];
LABEL_162:
          v73[5] = v74[5];
LABEL_163:
          v73[4] = v74[4];
LABEL_164:
          v73[3] = v74[3];
LABEL_165:
          v73[2] = v74[2];
LABEL_166:
          v73[1] = v74[1];
LABEL_167:
          *v73 = *v74;
          break;
        default:
          break;
      }
    }
  }
  v45 = *((_DWORD *)a2 + 36);
  if ( (v45 & 1) != 0 )
  {
    v46 = *((_DWORD *)this + 80);
    v47 = *((int *)this + 27);
    if ( v46 )
    {
      memset(*((void **)this + 17), 0, 8 * v47);
      *((_DWORD *)this + 80) = 0;
      v45 = *((_DWORD *)a2 + 36);
    }
    else
    {
      v48 = *((_QWORD *)this + 29);
      if ( v48 )
      {
        if ( (int)v47 > 0 )
        {
          v49 = 0;
          while ( 1 )
          {
            v47 = v46 + (int)v47;
            ++v46;
            *(double *)(*((_QWORD *)this + 17) + v49) = *(double *)(v48 + 8 * v47)
                                                      * *(double *)(*((_QWORD *)this + 147) + v49);
            LODWORD(v47) = *((_DWORD *)this + 27);
            v49 += 8;
            if ( (int)v47 <= v46 )
              break;
            v48 = *((_QWORD *)this + 29);
          }
        }
      }
      else
      {
        CoinMemcpyN<double>(*((_QWORD *)this + 147), v47, *((_QWORD *)this + 17));
        v45 = *((_DWORD *)a2 + 36);
      }
    }
  }
  v50 = v45 & 4;
  if ( (v45 & 2) != 0 )
  {
    v51 = *((_QWORD *)this + 28);
    if ( !v51 )
    {
      if ( (v45 & 4) == 0 )
        goto LABEL_47;
      v56 = *((unsigned int *)this + 26);
      goto LABEL_125;
    }
    if ( *((int *)this + 26) <= 0 )
      goto LABEL_47;
    v52 = 0;
    v53 = 0;
    while ( 1 )
    {
      v54 = v53 + *((_DWORD *)this + 27);
      ++v53;
      *(double *)(*((_QWORD *)this + 16) + v52) = *(double *)(*((_QWORD *)this + 147) + 8LL * v54)
                                                * *(double *)(v51 + v52);
      v52 += 8;
      if ( *((_DWORD *)this + 26) <= v53 )
        break;
      v51 = *((_QWORD *)this + 28);
    }
  }
  if ( !v50 )
    goto LABEL_47;
  v55 = *((_QWORD *)this + 28);
  v56 = *((unsigned int *)this + 26);
  if ( !v55 )
  {
LABEL_125:
    CoinMemcpyN<double>(*((_QWORD *)this + 150) + 8LL * *((int *)this + 27), v56, *((_QWORD *)this + 14));
    goto LABEL_47;
  }
  if ( (int)v56 > 0 )
  {
    v57 = 0;
    v58 = 0;
    while ( 1 )
    {
      v56 = v58 + (int)v56;
      v59 = v58 + *((_DWORD *)this + 27);
      ++v58;
      *(double *)(*((_QWORD *)this + 14) + v57) = *(double *)(*((_QWORD *)this + 150) + 8LL * v59)
                                                * *(double *)(v55 + 8 * v56);
      LODWORD(v56) = *((_DWORD *)this + 26);
      v57 += 8;
      if ( (int)v56 <= v58 )
        break;
      v55 = *((_QWORD *)this + 28);
    }
  }
LABEL_47:
  v34 = *((_QWORD **)this + 129);
  v35 = *((_QWORD **)a2 + 11);
  if ( v34 != v35 && !v8 )
  {
    if ( v9 >> 3 > 0 )
    {
      v36 = *((_QWORD *)this + 129);
      v37 = *((__int64 **)a2 + 11);
      do
      {
        v38 = *v37;
        v37 += 8;
        v36 += 64;
        *(_QWORD *)(v36 - 64) = v38;
        *(_QWORD *)(v36 - 56) = *(v37 - 7);
        *(_QWORD *)(v36 - 48) = *(v37 - 6);
        *(_QWORD *)(v36 - 40) = *(v37 - 5);
        *(_QWORD *)(v36 - 32) = *(v37 - 4);
        *(_QWORD *)(v36 - 24) = *(v37 - 3);
        *(_QWORD *)(v36 - 16) = *(v37 - 2);
        *(_QWORD *)(v36 - 8) = *(v37 - 1);
      }
      while ( v37 != &v35[8 * (unsigned int)((v9 >> 3) - 1) + 8] );
      v39 = ((v9 >> 3) - 1 + 1LL) << 6;
      v35 = (_QWORD *)((char *)v35 + v39);
      v34 = (_QWORD *)((char *)v34 + v39);
    }
    switch ( v9 % 8 )
    {
      case 1:
        goto LABEL_60;
      case 2:
        goto LABEL_59;
      case 3:
        goto LABEL_58;
      case 4:
        goto LABEL_57;
      case 5:
        goto LABEL_56;
      case 6:
        goto LABEL_55;
      case 7:
        v34[6] = v35[6];
LABEL_55:
        v34[5] = v35[5];
LABEL_56:
        v34[4] = v35[4];
LABEL_57:
        v34[3] = v35[3];
LABEL_58:
        v34[2] = v35[2];
LABEL_59:
        v34[1] = v35[1];
LABEL_60:
        *v34 = *v35;
        break;
      default:
        break;
    }
  }
  if ( v32 )
    return 100;
  return v31;
}

