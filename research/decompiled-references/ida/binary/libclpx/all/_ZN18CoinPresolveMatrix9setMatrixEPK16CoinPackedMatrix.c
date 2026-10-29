__int64 __fastcall CoinPresolveMatrix::setMatrix(
        CoinPresolveMatrix *this,
        const CoinPackedMatrix *a2,
        double a3,
        __m128 a4,
        double a5,
        double a6,
        double a7,
        double a8,
        double a9,
        double a10)
{
  int v10; // ebp
  int v11; // edx
  bool v14; // zf
  __m128i v15; // xmm0
  int v16; // ecx
  unsigned __int64 v17; // r12
  unsigned __int64 v18; // r15
  __int64 v19; // r10
  _DWORD *v20; // rsi
  int v21; // edi
  unsigned int v22; // ecx
  unsigned __int64 v23; // rax
  const __m128i *v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rax
  _DWORD *v27; // rax
  unsigned __int64 v28; // r13
  unsigned int v29; // esi
  __int64 v30; // rax
  const __m128i *v31; // rdx
  __int64 v32; // rsi
  __int64 v33; // rax
  _DWORD *v34; // rdx
  _DWORD *v35; // rax
  __int64 v36; // rax
  __int64 v37; // r14
  __int64 v38; // r11
  __int64 v39; // rbp
  __int64 v40; // r13
  __int64 v41; // rsi
  int v42; // ecx
  __int64 *v43; // r10
  __int64 *v44; // rdi
  __int64 v45; // rdx
  __int64 *v46; // rax
  __int64 v47; // r9
  __int64 v48; // xmm0_8
  __int64 v49; // r9
  __int64 v50; // rsi
  int *v51; // rax
  int *v52; // rdx
  unsigned int v53; // edi
  __int64 v54; // rsi
  __int64 v55; // rdi
  __int64 v56; // rdi
  __int64 v57; // rcx
  int v58; // esi
  int v59; // eax
  __int64 v60; // r8
  __int64 v61; // rdi
  int v62; // esi
  __int64 v63; // rdx
  int *v64; // rax
  __int64 v65; // rsi
  __int64 v66; // rdx
  int v67; // edx
  __int64 v68; // rsi
  __int64 v69; // rdi
  __int64 v70; // rax
  int v71; // edx
  int v72; // r8d
  int v73; // edx
  __int64 v74; // r14
  __int64 v75; // rax
  __int64 v76; // r12
  int v77; // edx
  int v78; // r8d
  __int64 v79; // rax
  __int64 v80; // rcx
  __int64 v81; // rax
  __int64 v82; // rsi
  __int64 v83; // rbp
  __int64 v84; // r11
  __int64 v85; // rdx
  __int64 v86; // rsi
  __int64 v87; // r10
  __int64 v88; // r9
  __int64 v89; // rax
  _DWORD *v90; // rcx
  _DWORD *v91; // rdx
  int v92; // eax
  _DWORD *v93; // rdx
  int v94; // eax
  __int64 v95; // rsi
  double v96; // xmm4_8
  double v97; // xmm5_8
  _BYTE *v98; // rax
  int v99; // edx
  _BYTE *v100; // rax
  int v101; // edx
  unsigned __int64 v102; // rdi
  __int64 v103; // rax
  unsigned __int64 v104; // rdi
  __int64 v105; // rax
  unsigned __int64 v106; // rdi
  __int64 v107; // rax
  unsigned __int64 v108; // rdi
  __int64 v109; // rax
  int *v111; // rsi
  int *v112; // r8
  int v113; // r10d
  unsigned __int64 v114; // rax
  __int64 v115; // rax
  int v116; // edx
  __int64 v117; // rax
  int v118; // edx
  __int64 v119; // rdx
  unsigned int v120; // edi
  _BYTE *v121; // rsi
  unsigned int v122; // ecx
  _QWORD *v123; // rcx
  unsigned int v124; // edi
  _BYTE *v125; // rsi
  unsigned int v126; // ecx
  _QWORD *v127; // rcx
  unsigned __int64 v128; // rax
  __int64 v129; // rax
  unsigned __int64 v130; // rax
  unsigned __int64 v131; // rax
  __int64 v132; // rax
  unsigned __int64 v133; // rax
  __int64 v134; // rax
  unsigned __int64 v135; // rax
  __int64 v136; // rax
  unsigned __int64 v137; // rax
  __int64 v138; // rax
  unsigned __int64 v139; // rax
  unsigned __int64 v140; // rax
  unsigned __int64 v141; // rax
  unsigned __int64 v142; // rax
  unsigned __int64 v143; // rax
  int *v144; // rdx
  int v145; // r8d
  __int64 v146; // rax
  int *v147; // rdx
  int v148; // edi
  void *exception; // r13
  __int64 v150; // [rsp+0h] [rbp-88h]
  __int64 v151; // [rsp+0h] [rbp-88h]
  __int64 v152; // [rsp+8h] [rbp-80h]
  __int64 v153; // [rsp+8h] [rbp-80h]
  unsigned __int64 v154; // [rsp+10h] [rbp-78h]
  __int64 v155; // [rsp+30h] [rbp-58h]
  __int64 v156; // [rsp+38h] [rbp-50h]
  __int64 v157; // [rsp+40h] [rbp-48h]

  if ( !*((_BYTE *)a2 + 8) || (v10 = *((_DWORD *)a2 + 16), v11 = *((_DWORD *)this + 3), v11 < v10) )
  {
    exception = __cxa_allocate_exception(0x30u);
    std::string::string();
    std::string::string();
    std::string::string();
    CoinError::CoinError();
    if ( (_UNKNOWN *)(v155 - 24) != &std::string::_Rep::_S_empty_rep_storage )
      sub_2576C0(v155 - 24);
    if ( (_UNKNOWN *)(v156 - 24) != &std::string::_Rep::_S_empty_rep_storage )
      sub_2576C0(v156 - 24);
    if ( (_UNKNOWN *)(v157 - 24) != &std::string::_Rep::_S_empty_rep_storage )
      sub_2576C0(v157 - 24);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'CoinError, (void (*)(void *))CoinError::~CoinError);
  }
  *(_DWORD *)this = v10;
  v14 = *((_QWORD *)this + 5) == 0;
  *(double *)v15.m128i_i64 = (double)*((int *)this + 5) * *((double *)this + 4);
  *((_DWORD *)this + 1) = *((_DWORD *)a2 + 17);
  *((_DWORD *)this + 2) = *((_DWORD *)a2 + 18);
  *((_DWORD *)this + 6) = (int)*(double *)v15.m128i_i64;
  if ( v14 )
  {
    if ( (unsigned __int64)(v11 + 1) > 0x1FFFFFFFFFFFFFFELL )
      goto LABEL_150;
    v132 = operator new[](4LL * (v11 + 1));
    v14 = *((_QWORD *)this + 6) == 0;
    *((_QWORD *)this + 5) = v132;
    if ( !v14 )
    {
LABEL_5:
      if ( *((_QWORD *)this + 7) )
        goto LABEL_6;
      goto LABEL_177;
    }
  }
  else if ( *((_QWORD *)this + 6) )
  {
    goto LABEL_5;
  }
  v133 = *((_DWORD *)this + 3) + 1;
  if ( v133 > 0x1FFFFFFFFFFFFFFELL )
    goto LABEL_150;
  v134 = operator new[](4 * v133);
  v14 = *((_QWORD *)this + 7) == 0;
  *((_QWORD *)this + 6) = v134;
  if ( !v14 )
  {
LABEL_6:
    if ( *((_QWORD *)this + 8) )
      goto LABEL_7;
LABEL_179:
    v137 = *((int *)this + 6);
    if ( v137 > 0xFFFFFFFFFFFFFFFLL )
      goto LABEL_150;
    v138 = operator new[](8 * v137);
    v14 = *((_QWORD *)this + 35) == 0;
    *((_QWORD *)this + 8) = v138;
    if ( !v14 )
      goto LABEL_8;
    goto LABEL_181;
  }
LABEL_177:
  v135 = *((int *)this + 6);
  if ( v135 > 0x1FFFFFFFFFFFFFFELL )
    goto LABEL_150;
  v136 = operator new[](4 * v135);
  v14 = *((_QWORD *)this + 8) == 0;
  *((_QWORD *)this + 7) = v136;
  if ( v14 )
    goto LABEL_179;
LABEL_7:
  if ( *((_QWORD *)this + 35) )
    goto LABEL_8;
LABEL_181:
  v139 = *((_DWORD *)this + 4) + 1;
  if ( v139 > 0x1FFFFFFFFFFFFFFELL )
    goto LABEL_150;
  *((_QWORD *)this + 35) = operator new[](4 * v139);
LABEL_8:
  if ( !*((_QWORD *)this + 36) )
  {
    v131 = *((_DWORD *)this + 4) + 1;
    if ( v131 > 0x1FFFFFFFFFFFFFFELL )
      goto LABEL_150;
    *((_QWORD *)this + 36) = operator new[](4 * v131);
  }
  if ( *((_QWORD *)this + 38) )
  {
    if ( *((_QWORD *)this + 37) )
      goto LABEL_11;
  }
  else
  {
    v128 = *((int *)this + 6);
    if ( v128 > 0x1FFFFFFFFFFFFFFELL )
      goto LABEL_150;
    v129 = operator new[](4 * v128);
    v14 = *((_QWORD *)this + 37) == 0;
    *((_QWORD *)this + 38) = v129;
    if ( !v14 )
      goto LABEL_11;
  }
  v130 = *((int *)this + 6);
  if ( v130 > 0xFFFFFFFFFFFFFFFLL )
    goto LABEL_150;
  *((_QWORD *)this + 37) = operator new[](8 * v130);
LABEL_11:
  v16 = *((_DWORD *)a2 + 16);
  v17 = *((_QWORD *)a2 + 7);
  v18 = *((_QWORD *)this + 5);
  v150 = *((_QWORD *)a2 + 4);
  v19 = *((_QWORD *)a2 + 5);
  if ( v16 > 0 )
  {
    v20 = *((_DWORD **)a2 + 6);
    v21 = v16 + 1;
    if ( (_DWORD *)v18 != v20 )
    {
      v22 = v21 >> 3;
      if ( v21 >> 3 <= 0 )
      {
        v27 = (_DWORD *)v18;
      }
      else
      {
        if ( ((unsigned __int64)v20 >= v18 + 32 || v18 >= (unsigned __int64)(v20 + 8)) && v22 > 1 )
        {
          v23 = v18;
          v24 = *((const __m128i **)a2 + 6);
          v25 = v22 - 1;
          do
          {
            a4 = (__m128)_mm_loadu_si128(v24);
            v23 += 32LL;
            v24 += 2;
            v15 = _mm_loadu_si128(v24 - 1);
            *(__m128 *)(v23 - 32) = a4;
            *(__m128i *)(v23 - 16) = v15;
          }
          while ( v18 + 32 + 32 * v25 != v23 );
        }
        else
        {
          v143 = v18;
          v144 = *((int **)a2 + 6);
          v25 = v22 - 1;
          do
          {
            v145 = *v144;
            v143 += 32LL;
            v144 += 8;
            *(_DWORD *)(v143 - 32) = v145;
            *(_DWORD *)(v143 - 28) = *(v144 - 7);
            *(_DWORD *)(v143 - 24) = *(v144 - 6);
            *(_DWORD *)(v143 - 20) = *(v144 - 5);
            *(_DWORD *)(v143 - 16) = *(v144 - 4);
            *(_DWORD *)(v143 - 12) = *(v144 - 3);
            *(_DWORD *)(v143 - 8) = *(v144 - 2);
            *(_DWORD *)(v143 - 4) = *(v144 - 1);
          }
          while ( v18 + 32 * (v25 + 1) != v143 );
        }
        v26 = 32 * ((int)v25 + 1LL);
        v20 = (_DWORD *)((char *)v20 + v26);
        v27 = (_DWORD *)(v18 + v26);
      }
      switch ( v21 & 7 )
      {
        case 0:
          goto LABEL_27;
        case 1:
          goto LABEL_26;
        case 2:
          goto LABEL_25;
        case 3:
          goto LABEL_24;
        case 4:
          goto LABEL_23;
        case 5:
          goto LABEL_22;
        case 6:
          goto LABEL_21;
        case 7:
          v27[6] = v20[6];
LABEL_21:
          v27[5] = v20[5];
LABEL_22:
          v27[4] = v20[4];
LABEL_23:
          v27[3] = v20[3];
LABEL_24:
          v27[2] = v20[2];
LABEL_25:
          v27[1] = v20[1];
LABEL_26:
          *v27 = *v20;
LABEL_27:
          v16 = *((_DWORD *)a2 + 16);
          break;
      }
    }
  }
  v28 = *((_QWORD *)this + 6);
  if ( v16 && v28 != v17 )
  {
    v29 = v16 >> 3;
    if ( v16 >> 3 <= 0 )
    {
      v35 = *((_DWORD **)this + 6);
      v34 = (_DWORD *)v17;
    }
    else
    {
      if ( (v17 >= v28 + 32 || v28 >= v17 + 32) && v29 > 1 )
      {
        v30 = *((_QWORD *)this + 6);
        v31 = (const __m128i *)v17;
        v32 = v29 - 1;
        do
        {
          a4 = (__m128)_mm_loadu_si128(v31);
          v30 += 32;
          v31 += 2;
          v15 = _mm_loadu_si128(v31 - 1);
          *(__m128 *)(v30 - 32) = a4;
          *(__m128i *)(v30 - 16) = v15;
        }
        while ( v28 + 32 + 32 * v32 != v30 );
      }
      else
      {
        v146 = *((_QWORD *)this + 6);
        v147 = (int *)v17;
        v32 = v29 - 1;
        do
        {
          v148 = *v147;
          v146 += 32;
          v147 += 8;
          *(_DWORD *)(v146 - 32) = v148;
          *(_DWORD *)(v146 - 28) = *(v147 - 7);
          *(_DWORD *)(v146 - 24) = *(v147 - 6);
          *(_DWORD *)(v146 - 20) = *(v147 - 5);
          *(_DWORD *)(v146 - 16) = *(v147 - 4);
          *(_DWORD *)(v146 - 12) = *(v147 - 3);
          *(_DWORD *)(v146 - 8) = *(v147 - 2);
          *(_DWORD *)(v146 - 4) = *(v147 - 1);
        }
        while ( v28 + 32 * (v32 + 1) != v146 );
      }
      v33 = 32 * ((int)v32 + 1LL);
      v34 = (_DWORD *)(v17 + v33);
      v35 = (_DWORD *)(v28 + v33);
    }
    switch ( v16 % 8 )
    {
      case 1:
        goto LABEL_43;
      case 2:
        goto LABEL_42;
      case 3:
        goto LABEL_41;
      case 4:
        goto LABEL_40;
      case 5:
        goto LABEL_39;
      case 6:
        goto LABEL_38;
      case 7:
        v35[6] = v34[6];
LABEL_38:
        v35[5] = v34[5];
LABEL_39:
        v35[4] = v34[4];
LABEL_40:
        v35[3] = v34[3];
LABEL_41:
        v35[2] = v34[2];
LABEL_42:
        v35[1] = v34[1];
LABEL_43:
        *v35 = *v34;
        break;
      default:
        break;
    }
  }
  if ( v10 > 0 )
  {
    v36 = (unsigned int)(v10 - 1);
    v37 = *((_QWORD *)this + 7);
    v154 = v28;
    v38 = 0;
    v39 = v19;
    v40 = *((_QWORD *)this + 8);
    v152 = 4 * v36 + 4;
    do
    {
      v41 = *(int *)(v18 + v38);
      v42 = *(_DWORD *)(v17 + v38);
      v43 = (__int64 *)(v40 + 8 * v41);
      v44 = (__int64 *)(v150 + 8 * v41);
      if ( v43 != v44 && v42 )
      {
        if ( v42 >> 3 > 0 )
        {
          v45 = v40 + 8 * v41;
          v46 = (__int64 *)(v150 + 8 * v41);
          v47 = (unsigned int)((v42 >> 3) - 1);
          do
          {
            v48 = *v46;
            v46 += 8;
            v45 += 64;
            *(_QWORD *)(v45 - 64) = v48;
            *(_QWORD *)(v45 - 56) = *(v46 - 7);
            *(_QWORD *)(v45 - 48) = *(v46 - 6);
            *(_QWORD *)(v45 - 40) = *(v46 - 5);
            *(_QWORD *)(v45 - 32) = *(v46 - 4);
            *(_QWORD *)(v45 - 24) = *(v46 - 3);
            *(_QWORD *)(v45 - 16) = *(v46 - 2);
            v15.m128i_i64[0] = *(v46 - 1);
            *(_QWORD *)(v45 - 8) = v15.m128i_i64[0];
          }
          while ( v46 != &v44[8 * v47 + 8] );
          v49 = ((int)v47 + 1LL) << 6;
          v44 = (__int64 *)((char *)v44 + v49);
          v43 = (__int64 *)((char *)v43 + v49);
        }
        switch ( v42 % 8 )
        {
          case 1:
            goto LABEL_59;
          case 2:
            goto LABEL_58;
          case 3:
            goto LABEL_57;
          case 4:
            goto LABEL_56;
          case 5:
            goto LABEL_55;
          case 6:
            goto LABEL_54;
          case 7:
            v43[6] = v44[6];
LABEL_54:
            v43[5] = v44[5];
LABEL_55:
            v43[4] = v44[4];
LABEL_56:
            v43[3] = v44[3];
LABEL_57:
            v43[2] = v44[2];
LABEL_58:
            v43[1] = v44[1];
LABEL_59:
            v15.m128i_i64[0] = *v44;
            *v43 = *v44;
            break;
          default:
            break;
        }
      }
      v50 = 4 * v41;
      v51 = (int *)(v37 + v50);
      v52 = (int *)(v39 + v50);
      if ( v37 + v50 != v39 + v50 && v42 )
      {
        v53 = v42 >> 3;
        if ( v42 >> 3 > 0 )
        {
          if ( ((unsigned __int64)v51 >= v39 + v50 + 32 || (unsigned __int64)v52 >= v37 + v50 + 32) && v53 > 1 )
          {
            v54 = 0;
            v55 = v53 - 1;
            do
            {
              a4 = (__m128)_mm_loadu_si128((const __m128i *)&v52[v54]);
              v15 = _mm_loadu_si128((const __m128i *)&v52[v54 + 4]);
              *(__m128 *)&v51[v54] = a4;
              *(__m128i *)&v51[v54 + 4] = v15;
              v54 += 8;
            }
            while ( v54 != 8 * (v55 + 1) );
          }
          else
          {
            v111 = (int *)(v37 + v50);
            v112 = v52;
            v55 = v53 - 1;
            do
            {
              v113 = *v112;
              v111 += 8;
              v112 += 8;
              *(v111 - 8) = v113;
              *(v111 - 7) = *(v112 - 7);
              *(v111 - 6) = *(v112 - 6);
              *(v111 - 5) = *(v112 - 5);
              *(v111 - 4) = *(v112 - 4);
              *(v111 - 3) = *(v112 - 3);
              *(v111 - 2) = *(v112 - 2);
              *(v111 - 1) = *(v112 - 1);
            }
            while ( &v51[8 * v55 + 8] != v111 );
          }
          v56 = 32 * ((int)v55 + 1LL);
          v52 = (int *)((char *)v52 + v56);
          v51 = (int *)((char *)v51 + v56);
        }
        switch ( v42 % 8 )
        {
          case 1:
            goto LABEL_75;
          case 2:
            goto LABEL_74;
          case 3:
            goto LABEL_73;
          case 4:
            goto LABEL_72;
          case 5:
            goto LABEL_71;
          case 6:
            goto LABEL_70;
          case 7:
            v51[6] = v52[6];
LABEL_70:
            v51[5] = v52[5];
LABEL_71:
            v51[4] = v52[4];
LABEL_72:
            v51[3] = v52[3];
LABEL_73:
            v51[2] = v52[2];
LABEL_74:
            v51[1] = v52[1];
LABEL_75:
            *v51 = *v52;
            break;
          default:
            break;
        }
      }
      v38 += 4;
    }
    while ( v152 != v38 );
    v28 = v154;
  }
  v57 = *((_QWORD *)this + 36);
  v58 = *((_DWORD *)this + 4) + 1;
  if ( *((_DWORD *)this + 4) != -1 )
  {
    v116 = *((_DWORD *)this + 4) + 8;
    v117 = *((_QWORD *)this + 36);
    if ( v58 >= 0 )
      v116 = *((_DWORD *)this + 4) + 1;
    v118 = v116 >> 3;
    if ( v118 > 0 )
    {
      v15.m128i_i64[0] = 0;
      v119 = (unsigned int)(v118 - 1);
      do
      {
        *(_OWORD *)v117 = 0;
        v117 += 32;
        *(_OWORD *)(v117 - 16) = 0;
      }
      while ( v117 != v57 + 32 * v119 + 32 );
      v117 = v57 + 32 * ((int)v119 + 1LL);
    }
    switch ( v58 % 8 )
    {
      case 1:
        goto LABEL_133;
      case 2:
        goto LABEL_132;
      case 3:
        goto LABEL_131;
      case 4:
        goto LABEL_130;
      case 5:
        goto LABEL_129;
      case 6:
        goto LABEL_128;
      case 7:
        *(_DWORD *)(v117 + 24) = 0;
LABEL_128:
        *(_DWORD *)(v117 + 20) = 0;
LABEL_129:
        *(_DWORD *)(v117 + 16) = 0;
LABEL_130:
        *(_DWORD *)(v117 + 12) = 0;
LABEL_131:
        *(_DWORD *)(v117 + 8) = 0;
LABEL_132:
        *(_DWORD *)(v117 + 4) = 0;
LABEL_133:
        *(_DWORD *)v117 = 0;
        break;
      default:
        break;
    }
  }
  v59 = *(_DWORD *)this;
  if ( *(int *)this > 0 )
  {
    v60 = *((_QWORD *)this + 7);
    v61 = 1;
    do
    {
      v62 = *(_DWORD *)(v28 + 4 * v61 - 4);
      v63 = 4LL * *(int *)(v18 + 4 * v61 - 4);
      if ( v62 > 0 )
      {
        v64 = (int *)(v60 + v63);
        v65 = v60 + 4 + v63 + 4LL * (unsigned int)(v62 - 1);
        do
        {
          v66 = *v64++;
          ++*(_DWORD *)(v57 + 4 * v66);
        }
        while ( v64 != (int *)v65 );
        v59 = *(_DWORD *)this;
      }
      v67 = v61++;
    }
    while ( v67 < v59 );
  }
  v68 = *((int *)this + 1);
  v69 = *((_QWORD *)this + 35);
  if ( (int)v68 <= 0 )
  {
    v71 = 0;
  }
  else
  {
    v70 = 1;
    v71 = 0;
    do
    {
      v71 += *(_DWORD *)(v57 + 4 * v70 - 4);
      v72 = v70;
      *(_DWORD *)(v69 + 4 * v70 - 4) = v71;
      v68 = *((int *)this + 1);
      ++v70;
    }
    while ( (int)v68 > v72 );
  }
  *(_DWORD *)(v69 + 4 * v68) = v71;
  v73 = *(_DWORD *)this - 1;
  if ( v73 >= 0 )
  {
    v74 = *((_QWORD *)this + 7);
    v153 = *((_QWORD *)this + 8);
    v75 = v73;
    v76 = v73 - 1LL;
    v151 = v76 - (unsigned int)v73;
    while ( 1 )
    {
      v77 = *(_DWORD *)(v28 + 4 * v75);
      v78 = v75;
      v79 = *(int *)(v18 + 4 * v75);
      v80 = 8 * v79;
      v81 = 4 * v79;
      if ( v77 > 0 )
      {
        v82 = (unsigned int)(v77 - 1);
        v83 = *((_QWORD *)this + 37);
        v84 = *((_QWORD *)this + 38);
        v85 = 0;
        v86 = v82 + 1;
        v87 = v153 + v80;
        v88 = v74 + v81;
        do
        {
          v89 = *(int *)(v88 + 4 * v85);
          v15.m128i_i64[0] = *(_QWORD *)(v87 + 8 * v85++);
          v90 = (_DWORD *)(v69 + 4 * v89);
          LODWORD(v89) = *v90 - 1;
          *v90 = v89;
          *(_QWORD *)(v83 + 8LL * (int)v89) = v15.m128i_i64[0];
          *(_DWORD *)(v84 + 4LL * (int)v89) = v78;
        }
        while ( v86 != v85 );
      }
      v75 = v76;
      if ( v76 == v151 )
        break;
      --v76;
    }
  }
  if ( !*((_QWORD *)this + 15) )
  {
    v142 = *((int *)this + 3);
    if ( v142 > 0x1FFFFFFFFFFFFFFELL )
      goto LABEL_150;
    *((_QWORD *)this + 15) = operator new[](4 * v142);
  }
  if ( !*((_QWORD *)this + 16) )
  {
    v141 = *((int *)this + 4);
    if ( v141 > 0x1FFFFFFFFFFFFFFELL )
      goto LABEL_150;
    *((_QWORD *)this + 16) = operator new[](4 * v141);
  }
  if ( *((int *)this + 3) > 0 )
  {
    v91 = *((_DWORD **)this + 15);
    v92 = 0;
    do
      *v91++ = v92++;
    while ( *((_DWORD *)this + 3) > v92 );
  }
  if ( *((int *)this + 4) > 0 )
  {
    v93 = *((_DWORD **)this + 16);
    v94 = 0;
    do
      *v93++ = v94++;
    while ( *((_DWORD *)this + 4) > v94 );
  }
  v95 = *((_QWORD *)this + 32);
  if ( !v95 )
  {
    v140 = *((_DWORD *)this + 3) + 1;
    if ( v140 > 0xFFFFFFFFFFFFFFFLL )
      goto LABEL_150;
    v95 = operator new[](8 * v140);
    *((_QWORD *)this + 32) = v95;
  }
  if ( !*((_QWORD *)this + 33) )
  {
    v114 = *((_DWORD *)this + 4) + 1;
    if ( v114 > 0xFFFFFFFFFFFFFFFLL )
      goto LABEL_150;
    v115 = operator new[](8 * v114);
    v95 = *((_QWORD *)this + 32);
    *((_QWORD *)this + 33) = v115;
  }
  presolve_make_memlists(
    *((_QWORD *)this + 6),
    v95,
    *(unsigned int *)this,
    *(double *)v15.m128i_i64,
    *(double *)a4.m128_u64,
    a5,
    a6,
    a7,
    a8,
    a9,
    a10);
  presolve_make_memlists(
    *((_QWORD *)this + 36),
    *((_QWORD *)this + 33),
    *((unsigned int *)this + 1),
    *(double *)v15.m128i_i64,
    *(double *)a4.m128_u64,
    a5,
    a6,
    v96,
    v97,
    a9,
    a10);
  *(_DWORD *)(*((_QWORD *)this + 5) + 4LL * *(int *)this) = *((_DWORD *)this + 6);
  *(_DWORD *)(*((_QWORD *)this + 35) + 4LL * *((int *)this + 1)) = *((_DWORD *)this + 6);
  v98 = *((_BYTE **)this + 45);
  if ( !v98 )
  {
    v98 = (_BYTE *)operator new[](*((int *)this + 3));
    *((_QWORD *)this + 45) = v98;
  }
  v99 = *((_DWORD *)this + 3);
  if ( v99 )
  {
    v124 = v99 / 8;
    if ( v99 / 8 <= 0 )
    {
LABEL_158:
      switch ( v99 % 8 )
      {
        case 1:
          goto LABEL_165;
        case 2:
          goto LABEL_164;
        case 3:
          goto LABEL_163;
        case 4:
          goto LABEL_162;
        case 5:
          goto LABEL_161;
        case 6:
          goto LABEL_160;
        case 7:
          v98[6] = 0;
LABEL_160:
          v98[5] = 0;
LABEL_161:
          v98[4] = 0;
LABEL_162:
          v98[3] = 0;
LABEL_163:
          v98[2] = 0;
LABEL_164:
          v98[1] = 0;
LABEL_165:
          *v98 = 0;
          v100 = *((_BYTE **)this + 50);
          v101 = *((_DWORD *)this + 4);
          if ( !v100 )
            goto LABEL_166;
          goto LABEL_110;
        default:
          goto LABEL_109;
      }
    }
    if ( v124 == 1 )
    {
      v127 = v98;
    }
    else
    {
      v125 = v98;
      v126 = 0;
      do
      {
        ++v126;
        v125 += 16;
        *((_OWORD *)v125 - 1) = 0;
      }
      while ( v126 < v124 >> 1 );
      v127 = &v98[8 * (v124 & 0xFFFFFFFE)];
      if ( (v124 & 0xFFFFFFFE) == v124 )
        goto LABEL_157;
    }
    *v127 = 0;
LABEL_157:
    v98 += 8 * (int)(v124 - 1) + 8;
    goto LABEL_158;
  }
LABEL_109:
  v100 = *((_BYTE **)this + 50);
  v101 = *((_DWORD *)this + 4);
  if ( !v100 )
  {
LABEL_166:
    v100 = (_BYTE *)operator new[](v101);
    v101 = *((_DWORD *)this + 4);
    *((_QWORD *)this + 50) = v100;
  }
LABEL_110:
  v102 = 0;
  if ( !v101 )
    goto LABEL_111;
  v120 = v101 / 8;
  if ( v101 / 8 > 0 )
  {
    if ( v120 == 1 )
    {
      v123 = v100;
    }
    else
    {
      v121 = v100;
      v122 = 0;
      do
      {
        ++v122;
        v121 += 16;
        *((_OWORD *)v121 - 1) = 0;
      }
      while ( v120 >> 1 > v122 );
      v123 = &v100[8 * (v120 & 0xFFFFFFFE)];
      if ( (v120 & 0xFFFFFFFE) == v120 )
        goto LABEL_140;
    }
    *v123 = 0;
LABEL_140:
    v100 += 8 * (int)(v120 - 1) + 8;
  }
  switch ( v101 % 8 )
  {
    case 1:
      goto LABEL_148;
    case 2:
      goto LABEL_147;
    case 3:
      goto LABEL_146;
    case 4:
      goto LABEL_145;
    case 5:
      goto LABEL_144;
    case 6:
      goto LABEL_143;
    case 7:
      v100[6] = 0;
LABEL_143:
      v100[5] = 0;
LABEL_144:
      v100[4] = 0;
LABEL_145:
      v100[3] = 0;
LABEL_146:
      v100[2] = 0;
LABEL_147:
      v100[1] = 0;
LABEL_148:
      *v100 = 0;
      break;
    default:
      break;
  }
  v102 = *((int *)this + 4);
  if ( v102 > 0x1FFFFFFFFFFFFFFELL )
LABEL_150:
    __cxa_throw_bad_array_new_length();
LABEL_111:
  v103 = operator new[](4 * v102);
  v104 = *((int *)this + 4);
  *((_QWORD *)this + 51) = v103;
  *((_DWORD *)this + 104) = 0;
  if ( v104 > 0x1FFFFFFFFFFFFFFELL )
    goto LABEL_150;
  v105 = operator new[](4 * v104);
  v106 = *((int *)this + 3);
  *((_QWORD *)this + 53) = v105;
  *((_DWORD *)this + 108) = 0;
  if ( v106 > 0x1FFFFFFFFFFFFFFELL )
    goto LABEL_150;
  v107 = operator new[](4 * v106);
  v108 = *((int *)this + 3);
  *((_QWORD *)this + 46) = v107;
  *((_DWORD *)this + 94) = 0;
  if ( v108 > 0x1FFFFFFFFFFFFFFELL )
    goto LABEL_150;
  v109 = operator new[](4 * v108);
  *((_DWORD *)this + 98) = 0;
  *((_QWORD *)this + 48) = v109;
  return CoinPresolveMatrix::initializeStuff(this);
}

