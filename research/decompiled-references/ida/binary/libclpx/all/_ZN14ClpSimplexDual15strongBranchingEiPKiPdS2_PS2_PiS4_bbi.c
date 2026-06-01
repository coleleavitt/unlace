__int64 __fastcall ClpSimplexDual::strongBranching(
        ClpSimplexDual *this,
        int a2,
        const int *a3,
        double *a4,
        double *a5,
        double **a6,
        double a7,
        int *a8,
        int *a9,
        bool a10,
        bool a11,
        int a12)
{
  double v15; // xmm2_8
  const ClpFactorization *v16; // rsi
  int v17; // eax
  CoinFactorization *v18; // rdi
  int v19; // eax
  unsigned __int64 v20; // rdi
  __int64 *v21; // rax
  int v22; // edi
  int v23; // edi
  __int64 *v24; // rsi
  __int64 *v25; // rcx
  __int64 *v26; // rdx
  __int64 v27; // xmm0_8
  __int64 v28; // rax
  unsigned __int64 v29; // rax
  int v30; // ecx
  int v31; // ecx
  _BYTE *v32; // r14
  _BYTE *v33; // rdi
  unsigned int v34; // esi
  __int64 v35; // rax
  unsigned int v36; // edx
  __int64 v37; // rax
  _BYTE *v38; // rdx
  _BYTE *v39; // rax
  signed int v40; // esi
  __int64 v41; // rdx
  _BYTE *v42; // rdx
  __int64 *v43; // rax
  int v44; // ecx
  int v45; // ecx
  __int64 *v46; // rdi
  __int64 *v47; // rsi
  __int64 *v48; // rdx
  __int64 v49; // xmm0_8
  __int64 v50; // rax
  __int64 *v51; // rax
  int v52; // ecx
  int v53; // ecx
  __int64 *v54; // rdi
  __int64 *v55; // rsi
  __int64 *v56; // rdx
  __int64 v57; // xmm0_8
  __int64 v58; // rax
  __int64 *v59; // rax
  unsigned __int64 v60; // rdi
  __int64 *v61; // r8
  int v62; // esi
  __int64 *v63; // rdx
  __int64 *v64; // rax
  __int64 v65; // rcx
  __int64 v66; // xmm0_8
  __int64 v67; // rax
  unsigned __int64 v68; // rax
  int v69; // r8d
  _DWORD *v70; // rsi
  unsigned __int64 v71; // rcx
  unsigned int v72; // edi
  unsigned __int64 v73; // rdx
  const __m128i *v74; // rax
  __int64 v75; // rdi
  __m128i v76; // xmm1
  __m128i v77; // xmm0
  __int64 v78; // rdx
  _DWORD *m128i_i32; // rdx
  __int64 v80; // rax
  unsigned __int64 v81; // rbp
  __int64 v82; // r15
  __int64 v83; // r12
  double *v84; // rax
  double v85; // xmm5_8
  double v86; // xmm1_8
  double *v87; // rax
  int v88; // eax
  int v89; // edx
  int v90; // r11d
  unsigned __int64 v91; // rcx
  int v92; // eax
  double *v93; // r8
  double *v94; // r10
  __int64 v95; // rsi
  unsigned __int64 v96; // rdx
  double *v97; // r9
  unsigned int v98; // edi
  double *v99; // rsi
  unsigned __int64 v100; // r12
  __int64 v101; // rdx
  signed int v102; // r9d
  __int64 v103; // rdx
  int v104; // r9d
  __int64 *v105; // r8
  int v106; // esi
  bool v107; // zf
  int v108; // eax
  bool v109; // di
  unsigned __int64 v110; // rdx
  __int64 v111; // r10
  __int64 v112; // xmm0_8
  __int64 v113; // r10
  _BYTE *v114; // r8
  unsigned int v115; // esi
  __int64 v116; // rdx
  unsigned int v117; // ecx
  __int64 v118; // rdx
  _BYTE *v119; // rcx
  _BYTE *v120; // rdx
  unsigned int v121; // esi
  __int64 v122; // rdx
  _BYTE *v123; // rcx
  __int64 *v124; // r10
  __int64 *v125; // rcx
  __int64 *v126; // rdx
  __int64 v127; // r9
  __int64 v128; // xmm0_8
  __int64 v129; // r9
  __int64 *v130; // rdx
  __int64 *v131; // r10
  __int64 *v132; // rcx
  __int64 v133; // rcx
  __int64 v134; // r9
  __int64 v135; // xmm0_8
  __int64 v136; // r9
  __int64 *v137; // r8
  __int64 *v138; // rdx
  __int64 v139; // rcx
  __int64 v140; // r9
  __int64 v141; // xmm0_8
  __int64 v142; // r9
  __m128i *v143; // rcx
  __m128i *v144; // rdx
  unsigned int v145; // edi
  const __m128i *v146; // rax
  __int64 v147; // rdx
  __int64 v148; // rdi
  __m128i v149; // xmm1
  __m128i v150; // xmm0
  __int64 v151; // rdi
  double *v152; // rax
  double v153; // xmm5_8
  double v154; // xmm1_8
  double *v155; // rax
  int v156; // eax
  int v157; // edx
  int v158; // r11d
  unsigned __int64 v159; // rdx
  int v160; // eax
  double *v161; // r8
  double *v162; // r10
  __int64 v163; // rsi
  __int64 v164; // rcx
  unsigned int v165; // edi
  __int64 v166; // rsi
  unsigned int v167; // eax
  unsigned __int64 v168; // r9
  double *v169; // r12
  unsigned int v170; // edi
  double *v171; // rsi
  signed int v172; // r9d
  __int64 v173; // rcx
  int v174; // r9d
  __int64 *v175; // r8
  int v176; // esi
  bool v177; // zf
  int v178; // eax
  bool v179; // di
  unsigned __int64 v180; // rcx
  __int64 v181; // r10
  __int64 v182; // xmm0_8
  __int64 v183; // r10
  _BYTE *v184; // r8
  unsigned int v185; // esi
  __int64 v186; // rdx
  unsigned int v187; // ecx
  __int64 v188; // rdx
  _BYTE *v189; // rcx
  _BYTE *v190; // rdx
  signed int v191; // esi
  __int64 v192; // rdx
  _BYTE *v193; // rcx
  __int64 *v194; // rdx
  __int64 *v195; // r10
  __int64 *v196; // rcx
  __int64 v197; // rcx
  __int64 v198; // r9
  __int64 v199; // xmm0_8
  __int64 v200; // r9
  __int64 *v201; // r10
  __int64 *v202; // rcx
  __int64 *v203; // rdx
  __int64 v204; // r9
  __int64 v205; // xmm0_8
  __int64 v206; // r9
  __int64 *v207; // r8
  __int64 *v208; // rcx
  __int64 *v209; // rdx
  __int64 v210; // r9
  __int64 v211; // xmm0_8
  __int64 v212; // r9
  __int64 *v213; // rdx
  __m128i *v214; // rcx
  unsigned int v215; // edi
  __m128i *v216; // rax
  const __m128i *v217; // rdx
  __int64 v218; // rdi
  __m128i v219; // xmm1
  __m128i v220; // xmm0
  __int64 v221; // rdi
  __m128i *v222; // rdx
  double v224; // xmm6_8
  double v225; // xmm4_8
  double *v226; // rdx
  double *v227; // rsi
  __int64 v228; // r9
  double v229; // xmm0_8
  __int64 v230; // r9
  double *v231; // rsi
  double *v232; // rsi
  double *v233; // rcx
  __int64 v234; // r9
  double v235; // xmm0_8
  __int64 v236; // r9
  double *v237; // rsi
  char *v238; // rcx
  _BYTE *v239; // rdx
  char v240; // di
  __m128i *v241; // rax
  __int64 v242; // rdx
  __int32 v243; // r9d
  __int64 v244; // rcx
  char *v245; // rdx
  char v246; // di
  __m128i *v247; // rdx
  __m128i *v248; // rax
  __int32 v249; // r9d
  unsigned __int64 v250; // rdx
  unsigned __int64 v251; // rcx
  CoinMessageHandler *v252; // rax
  __int64 v253; // rax
  int v254; // eax
  unsigned __int64 v255; // rdx
  char *v256; // rax
  char v257; // r8
  int *v258; // rdx
  int v259; // r9d
  __int64 *v260; // [rsp+10h] [rbp-128h]
  __int64 *v261; // [rsp+18h] [rbp-120h]
  __int64 *v262; // [rsp+20h] [rbp-118h]
  __int64 *v263; // [rsp+28h] [rbp-110h]
  __m128i *v265; // [rsp+38h] [rbp-100h]
  double v266; // [rsp+40h] [rbp-F8h]
  double v267; // [rsp+40h] [rbp-F8h]
  double v268; // [rsp+40h] [rbp-F8h]
  double v269; // [rsp+40h] [rbp-F8h]
  int v271; // [rsp+58h] [rbp-E0h]
  double v272; // [rsp+60h] [rbp-D8h]
  double v273; // [rsp+60h] [rbp-D8h]
  __int64 v275; // [rsp+70h] [rbp-C8h]
  unsigned int v276; // [rsp+78h] [rbp-C0h]
  int v277; // [rsp+80h] [rbp-B8h]
  int v278; // [rsp+80h] [rbp-B8h]
  unsigned int v279; // [rsp+84h] [rbp-B4h]
  int v280; // [rsp+84h] [rbp-B4h]
  int v281; // [rsp+88h] [rbp-B0h]
  double v282; // [rsp+A8h] [rbp-90h] BYREF
  _BYTE v283[136]; // [rsp+B0h] [rbp-88h] BYREF

  v15 = *((double *)this + 9);
  *((_DWORD *)this + 325) = -1;
  ClpSimplex::createRim(this, 63, 1, a12);
  if ( (a12 & 2) == 0 )
  {
    v18 = *(CoinFactorization **)(*((_QWORD *)this + 158) + 8LL);
    if ( !v18 )
      goto LABEL_5;
    goto LABEL_4;
  }
  v16 = *((const ClpFactorization **)this + 158);
  v17 = *((_DWORD *)this + 79) & 0x202;
  v18 = *((CoinFactorization **)v16 + 1);
  if ( v17 == 514 && **((int **)this + 157) >= 0 )
  {
    v254 = *((_DWORD *)this + 26);
    if ( !v18 )
    {
      if ( *(_DWORD *)(*((_QWORD *)v16 + 2) + 36LL) == v254 )
        goto LABEL_8;
      goto LABEL_5;
    }
    if ( *((_DWORD *)v18 + 8) == v254 )
      goto LABEL_8;
    goto LABEL_4;
  }
  if ( v18 )
  {
LABEL_4:
    a7 = 1.0e-13;
    CoinFactorization::zeroTolerance(v18, 1.0e-13);
  }
LABEL_5:
  v19 = ClpSimplex::internalFactorize(this, 0);
  if ( v19 < 0 )
    return (unsigned int)-2;
  if ( v19 && *((_DWORD *)this + 26) >= v19 )
  {
    v252 = (CoinMessageHandler *)CoinMessageHandler::message(
                                   *((CoinMessageHandler **)this + 43),
                                   20,
                                   (ClpSimplexDual *)((char *)this + 416));
    v253 = CoinMessageHandler::operator<<(v252);
    CoinMessageHandler::operator<<(v253, 0, a7);
  }
  v16 = *((const ClpFactorization **)this + 158);
LABEL_8:
  ClpFactorization::ClpFactorization((ClpFactorization *)v283, v16, 0);
  ClpSimplexDual::changeBounds(this, 3, nullptr, &v282);
  v20 = *((_DWORD *)this + 26) + *((_DWORD *)this + 27);
  v271 = *((_DWORD *)this + 334);
  if ( v20 > 0xFFFFFFFFFFFFFFFLL )
    __cxa_throw_bad_array_new_length();
  v21 = (__int64 *)operator new[](8 * v20);
  v22 = *((_DWORD *)this + 27);
  v107 = *((_DWORD *)this + 26) + v22 == 0;
  v23 = *((_DWORD *)this + 26) + v22;
  v260 = v21;
  v24 = *((__int64 **)this + 150);
  if ( !v107 && v24 != v21 )
  {
    if ( v23 >> 3 > 0 )
    {
      v25 = &v21[8 * (unsigned int)((v23 >> 3) - 1) + 8];
      v26 = *((__int64 **)this + 150);
      do
      {
        v27 = *v26;
        v21 += 8;
        v26 += 8;
        *(v21 - 8) = v27;
        *(v21 - 7) = *(v26 - 7);
        *(v21 - 6) = *(v26 - 6);
        *(v21 - 5) = *(v26 - 5);
        *(v21 - 4) = *(v26 - 4);
        *(v21 - 3) = *(v26 - 3);
        *(v21 - 2) = *(v26 - 2);
        *(v21 - 1) = *(v26 - 1);
      }
      while ( v21 != v25 );
      v28 = ((v23 >> 3) - 1 + 1LL) << 6;
      v24 = (__int64 *)((char *)v24 + v28);
      v21 = (__int64 *)((char *)v260 + v28);
    }
    switch ( v23 % 8 )
    {
      case 1:
        goto LABEL_22;
      case 2:
        goto LABEL_21;
      case 3:
        goto LABEL_20;
      case 4:
        goto LABEL_19;
      case 5:
        goto LABEL_18;
      case 6:
        goto LABEL_17;
      case 7:
        v21[6] = v24[6];
LABEL_17:
        v21[5] = v24[5];
LABEL_18:
        v21[4] = v24[4];
LABEL_19:
        v21[3] = v24[3];
LABEL_20:
        v21[2] = v24[2];
LABEL_21:
        v21[1] = v24[1];
LABEL_22:
        *v21 = *v24;
        break;
      default:
        break;
    }
  }
  v29 = operator new[](v23);
  v30 = *((_DWORD *)this + 26);
  v107 = *((_DWORD *)this + 27) + v30 == 0;
  v31 = *((_DWORD *)this + 27) + v30;
  v32 = (_BYTE *)v29;
  v33 = *((_BYTE **)this + 33);
  if ( !v107 && v33 != (_BYTE *)v29 )
  {
    v34 = v31 >> 3;
    if ( v31 >> 3 <= 0 )
    {
      v42 = (_BYTE *)v29;
    }
    else
    {
      if ( ((unsigned __int64)v33 >= v29 + 16 || v29 >= (unsigned __int64)(v33 + 16)) && v34 > 1 )
      {
        v35 = 0;
        v36 = 0;
        do
        {
          ++v36;
          *(__m128i *)&v32[v35] = _mm_loadu_si128((const __m128i *)&v33[v35]);
          v35 += 16;
        }
        while ( v34 >> 1 > v36 );
        v37 = 8LL * (v34 & 0xFFFFFFFE);
        v38 = &v33[v37];
        v39 = &v32[v37];
        if ( v34 != (v34 & 0xFFFFFFFE) )
        {
          *v39 = *v38;
          v39[1] = v38[1];
          v39[2] = v38[2];
          v39[3] = v38[3];
          v39[4] = v38[4];
          v39[5] = v38[5];
          v39[6] = v38[6];
          v39[7] = v38[7];
        }
        v40 = v34 - 1;
      }
      else
      {
        v40 = v34 - 1;
        v255 = v29;
        v256 = *((char **)this + 33);
        do
        {
          v257 = *v256;
          v256 += 8;
          v255 += 8LL;
          *(_BYTE *)(v255 - 8) = v257;
          *(_BYTE *)(v255 - 7) = *(v256 - 7);
          *(_BYTE *)(v255 - 6) = *(v256 - 6);
          *(_BYTE *)(v255 - 5) = *(v256 - 5);
          *(_BYTE *)(v255 - 4) = *(v256 - 4);
          *(_BYTE *)(v255 - 3) = *(v256 - 3);
          *(_BYTE *)(v255 - 2) = *(v256 - 2);
          *(_BYTE *)(v255 - 1) = *(v256 - 1);
        }
        while ( v256 != &v33[8 * v40 + 8] );
      }
      v41 = 8LL * v40 + 8;
      v33 += v41;
      v42 = &v32[v41];
    }
    switch ( v31 % 8 )
    {
      case 1:
        goto LABEL_41;
      case 2:
        goto LABEL_40;
      case 3:
        goto LABEL_39;
      case 4:
        goto LABEL_38;
      case 5:
        goto LABEL_37;
      case 6:
        goto LABEL_36;
      case 7:
        v42[6] = v33[6];
LABEL_36:
        v42[5] = v33[5];
LABEL_37:
        v42[4] = v33[4];
LABEL_38:
        v42[3] = v33[3];
LABEL_39:
        v42[2] = v33[2];
LABEL_40:
        v42[1] = v33[1];
LABEL_41:
        *v42 = *v33;
        break;
      default:
        break;
    }
  }
  if ( (unsigned __int64)v31 > 0xFFFFFFFFFFFFFFFLL )
    __cxa_throw_bad_array_new_length();
  v43 = (__int64 *)operator new[](8LL * v31);
  v44 = *((_DWORD *)this + 27);
  v107 = *((_DWORD *)this + 26) + v44 == 0;
  v45 = *((_DWORD *)this + 26) + v44;
  v261 = v43;
  v46 = *((__int64 **)this + 123);
  if ( !v107 && v46 != v43 )
  {
    if ( v45 >> 3 > 0 )
    {
      v47 = &v43[8 * (unsigned int)((v45 >> 3) - 1) + 8];
      v48 = *((__int64 **)this + 123);
      do
      {
        v49 = *v48;
        v43 += 8;
        v48 += 8;
        *(v43 - 8) = v49;
        *(v43 - 7) = *(v48 - 7);
        *(v43 - 6) = *(v48 - 6);
        *(v43 - 5) = *(v48 - 5);
        *(v43 - 4) = *(v48 - 4);
        *(v43 - 3) = *(v48 - 3);
        *(v43 - 2) = *(v48 - 2);
        *(v43 - 1) = *(v48 - 1);
      }
      while ( v43 != v47 );
      v50 = ((v45 >> 3) - 1 + 1LL) << 6;
      v46 = (__int64 *)((char *)v46 + v50);
      v43 = (__int64 *)((char *)v261 + v50);
    }
    switch ( v45 % 8 )
    {
      case 1:
        goto LABEL_56;
      case 2:
        goto LABEL_55;
      case 3:
        goto LABEL_54;
      case 4:
        goto LABEL_53;
      case 5:
        goto LABEL_52;
      case 6:
        goto LABEL_51;
      case 7:
        v43[6] = v46[6];
LABEL_51:
        v43[5] = v46[5];
LABEL_52:
        v43[4] = v46[4];
LABEL_53:
        v43[3] = v46[3];
LABEL_54:
        v43[2] = v46[2];
LABEL_55:
        v43[1] = v46[1];
LABEL_56:
        *v43 = *v46;
        break;
      default:
        break;
    }
  }
  if ( (unsigned __int64)v45 > 0xFFFFFFFFFFFFFFFLL )
    __cxa_throw_bad_array_new_length();
  v51 = (__int64 *)operator new[](8LL * v45);
  v52 = *((_DWORD *)this + 27);
  v107 = *((_DWORD *)this + 26) + v52 == 0;
  v53 = *((_DWORD *)this + 26) + v52;
  v262 = v51;
  v54 = *((__int64 **)this + 126);
  if ( !v107 && v54 != v51 )
  {
    if ( v53 >> 3 > 0 )
    {
      v55 = &v51[8 * (unsigned int)((v53 >> 3) - 1) + 8];
      v56 = *((__int64 **)this + 126);
      do
      {
        v57 = *v56;
        v51 += 8;
        v56 += 8;
        *(v51 - 8) = v57;
        *(v51 - 7) = *(v56 - 7);
        *(v51 - 6) = *(v56 - 6);
        *(v51 - 5) = *(v56 - 5);
        *(v51 - 4) = *(v56 - 4);
        *(v51 - 3) = *(v56 - 3);
        *(v51 - 2) = *(v56 - 2);
        *(v51 - 1) = *(v56 - 1);
      }
      while ( v51 != v55 );
      v58 = ((v53 >> 3) - 1 + 1LL) << 6;
      v54 = (__int64 *)((char *)v54 + v58);
      v51 = (__int64 *)((char *)v262 + v58);
    }
    switch ( v53 % 8 )
    {
      case 1:
        goto LABEL_71;
      case 2:
        goto LABEL_70;
      case 3:
        goto LABEL_69;
      case 4:
        goto LABEL_68;
      case 5:
        goto LABEL_67;
      case 6:
        goto LABEL_66;
      case 7:
        v51[6] = v54[6];
LABEL_66:
        v51[5] = v54[5];
LABEL_67:
        v51[4] = v54[4];
LABEL_68:
        v51[3] = v54[3];
LABEL_69:
        v51[2] = v54[2];
LABEL_70:
        v51[1] = v54[1];
LABEL_71:
        *v51 = *v54;
        break;
      default:
        break;
    }
  }
  if ( (unsigned __int64)v53 > 0xFFFFFFFFFFFFFFFLL )
    __cxa_throw_bad_array_new_length();
  v59 = (__int64 *)operator new[](8LL * v53);
  v60 = *((int *)this + 26);
  v263 = v59;
  v61 = *((__int64 **)this + 129);
  v62 = *((_DWORD *)this + 27) + v60;
  if ( v62 )
  {
    v63 = v59;
    if ( v61 != v59 )
    {
      if ( v62 >> 3 > 0 )
      {
        v64 = *((__int64 **)this + 129);
        v65 = (unsigned int)((v62 >> 3) - 1);
        do
        {
          v66 = *v64;
          v64 += 8;
          v63 += 8;
          *(v63 - 8) = v66;
          *(v63 - 7) = *(v64 - 7);
          *(v63 - 6) = *(v64 - 6);
          *(v63 - 5) = *(v64 - 5);
          *(v63 - 4) = *(v64 - 4);
          *(v63 - 3) = *(v64 - 3);
          *(v63 - 2) = *(v64 - 2);
          *(v63 - 1) = *(v64 - 1);
        }
        while ( v64 != &v61[8 * v65 + 8] );
        v67 = ((int)v65 + 1LL) << 6;
        v61 = (__int64 *)((char *)v61 + v67);
        v59 = (__int64 *)((char *)v263 + v67);
      }
      switch ( v62 % 8 )
      {
        case 1:
          goto LABEL_86;
        case 2:
          goto LABEL_85;
        case 3:
          goto LABEL_84;
        case 4:
          goto LABEL_83;
        case 5:
          goto LABEL_82;
        case 6:
          goto LABEL_81;
        case 7:
          v59[6] = v61[6];
LABEL_81:
          v59[5] = v61[5];
LABEL_82:
          v59[4] = v61[4];
LABEL_83:
          v59[3] = v61[3];
LABEL_84:
          v59[2] = v61[2];
LABEL_85:
          v59[1] = v61[1];
LABEL_86:
          *v59 = *v61;
          break;
        default:
          break;
      }
    }
  }
  if ( v60 > 0x1FFFFFFFFFFFFFFELL )
    __cxa_throw_bad_array_new_length();
  v68 = operator new[](4 * v60);
  v69 = *((_DWORD *)this + 26);
  v265 = (__m128i *)v68;
  v70 = *((_DWORD **)this + 157);
  if ( v69 )
  {
    v71 = v68;
    if ( v70 != (_DWORD *)v68 )
    {
      v72 = v69 >> 3;
      if ( v69 >> 3 <= 0 )
      {
        m128i_i32 = (_DWORD *)v68;
      }
      else
      {
        if ( ((unsigned __int64)v70 >= v68 + 32 || v68 >= (unsigned __int64)(v70 + 8)) && v72 > 1 )
        {
          v73 = v68;
          v74 = *((const __m128i **)this + 157);
          v75 = v72 - 1;
          do
          {
            v76 = _mm_loadu_si128(v74);
            v74 += 2;
            v73 += 32LL;
            v77 = _mm_loadu_si128(v74 - 1);
            *(__m128i *)(v73 - 32) = v76;
            *(__m128i *)(v73 - 16) = v77;
          }
          while ( v74 != (const __m128i *)&v70[8 * v75 + 8] );
        }
        else
        {
          v258 = *((int **)this + 157);
          v75 = v72 - 1;
          do
          {
            v259 = *v258;
            v258 += 8;
            v71 += 32LL;
            *(_DWORD *)(v71 - 32) = v259;
            *(_DWORD *)(v71 - 28) = *(v258 - 7);
            *(_DWORD *)(v71 - 24) = *(v258 - 6);
            *(_DWORD *)(v71 - 20) = *(v258 - 5);
            *(_DWORD *)(v71 - 16) = *(v258 - 4);
            *(_DWORD *)(v71 - 12) = *(v258 - 3);
            *(_DWORD *)(v71 - 8) = *(v258 - 2);
            *(_DWORD *)(v71 - 4) = *(v258 - 1);
          }
          while ( &v70[8 * v75 + 8] != v258 );
        }
        v78 = 2 * ((int)v75 + 1LL);
        v70 = (_DWORD *)((char *)v70 + v78 * 16);
        m128i_i32 = v265[v78].m128i_i32;
      }
      switch ( v69 % 8 )
      {
        case 1:
          goto LABEL_103;
        case 2:
          goto LABEL_102;
        case 3:
          goto LABEL_101;
        case 4:
          goto LABEL_100;
        case 5:
          goto LABEL_99;
        case 6:
          goto LABEL_98;
        case 7:
          m128i_i32[6] = v70[6];
LABEL_98:
          m128i_i32[5] = v70[5];
LABEL_99:
          m128i_i32[4] = v70[4];
LABEL_100:
          m128i_i32[3] = v70[3];
LABEL_101:
          m128i_i32[2] = v70[2];
LABEL_102:
          m128i_i32[1] = v70[1];
LABEL_103:
          *m128i_i32 = *v70;
          break;
        default:
          break;
      }
    }
  }
  if ( a2 > 0 )
  {
    v276 = 0;
    v80 = (unsigned int)(a2 - 1);
    v81 = 0;
    v275 = 2 * v80 + 2;
    while ( 1 )
    {
      v82 = a3[v81 / 2];
      v83 = 8 * v82;
      v84 = (double *)(8 * v82 + *((_QWORD *)this + 23));
      v85 = *v84;
      *v84 = a5[v81 / 2];
      v272 = v85;
      v86 = *((double *)this + 12);
      v87 = (double *)(8 * v82 + *((_QWORD *)this + 126));
      if ( *((int *)this + 64) <= 0 )
        *v87 = v86 * a5[v81 / 2];
      else
        *v87 = *(double *)(*((_QWORD *)this + 31) + 8 * v82) * a5[v81 / 2] * v86;
      v88 = ClpSimplexDual::fastDual(this, a11);
      v89 = *((_DWORD *)this + 80);
      if ( v89 == 10 )
      {
        v225 = *((double *)this + 9);
        *((_DWORD *)this + 80) = 3;
        v266 = fmax(v225, v15);
LABEL_350:
        v90 = 2;
LABEL_116:
        v267 = v266 - v15;
        goto LABEL_117;
      }
      v266 = fmax(*((double *)this + 9), v15);
      if ( v88 )
      {
        if ( v89 == 3 )
          goto LABEL_350;
        ClpSimplex::checkPrimalSolution(this, *((const double **)this + 151), *((const double **)this + 152));
        if ( *((_DWORD *)this + 308) || *((double *)this + 1) <= v266 )
        {
          v90 = *((_DWORD *)this + 80);
          if ( v90 == 3 )
            goto LABEL_350;
          if ( v90 )
            goto LABEL_116;
        }
        else
        {
          *((_DWORD *)this + 80) = 0;
        }
      }
      else
      {
        if ( v89 == 3 )
          goto LABEL_350;
        if ( v89 )
          goto LABEL_355;
      }
      if ( !(unsigned __int8)ClpModel::isDualObjectiveLimitReached(this) )
      {
        v90 = 0;
        goto LABEL_116;
      }
LABEL_355:
      v90 = 1;
      v267 = 1.0e100;
LABEL_117:
      v91 = *((_QWORD *)this + 150);
      v92 = *((_DWORD *)this + 27);
      if ( a6 )
      {
        v93 = a6[v81];
        if ( *((int *)this + 64) <= 0 )
        {
          if ( v92 && (double *)v91 != v93 )
          {
            if ( v92 >> 3 <= 0 )
            {
              v231 = *((double **)this + 150);
            }
            else
            {
              v226 = a6[v81];
              v227 = *((double **)this + 150);
              v228 = (unsigned int)((v92 >> 3) - 1);
              do
              {
                v229 = *v227;
                v226 += 8;
                v227 += 8;
                *(v226 - 8) = v229;
                *(v226 - 7) = *(v227 - 7);
                *(v226 - 6) = *(v227 - 6);
                *(v226 - 5) = *(v227 - 5);
                *(v226 - 4) = *(v227 - 4);
                *(v226 - 3) = *(v227 - 3);
                *(v226 - 2) = *(v227 - 2);
                *(v226 - 1) = *(v227 - 1);
              }
              while ( v226 != &v93[8 * v228 + 8] );
              v230 = ((int)v228 + 1LL) << 6;
              v231 = (double *)(v91 + v230);
              v93 = (double *)((char *)v93 + v230);
            }
            switch ( v92 % 8 )
            {
              case 1:
                goto LABEL_372;
              case 2:
                goto LABEL_371;
              case 3:
                goto LABEL_370;
              case 4:
                goto LABEL_369;
              case 5:
                goto LABEL_368;
              case 6:
                goto LABEL_367;
              case 7:
                v93[6] = v231[6];
LABEL_367:
                v93[5] = v231[5];
LABEL_368:
                v93[4] = v231[4];
LABEL_369:
                v93[3] = v231[3];
LABEL_370:
                v93[2] = v231[2];
LABEL_371:
                v93[1] = v231[1];
LABEL_372:
                *v93 = *v231;
                break;
              default:
                break;
            }
          }
        }
        else if ( v92 > 0 )
        {
          v94 = *((double **)this + 29);
          if ( (v91 >= (unsigned __int64)(v93 + 2) || (unsigned __int64)v93 >= v91 + 16)
            && (v94 >= v93 + 2 || v93 >= v94 + 2)
            && (unsigned int)v92 > 0xE )
          {
            v277 = 0;
            if ( ((v91 >> 3) & 1) != 0 )
            {
              v277 = 1;
              *v93 = *(double *)v91 * *v94;
            }
            v95 = (v91 >> 3) & 1;
            v279 = v92 - ((v91 >> 3) & 1);
            v96 = v91 + v95 * 8;
            v97 = &v94[v95];
            v98 = 0;
            v99 = &v93[v95];
            v100 = v96;
            v101 = 0;
            do
            {
              ++v98;
              *(__m128d *)&v99[v101] = _mm_mul_pd(*(__m128d *)&v97[v101], *(__m128d *)(v100 + v101 * 8));
              v101 += 2;
            }
            while ( v98 < v279 >> 1 );
            v83 = 8 * v82;
            v102 = (v279 & 0xFFFFFFFE) + v277;
            if ( v279 != (v279 & 0xFFFFFFFE) )
            {
              v103 = v102;
              v104 = v102 + 1;
              v93[v103] = v94[v103] * *(double *)(v91 + 8 * v103);
              if ( v92 > v104 )
                v93[v104] = *(double *)(v91 + 8LL * v104) * v94[v104];
            }
          }
          else
          {
            v250 = 0;
            do
            {
              v93[v250 / 8] = *(double *)(v91 + v250) * v94[v250 / 8];
              v250 += 8LL;
            }
            while ( v250 != 8LL * (unsigned int)(v92 - 1) + 8 );
          }
        }
      }
      v105 = v260;
      a8[v81] = v90;
      a9[v81] = *((_DWORD *)this + 77);
      *((_DWORD *)this + 334) = v271;
      v106 = *((_DWORD *)this + 26);
      v107 = v106 + v92 == 0;
      v108 = v106 + v92;
      v109 = v107;
      if ( v260 != (__int64 *)v91 && !v107 )
      {
        if ( v108 >> 3 > 0 )
        {
          v110 = v91;
          v111 = (unsigned int)((v108 >> 3) - 1);
          do
          {
            v112 = *v105;
            v110 += 64LL;
            v105 += 8;
            *(_QWORD *)(v110 - 64) = v112;
            *(_QWORD *)(v110 - 56) = *(v105 - 7);
            *(_QWORD *)(v110 - 48) = *(v105 - 6);
            *(_QWORD *)(v110 - 40) = *(v105 - 5);
            *(_QWORD *)(v110 - 32) = *(v105 - 4);
            *(_QWORD *)(v110 - 24) = *(v105 - 3);
            *(_QWORD *)(v110 - 16) = *(v105 - 2);
            *(_QWORD *)(v110 - 8) = *(v105 - 1);
          }
          while ( v110 != v91 + ((v111 + 1) << 6) );
          v113 = ((int)v111 + 1LL) << 6;
          v105 = (__int64 *)((char *)v260 + v113);
          v91 += v113;
        }
        switch ( v108 % 8 )
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
            *(_QWORD *)(v91 + 48) = v105[6];
LABEL_137:
            *(_QWORD *)(v91 + 40) = v105[5];
LABEL_138:
            *(_QWORD *)(v91 + 32) = v105[4];
LABEL_139:
            *(_QWORD *)(v91 + 24) = v105[3];
LABEL_140:
            *(_QWORD *)(v91 + 16) = v105[2];
LABEL_141:
            *(_QWORD *)(v91 + 8) = v105[1];
LABEL_142:
            *(_QWORD *)v91 = *v105;
            break;
          default:
            break;
        }
      }
      v114 = *((_BYTE **)this + 33);
      if ( v114 != v32 && !v107 )
      {
        v115 = v108 >> 3;
        if ( v108 >> 3 <= 0 )
        {
          v123 = v32;
        }
        else
        {
          if ( (v114 >= v32 + 16 || v32 >= v114 + 16) && v115 > 1 )
          {
            v116 = 0;
            v117 = 0;
            do
            {
              ++v117;
              *(__m128i *)&v114[v116] = _mm_loadu_si128((const __m128i *)&v32[v116]);
              v116 += 16;
            }
            while ( v117 < v115 >> 1 );
            v118 = 8LL * (v115 & 0xFFFFFFFE);
            v119 = &v32[v118];
            v120 = &v114[v118];
            if ( v115 != (v115 & 0xFFFFFFFE) )
            {
              *v120 = *v119;
              v120[1] = v119[1];
              v120[2] = v119[2];
              v120[3] = v119[3];
              v120[4] = v119[4];
              v120[5] = v119[5];
              v120[6] = v119[6];
              v120[7] = v119[7];
            }
            v121 = v115 - 1;
          }
          else
          {
            v121 = v115 - 1;
            v244 = *((_QWORD *)this + 33);
            v245 = v32;
            do
            {
              v246 = *v245;
              v245 += 8;
              v244 += 8;
              *(_BYTE *)(v244 - 8) = v246;
              *(_BYTE *)(v244 - 7) = *(v245 - 7);
              *(_BYTE *)(v244 - 6) = *(v245 - 6);
              *(_BYTE *)(v244 - 5) = *(v245 - 5);
              *(_BYTE *)(v244 - 4) = *(v245 - 4);
              *(_BYTE *)(v244 - 3) = *(v245 - 3);
              *(_BYTE *)(v244 - 2) = *(v245 - 2);
              *(_BYTE *)(v244 - 1) = *(v245 - 1);
            }
            while ( &v32[8 * v121 + 8] != v245 );
          }
          v122 = 8LL * (int)v121 + 8;
          v123 = &v32[v122];
          v114 += v122;
        }
        switch ( v108 % 8 )
        {
          case 1:
            goto LABEL_161;
          case 2:
            goto LABEL_160;
          case 3:
            goto LABEL_159;
          case 4:
            goto LABEL_158;
          case 5:
            goto LABEL_157;
          case 6:
            goto LABEL_156;
          case 7:
            v114[6] = v123[6];
LABEL_156:
            v114[5] = v123[5];
LABEL_157:
            v114[4] = v123[4];
LABEL_158:
            v114[3] = v123[3];
LABEL_159:
            v114[2] = v123[2];
LABEL_160:
            v114[1] = v123[1];
LABEL_161:
            *v114 = *v123;
            break;
          default:
            break;
        }
        v106 = *((_DWORD *)this + 26);
        v108 = *((_DWORD *)this + 27) + v106;
        v109 = v108 == 0;
      }
      v124 = *((__int64 **)this + 123);
      v125 = v261;
      if ( v124 != v261 && !v109 )
      {
        if ( v108 >> 3 > 0 )
        {
          v126 = *((__int64 **)this + 123);
          v127 = (unsigned int)((v108 >> 3) - 1);
          do
          {
            v128 = *v125;
            v126 += 8;
            v125 += 8;
            *(v126 - 8) = v128;
            *(v126 - 7) = *(v125 - 7);
            *(v126 - 6) = *(v125 - 6);
            *(v126 - 5) = *(v125 - 5);
            *(v126 - 4) = *(v125 - 4);
            *(v126 - 3) = *(v125 - 3);
            *(v126 - 2) = *(v125 - 2);
            *(v126 - 1) = *(v125 - 1);
          }
          while ( v126 != &v124[8 * v127 + 8] );
          v129 = ((int)v127 + 1LL) << 6;
          v125 = (__int64 *)((char *)v261 + v129);
          v124 = (__int64 *)((char *)v124 + v129);
        }
        switch ( v108 % 8 )
        {
          case 1:
            goto LABEL_176;
          case 2:
            goto LABEL_175;
          case 3:
            goto LABEL_174;
          case 4:
            goto LABEL_173;
          case 5:
            goto LABEL_172;
          case 6:
            goto LABEL_171;
          case 7:
            v124[6] = v125[6];
LABEL_171:
            v124[5] = v125[5];
LABEL_172:
            v124[4] = v125[4];
LABEL_173:
            v124[3] = v125[3];
LABEL_174:
            v124[2] = v125[2];
LABEL_175:
            v124[1] = v125[1];
LABEL_176:
            *v124 = *v125;
            break;
          default:
            break;
        }
      }
      v130 = v262;
      v131 = *((__int64 **)this + 126);
      v132 = v262;
      if ( v131 != v262 && !v109 )
      {
        if ( v108 >> 3 > 0 )
        {
          v133 = *((_QWORD *)this + 126);
          v134 = (unsigned int)((v108 >> 3) - 1);
          do
          {
            v135 = *v130;
            v130 += 8;
            v133 += 64;
            *(_QWORD *)(v133 - 64) = v135;
            *(_QWORD *)(v133 - 56) = *(v130 - 7);
            *(_QWORD *)(v133 - 48) = *(v130 - 6);
            *(_QWORD *)(v133 - 40) = *(v130 - 5);
            *(_QWORD *)(v133 - 32) = *(v130 - 4);
            *(_QWORD *)(v133 - 24) = *(v130 - 3);
            *(_QWORD *)(v133 - 16) = *(v130 - 2);
            *(_QWORD *)(v133 - 8) = *(v130 - 1);
          }
          while ( v130 != &v262[8 * v134 + 8] );
          v136 = ((int)v134 + 1LL) << 6;
          v132 = (__int64 *)((char *)v262 + v136);
          v131 = (__int64 *)((char *)v131 + v136);
        }
        switch ( v108 % 8 )
        {
          case 1:
            goto LABEL_190;
          case 2:
            goto LABEL_189;
          case 3:
            goto LABEL_188;
          case 4:
            goto LABEL_187;
          case 5:
            goto LABEL_186;
          case 6:
            goto LABEL_185;
          case 7:
            v131[6] = v132[6];
LABEL_185:
            v131[5] = v132[5];
LABEL_186:
            v131[4] = v132[4];
LABEL_187:
            v131[3] = v132[3];
LABEL_188:
            v131[2] = v132[2];
LABEL_189:
            v131[1] = v132[1];
LABEL_190:
            *v131 = *v132;
            break;
          default:
            break;
        }
      }
      v137 = *((__int64 **)this + 129);
      v138 = v263;
      if ( v137 != v263 && !v109 )
      {
        if ( v108 >> 3 > 0 )
        {
          v139 = *((_QWORD *)this + 129);
          v140 = (unsigned int)((v108 >> 3) - 1);
          do
          {
            v141 = *v138;
            v138 += 8;
            v139 += 64;
            *(_QWORD *)(v139 - 64) = v141;
            *(_QWORD *)(v139 - 56) = *(v138 - 7);
            *(_QWORD *)(v139 - 48) = *(v138 - 6);
            *(_QWORD *)(v139 - 40) = *(v138 - 5);
            *(_QWORD *)(v139 - 32) = *(v138 - 4);
            *(_QWORD *)(v139 - 24) = *(v138 - 3);
            *(_QWORD *)(v139 - 16) = *(v138 - 2);
            *(_QWORD *)(v139 - 8) = *(v138 - 1);
          }
          while ( &v263[8 * v140 + 8] != v138 );
          v142 = ((int)v140 + 1LL) << 6;
          v138 = (__int64 *)((char *)v263 + v142);
          v137 = (__int64 *)((char *)v137 + v142);
        }
        switch ( v108 % 8 )
        {
          case 1:
            goto LABEL_204;
          case 2:
            goto LABEL_203;
          case 3:
            goto LABEL_202;
          case 4:
            goto LABEL_201;
          case 5:
            goto LABEL_200;
          case 6:
            goto LABEL_199;
          case 7:
            v137[6] = v138[6];
LABEL_199:
            v137[5] = v138[5];
LABEL_200:
            v137[4] = v138[4];
LABEL_201:
            v137[3] = v138[3];
LABEL_202:
            v137[2] = v138[2];
LABEL_203:
            v137[1] = v138[1];
LABEL_204:
            *v137 = *v138;
            break;
          default:
            break;
        }
      }
      *(double *)(*((_QWORD *)this + 23) + 8 * v82) = v272;
      v143 = *((__m128i **)this + 157);
      if ( v106 )
      {
        v144 = v265;
        if ( v143 != v265 )
        {
          v145 = v106 >> 3;
          if ( v106 >> 3 > 0 )
          {
            if ( (v143 >= &v265[2] || v265 >= &v143[2]) && v145 > 1 )
            {
              v146 = v265;
              v147 = *((_QWORD *)this + 157);
              v148 = v145 - 1;
              do
              {
                v149 = _mm_loadu_si128(v146);
                v146 += 2;
                v147 += 32;
                v150 = _mm_loadu_si128(v146 - 1);
                *(__m128i *)(v147 - 32) = v149;
                *(__m128i *)(v147 - 16) = v150;
              }
              while ( v146 != &v265[2 * v148 + 2] );
            }
            else
            {
              v241 = v265;
              v242 = *((_QWORD *)this + 157);
              v148 = v145 - 1;
              do
              {
                v243 = v241->m128i_i32[0];
                v241 += 2;
                v242 += 32;
                *(_DWORD *)(v242 - 32) = v243;
                *(_DWORD *)(v242 - 28) = v241[-2].m128i_i32[1];
                *(_DWORD *)(v242 - 24) = v241[-2].m128i_i32[2];
                *(_DWORD *)(v242 - 20) = v241[-2].m128i_i32[3];
                *(_DWORD *)(v242 - 16) = v241[-1].m128i_i32[0];
                *(_DWORD *)(v242 - 12) = v241[-1].m128i_i32[1];
                *(_DWORD *)(v242 - 8) = v241[-1].m128i_i32[2];
                *(_DWORD *)(v242 - 4) = v241[-1].m128i_i32[3];
              }
              while ( &v265[2 * v148 + 2] != v241 );
            }
            v151 = 2 * ((int)v148 + 1LL);
            v143 = (__m128i *)((char *)v143 + v151 * 16);
            v144 = &v265[v151];
          }
          switch ( v106 % 8 )
          {
            case 1:
              goto LABEL_220;
            case 2:
              goto LABEL_219;
            case 3:
              goto LABEL_218;
            case 4:
              goto LABEL_217;
            case 5:
              goto LABEL_216;
            case 6:
              goto LABEL_215;
            case 7:
              v143[1].m128i_i32[2] = v144[1].m128i_i32[2];
LABEL_215:
              v143[1].m128i_i32[1] = v144[1].m128i_i32[1];
LABEL_216:
              v143[1].m128i_i32[0] = v144[1].m128i_i32[0];
LABEL_217:
              v143->m128i_i32[3] = v144->m128i_i32[3];
LABEL_218:
              v143->m128i_i32[2] = v144->m128i_i32[2];
LABEL_219:
              v143->m128i_i32[1] = v144->m128i_i32[1];
LABEL_220:
              v143->m128i_i32[0] = v144->m128i_i32[0];
              break;
            default:
              break;
          }
        }
      }
      ClpSimplex::setFactorization(this, (ClpFactorization *)v283);
      a5[v81 / 2] = v267;
      v152 = (double *)(v83 + *((_QWORD *)this + 22));
      v153 = *v152;
      *v152 = a4[v81 / 2];
      v273 = v153;
      v154 = *((double *)this + 12);
      v155 = (double *)(v83 + *((_QWORD *)this + 123));
      if ( *((int *)this + 64) <= 0 )
        *v155 = v154 * a4[v81 / 2];
      else
        *v155 = *(double *)(*((_QWORD *)this + 31) + 8 * v82) * a4[v81 / 2] * v154;
      v156 = ClpSimplexDual::fastDual(this, a11);
      v157 = *((_DWORD *)this + 80);
      if ( v157 == 10 )
      {
        v224 = *((double *)this + 9);
        *((_DWORD *)this + 80) = 3;
        v268 = fmax(v224, v15);
LABEL_348:
        v158 = 2;
LABEL_231:
        v269 = v268 - v15;
        goto LABEL_232;
      }
      v268 = fmax(*((double *)this + 9), v15);
      if ( v156 )
      {
        if ( v157 == 3 )
          goto LABEL_348;
        ClpSimplex::checkPrimalSolution(this, *((const double **)this + 151), *((const double **)this + 152));
        if ( *((_DWORD *)this + 308) || *((double *)this + 1) <= v268 )
        {
          v158 = *((_DWORD *)this + 80);
          if ( v158 == 3 )
            goto LABEL_348;
          if ( v158 )
            goto LABEL_231;
        }
        else
        {
          *((_DWORD *)this + 80) = 0;
        }
      }
      else
      {
        if ( v157 == 3 )
          goto LABEL_348;
        if ( v157 )
          goto LABEL_358;
      }
      if ( !(unsigned __int8)ClpModel::isDualObjectiveLimitReached(this) )
      {
        v158 = 0;
        goto LABEL_231;
      }
LABEL_358:
      v158 = 1;
      v269 = 1.0e100;
LABEL_232:
      v159 = *((_QWORD *)this + 150);
      v160 = *((_DWORD *)this + 27);
      if ( a6 )
      {
        v161 = a6[v81 + 1];
        if ( *((int *)this + 64) <= 0 )
        {
          if ( v160 && (double *)v159 != v161 )
          {
            if ( v160 >> 3 <= 0 )
            {
              v237 = *((double **)this + 150);
            }
            else
            {
              v232 = a6[v81 + 1];
              v233 = *((double **)this + 150);
              v234 = (unsigned int)((v160 >> 3) - 1);
              do
              {
                v235 = *v233;
                v233 += 8;
                v232 += 8;
                *(v232 - 8) = v235;
                *(v232 - 7) = *(v233 - 7);
                *(v232 - 6) = *(v233 - 6);
                *(v232 - 5) = *(v233 - 5);
                *(v232 - 4) = *(v233 - 4);
                *(v232 - 3) = *(v233 - 3);
                *(v232 - 2) = *(v233 - 2);
                *(v232 - 1) = *(v233 - 1);
              }
              while ( (double *)(v159 + ((v234 + 1) << 6)) != v233 );
              v236 = ((int)v234 + 1LL) << 6;
              v237 = (double *)(v159 + v236);
              v161 = (double *)((char *)v161 + v236);
            }
            switch ( v160 % 8 )
            {
              case 1:
                goto LABEL_386;
              case 2:
                goto LABEL_385;
              case 3:
                goto LABEL_384;
              case 4:
                goto LABEL_383;
              case 5:
                goto LABEL_382;
              case 6:
                goto LABEL_381;
              case 7:
                v161[6] = v237[6];
LABEL_381:
                v161[5] = v237[5];
LABEL_382:
                v161[4] = v237[4];
LABEL_383:
                v161[3] = v237[3];
LABEL_384:
                v161[2] = v237[2];
LABEL_385:
                v161[1] = v237[1];
LABEL_386:
                *v161 = *v237;
                break;
              default:
                break;
            }
          }
        }
        else if ( v160 > 0 )
        {
          v162 = *((double **)this + 29);
          if ( (v161 + 2 <= v162 || v161 >= v162 + 2)
            && ((unsigned __int64)(v161 + 2) <= v159 || (unsigned __int64)v161 >= v159 + 16)
            && (unsigned int)v160 > 0xE )
          {
            v278 = 0;
            v163 = (v159 >> 3) & 1;
            if ( ((v159 >> 3) & 1) != 0 )
            {
              v278 = 1;
              *v161 = *(double *)v159 * *v162;
            }
            v281 = v160;
            v164 = 0;
            v280 = v160 - v163;
            v165 = (unsigned int)(v160 - v163) >> 1;
            v166 = (v159 >> 3) & 1;
            v167 = v165;
            v168 = v159 + v166 * 8;
            v169 = &v162[v166];
            v170 = 0;
            v171 = &v161[v166];
            do
            {
              ++v170;
              *(__m128d *)&v171[v164] = _mm_mul_pd(*(__m128d *)&v169[v164], *(__m128d *)(v168 + v164 * 8));
              v164 += 2;
            }
            while ( v170 < v167 );
            v160 = v281;
            v172 = (v280 & 0xFFFFFFFE) + v278;
            if ( v280 != (v280 & 0xFFFFFFFE) )
            {
              v173 = v172;
              v174 = v172 + 1;
              v161[v173] = *(double *)(v159 + 8 * v173) * v162[v173];
              if ( v281 > v174 )
                v161[v174] = v162[v174] * *(double *)(v159 + 8LL * v174);
            }
          }
          else
          {
            v251 = 0;
            do
            {
              v161[v251 / 8] = v162[v251 / 8] * *(double *)(v159 + v251);
              v251 += 8LL;
            }
            while ( 8LL * (unsigned int)(v160 - 1) + 8 != v251 );
          }
        }
      }
      v175 = v260;
      a8[v81 + 1] = v158;
      a9[v81 + 1] = *((_DWORD *)this + 77);
      *((_DWORD *)this + 334) = v271;
      v176 = *((_DWORD *)this + 26);
      v177 = v176 + v160 == 0;
      v178 = v176 + v160;
      v179 = v177;
      if ( v260 != (__int64 *)v159 && !v177 )
      {
        if ( v178 >> 3 > 0 )
        {
          v180 = v159;
          v181 = (unsigned int)((v178 >> 3) - 1);
          do
          {
            v182 = *v175;
            v180 += 64LL;
            v175 += 8;
            *(_QWORD *)(v180 - 64) = v182;
            *(_QWORD *)(v180 - 56) = *(v175 - 7);
            *(_QWORD *)(v180 - 48) = *(v175 - 6);
            *(_QWORD *)(v180 - 40) = *(v175 - 5);
            *(_QWORD *)(v180 - 32) = *(v175 - 4);
            *(_QWORD *)(v180 - 24) = *(v175 - 3);
            *(_QWORD *)(v180 - 16) = *(v175 - 2);
            *(_QWORD *)(v180 - 8) = *(v175 - 1);
          }
          while ( v159 + ((v181 + 1) << 6) != v180 );
          v183 = ((int)v181 + 1LL) << 6;
          v175 = (__int64 *)((char *)v260 + v183);
          v159 += v183;
        }
        switch ( v178 % 8 )
        {
          case 1:
            goto LABEL_257;
          case 2:
            goto LABEL_256;
          case 3:
            goto LABEL_255;
          case 4:
            goto LABEL_254;
          case 5:
            goto LABEL_253;
          case 6:
            goto LABEL_252;
          case 7:
            *(_QWORD *)(v159 + 48) = v175[6];
LABEL_252:
            *(_QWORD *)(v159 + 40) = v175[5];
LABEL_253:
            *(_QWORD *)(v159 + 32) = v175[4];
LABEL_254:
            *(_QWORD *)(v159 + 24) = v175[3];
LABEL_255:
            *(_QWORD *)(v159 + 16) = v175[2];
LABEL_256:
            *(_QWORD *)(v159 + 8) = v175[1];
LABEL_257:
            *(_QWORD *)v159 = *v175;
            break;
          default:
            break;
        }
      }
      v184 = *((_BYTE **)this + 33);
      if ( v184 != v32 && !v177 )
      {
        v185 = v178 >> 3;
        if ( v178 >> 3 <= 0 )
        {
          v193 = v32;
        }
        else
        {
          if ( (v32 >= v184 + 16 || v184 >= v32 + 16) && v185 > 1 )
          {
            v186 = 0;
            v187 = 0;
            do
            {
              ++v187;
              *(__m128i *)&v184[v186] = _mm_loadu_si128((const __m128i *)&v32[v186]);
              v186 += 16;
            }
            while ( v187 < v185 >> 1 );
            v188 = 8LL * (v185 & 0xFFFFFFFE);
            v189 = &v32[v188];
            v190 = &v184[v188];
            if ( v185 != (v185 & 0xFFFFFFFE) )
            {
              *v190 = *v189;
              v190[1] = v189[1];
              v190[2] = v189[2];
              v190[3] = v189[3];
              v190[4] = v189[4];
              v190[5] = v189[5];
              v190[6] = v189[6];
              v190[7] = v189[7];
            }
            v191 = v185 - 1;
          }
          else
          {
            v191 = v185 - 1;
            v238 = v32;
            v239 = *((_BYTE **)this + 33);
            do
            {
              v240 = *v238;
              v239 += 8;
              v238 += 8;
              *(v239 - 8) = v240;
              *(v239 - 7) = *(v238 - 7);
              *(v239 - 6) = *(v238 - 6);
              *(v239 - 5) = *(v238 - 5);
              *(v239 - 4) = *(v238 - 4);
              *(v239 - 3) = *(v238 - 3);
              *(v239 - 2) = *(v238 - 2);
              *(v239 - 1) = *(v238 - 1);
            }
            while ( &v184[8 * v191 + 8] != v239 );
          }
          v192 = 8LL * v191 + 8;
          v193 = &v32[v192];
          v184 += v192;
        }
        switch ( v178 % 8 )
        {
          case 1:
            goto LABEL_276;
          case 2:
            goto LABEL_275;
          case 3:
            goto LABEL_274;
          case 4:
            goto LABEL_273;
          case 5:
            goto LABEL_272;
          case 6:
            goto LABEL_271;
          case 7:
            v184[6] = v193[6];
LABEL_271:
            v184[5] = v193[5];
LABEL_272:
            v184[4] = v193[4];
LABEL_273:
            v184[3] = v193[3];
LABEL_274:
            v184[2] = v193[2];
LABEL_275:
            v184[1] = v193[1];
LABEL_276:
            *v184 = *v193;
            break;
          default:
            break;
        }
        v176 = *((_DWORD *)this + 26);
        v178 = *((_DWORD *)this + 27) + v176;
        v179 = v178 == 0;
      }
      v194 = v261;
      v195 = *((__int64 **)this + 123);
      v196 = v261;
      if ( v195 != v261 && !v179 )
      {
        if ( v178 >> 3 > 0 )
        {
          v197 = *((_QWORD *)this + 123);
          v198 = (unsigned int)((v178 >> 3) - 1);
          do
          {
            v199 = *v194;
            v194 += 8;
            v197 += 64;
            *(_QWORD *)(v197 - 64) = v199;
            *(_QWORD *)(v197 - 56) = *(v194 - 7);
            *(_QWORD *)(v197 - 48) = *(v194 - 6);
            *(_QWORD *)(v197 - 40) = *(v194 - 5);
            *(_QWORD *)(v197 - 32) = *(v194 - 4);
            *(_QWORD *)(v197 - 24) = *(v194 - 3);
            *(_QWORD *)(v197 - 16) = *(v194 - 2);
            *(_QWORD *)(v197 - 8) = *(v194 - 1);
          }
          while ( &v261[8 * v198 + 8] != v194 );
          v200 = ((int)v198 + 1LL) << 6;
          v196 = (__int64 *)((char *)v261 + v200);
          v195 = (__int64 *)((char *)v195 + v200);
        }
        switch ( v178 % 8 )
        {
          case 1:
            goto LABEL_291;
          case 2:
            goto LABEL_290;
          case 3:
            goto LABEL_289;
          case 4:
            goto LABEL_288;
          case 5:
            goto LABEL_287;
          case 6:
            goto LABEL_286;
          case 7:
            v195[6] = v196[6];
LABEL_286:
            v195[5] = v196[5];
LABEL_287:
            v195[4] = v196[4];
LABEL_288:
            v195[3] = v196[3];
LABEL_289:
            v195[2] = v196[2];
LABEL_290:
            v195[1] = v196[1];
LABEL_291:
            *v195 = *v196;
            break;
          default:
            break;
        }
      }
      v201 = *((__int64 **)this + 126);
      v202 = v262;
      if ( v201 != v262 && !v179 )
      {
        if ( v178 >> 3 > 0 )
        {
          v203 = *((__int64 **)this + 126);
          v204 = (unsigned int)((v178 >> 3) - 1);
          do
          {
            v205 = *v202;
            v203 += 8;
            v202 += 8;
            *(v203 - 8) = v205;
            *(v203 - 7) = *(v202 - 7);
            *(v203 - 6) = *(v202 - 6);
            *(v203 - 5) = *(v202 - 5);
            *(v203 - 4) = *(v202 - 4);
            *(v203 - 3) = *(v202 - 3);
            *(v203 - 2) = *(v202 - 2);
            *(v203 - 1) = *(v202 - 1);
          }
          while ( &v201[8 * v204 + 8] != v203 );
          v206 = ((int)v204 + 1LL) << 6;
          v202 = (__int64 *)((char *)v262 + v206);
          v201 = (__int64 *)((char *)v201 + v206);
        }
        switch ( v178 % 8 )
        {
          case 1:
            goto LABEL_305;
          case 2:
            goto LABEL_304;
          case 3:
            goto LABEL_303;
          case 4:
            goto LABEL_302;
          case 5:
            goto LABEL_301;
          case 6:
            goto LABEL_300;
          case 7:
            v201[6] = v202[6];
LABEL_300:
            v201[5] = v202[5];
LABEL_301:
            v201[4] = v202[4];
LABEL_302:
            v201[3] = v202[3];
LABEL_303:
            v201[2] = v202[2];
LABEL_304:
            v201[1] = v202[1];
LABEL_305:
            *v201 = *v202;
            break;
          default:
            break;
        }
      }
      v207 = *((__int64 **)this + 129);
      v208 = v263;
      if ( v207 != v263 && !v179 )
      {
        if ( v178 >> 3 <= 0 )
        {
          v213 = v263;
        }
        else
        {
          v209 = *((__int64 **)this + 129);
          v210 = (unsigned int)((v178 >> 3) - 1);
          do
          {
            v211 = *v208;
            v209 += 8;
            v208 += 8;
            *(v209 - 8) = v211;
            *(v209 - 7) = *(v208 - 7);
            *(v209 - 6) = *(v208 - 6);
            *(v209 - 5) = *(v208 - 5);
            *(v209 - 4) = *(v208 - 4);
            *(v209 - 3) = *(v208 - 3);
            *(v209 - 2) = *(v208 - 2);
            *(v209 - 1) = *(v208 - 1);
          }
          while ( v209 != &v207[8 * v210 + 8] );
          v212 = ((int)v210 + 1LL) << 6;
          v213 = (__int64 *)((char *)v263 + v212);
          v207 = (__int64 *)((char *)v207 + v212);
        }
        switch ( v178 % 8 )
        {
          case 1:
            goto LABEL_319;
          case 2:
            goto LABEL_318;
          case 3:
            goto LABEL_317;
          case 4:
            goto LABEL_316;
          case 5:
            goto LABEL_315;
          case 6:
            goto LABEL_314;
          case 7:
            v207[6] = v213[6];
LABEL_314:
            v207[5] = v213[5];
LABEL_315:
            v207[4] = v213[4];
LABEL_316:
            v207[3] = v213[3];
LABEL_317:
            v207[2] = v213[2];
LABEL_318:
            v207[1] = v213[1];
LABEL_319:
            *v207 = *v213;
            break;
          default:
            break;
        }
      }
      *(double *)(*((_QWORD *)this + 22) + 8 * v82) = v273;
      v214 = *((__m128i **)this + 157);
      if ( v176 && v214 != v265 )
      {
        v215 = v176 >> 3;
        if ( v176 >> 3 <= 0 )
        {
          v222 = v265;
        }
        else
        {
          if ( (v265 >= &v214[2] || v214 >= &v265[2]) && v215 > 1 )
          {
            v216 = *((__m128i **)this + 157);
            v217 = v265;
            v218 = v215 - 1;
            do
            {
              v219 = _mm_loadu_si128(v217);
              v216 += 2;
              v217 += 2;
              v220 = _mm_loadu_si128(v217 - 1);
              v216[-2] = v219;
              v216[-1] = v220;
            }
            while ( &v214[2 * v218 + 2] != v216 );
          }
          else
          {
            v247 = v265;
            v248 = *((__m128i **)this + 157);
            v218 = v215 - 1;
            do
            {
              v249 = v247->m128i_i32[0];
              v248 += 2;
              v247 += 2;
              v248[-2].m128i_i32[0] = v249;
              v248[-2].m128i_i32[1] = v247[-2].m128i_i32[1];
              v248[-2].m128i_i32[2] = v247[-2].m128i_i32[2];
              v248[-2].m128i_i32[3] = v247[-2].m128i_i32[3];
              v248[-1].m128i_i32[0] = v247[-1].m128i_i32[0];
              v248[-1].m128i_i32[1] = v247[-1].m128i_i32[1];
              v248[-1].m128i_i32[2] = v247[-1].m128i_i32[2];
              v248[-1].m128i_i32[3] = v247[-1].m128i_i32[3];
            }
            while ( v248 != &v214[2 * v218 + 2] );
          }
          v221 = 2 * ((int)v218 + 1LL);
          v214 = (__m128i *)((char *)v214 + v221 * 16);
          v222 = &v265[v221];
        }
        switch ( v176 % 8 )
        {
          case 1:
            goto LABEL_335;
          case 2:
            goto LABEL_334;
          case 3:
            goto LABEL_333;
          case 4:
            goto LABEL_332;
          case 5:
            goto LABEL_331;
          case 6:
            goto LABEL_330;
          case 7:
            v214[1].m128i_i32[2] = v222[1].m128i_i32[2];
LABEL_330:
            v214[1].m128i_i32[1] = v222[1].m128i_i32[1];
LABEL_331:
            v214[1].m128i_i32[0] = v222[1].m128i_i32[0];
LABEL_332:
            v214->m128i_i32[3] = v222->m128i_i32[3];
LABEL_333:
            v214->m128i_i32[2] = v222->m128i_i32[2];
LABEL_334:
            v214->m128i_i32[1] = v222->m128i_i32[1];
LABEL_335:
            v214->m128i_i32[0] = v222->m128i_i32[0];
            break;
          default:
            break;
        }
      }
      ClpSimplex::setFactorization(this, (ClpFactorization *)v283);
      a4[v81 / 2] = v269;
      if ( a5[v81 / 2] >= 1.0e100 )
      {
        if ( v269 >= 1.0e100 )
        {
          v276 = -1;
          goto LABEL_339;
        }
LABEL_338:
        v276 = 1;
        if ( a10 )
          goto LABEL_339;
        goto LABEL_343;
      }
      if ( v269 >= 1.0e100 )
        goto LABEL_338;
LABEL_343:
      v81 += 2LL;
      if ( v275 == v81 )
        goto LABEL_339;
    }
  }
  v276 = 0;
LABEL_339:
  operator delete[](v260);
  operator delete[](v261);
  operator delete[](v262);
  operator delete[](v263);
  operator delete[](v32);
  operator delete[](v265);
  if ( (a12 & 1) != 0 )
  {
    ClpSimplex::deleteRim(this, 0);
    *((_DWORD *)this + 79) = 0x3FFFFFF;
  }
  else
  {
    ClpSimplex::deleteRim(this, 1);
    *((_DWORD *)this + 79) &= 0xFFFF0000;
  }
  *((double *)this + 9) = v15;
  ClpFactorization::~ClpFactorization((ClpFactorization *)v283);
  return v276;
}

