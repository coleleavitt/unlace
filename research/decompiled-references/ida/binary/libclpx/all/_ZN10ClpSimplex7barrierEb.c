__int64 __fastcall ClpSimplex::barrier(ClpSimplex *this, char a2)
{
  ClpCholeskyBase *v3; // rbp
  int v4; // ebp
  int v5; // r15d
  int v6; // r14d
  __int64 v7; // rax
  __int64 *v8; // rsi
  _QWORD *v9; // r13
  __int64 *v10; // rax
  __int64 *v11; // rdx
  __int64 v12; // xmm0_8
  __int64 v13; // rax
  __int64 *v14; // rax
  _QWORD *v15; // rsi
  _QWORD *v16; // rdx
  __int64 *v17; // rax
  __int64 v18; // xmm0_8
  __int64 v19; // rax
  _QWORD *v20; // rax
  __int64 *v21; // rsi
  __int64 *v22; // rax
  __int64 *v23; // rdx
  __int64 v24; // xmm0_8
  __int64 v25; // rax
  __int64 *v26; // rax
  _QWORD *v27; // rsi
  __int64 *v28; // rdx
  _QWORD *v29; // rax
  __int64 v30; // xmm0_8
  __int64 v31; // rax
  _QWORD *v32; // rax
  unsigned int v33; // ebx
  unsigned __int64 v35; // r12
  double *v36; // r14
  int v37; // esi
  __int64 v38; // rdi
  __int64 v39; // r8
  __int64 v40; // rcx
  double v41; // xmm4_8
  int v42; // eax
  __int64 v43; // r10
  __int64 v44; // rax
  int v45; // r12d
  __int64 v46; // r10
  double *v47; // rsi
  double v48; // xmm3_8
  __int64 v49; // r11
  double v50; // xmm2_8
  __int64 v51; // rdx
  _BYTE *v52; // r9
  double v53; // xmm1_8
  double v54; // xmm0_8
  double v55; // xmm1_8
  char v56; // dl
  int *v57; // rcx
  __int64 v58; // rdx
  int v59; // r15d
  __int64 v60; // xmm7_8
  int v61; // ebp
  __int64 *v62; // rsi
  __int64 *v63; // rax
  __int64 *v64; // rdx
  __int64 v65; // xmm0_8
  __int64 v66; // rax
  __int64 *v67; // rax
  char v68; // dl
  _QWORD *v69; // rsi
  __int64 *v70; // rax
  __int64 v71; // rdx
  __int64 v72; // xmm0_8
  __int64 v73; // rax
  _QWORD *v74; // rcx
  __int64 *v75; // rsi
  __int64 *v76; // rax
  __int64 *v77; // rdx
  __int64 v78; // xmm0_8
  __int64 v79; // rax
  __int64 *v80; // rax
  _QWORD *v81; // r12
  __int64 *v82; // rdx
  _QWORD *v83; // rax
  __int64 v84; // xmm0_8
  __int64 v85; // rax
  _QWORD *v86; // rcx
  __int64 (__fastcall ***v87)(_QWORD, _QWORD, _QWORD, char *, _QWORD, __int64); // rdi
  _QWORD *v88; // rax
  __int64 *v89; // rdx
  __int64 v90; // xmm0_8
  __int64 v91; // rax
  _QWORD *v92; // rsi
  _QWORD *v93; // rax
  _QWORD *v94; // rax
  _QWORD *v95; // r14
  _QWORD *v96; // rdx
  __int64 *v97; // rax
  __int64 v98; // xmm0_8
  __int64 v99; // rax
  _QWORD *v100; // rsi
  _QWORD *v101; // rax
  _QWORD *v102; // r15
  _QWORD *v103; // rdi
  __int64 *v104; // rdx
  __int64 v105; // xmm0_8
  __int64 v106; // rax
  _QWORD *v107; // rsi
  double v108; // xmm0_8
  __int64 v109; // rax
  __int64 v110; // rcx
  char v111; // dl
  _QWORD *v112; // rax
  __int64 *v113; // rdx
  __int64 v114; // xmm0_8
  __int64 v115; // rax
  _QWORD *v116; // rcx
  double v117; // xmm2_8
  double v118; // xmm1_8
  __int64 *v119; // rdx
  _QWORD *v120; // rax
  __int64 v121; // xmm0_8
  __int64 v122; // rax
  _QWORD *v123; // rcx
  __int64 *v124; // rax
  _QWORD *v125; // rdx
  __int64 v126; // xmm0_8
  __int64 v127; // rax
  _QWORD *v128; // rcx
  __int64 *v129; // rsi
  __int64 *v130; // rdx
  __int64 *v131; // rax
  __int64 v132; // xmm0_8
  __int64 v133; // rax
  __int64 *v134; // rcx
  __int64 *v135; // rsi
  __int64 *v136; // rdx
  __int64 *v137; // rax
  __int64 v138; // xmm0_8
  __int64 v139; // rax
  double v140; // xmm1_8
  __int64 *v141; // [rsp+10h] [rbp-648h]
  __int64 *v142; // [rsp+18h] [rbp-640h]
  _QWORD *v143; // [rsp+20h] [rbp-638h]
  int v144; // [rsp+2Ch] [rbp-62Ch]
  void *v146; // [rsp+30h] [rbp-628h]
  int *v147; // [rsp+30h] [rbp-628h]
  bool v148; // [rsp+30h] [rbp-628h]
  double v149; // [rsp+40h] [rbp-618h]
  _QWORD *v150; // [rsp+40h] [rbp-618h]
  int v151; // [rsp+48h] [rbp-610h]
  int v152; // [rsp+4Ch] [rbp-60Ch]
  bool v153; // [rsp+4Ch] [rbp-60Ch]
  _QWORD *v154; // [rsp+50h] [rbp-608h]
  _QWORD *v155; // [rsp+58h] [rbp-600h]
  _QWORD *v156; // [rsp+60h] [rbp-5F8h]
  int v157; // [rsp+68h] [rbp-5F0h]
  bool v158; // [rsp+6Dh] [rbp-5EBh]
  bool v159; // [rsp+6Eh] [rbp-5EAh]
  bool v160; // [rsp+6Fh] [rbp-5E9h]
  char v161[8]; // [rsp+78h] [rbp-5E0h] BYREF
  _BYTE v162[112]; // [rsp+80h] [rbp-5D8h] BYREF
  _BYTE v163[320]; // [rsp+F0h] [rbp-568h] BYREF
  int v164; // [rsp+230h] [rbp-428h]
  ClpEventHandler *v165; // [rsp+258h] [rbp-400h]
  __int64 v166; // [rsp+490h] [rbp-1C8h]
  double v167; // [rsp+520h] [rbp-138h]
  int v168; // [rsp+608h] [rbp-50h]

  v151 = *((_DWORD *)this + 327);
  ClpInterior::ClpInterior((ClpInterior *)v163);
  ClpInterior::borrowModel((ClpInterior *)v163, this);
  ClpEventHandler::setSimplex(v165, nullptr);
  if ( *(_DWORD *)(*((_QWORD *)this + 20) + 16LL) == 2 )
  {
    v3 = (ClpCholeskyBase *)operator new(0x3D8u);
    ClpCholeskyBase::ClpCholeskyBase(v3, -1);
    *((_BYTE *)v3 + 12) = 1;
  }
  else
  {
    v3 = (ClpCholeskyBase *)operator new(0x3D8u);
    ClpCholeskyBase::ClpCholeskyBase(v3, -1);
  }
  ClpInterior::setCholesky((ClpInterior *)v163, v3);
  v4 = *((_DWORD *)this + 26);
  v5 = *((_DWORD *)this + 27);
  v166 = 0x3D06849B86A12B9BLL;
  v144 = *((_DWORD *)this + 74);
  if ( v144 <= 999 )
  {
    v168 = *((_DWORD *)this + 74);
    ClpModel::setMaximumIterations(this, 1000000);
  }
  ClpInterior::primalDual((ClpInterior *)v163);
  v6 = v164;
  v149 = v167;
  ClpPresolve::ClpPresolve((ClpPresolve *)v162);
  ClpInterior::numberFixed((ClpInterior *)v163);
  ClpInterior::returnModel((ClpInterior *)v163, this);
  if ( (unsigned __int64)v4 > 0xFFFFFFFFFFFFFFFLL )
    __cxa_throw_bad_array_new_length();
  v141 = (__int64 *)operator new[](8LL * v4);
  if ( (unsigned __int64)v5 > 0xFFFFFFFFFFFFFFFLL )
    __cxa_throw_bad_array_new_length();
  v142 = (__int64 *)operator new[](8LL * v5);
  v143 = (_QWORD *)operator new[](8LL * v4);
  v7 = operator new[](8LL * v5);
  v8 = *((__int64 **)this + 14);
  v9 = (_QWORD *)v7;
  if ( v141 != v8 && v4 )
  {
    if ( v4 >> 3 <= 0 )
    {
      v14 = v141;
    }
    else
    {
      v10 = v141;
      v11 = *((__int64 **)this + 14);
      do
      {
        v12 = *v11;
        v10 += 8;
        v11 += 8;
        *(v10 - 8) = v12;
        *(v10 - 7) = *(v11 - 7);
        *(v10 - 6) = *(v11 - 6);
        *(v10 - 5) = *(v11 - 5);
        *(v10 - 4) = *(v11 - 4);
        *(v10 - 3) = *(v11 - 3);
        *(v10 - 2) = *(v11 - 2);
        *(v10 - 1) = *(v11 - 1);
      }
      while ( v10 != &v141[8 * (unsigned int)((v4 >> 3) - 1) + 8] );
      v13 = ((v4 >> 3) - 1 + 1LL) << 6;
      v8 = (__int64 *)((char *)v8 + v13);
      v14 = (__int64 *)((char *)v141 + v13);
    }
    switch ( v4 % 8 )
    {
      case 1:
        goto LABEL_20;
      case 2:
        goto LABEL_19;
      case 3:
        goto LABEL_18;
      case 4:
        goto LABEL_17;
      case 5:
        goto LABEL_16;
      case 6:
        goto LABEL_15;
      case 7:
        v14[6] = v8[6];
LABEL_15:
        v14[5] = v8[5];
LABEL_16:
        v14[4] = v8[4];
LABEL_17:
        v14[3] = v8[3];
LABEL_18:
        v14[2] = v8[2];
LABEL_19:
        v14[1] = v8[1];
LABEL_20:
        *v14 = *v8;
        break;
      default:
        break;
    }
  }
  v15 = *((_QWORD **)this + 16);
  v16 = v143;
  if ( v143 != v15 && v4 )
  {
    if ( v4 >> 3 <= 0 )
    {
      v20 = v143;
    }
    else
    {
      v17 = *((__int64 **)this + 16);
      do
      {
        v18 = *v17;
        v17 += 8;
        v16 += 8;
        *(v16 - 8) = v18;
        *(v16 - 7) = *(v17 - 7);
        *(v16 - 6) = *(v17 - 6);
        *(v16 - 5) = *(v17 - 5);
        *(v16 - 4) = *(v17 - 4);
        *(v16 - 3) = *(v17 - 3);
        *(v16 - 2) = *(v17 - 2);
        *(v16 - 1) = *(v17 - 1);
      }
      while ( v17 != &v15[8 * (unsigned int)((v4 >> 3) - 1) + 8] );
      v19 = ((v4 >> 3) - 1 + 1LL) << 6;
      v15 = (_QWORD *)((char *)v15 + v19);
      v20 = (_QWORD *)((char *)v143 + v19);
    }
    switch ( v4 % 8 )
    {
      case 1:
        goto LABEL_34;
      case 2:
        goto LABEL_33;
      case 3:
        goto LABEL_32;
      case 4:
        goto LABEL_31;
      case 5:
        goto LABEL_30;
      case 6:
        goto LABEL_29;
      case 7:
        v20[6] = v15[6];
LABEL_29:
        v20[5] = v15[5];
LABEL_30:
        v20[4] = v15[4];
LABEL_31:
        v20[3] = v15[3];
LABEL_32:
        v20[2] = v15[2];
LABEL_33:
        v20[1] = v15[1];
LABEL_34:
        *v20 = *v15;
        break;
      default:
        break;
    }
  }
  v21 = *((__int64 **)this + 15);
  if ( v142 != v21 && v5 )
  {
    if ( v5 >> 3 <= 0 )
    {
      v26 = v142;
    }
    else
    {
      v22 = v142;
      v23 = *((__int64 **)this + 15);
      do
      {
        v24 = *v23;
        v22 += 8;
        v23 += 8;
        *(v22 - 8) = v24;
        *(v22 - 7) = *(v23 - 7);
        *(v22 - 6) = *(v23 - 6);
        *(v22 - 5) = *(v23 - 5);
        *(v22 - 4) = *(v23 - 4);
        *(v22 - 3) = *(v23 - 3);
        *(v22 - 2) = *(v23 - 2);
        *(v22 - 1) = *(v23 - 1);
      }
      while ( v22 != &v142[8 * (unsigned int)((v5 >> 3) - 1) + 8] );
      v25 = ((v5 >> 3) - 1 + 1LL) << 6;
      v21 = (__int64 *)((char *)v21 + v25);
      v26 = (__int64 *)((char *)v142 + v25);
    }
    switch ( v5 % 8 )
    {
      case 1:
        goto LABEL_48;
      case 2:
        goto LABEL_47;
      case 3:
        goto LABEL_46;
      case 4:
        goto LABEL_45;
      case 5:
        goto LABEL_44;
      case 6:
        goto LABEL_43;
      case 7:
        v26[6] = v21[6];
LABEL_43:
        v26[5] = v21[5];
LABEL_44:
        v26[4] = v21[4];
LABEL_45:
        v26[3] = v21[3];
LABEL_46:
        v26[2] = v21[2];
LABEL_47:
        v26[1] = v21[1];
LABEL_48:
        *v26 = *v21;
        break;
      default:
        break;
    }
  }
  v27 = *((_QWORD **)this + 17);
  if ( v9 != v27 && v5 )
  {
    if ( v5 >> 3 <= 0 )
    {
      v32 = v9;
    }
    else
    {
      v28 = *((__int64 **)this + 17);
      v29 = v9;
      do
      {
        v30 = *v28;
        v29 += 8;
        v28 += 8;
        *(v29 - 8) = v30;
        *(v29 - 7) = *(v28 - 7);
        *(v29 - 6) = *(v28 - 6);
        *(v29 - 5) = *(v28 - 5);
        *(v29 - 4) = *(v28 - 4);
        *(v29 - 3) = *(v28 - 3);
        *(v29 - 2) = *(v28 - 2);
        *(v29 - 1) = *(v28 - 1);
      }
      while ( v29 != &v9[8 * (unsigned int)((v5 >> 3) - 1) + 8] );
      v31 = ((v5 >> 3) - 1 + 1LL) << 6;
      v27 = (_QWORD *)((char *)v27 + v31);
      v32 = (_QWORD *)((char *)v9 + v31);
    }
    switch ( v5 % 8 )
    {
      case 1:
        goto LABEL_62;
      case 2:
        goto LABEL_61;
      case 3:
        goto LABEL_60;
      case 4:
        goto LABEL_59;
      case 5:
        goto LABEL_58;
      case 6:
        goto LABEL_57;
      case 7:
        v32[6] = v27[6];
LABEL_57:
        v32[5] = v27[5];
LABEL_58:
        v32[4] = v27[4];
LABEL_59:
        v32[3] = v27[3];
LABEL_60:
        v32[2] = v27[2];
LABEL_61:
        v32[1] = v27[1];
LABEL_62:
        *v32 = *v27;
        break;
      default:
        break;
    }
  }
  if ( v6 <= 3 && a2 )
  {
    ClpSimplex::createStatus(this);
    ClpSimplex::setPerturbation(this, 100);
    v152 = *((_DWORD *)this + 26);
    v35 = *((int *)this + 27);
    if ( v35 > 0xFFFFFFFFFFFFFFFLL )
      __cxa_throw_bad_array_new_length();
    v146 = (void *)*((int *)this + 27);
    v36 = (double *)operator new[](8 * v35);
    v147 = (int *)operator new[](4LL * (_QWORD)v146);
    v37 = 0;
    v38 = *((_QWORD *)this + 22);
    v39 = *((_QWORD *)this + 23);
    v40 = *((_QWORD *)this + 15);
    v41 = 10.0 * *((double *)this + 110);
    if ( v152 > 0 )
    {
      do
      {
        v42 = v37 + *((_DWORD *)this + 27);
        ++v37;
        *(_BYTE *)(*((_QWORD *)this + 33) + v42) = *(_BYTE *)(*((_QWORD *)this + 33) + v42) & 0xF8 | 4;
      }
      while ( v37 != v152 );
    }
    if ( (int)v35 > 0 )
    {
      v43 = (unsigned int)(v35 - 1);
      v44 = 0;
      v45 = 0;
      v46 = v43 + 1;
      while ( 1 )
      {
        while ( 1 )
        {
          v48 = *(double *)(v40 + 8 * v44);
          v49 = v45;
          v50 = *(double *)(v38 + 8 * v44);
          v51 = v45;
          v52 = (_BYTE *)(v44 + *((_QWORD *)this + 33));
          v47 = &v36[v51];
          v53 = fmin(*(double *)(v39 + 8 * v44) - v48, v48 - v50);
          v54 = v53;
          if ( v53 <= v41 )
            break;
          ++v45;
          *v47 = -v53;
          v147[v49] = v44;
          *v52 = *v52 & 0xF8 | 4;
          v47 = &v36[v51 + 1];
LABEL_75:
          if ( ++v44 == v46 )
            goto LABEL_79;
        }
        v55 = *((double *)this + 110);
        v56 = *v52 & 0xF8;
        if ( v54 <= v55 )
        {
          v68 = v56 | 2;
          if ( v50 + v55 >= v48 )
            v68 = *v52 & 0xF8 | 3;
          *v52 = v68;
          goto LABEL_75;
        }
        ++v44;
        *v52 = v56 | 4;
        if ( v44 == v46 )
          goto LABEL_79;
      }
    }
    v47 = v36;
    v45 = 0;
LABEL_79:
    CoinSort_2<double,int>(v36, v47, v147);
    if ( v152 <= v45 )
      v45 = v152;
    if ( v45 > 0 )
    {
      v57 = v147;
      do
      {
        v58 = *v57++;
        *(_BYTE *)(*((_QWORD *)this + 33) + v58) = *(_BYTE *)(*((_QWORD *)this + 33) + v58) & 0xF8 | 1;
      }
      while ( &v147[v45 - 1 + 1] != v57 );
    }
    operator delete[](v147);
    operator delete[](v36);
    if ( (double)(v5 + v4) * 0.001 > v149 )
    {
      v59 = *((_DWORD *)this + 26);
      v60 = *((_QWORD *)this + 11);
      *((_QWORD *)this + 11) = 0x3F50624DD2F1A9FCLL;
      v61 = *((_DWORD *)this + 27);
      v157 = v59;
      ClpSimplex::primal(this, 2, 0);
      v62 = *((__int64 **)this + 14);
      v153 = v59 == 0;
      *((_QWORD *)this + 11) = v60;
      if ( v141 != v62 && v59 )
      {
        if ( v59 >> 3 <= 0 )
        {
          v67 = v141;
        }
        else
        {
          v63 = v141;
          v64 = v62;
          do
          {
            v65 = *v64;
            v63 += 8;
            v64 += 8;
            *(v63 - 8) = v65;
            *(v63 - 7) = *(v64 - 7);
            *(v63 - 6) = *(v64 - 6);
            *(v63 - 5) = *(v64 - 5);
            *(v63 - 4) = *(v64 - 4);
            *(v63 - 3) = *(v64 - 3);
            *(v63 - 2) = *(v64 - 2);
            *(v63 - 1) = *(v64 - 1);
          }
          while ( v63 != &v141[8 * (unsigned int)((v59 >> 3) - 1) + 8] );
          v66 = ((v59 >> 3) - 1 + 1LL) << 6;
          v62 = (__int64 *)((char *)v62 + v66);
          v67 = (__int64 *)((char *)v141 + v66);
        }
        switch ( v59 % 8 )
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
            v67[6] = v62[6];
LABEL_109:
            v67[5] = v62[5];
LABEL_110:
            v67[4] = v62[4];
LABEL_111:
            v67[3] = v62[3];
LABEL_112:
            v67[2] = v62[2];
LABEL_113:
            v67[1] = v62[1];
LABEL_114:
            *v67 = *v62;
            break;
          default:
            break;
        }
      }
      v69 = *((_QWORD **)this + 16);
      if ( v143 != v69 && v59 )
      {
        if ( v59 >> 3 <= 0 )
        {
          v74 = v143;
        }
        else
        {
          v70 = v143;
          v71 = *((_QWORD *)this + 16);
          do
          {
            v72 = *v70;
            v70 += 8;
            v71 += 64;
            *(_QWORD *)(v71 - 64) = v72;
            *(_QWORD *)(v71 - 56) = *(v70 - 7);
            *(_QWORD *)(v71 - 48) = *(v70 - 6);
            *(_QWORD *)(v71 - 40) = *(v70 - 5);
            *(_QWORD *)(v71 - 32) = *(v70 - 4);
            *(_QWORD *)(v71 - 24) = *(v70 - 3);
            *(_QWORD *)(v71 - 16) = *(v70 - 2);
            *(_QWORD *)(v71 - 8) = *(v70 - 1);
          }
          while ( v70 != &v143[8 * (unsigned int)((v59 >> 3) - 1) + 8] );
          v73 = ((v59 >> 3) - 1 + 1LL) << 6;
          v74 = (_QWORD *)((char *)v143 + v73);
          v69 = (_QWORD *)((char *)v69 + v73);
        }
        switch ( v59 % 8 )
        {
          case 1:
            goto LABEL_128;
          case 2:
            goto LABEL_127;
          case 3:
            goto LABEL_126;
          case 4:
            goto LABEL_125;
          case 5:
            goto LABEL_124;
          case 6:
            goto LABEL_123;
          case 7:
            v69[6] = v74[6];
LABEL_123:
            v69[5] = v74[5];
LABEL_124:
            v69[4] = v74[4];
LABEL_125:
            v69[3] = v74[3];
LABEL_126:
            v69[2] = v74[2];
LABEL_127:
            v69[1] = v74[1];
LABEL_128:
            *v69 = *v74;
            break;
          default:
            break;
        }
      }
      v75 = *((__int64 **)this + 15);
      v148 = v61 == 0;
      if ( v142 != v75 && v61 )
      {
        if ( v61 >> 3 <= 0 )
        {
          v80 = v142;
        }
        else
        {
          v76 = v142;
          v77 = *((__int64 **)this + 15);
          do
          {
            v78 = *v77;
            v76 += 8;
            v77 += 8;
            *(v76 - 8) = v78;
            *(v76 - 7) = *(v77 - 7);
            *(v76 - 6) = *(v77 - 6);
            *(v76 - 5) = *(v77 - 5);
            *(v76 - 4) = *(v77 - 4);
            *(v76 - 3) = *(v77 - 3);
            *(v76 - 2) = *(v77 - 2);
            *(v76 - 1) = *(v77 - 1);
          }
          while ( v76 != &v142[8 * (unsigned int)((v61 >> 3) - 1) + 8] );
          v79 = ((v61 >> 3) - 1 + 1LL) << 6;
          v75 = (__int64 *)((char *)v75 + v79);
          v80 = (__int64 *)((char *)v142 + v79);
        }
        switch ( v61 % 8 )
        {
          case 1:
            goto LABEL_142;
          case 2:
            goto LABEL_141;
          case 3:
            goto LABEL_140;
          case 4:
            goto LABEL_139;
          case 5:
            goto LABEL_138;
          case 6:
            goto LABEL_137;
          case 7:
            v80[6] = v75[6];
LABEL_137:
            v80[5] = v75[5];
LABEL_138:
            v80[4] = v75[4];
LABEL_139:
            v80[3] = v75[3];
LABEL_140:
            v80[2] = v75[2];
LABEL_141:
            v80[1] = v75[1];
LABEL_142:
            *v80 = *v75;
            break;
          default:
            break;
        }
      }
      v81 = *((_QWORD **)this + 17);
      if ( v9 != v81 && v61 )
      {
        if ( v61 >> 3 <= 0 )
        {
          v86 = v9;
        }
        else
        {
          v82 = v9;
          v83 = *((_QWORD **)this + 17);
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
          while ( v83 != &v81[8 * (unsigned int)((v61 >> 3) - 1) + 8] );
          v85 = ((v61 >> 3) - 1 + 1LL) << 6;
          v86 = (_QWORD *)((char *)v9 + v85);
          v81 = (_QWORD *)((char *)v81 + v85);
        }
        switch ( v61 % 8 )
        {
          case 1:
            goto LABEL_156;
          case 2:
            goto LABEL_155;
          case 3:
            goto LABEL_154;
          case 4:
            goto LABEL_153;
          case 5:
            goto LABEL_152;
          case 6:
            goto LABEL_151;
          case 7:
            v81[6] = v86[6];
LABEL_151:
            v81[5] = v86[5];
LABEL_152:
            v81[4] = v86[4];
LABEL_153:
            v81[3] = v86[3];
LABEL_154:
            v81[2] = v86[2];
LABEL_155:
            v81[1] = v86[1];
LABEL_156:
            *v81 = *v86;
            break;
          default:
            break;
        }
        v81 = *((_QWORD **)this + 17);
      }
      v87 = *((__int64 (__fastcall ****)(_QWORD, _QWORD, _QWORD, char *, _QWORD, __int64))this + 20);
      if ( v87 )
        v150 = (_QWORD *)(**v87)(v87, 0, 0, &v161, 0, 2);
      else
        v150 = nullptr;
      if ( (unsigned __int64)v61 > 0xFFFFFFFFFFFFFFFLL )
        __cxa_throw_bad_array_new_length();
      v154 = (_QWORD *)operator new[](8LL * v61);
      v158 = v148 || v154 == v150;
      if ( !v158 )
      {
        if ( v61 >> 3 <= 0 )
        {
          v92 = v150;
          v93 = v154;
        }
        else
        {
          v88 = v154;
          v89 = v150;
          do
          {
            v90 = *v89;
            v88 += 8;
            v89 += 8;
            *(v88 - 8) = v90;
            *(v88 - 7) = *(v89 - 7);
            *(v88 - 6) = *(v89 - 6);
            *(v88 - 5) = *(v89 - 5);
            *(v88 - 4) = *(v89 - 4);
            *(v88 - 3) = *(v89 - 3);
            *(v88 - 2) = *(v89 - 2);
            *(v88 - 1) = *(v89 - 1);
          }
          while ( v88 != &v154[8 * (unsigned int)((v61 >> 3) - 1) + 8] );
          v91 = ((v61 >> 3) - 1 + 1LL) << 6;
          v92 = (_QWORD *)((char *)v150 + v91);
          v93 = (_QWORD *)((char *)v154 + v91);
        }
        switch ( v61 % 8 )
        {
          case 1:
            goto LABEL_173;
          case 2:
            goto LABEL_172;
          case 3:
            goto LABEL_171;
          case 4:
            goto LABEL_170;
          case 5:
            goto LABEL_169;
          case 6:
            goto LABEL_168;
          case 7:
            v93[6] = v92[6];
LABEL_168:
            v93[5] = v92[5];
LABEL_169:
            v93[4] = v92[4];
LABEL_170:
            v93[3] = v92[3];
LABEL_171:
            v93[2] = v92[2];
LABEL_172:
            v93[1] = v92[1];
LABEL_173:
            *v93 = *v92;
            break;
          default:
            break;
        }
      }
      v94 = (_QWORD *)operator new[](8LL * v61);
      v95 = *((_QWORD **)this + 22);
      v96 = v94;
      v155 = v94;
      v159 = v148 || v94 == v95;
      if ( !v159 )
      {
        if ( v61 >> 3 <= 0 )
        {
          v100 = *((_QWORD **)this + 22);
        }
        else
        {
          v97 = *((__int64 **)this + 22);
          do
          {
            v98 = *v97;
            v97 += 8;
            v96 += 8;
            *(v96 - 8) = v98;
            *(v96 - 7) = *(v97 - 7);
            *(v96 - 6) = *(v97 - 6);
            *(v96 - 5) = *(v97 - 5);
            *(v96 - 4) = *(v97 - 4);
            *(v96 - 3) = *(v97 - 3);
            *(v96 - 2) = *(v97 - 2);
            *(v96 - 1) = *(v97 - 1);
          }
          while ( v97 != &v95[8 * (unsigned int)((v61 >> 3) - 1) + 8] );
          v99 = ((v61 >> 3) - 1 + 1LL) << 6;
          v100 = (_QWORD *)((char *)v95 + v99);
          v94 = (_QWORD *)((char *)v155 + v99);
        }
        switch ( v61 % 8 )
        {
          case 1:
            goto LABEL_186;
          case 2:
            goto LABEL_185;
          case 3:
            goto LABEL_184;
          case 4:
            goto LABEL_183;
          case 5:
            goto LABEL_182;
          case 6:
            goto LABEL_181;
          case 7:
            v94[6] = v100[6];
LABEL_181:
            v94[5] = v100[5];
LABEL_182:
            v94[4] = v100[4];
LABEL_183:
            v94[3] = v100[3];
LABEL_184:
            v94[2] = v100[2];
LABEL_185:
            v94[1] = v100[1];
LABEL_186:
            *v94 = *v100;
            break;
          default:
            break;
        }
      }
      v101 = (_QWORD *)operator new[](8LL * v61);
      v102 = *((_QWORD **)this + 23);
      v103 = v101;
      v156 = v101;
      v160 = v148 || v101 == v102;
      if ( !v160 )
      {
        if ( v61 >> 3 <= 0 )
        {
          v107 = *((_QWORD **)this + 23);
        }
        else
        {
          v104 = *((__int64 **)this + 23);
          do
          {
            v105 = *v104;
            v101 += 8;
            v104 += 8;
            *(v101 - 8) = v105;
            *(v101 - 7) = *(v104 - 7);
            *(v101 - 6) = *(v104 - 6);
            *(v101 - 5) = *(v104 - 5);
            *(v101 - 4) = *(v104 - 4);
            *(v101 - 3) = *(v104 - 3);
            *(v101 - 2) = *(v104 - 2);
            *(v101 - 1) = *(v104 - 1);
          }
          while ( v101 != &v103[8 * (unsigned int)((v61 >> 3) - 1) + 8] );
          v106 = ((v61 >> 3) - 1 + 1LL) << 6;
          v107 = (_QWORD *)((char *)v102 + v106);
          v101 = (_QWORD *)((char *)v156 + v106);
        }
        switch ( v61 % 8 )
        {
          case 1:
            goto LABEL_199;
          case 2:
            goto LABEL_198;
          case 3:
            goto LABEL_197;
          case 4:
            goto LABEL_196;
          case 5:
            goto LABEL_195;
          case 6:
            goto LABEL_194;
          case 7:
            v101[6] = v107[6];
LABEL_194:
            v101[5] = v107[5];
LABEL_195:
            v101[4] = v107[4];
LABEL_196:
            v101[3] = v107[3];
LABEL_197:
            v101[2] = v107[2];
LABEL_198:
            v101[1] = v107[1];
LABEL_199:
            *v101 = *v107;
            break;
          default:
            break;
        }
      }
      v108 = 10.0 * *((double *)this + 109);
      if ( v61 > 0 )
      {
        v109 = 0;
        v110 = (unsigned int)(v61 - 1) + 1LL;
        do
        {
          while ( 1 )
          {
            v111 = *(_BYTE *)(*((_QWORD *)this + 33) + v109) & 7;
            if ( v111 != 1 )
              break;
LABEL_206:
            v81[v109++] = 0;
            if ( v109 == v110 )
              goto LABEL_207;
          }
          if ( v111 == 3 )
          {
            v117 = *(double *)&v81[v109];
            v118 = *(double *)this * v117;
            if ( v108 <= v118 )
            {
              v102[v109] = v95[v109];
            }
            else if ( v118 < 0.0 )
            {
              goto LABEL_215;
            }
          }
          else if ( v111 == 2 )
          {
            v117 = *(double *)&v81[v109];
            v140 = *(double *)this * v117;
            if ( v140 <= v108 )
            {
              v95[v109] = v102[v109];
            }
            else if ( v140 > 0.0 )
            {
LABEL_215:
              *(double *)&v150[v109] = *(double *)&v150[v109] - v117;
              goto LABEL_206;
            }
          }
          ++v109;
        }
        while ( v109 != v110 );
      }
LABEL_207:
      ClpSimplex::dual(this, 2, 0);
      if ( !v158 )
      {
        if ( v61 >> 3 <= 0 )
        {
          v116 = v154;
        }
        else
        {
          v112 = v150;
          v113 = v154;
          do
          {
            v114 = *v113;
            v112 += 8;
            v113 += 8;
            *(v112 - 8) = v114;
            *(v112 - 7) = *(v113 - 7);
            *(v112 - 6) = *(v113 - 6);
            *(v112 - 5) = *(v113 - 5);
            *(v112 - 4) = *(v113 - 4);
            *(v112 - 3) = *(v113 - 3);
            *(v112 - 2) = *(v113 - 2);
            *(v112 - 1) = *(v113 - 1);
          }
          while ( v112 != &v150[8 * (unsigned int)((v61 >> 3) - 1) + 8] );
          v115 = ((v61 >> 3) - 1 + 1LL) << 6;
          v150 = (_QWORD *)((char *)v150 + v115);
          v116 = (_QWORD *)((char *)v154 + v115);
        }
        switch ( v61 % 8 )
        {
          case 1:
            goto LABEL_222;
          case 2:
            goto LABEL_221;
          case 3:
            goto LABEL_220;
          case 4:
            goto LABEL_219;
          case 5:
            goto LABEL_218;
          case 6:
            goto LABEL_217;
          case 7:
            v150[6] = v116[6];
LABEL_217:
            v150[5] = v116[5];
LABEL_218:
            v150[4] = v116[4];
LABEL_219:
            v150[3] = v116[3];
LABEL_220:
            v150[2] = v116[2];
LABEL_221:
            v150[1] = v116[1];
LABEL_222:
            *v150 = *v116;
            break;
          default:
            break;
        }
      }
      operator delete[](v154);
      if ( !v159 )
      {
        if ( v61 >> 3 <= 0 )
        {
          v123 = v155;
        }
        else
        {
          v119 = v155;
          v120 = v95;
          do
          {
            v121 = *v119;
            v120 += 8;
            v119 += 8;
            *(v120 - 8) = v121;
            *(v120 - 7) = *(v119 - 7);
            *(v120 - 6) = *(v119 - 6);
            *(v120 - 5) = *(v119 - 5);
            *(v120 - 4) = *(v119 - 4);
            *(v120 - 3) = *(v119 - 3);
            *(v120 - 2) = *(v119 - 2);
            *(v120 - 1) = *(v119 - 1);
          }
          while ( &v95[8 * (unsigned int)((v61 >> 3) - 1) + 8] != v120 );
          v122 = ((v61 >> 3) - 1 + 1LL) << 6;
          v123 = (_QWORD *)((char *)v155 + v122);
          v95 = (_QWORD *)((char *)v95 + v122);
        }
        switch ( v61 % 8 )
        {
          case 1:
            goto LABEL_235;
          case 2:
            goto LABEL_234;
          case 3:
            goto LABEL_233;
          case 4:
            goto LABEL_232;
          case 5:
            goto LABEL_231;
          case 6:
            goto LABEL_230;
          case 7:
            v95[6] = v123[6];
LABEL_230:
            v95[5] = v123[5];
LABEL_231:
            v95[4] = v123[4];
LABEL_232:
            v95[3] = v123[3];
LABEL_233:
            v95[2] = v123[2];
LABEL_234:
            v95[1] = v123[1];
LABEL_235:
            *v95 = *v123;
            break;
          default:
            break;
        }
      }
      operator delete[](v155);
      if ( !v160 )
      {
        if ( v61 >> 3 <= 0 )
        {
          v128 = v156;
        }
        else
        {
          v124 = v156;
          v125 = v102;
          do
          {
            v126 = *v124;
            v124 += 8;
            v125 += 8;
            *(v125 - 8) = v126;
            *(v125 - 7) = *(v124 - 7);
            *(v125 - 6) = *(v124 - 6);
            *(v125 - 5) = *(v124 - 5);
            *(v125 - 4) = *(v124 - 4);
            *(v125 - 3) = *(v124 - 3);
            *(v125 - 2) = *(v124 - 2);
            *(v125 - 1) = *(v124 - 1);
          }
          while ( &v156[8 * (unsigned int)((v61 >> 3) - 1) + 8] != v124 );
          v127 = ((v61 >> 3) - 1 + 1LL) << 6;
          v128 = (_QWORD *)((char *)v156 + v127);
          v102 = (_QWORD *)((char *)v102 + v127);
        }
        switch ( v61 % 8 )
        {
          case 1:
            goto LABEL_248;
          case 2:
            goto LABEL_247;
          case 3:
            goto LABEL_246;
          case 4:
            goto LABEL_245;
          case 5:
            goto LABEL_244;
          case 6:
            goto LABEL_243;
          case 7:
            v102[6] = v128[6];
LABEL_243:
            v102[5] = v128[5];
LABEL_244:
            v102[4] = v128[4];
LABEL_245:
            v102[3] = v128[3];
LABEL_246:
            v102[2] = v128[2];
LABEL_247:
            v102[1] = v128[1];
LABEL_248:
            *v102 = *v128;
            break;
          default:
            break;
        }
      }
      operator delete[](v156);
      v129 = *((__int64 **)this + 14);
      v130 = v141;
      if ( v141 != v129 && !v153 )
      {
        if ( v157 >> 3 <= 0 )
        {
          v134 = v141;
        }
        else
        {
          v131 = *((__int64 **)this + 14);
          do
          {
            v132 = *v130;
            v131 += 8;
            v130 += 8;
            *(v131 - 8) = v132;
            *(v131 - 7) = *(v130 - 7);
            *(v131 - 6) = *(v130 - 6);
            *(v131 - 5) = *(v130 - 5);
            *(v131 - 4) = *(v130 - 4);
            *(v131 - 3) = *(v130 - 3);
            *(v131 - 2) = *(v130 - 2);
            *(v131 - 1) = *(v130 - 1);
          }
          while ( v131 != &v129[8 * (unsigned int)((v157 >> 3) - 1) + 8] );
          v133 = ((v157 >> 3) - 1 + 1LL) << 6;
          v134 = (__int64 *)((char *)v141 + v133);
          v129 = (__int64 *)((char *)v129 + v133);
        }
        switch ( v157 % 8 )
        {
          case 1:
            goto LABEL_262;
          case 2:
            goto LABEL_261;
          case 3:
            goto LABEL_260;
          case 4:
            goto LABEL_259;
          case 5:
            goto LABEL_258;
          case 6:
            goto LABEL_257;
          case 7:
            v129[6] = v134[6];
LABEL_257:
            v129[5] = v134[5];
LABEL_258:
            v129[4] = v134[4];
LABEL_259:
            v129[3] = v134[3];
LABEL_260:
            v129[2] = v134[2];
LABEL_261:
            v129[1] = v134[1];
LABEL_262:
            *v129 = *v134;
            break;
          default:
            break;
        }
      }
      v135 = *((__int64 **)this + 15);
      v136 = v142;
      if ( v142 != v135 && v61 )
      {
        if ( v61 >> 3 > 0 )
        {
          v137 = *((__int64 **)this + 15);
          do
          {
            v138 = *v136;
            v137 += 8;
            v136 += 8;
            *(v137 - 8) = v138;
            *(v137 - 7) = *(v136 - 7);
            *(v137 - 6) = *(v136 - 6);
            *(v137 - 5) = *(v136 - 5);
            *(v137 - 4) = *(v136 - 4);
            *(v137 - 3) = *(v136 - 3);
            *(v137 - 2) = *(v136 - 2);
            *(v137 - 1) = *(v136 - 1);
          }
          while ( &v135[8 * (unsigned int)((v61 >> 3) - 1) + 8] != v137 );
          v139 = ((v61 >> 3) - 1 + 1LL) << 6;
          v136 = (__int64 *)((char *)v142 + v139);
          v135 = (__int64 *)((char *)v135 + v139);
        }
        switch ( v61 % 8 )
        {
          case 1:
            goto LABEL_102;
          case 2:
            goto LABEL_101;
          case 3:
            goto LABEL_100;
          case 4:
            goto LABEL_99;
          case 5:
            goto LABEL_98;
          case 6:
            goto LABEL_97;
          case 7:
            v135[6] = v136[6];
LABEL_97:
            v135[5] = v136[5];
LABEL_98:
            v135[4] = v136[4];
LABEL_99:
            v135[3] = v136[3];
LABEL_100:
            v135[2] = v136[2];
LABEL_101:
            v135[1] = v136[1];
LABEL_102:
            *v135 = *v136;
            break;
          default:
            break;
        }
      }
    }
    ClpSimplex::primal(this, 1, 0);
    goto LABEL_68;
  }
  if ( v6 == 4 && a2 )
  {
    ClpSimplex::setPerturbation(this, v151);
    ClpSimplex::createStatus(this);
    ClpSimplex::dual(this, 0, 0);
  }
LABEL_68:
  ClpModel::setMaximumIterations(this, v144);
  operator delete[](v141);
  operator delete[](v142);
  operator delete[](v143);
  operator delete[](v9);
  ClpSimplex::setPerturbation(this, v151);
  v33 = *((_DWORD *)this + 80);
  ClpPresolve::~ClpPresolve((ClpPresolve *)v162);
  ClpInterior::~ClpInterior((ClpInterior *)v163);
  return v33;
}

