void __fastcall ClpPrimalColumnSteepest::saveWeights(ClpPrimalColumnSteepest *this, ClpSimplex *a2, int a3)
{
  int v4; // eax
  unsigned int v5; // eax
  int v6; // ebp
  int v7; // r12d
  int v8; // r13d
  unsigned __int64 v9; // r14
  bool v10; // dl
  _QWORD *v11; // rdi
  _QWORD *v12; // r8
  int v13; // ecx
  bool v14; // al
  _QWORD *v15; // rax
  __int64 *v16; // rdx
  __int64 v17; // r10
  __int64 v18; // xmm0_8
  __int64 v19; // r10
  __int64 v20; // rdx
  double v21; // xmm0_8
  void *v22; // rdi
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rax
  int v26; // eax
  CoinIndexedVector *v27; // rbp
  CoinIndexedVector *v28; // rbp
  void *v29; // rdi
  void *v30; // rdi
  void *v31; // rbp
  unsigned __int64 v32; // rbp
  unsigned __int64 v33; // rbp
  CoinIndexedVector *v34; // r15
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rax
  int v38; // esi
  void *v39; // rdi
  const void *v40; // r15
  void *v41; // rax
  void *v42; // rcx
  __int64 *v43; // rax
  int v44; // edx
  __int64 v45; // rdx
  __int64 v46; // rax
  int v47; // eax
  __int64 v48; // rdx
  CoinIndexedVector *v49; // rdi
  __int64 v50; // rsi
  __int64 v51; // r13
  __int64 v52; // rax
  __int64 v53; // r14
  double v54; // xmm2_8
  __int64 v55; // rbp
  int v56; // r12d
  __int64 v57; // r9
  __int64 v58; // r15
  __int64 v59; // r14
  double v60; // xmm9_8
  double v61; // xmm4_8
  __int64 v62; // rdx
  int v63; // ecx
  double v64; // xmm6_8
  _BYTE *v65; // r8
  __int64 v66; // rdi
  double v67; // xmm0_8
  char v68; // r8
  __int64 *v69; // r11
  __int64 *v70; // rax
  __int64 v71; // r9
  __int64 v72; // rbp
  __int64 v73; // rcx
  __int64 v74; // r8
  __int64 v75; // rax
  __int64 v76; // r15
  __int64 v77; // rdi
  __int64 v78; // rax
  int v79; // edi
  int v80; // r10d
  __int64 v81; // rdx
  double v82; // xmm0_8
  __int64 v83; // rdx
  __int64 v84; // rax
  __int64 v85; // rdx
  _DWORD *v86; // rdi
  __int64 (*v87)(void); // rax
  double v88; // xmm0_8
  double v89; // xmm0_8
  __int64 v90; // rdx
  char v91; // r8
  _BYTE *v92; // r8
  int v93; // edx
  __int64 v94; // rdi
  __int64 v95; // rax
  __int64 v96; // rcx
  double v97; // xmm0_8
  unsigned __int8 v98; // dl
  int v99; // edx
  double v100; // xmm9_8
  int v101; // r9d
  signed int v102; // r10d
  int v103; // r11d
  double v104; // xmm0_8
  __int64 *v105; // rdx
  double v106; // xmm0_8
  double *v107; // rcx
  bool v108; // dl
  int v109; // edx
  double v110; // xmm1_8
  int v111; // r9d
  int v112; // r10d
  bool v113; // r9
  __int64 v114; // r9
  __int64 v115; // r10
  CoinIndexedVector *v116; // r15
  __int64 v117; // rdx
  __int64 *v118; // rax
  __int64 v119; // r10
  __int64 v120; // xmm0_8
  __int64 v121; // rax
  int v122; // edx
  bool v123; // zf
  __int64 v124; // rax
  CoinIndexedVector *v125; // rdi
  __int64 v126; // r8
  int v127; // edx
  __int64 v128; // r10
  int v129; // r9d
  __int64 v130; // rsi
  int v131; // edi
  __int64 v132; // rcx
  int v133; // edi
  _QWORD *v134; // rcx
  int v135; // edi
  _QWORD *v136; // rax
  __int64 v137; // rdi
  int v138; // eax
  _QWORD *v139; // rdi
  int v140; // eax
  __int64 v141; // r8
  _QWORD *v142; // rax
  int v143; // ecx
  _QWORD *v144; // r8
  __m128i *v145; // rsi
  unsigned int v146; // ecx
  __m128i *v147; // rax
  const __m128i *v148; // rdx
  __int64 v149; // rdi
  __m128i v150; // xmm1
  __m128i v151; // xmm0
  __int64 v152; // rax
  __int32 *v153; // rdx
  CoinIndexedVector *v154; // r15
  __m128i *v155; // rdx
  int *v156; // rax
  int v157; // r8d
  bool v158; // [rsp+8h] [rbp-40h]
  __int64 v159; // [rsp+8h] [rbp-40h]
  double v160; // [rsp+8h] [rbp-40h]

  *((_QWORD *)this + 1) = a2;
  v4 = *((_DWORD *)this + 19);
  if ( a3 == 6 )
  {
    v20 = *((_QWORD *)this + 4);
    if ( v20 )
    {
      v21 = 1.0;
      if ( v4 == 1 )
        v21 = 2.0;
      if ( *(double *)(v20 + 8LL * *((int *)a2 + 288)) == v21 )
        return;
    }
    v5 = v4 - 4;
    v10 = 1;
    v158 = 1;
    v6 = 5;
  }
  else
  {
    v5 = v4 - 4;
    v6 = a3;
    if ( v5 > 1 )
    {
      v7 = *((_DWORD *)a2 + 26);
      v8 = *((_DWORD *)a2 + 27);
      v9 = *((_QWORD *)a2 + 157);
      if ( a3 != 1 )
      {
        v158 = a3 == 2 || (unsigned int)(a3 - 4) <= 1;
        v10 = a3 == 5;
        if ( v158 )
          goto LABEL_5;
LABEL_23:
        v158 = 1;
        if ( v6 <= 1 )
          return;
        goto LABEL_62;
      }
      v22 = *((void **)this + 4);
LABEL_28:
      if ( !*((_DWORD *)a2 + 77) )
        *((_DWORD *)this + 23) = -1;
      if ( v22 )
      {
        if ( v7 + v8 == *(_DWORD *)(*((_QWORD *)this + 5) + 20LL)
          && ((v23 = *((_QWORD *)a2 + 158), v24 = *((_QWORD *)this + 6), (v25 = *(_QWORD *)(v23 + 8)) == 0)
            ? (v26 = *(_DWORD *)(*(_QWORD *)(v23 + 16) + 48LL))
            : (v26 = *(_DWORD *)(v25 + 64)),
              v7 + v26 == *(_DWORD *)(v24 + 20)) )
        {
          v124 = *((int *)this + 23);
          if ( (int)v124 < v7 && (int)v124 >= 0 )
          {
            v145 = *(__m128i **)v24;
            if ( *(_QWORD *)v24 != v9 )
            {
              v146 = v7 >> 3;
              if ( v7 >> 3 )
              {
                if ( (v9 >= (unsigned __int64)&v145[2] || (unsigned __int64)v145 >= v9 + 32) && v146 > 1 )
                {
                  v147 = v145;
                  v148 = (const __m128i *)v9;
                  v149 = v146 - 1;
                  do
                  {
                    v150 = _mm_loadu_si128(v148);
                    v147 += 2;
                    v148 += 2;
                    v151 = _mm_loadu_si128(v148 - 1);
                    v147[-2] = v150;
                    v147[-1] = v151;
                  }
                  while ( &v145[2 * v149 + 2] != v147 );
                }
                else
                {
                  v155 = v145;
                  v156 = (int *)v9;
                  v149 = v146 - 1;
                  do
                  {
                    v157 = *v156;
                    v156 += 8;
                    v155 += 2;
                    v155[-2].m128i_i32[0] = v157;
                    v155[-2].m128i_i32[1] = *(v156 - 7);
                    v155[-2].m128i_i32[2] = *(v156 - 6);
                    v155[-2].m128i_i32[3] = *(v156 - 5);
                    v155[-1].m128i_i32[0] = *(v156 - 4);
                    v155[-1].m128i_i32[1] = *(v156 - 3);
                    v155[-1].m128i_i32[2] = *(v156 - 2);
                    v155[-1].m128i_i32[3] = *(v156 - 1);
                  }
                  while ( (int *)(v9 + 32 * (v149 + 1)) != v156 );
                }
                v152 = 32 * ((int)v149 + 1LL);
                v153 = (__int32 *)(v9 + v152);
                v145 = (__m128i *)((char *)v145 + v152);
              }
              else
              {
                v153 = (__int32 *)v9;
              }
              switch ( v7 & 7 )
              {
                case 0:
                  goto LABEL_263;
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
                  v145[1].m128i_i32[2] = v153[6];
LABEL_257:
                  v145[1].m128i_i32[1] = v153[5];
LABEL_258:
                  v145[1].m128i_i32[0] = v153[4];
LABEL_259:
                  v145->m128i_i32[3] = v153[3];
LABEL_260:
                  v145->m128i_i32[2] = v153[2];
LABEL_261:
                  v145->m128i_i32[1] = v153[1];
LABEL_262:
                  v145->m128i_i32[0] = *v153;
LABEL_263:
                  v124 = *((int *)this + 23);
                  break;
              }
            }
            *((_DWORD *)this + 23) = *(_DWORD *)(v9 + 4 * v124);
          }
          else
          {
            *((_DWORD *)this + 23) = -1;
          }
          *((_DWORD *)this + 18) = 1;
        }
        else
        {
          operator delete[](v22);
          v27 = *((CoinIndexedVector **)this + 5);
          *((_QWORD *)this + 4) = 0;
          if ( v27 )
          {
            CoinIndexedVector::~CoinIndexedVector(v27);
            operator delete(v27);
          }
          v28 = *((CoinIndexedVector **)this + 6);
          *((_QWORD *)this + 5) = 0;
          if ( v28 )
          {
            CoinIndexedVector::~CoinIndexedVector(v28);
            operator delete(v28);
          }
          v29 = *((void **)this + 7);
          *((_QWORD *)this + 6) = 0;
          if ( v29 )
            operator delete[](v29);
          v30 = *((void **)this + 8);
          *((_QWORD *)this + 7) = 0;
          if ( v30 )
            operator delete[](v30);
          *((_QWORD *)this + 8) = 0;
          *((_DWORD *)this + 18) = -1;
          *((_DWORD *)this + 23) = -1;
        }
      }
      return;
    }
    if ( a3 == 1 )
    {
      v22 = *((void **)this + 4);
      if ( !v22 )
        *((_DWORD *)this + 22) = 0;
      v7 = *((_DWORD *)a2 + 26);
      v8 = *((_DWORD *)a2 + 27);
      v9 = *((_QWORD *)a2 + 157);
      goto LABEL_28;
    }
    v158 = a3 == 2 || (unsigned int)(a3 - 4) <= 1;
    v10 = a3 == 5;
  }
  v7 = *((_DWORD *)a2 + 26);
  v8 = *((_DWORD *)a2 + 27);
  v9 = *((_QWORD *)a2 + 157);
  if ( !v158 )
    goto LABEL_23;
LABEL_5:
  v11 = *((_QWORD **)this + 4);
  if ( !v11 )
  {
    if ( v5 > 1 || *((_DWORD *)this + 22) )
      goto LABEL_47;
LABEL_127:
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)a2 + 24) + 272LL))(*((_QWORD *)a2 + 24)) )
    {
      v125 = *((CoinIndexedVector **)this + 5);
      if ( !v125 )
      {
        v154 = (CoinIndexedVector *)operator new(0x20u);
        CoinIndexedVector::CoinIndexedVector(v154);
        *((_QWORD *)this + 5) = v154;
        CoinIndexedVector::reserve(v154, v7 + v8);
        v125 = *((CoinIndexedVector **)this + 5);
      }
      CoinIndexedVector::clear(v125);
      v126 = *((_QWORD *)this + 1);
      v43 = *((__int64 **)this + 5);
      v127 = *(_DWORD *)(v126 + 108);
      v128 = *v43;
      v129 = v127 + *(_DWORD *)(v126 + 104);
      if ( v129 <= v127 )
      {
        *((_DWORD *)v43 + 4) = 0;
      }
      else
      {
        v130 = v127;
        v131 = 0;
        do
        {
          if ( (*(_BYTE *)(*(_QWORD *)(v126 + 264) + v130) & 7) != 5 )
          {
            v132 = v131++;
            *(_DWORD *)(v128 + 4 * v132) = v127;
          }
          ++v127;
          ++v130;
        }
        while ( v129 != v127 );
        *((_DWORD *)v43 + 4) = v131;
        v158 = 0;
        if ( v131 )
          goto LABEL_57;
      }
      *((_BYTE *)v43 + 28) = 0;
      v158 = 0;
LABEL_57:
      v44 = *((_DWORD *)this + 23);
      *((_QWORD *)this + 12) = 0xFFFFFFFEFFFFFFFELL;
      if ( v44 < 0 || v44 >= v7 + v8 )
        *((_DWORD *)this + 23) = -1;
LABEL_60:
      *((_DWORD *)this + 18) = 0;
      if ( v43 )
        goto LABEL_61;
      goto LABEL_176;
    }
    v11 = *((_QWORD **)this + 4);
    if ( !v11 )
    {
LABEL_47:
      v31 = *((void **)this + 6);
      if ( v31 )
      {
        CoinIndexedVector::~CoinIndexedVector(*((CoinIndexedVector **)this + 6));
        operator delete(v31);
      }
      v32 = v7 + v8;
      if ( v32 > 0xFFFFFFFFFFFFFFFLL )
        __cxa_throw_bad_array_new_length();
      v33 = 8 * v32;
      *((_QWORD *)this + 4) = operator new[](v33);
      v34 = (CoinIndexedVector *)operator new(0x20u);
      CoinIndexedVector::CoinIndexedVector(v34);
      v35 = *((_QWORD *)this + 1);
      *((_QWORD *)this + 6) = v34;
      v36 = *(_QWORD *)(v35 + 1264);
      v37 = *(_QWORD *)(v36 + 8);
      if ( v37 )
        v38 = *(_DWORD *)(v37 + 64);
      else
        v38 = *(_DWORD *)(*(_QWORD *)(v36 + 16) + 48LL);
      CoinIndexedVector::reserve(v34, v7 + v38);
      ClpPrimalColumnSteepest::initializeWeights(this);
      v39 = *((void **)this + 7);
      if ( v39 )
        operator delete[](v39);
      v40 = *((const void **)this + 4);
      if ( v40 )
      {
        v41 = (void *)operator new[](v33);
        v42 = memcpy(v41, v40, v33);
      }
      else
      {
        v42 = nullptr;
      }
      v43 = *((__int64 **)this + 5);
      *((_QWORD *)this + 7) = v42;
      v6 = 3;
      goto LABEL_57;
    }
LABEL_46:
    operator delete[](v11);
    goto LABEL_47;
  }
  if ( *((_DWORD *)this + 18) == -1 || v10 )
  {
    if ( v5 > 1 || *((_DWORD *)this + 22) )
      goto LABEL_46;
    goto LABEL_127;
  }
  v12 = *((_QWORD **)this + 7);
  v13 = v8 + v7;
  v14 = v11 == v12 || v8 + v7 == 0;
  if ( v6 != 4 )
  {
    if ( !v14 )
    {
      if ( v13 >> 3 > 0 )
      {
        v15 = *((_QWORD **)this + 7);
        v16 = *((__int64 **)this + 4);
        v17 = (unsigned int)((v13 >> 3) - 1);
        do
        {
          v18 = *v16;
          v15 += 8;
          v16 += 8;
          *(v15 - 8) = v18;
          *(v15 - 7) = *(v16 - 7);
          *(v15 - 6) = *(v16 - 6);
          *(v15 - 5) = *(v16 - 5);
          *(v15 - 4) = *(v16 - 4);
          *(v15 - 3) = *(v16 - 3);
          *(v15 - 2) = *(v16 - 2);
          *(v15 - 1) = *(v16 - 1);
        }
        while ( v15 != &v12[8 * v17 + 8] );
        v19 = ((int)v17 + 1LL) << 6;
        v11 = (_QWORD *)((char *)v11 + v19);
        v12 = (_QWORD *)((char *)v12 + v19);
      }
      switch ( v13 % 8 )
      {
        case 1:
          goto LABEL_88;
        case 2:
          goto LABEL_87;
        case 3:
          goto LABEL_86;
        case 4:
          goto LABEL_85;
        case 5:
          goto LABEL_84;
        case 6:
          goto LABEL_83;
        case 7:
          v12[6] = v11[6];
LABEL_83:
          v12[5] = v11[5];
LABEL_84:
          v12[4] = v11[4];
LABEL_85:
          v12[3] = v11[3];
LABEL_86:
          v12[2] = v11[2];
LABEL_87:
          v12[1] = v11[1];
LABEL_88:
          *v12 = *v11;
          break;
        default:
          break;
      }
    }
    *((_DWORD *)this + 24) = *((_DWORD *)this + 23);
    *((_DWORD *)this + 25) = *((_DWORD *)a2 + 290);
    v43 = *((__int64 **)this + 5);
    goto LABEL_60;
  }
  if ( !v14 )
  {
    if ( v13 >> 3 > 0 )
    {
      v117 = *((_QWORD *)this + 4);
      v118 = *((__int64 **)this + 7);
      v119 = (unsigned int)((v13 >> 3) - 1);
      do
      {
        v120 = *v118;
        v118 += 8;
        v117 += 64;
        *(_QWORD *)(v117 - 64) = v120;
        *(_QWORD *)(v117 - 56) = *(v118 - 7);
        *(_QWORD *)(v117 - 48) = *(v118 - 6);
        *(_QWORD *)(v117 - 40) = *(v118 - 5);
        *(_QWORD *)(v117 - 32) = *(v118 - 4);
        *(_QWORD *)(v117 - 24) = *(v118 - 3);
        *(_QWORD *)(v117 - 16) = *(v118 - 2);
        *(_QWORD *)(v117 - 8) = *(v118 - 1);
      }
      while ( v118 != &v12[8 * v119 + 8] );
      v121 = ((int)v119 + 1LL) << 6;
      v12 = (_QWORD *)((char *)v12 + v121);
      v11 = (_QWORD *)((char *)v11 + v121);
    }
    switch ( v13 % 8 )
    {
      case 1:
        goto LABEL_193;
      case 2:
        goto LABEL_192;
      case 3:
        goto LABEL_191;
      case 4:
        goto LABEL_190;
      case 5:
        goto LABEL_189;
      case 6:
        goto LABEL_188;
      case 7:
        v11[6] = v12[6];
LABEL_188:
        v11[5] = v12[5];
LABEL_189:
        v11[4] = v12[4];
LABEL_190:
        v11[3] = v12[3];
LABEL_191:
        v11[2] = v12[2];
LABEL_192:
        v11[1] = v12[1];
LABEL_193:
        *v11 = *v12;
        break;
      default:
        break;
    }
  }
  v69 = *((__int64 **)this + 6);
  *((_DWORD *)this + 23) = -1;
  *((_DWORD *)a2 + 290) = -1;
  v122 = *((_DWORD *)v69 + 5);
  if ( v122 )
  {
    v133 = v122 + 7;
    v134 = (_QWORD *)v69[1];
    if ( v122 >= 0 )
      v133 = *((_DWORD *)v69 + 5);
    v135 = v133 >> 3;
    if ( v135 > 0 )
    {
      v136 = (_QWORD *)v69[1];
      v137 = (unsigned int)(v135 - 1);
      do
      {
        *v136 = 0;
        v136[1] = 0;
        v136 += 8;
        *(v136 - 6) = 0;
        *(v136 - 5) = 0;
        *(v136 - 4) = 0;
        *(v136 - 3) = 0;
        *(v136 - 2) = 0;
        *(v136 - 1) = 0;
      }
      while ( v136 != &v134[8 * v137 + 8] );
      v134 += 8 * (int)v137 + 8;
    }
    switch ( v122 % 8 )
    {
      case 1:
        goto LABEL_230;
      case 2:
        goto LABEL_229;
      case 3:
        goto LABEL_228;
      case 4:
        goto LABEL_227;
      case 5:
        goto LABEL_226;
      case 6:
        goto LABEL_225;
      case 7:
        v134[6] = 0;
LABEL_225:
        v134[5] = 0;
LABEL_226:
        v134[4] = 0;
LABEL_227:
        v134[3] = 0;
LABEL_228:
        v134[2] = 0;
LABEL_229:
        v134[1] = 0;
LABEL_230:
        *v134 = 0;
        break;
      default:
        break;
    }
  }
  v123 = *((_QWORD *)this + 5) == 0;
  *((_DWORD *)v69 + 4) = 0;
  *((_BYTE *)v69 + 28) = 0;
  *((_DWORD *)this + 18) = 0;
  if ( !v123 )
  {
    if ( *((int *)this + 23) >= 0 )
      goto LABEL_91;
LABEL_132:
    if ( *((_DWORD *)v69 + 4) )
    {
      v93 = *((_DWORD *)v69 + 5);
      if ( v93 )
      {
        v138 = v93 + 7;
        v139 = (_QWORD *)v69[1];
        if ( v93 >= 0 )
          v138 = *((_DWORD *)v69 + 5);
        v140 = v138 >> 3;
        if ( v140 > 0 )
        {
          v141 = (unsigned int)(v140 - 1);
          v142 = (_QWORD *)v69[1];
          v143 = v141;
          v144 = &v139[8 * v141 + 8];
          do
          {
            *v142 = 0;
            v142[1] = 0;
            v142 += 8;
            *(v142 - 6) = 0;
            *(v142 - 5) = 0;
            *(v142 - 4) = 0;
            *(v142 - 3) = 0;
            *(v142 - 2) = 0;
            *(v142 - 1) = 0;
          }
          while ( v142 != v144 );
          v139 += 8 * v143 + 8;
        }
        switch ( v93 % 8 )
        {
          case 1:
            goto LABEL_246;
          case 2:
            goto LABEL_245;
          case 3:
            goto LABEL_244;
          case 4:
            goto LABEL_243;
          case 5:
            goto LABEL_242;
          case 6:
            goto LABEL_241;
          case 7:
            v139[6] = 0;
LABEL_241:
            v139[5] = 0;
LABEL_242:
            v139[4] = 0;
LABEL_243:
            v139[3] = 0;
LABEL_244:
            v139[2] = 0;
LABEL_245:
            v139[1] = 0;
LABEL_246:
            *v139 = 0;
            break;
          default:
            break;
        }
      }
      *((_DWORD *)v69 + 4) = 0;
      *((_BYTE *)v69 + 28) = 0;
    }
    goto LABEL_64;
  }
LABEL_176:
  v116 = (CoinIndexedVector *)operator new(0x20u);
  CoinIndexedVector::CoinIndexedVector(v116);
  *((_QWORD *)this + 5) = v116;
  CoinIndexedVector::reserve(v116, v7 + v8);
LABEL_61:
  if ( v6 <= 1 )
    return;
LABEL_62:
  if ( v6 == 5 )
    return;
  a2 = *((ClpSimplex **)this + 1);
  if ( v6 == 3 )
    goto LABEL_64;
  v69 = *((__int64 **)this + 6);
  if ( *((int *)this + 23) < 0 )
  {
    if ( !v69 )
      goto LABEL_64;
    goto LABEL_132;
  }
LABEL_91:
  v70 = *((__int64 **)a2 + 135);
  v71 = v69[1];
  v72 = *v69;
  v73 = v70[1];
  v74 = *v70;
  if ( v7 > 0 )
  {
    v75 = 0;
    v76 = (unsigned int)(v7 - 1) + 1LL;
    do
    {
      v77 = *(int *)(v72 + v75);
      *(_QWORD *)(v73 + 8 * v77) = *(_QWORD *)(v71 + 2 * v75);
      *(_DWORD *)(v74 + v75) = v77;
      v75 += 4;
    }
    while ( 4 * v76 != v75 );
    v78 = 0;
    v79 = -1;
    v80 = 0;
    do
    {
      v81 = *(int *)(v9 + 4 * v78);
      v82 = *(double *)(v73 + 8 * v81);
      if ( *((_DWORD *)this + 23) == (_DWORD)v81 )
        v79 = v78;
      *(double *)(v71 + 8 * v78) = v82;
      if ( v82 != 0.0 )
      {
        v83 = v80++;
        *(_DWORD *)(v72 + 4 * v83) = v78;
      }
      ++v78;
    }
    while ( v76 != v78 );
    *((_DWORD *)v69 + 4) = v80;
    if ( !v80 )
      *((_BYTE *)v69 + 28) = 0;
    *((_DWORD *)this + 23) = v79;
    v84 = 0;
    do
    {
      v85 = *(int *)(v74 + 4 * v84++);
      *(_QWORD *)(v73 + 8 * v85) = 0;
    }
    while ( v7 > (int)v84 );
    v45 = *((_QWORD *)a2 + 158);
    v46 = *(_QWORD *)(v45 + 8);
    if ( v46 )
      goto LABEL_65;
    goto LABEL_105;
  }
  *((_DWORD *)v69 + 4) = 0;
  *((_BYTE *)v69 + 28) = 0;
  *((_DWORD *)this + 23) = -1;
LABEL_64:
  v45 = *((_QWORD *)a2 + 158);
  v46 = *(_QWORD *)(v45 + 8);
  if ( v46 )
  {
LABEL_65:
    if ( *(_DWORD *)(v46 + 68) )
      goto LABEL_68;
    v47 = *(_DWORD *)(v46 + 72);
    goto LABEL_67;
  }
LABEL_105:
  v86 = *(_DWORD **)(v45 + 16);
  if ( !v86[13] )
  {
    v87 = *(__int64 (**)(void))(*(_QWORD *)v86 + 136LL);
    if ( (char *)v87 == (char *)CoinDenseFactorization::numberElements )
      v47 = v86[10] * v86[9];
    else
      v47 = v87();
LABEL_67:
    *((_DWORD *)this + 27) = v47;
  }
LABEL_68:
  if ( !v158 )
    return;
  v48 = *((_QWORD *)this + 1);
  v49 = *((CoinIndexedVector **)this + 5);
  v50 = *((_QWORD *)v49 + 1);
  v51 = *(_QWORD *)v49;
  *((_DWORD *)this + 20) = 0;
  v52 = *(int *)(v48 + 108);
  v53 = *(_QWORD *)(v48 + 1320);
  v54 = *(double *)(v48 + 872);
  v55 = *(_QWORD *)(v48 + 1176);
  v56 = v52 + *(_DWORD *)(v48 + 104);
  if ( *(_BYTE *)(v53 + 149) )
  {
    v160 = *(double *)(v48 + 872);
    CoinIndexedVector::clear(v49);
    if ( v56 <= 0 )
      return;
    v94 = *((_QWORD *)this + 1);
    v95 = 0;
    while ( 1 )
    {
      v96 = 8 * v95;
      v97 = *(double *)(v55 + 8 * v95);
      v98 = *(_BYTE *)(*(_QWORD *)(v94 + 264) + v95) & 7;
      if ( v98 == 2 )
      {
        if ( v97 > v160 )
          goto LABEL_155;
        v99 = *(_DWORD *)(v53 + 144);
        v100 = 0.0;
        if ( (v99 & 1) != 0 )
        {
          v101 = *(_DWORD *)(*(_QWORD *)(v53 + 64) + 4 * v95) + *(_DWORD *)(*(_QWORD *)(v53 + 72) + 4 * v95);
          v102 = v101 + 1;
          if ( v101 + 1 == *(_DWORD *)(*(_QWORD *)(v53 + 56) + 4 * v95 + 4) )
          {
            v100 = -1.0e100;
          }
          else
          {
            v100 = -1.0e100;
            v103 = *(_DWORD *)(*(_QWORD *)(v53 + 104) + 4LL * (v102 >> 5));
            if ( !_bittest(&v103, v102) )
              v100 = *(double *)(*(_QWORD *)(v53 + 88) + 8LL * v101)
                   - *(double *)(*(_QWORD *)(v53 + 88) + 8LL * v101 + 8);
          }
        }
        if ( (v99 & 2) != 0 )
          v100 = -*(double *)(v53 + 16);
        v104 = v97 - v100;
        if ( COERCE_DOUBLE(*(_QWORD *)&v160 ^ 0x8000000000000000LL) <= v104 )
          goto LABEL_141;
        v105 = *((__int64 **)this + 5);
        v106 = v104 * v104;
        v107 = (double *)(v105[1] + v96);
        if ( *v107 != 0.0 )
        {
          v106 = v106 + *v107;
          if ( v106 > 0.0 )
            goto LABEL_157;
          goto LABEL_153;
        }
        if ( v106 > 0.0 )
          goto LABEL_173;
        v113 = v106 <= -1.0e-50;
        goto LABEL_174;
      }
      if ( v98 <= 2u )
        break;
      if ( v98 == 3 )
      {
        if ( -v160 <= v97 )
        {
          v109 = *(_DWORD *)(v53 + 144);
          v110 = 0.0;
          if ( (v109 & 1) != 0 )
          {
            v111 = *(_DWORD *)(*(_QWORD *)(v53 + 64) + 4 * v95) + *(_DWORD *)(*(_QWORD *)(v53 + 72) + 4 * v95);
            if ( v111 == *(_DWORD *)(*(_QWORD *)(v53 + 56) + 4 * v95) )
            {
              v110 = 1.0e100;
            }
            else
            {
              v110 = 1.0e100;
              v112 = *(_DWORD *)(*(_QWORD *)(v53 + 104) + 4LL * ((v111 - 1) >> 5));
              if ( !_bittest(&v112, v111 - 1) )
                v110 = *(double *)(*(_QWORD *)(v53 + 88) + 8LL * v111)
                     - *(double *)(*(_QWORD *)(v53 + 88) + 8LL * v111 - 8);
            }
          }
          if ( (v109 & 2) != 0 )
            v110 = *(double *)(v53 + 16);
          v97 = v97 - v110;
          if ( v97 <= v160 )
            goto LABEL_141;
        }
LABEL_155:
        v105 = *((__int64 **)this + 5);
        v106 = v97 * v97;
        v107 = (double *)(v105[1] + v96);
        if ( *v107 != 0.0 )
        {
          v106 = v106 + *v107;
          if ( v106 > 0.0 )
          {
LABEL_157:
            v108 = v106 >= 1.0e-50;
            goto LABEL_158;
          }
LABEL_153:
          v108 = v106 <= -1.0e-50;
LABEL_158:
          if ( !v108 )
          {
            *v107 = 1.0e-100;
            goto LABEL_141;
          }
LABEL_159:
          *v107 = v106;
          goto LABEL_141;
        }
        if ( v106 <= 0.0 )
          v113 = v106 <= -1.0e-50;
        else
LABEL_173:
          v113 = v106 >= 1.0e-50;
LABEL_174:
        if ( !v113 )
          goto LABEL_141;
        v114 = *((int *)v105 + 4);
        v115 = *v105;
        *((_DWORD *)v105 + 4) = v114 + 1;
        *(_DWORD *)(v115 + 4 * v114) = v95;
        goto LABEL_159;
      }
      if ( v98 == 4 )
        goto LABEL_140;
LABEL_141:
      if ( ++v95 == (unsigned int)(v56 - 1) + 1LL )
        return;
    }
    if ( v98 )
      goto LABEL_141;
LABEL_140:
    if ( fabs(v97) > 100.0 * v160 )
    {
      v97 = v97 * 10.0;
      goto LABEL_155;
    }
    goto LABEL_141;
  }
  v57 = *(_QWORD *)(v48 + 264);
  if ( (int)v52 <= 0 )
  {
    if ( v56 > 0 )
    {
      v52 = 0;
      v63 = 0;
      v61 = -v54;
      goto LABEL_117;
    }
    *((_DWORD *)v49 + 4) = 0;
    goto LABEL_121;
  }
  v58 = *(_QWORD *)(v48 + 984);
  v59 = *(_QWORD *)(v48 + 1200);
  v159 = *(_QWORD *)(v48 + 1008);
  v60 = *(double *)(v48 + 880);
  v61 = -v54;
  v62 = 0;
  v63 = 0;
  do
  {
    *(_QWORD *)(v50 + 8 * v62) = 0;
    v67 = *(double *)(v55 + 8 * v62);
    v68 = *(_BYTE *)(v57 + v62) & 7;
    if ( v68 == 3 )
      goto LABEL_76;
    if ( (*(_BYTE *)(v57 + v62) & 1) != 0 )
    {
LABEL_81:
      v67 = 0.0;
      goto LABEL_76;
    }
    if ( v68 == 2 )
      goto LABEL_124;
    if ( fabs(v67) <= v54 * 100.0 )
      goto LABEL_81;
    v64 = *(double *)(v59 + 8 * v62);
    if ( *(double *)(v58 + 8 * v62) + v60 > v64 )
    {
      v65 = (_BYTE *)(v62 + *(_QWORD *)(*((_QWORD *)this + 1) + 264LL));
      *v65 = *v65 & 0xF8 | 3;
      goto LABEL_76;
    }
    if ( v64 > *(double *)(v159 + 8 * v62) - v60 )
    {
      v92 = (_BYTE *)(v62 + *(_QWORD *)(*((_QWORD *)this + 1) + 264LL));
      *v92 = *v92 & 0xF8 | 2;
LABEL_124:
      v67 = -v67;
      goto LABEL_76;
    }
    v67 = 10.0 * COERCE_DOUBLE(COERCE_UNSIGNED_INT64(fabs(v67)) ^ 0x8000000000000000LL);
LABEL_76:
    if ( v61 > v67 )
    {
      v66 = v63++;
      *(double *)(v50 + 8 * v62) = v67 * v67;
      *(_DWORD *)(v51 + 4 * v66) = v62;
    }
    ++v62;
  }
  while ( v62 != (unsigned int)(v52 - 1) + 1LL );
  v49 = *((CoinIndexedVector **)this + 5);
  while ( v56 > (int)v52 )
  {
LABEL_117:
    v89 = *(double *)(v55 + 8 * v52);
    *(_QWORD *)(v50 + 8 * v52) = 0;
    v91 = *(_BYTE *)(v57 + v52) & 7;
    if ( v91 != 3 )
    {
      if ( (*(_BYTE *)(v57 + v52) & 1) != 0 )
        goto LABEL_119;
      if ( v91 == 2 )
      {
        v89 = -v89;
        goto LABEL_114;
      }
      v88 = fabs(v89);
      if ( v88 <= v54 * 100.0 )
LABEL_119:
        v89 = 0.0;
      else
        v89 = -v88 * 10.0;
    }
LABEL_114:
    if ( v61 > v89 )
    {
      v90 = v63++;
      *(double *)(v50 + 8 * v52) = v89 * v89;
      *(_DWORD *)(v51 + 4 * v90) = v52;
    }
    ++v52;
  }
  *((_DWORD *)v49 + 4) = v63;
  if ( !v63 )
LABEL_121:
    *((_BYTE *)v49 + 28) = 0;
}

