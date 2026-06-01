__int64 __fastcall CoinModel::resize(CoinModel *this, int a2, int a3, int a4)
{
  int v6; // ebx
  int v7; // edx
  __int64 result; // rax
  int v9; // ebp
  __int64 v10; // r13
  __int64 v11; // rax
  int v12; // esi
  char *v13; // rdi
  __int64 v14; // rdx
  __int64 *v15; // rcx
  __int64 v16; // r10
  __int64 v17; // xmm0_8
  __int64 v18; // rdx
  char *v19; // rcx
  _QWORD *v20; // rdx
  int v21; // edi
  __int64 v22; // rax
  int v23; // edx
  __int64 v24; // rbp
  char *v25; // rdi
  __int64 v26; // rcx
  const __m128i *v27; // rsi
  __int64 v28; // rax
  __m128i v29; // xmm0
  __int64 v30; // rcx
  const __m128i *v31; // r9
  __m128i *v32; // rcx
  __int64 v33; // r13
  __int64 v34; // rax
  int v35; // esi
  __int64 v36; // r8
  char *v37; // rdi
  __int64 v38; // rdx
  __int64 *v39; // rcx
  __int64 v40; // rax
  __int64 v41; // xmm0_8
  __int64 v42; // rcx
  char *v43; // r9
  _QWORD *v44; // rcx
  __int64 v45; // rax
  int v46; // esi
  __int64 v47; // r14
  char *v48; // rdi
  __int64 v49; // rdx
  __int64 *v50; // rcx
  __int64 v51; // rax
  __int64 v52; // xmm0_8
  __int64 v53; // rcx
  char *v54; // r9
  _QWORD *v55; // rcx
  unsigned __int64 v56; // r13
  __m128i *v57; // rax
  int v58; // esi
  __m128i *v59; // r14
  __m128i *v60; // rdi
  unsigned int v61; // r9d
  const __m128i *v62; // rdx
  __m128i *v63; // rcx
  __int64 v64; // r9
  __m128i v65; // xmm1
  __m128i v66; // xmm0
  __int64 v67; // rax
  __int32 *m128i_i32; // rcx
  bool v69; // zf
  _DWORD *v70; // rax
  char *v71; // rdi
  unsigned __int64 v72; // r13
  int v73; // eax
  int v74; // r9d
  unsigned int v75; // esi
  const __m128i *v76; // rdx
  unsigned __int64 v77; // rcx
  __int64 v78; // rsi
  __m128i v79; // xmm1
  __m128i v80; // xmm0
  __int64 v81; // rcx
  char *v82; // rax
  _DWORD *v83; // rcx
  int v84; // eax
  __int64 v85; // rax
  int v86; // esi
  __int64 v87; // r8
  char *v88; // rdi
  __int64 v89; // rdx
  __int64 *v90; // rcx
  __int64 v91; // rax
  __int64 v92; // xmm0_8
  __int64 v93; // rcx
  char *v94; // r9
  _QWORD *v95; // rcx
  __int64 v96; // rax
  int v97; // esi
  __int64 v98; // r14
  char *v99; // rdi
  __int64 v100; // rdx
  __int64 *v101; // rcx
  __int64 v102; // r9
  __int64 v103; // xmm0_8
  __int64 v104; // rdx
  char *v105; // rax
  _QWORD *v106; // rdx
  unsigned __int64 v107; // rbp
  __int64 v108; // rax
  int v109; // r9d
  unsigned __int64 v110; // r14
  char *v111; // rdi
  unsigned int v112; // eax
  const __m128i *v113; // rdx
  unsigned __int64 v114; // rcx
  __int64 v115; // rax
  __m128i v116; // xmm1
  __m128i v117; // xmm0
  __int64 v118; // rax
  char *v119; // rcx
  _DWORD *v120; // rax
  __int64 v121; // rax
  int v122; // esi
  unsigned __int64 v123; // r14
  char *v124; // rdi
  unsigned int v125; // eax
  unsigned __int64 v126; // rdx
  const __m128i *v127; // rcx
  __int64 v128; // r9
  __m128i v129; // xmm1
  __m128i v130; // xmm0
  __int64 v131; // rdx
  char *v132; // rax
  _DWORD *v133; // rdx
  _DWORD *v134; // rax
  char *v135; // rdi
  unsigned __int64 v136; // rbp
  int v137; // edx
  int v138; // eax
  unsigned int v139; // esi
  unsigned __int64 v140; // rdx
  const __m128i *v141; // rcx
  __int64 v142; // r9
  __m128i v143; // xmm1
  __m128i v144; // xmm0
  __int64 v145; // rdx
  char *v146; // rsi
  _DWORD *v147; // rdx
  int v148; // eax
  int v149; // eax
  int *v150; // rcx
  int v151; // edx
  __int64 v152; // rcx
  unsigned __int64 v153; // rdx
  int *v154; // rax
  unsigned __int64 v155; // rcx
  int v156; // r10d
  unsigned __int64 v157; // rsi
  char *v158; // rcx
  int v159; // r10d
  unsigned __int64 v160; // rax
  char *v161; // rcx
  int v162; // r10d
  unsigned __int64 v163; // rcx
  char *v164; // rdx
  int v165; // esi
  __int64 v166; // [rsp+0h] [rbp-48h]
  __int64 v167; // [rsp+0h] [rbp-48h]
  __int64 v168; // [rsp+0h] [rbp-48h]
  __int64 v169; // [rsp+8h] [rbp-40h]

  v6 = a4;
  v7 = *((_DWORD *)this + 28);
  result = *((unsigned int *)this + 176);
  if ( v7 >= a4 )
    v6 = *((_DWORD *)this + 28);
  if ( (result & 0xFFFFFFFD) == 0 )
  {
    if ( *((_DWORD *)this + 2) >= a2 )
      a2 = *((_DWORD *)this + 2);
    v9 = a2;
    if ( *((_DWORD *)this + 25) < a2 )
    {
      v10 = a2;
      v166 = *((_QWORD *)this + 16);
      if ( (unsigned __int64)a2 > 0xFFFFFFFFFFFFFFFLL )
        goto LABEL_267;
      v11 = operator new[](8LL * a2);
      v12 = *((_DWORD *)this + 2);
      v13 = *((char **)this + 16);
      if ( v12 && v13 != (char *)v11 )
      {
        if ( v12 >> 3 <= 0 )
        {
          v20 = (_QWORD *)v11;
          v19 = *((char **)this + 16);
        }
        else
        {
          v14 = v11;
          v15 = *((__int64 **)this + 16);
          v16 = (unsigned int)((v12 >> 3) - 1);
          do
          {
            v17 = *v15;
            v14 += 64;
            v15 += 8;
            *(_QWORD *)(v14 - 64) = v17;
            *(_QWORD *)(v14 - 56) = *(v15 - 7);
            *(_QWORD *)(v14 - 48) = *(v15 - 6);
            *(_QWORD *)(v14 - 40) = *(v15 - 5);
            *(_QWORD *)(v14 - 32) = *(v15 - 4);
            *(_QWORD *)(v14 - 24) = *(v15 - 3);
            *(_QWORD *)(v14 - 16) = *(v15 - 2);
            *(_QWORD *)(v14 - 8) = *(v15 - 1);
          }
          while ( v14 != v11 + ((v16 + 1) << 6) );
          v18 = ((int)v16 + 1LL) << 6;
          v19 = &v13[v18];
          v20 = (_QWORD *)(v11 + v18);
        }
        switch ( v12 % 8 )
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
            v20[6] = *((_QWORD *)v19 + 6);
LABEL_54:
            v20[5] = *((_QWORD *)v19 + 5);
LABEL_55:
            v20[4] = *((_QWORD *)v19 + 4);
LABEL_56:
            v20[3] = *((_QWORD *)v19 + 3);
LABEL_57:
            v20[2] = *((_QWORD *)v19 + 2);
LABEL_58:
            v20[1] = *((_QWORD *)v19 + 1);
LABEL_59:
            *v20 = *(_QWORD *)v19;
            break;
          default:
            break;
        }
      }
      if ( v13 )
      {
        v169 = v11;
        operator delete[](v13);
        v11 = v169;
      }
      *((_QWORD *)this + 16) = v11;
      v45 = operator new[](8 * v10);
      v46 = *((_DWORD *)this + 2);
      v47 = v45;
      v48 = *((char **)this + 17);
      if ( v46 && v48 != (char *)v45 )
      {
        if ( v46 >> 3 <= 0 )
        {
          v55 = (_QWORD *)v45;
          v54 = *((char **)this + 17);
        }
        else
        {
          v49 = v45;
          v50 = *((__int64 **)this + 17);
          v51 = (unsigned int)((v46 >> 3) - 1);
          do
          {
            v52 = *v50;
            v49 += 64;
            v50 += 8;
            *(_QWORD *)(v49 - 64) = v52;
            *(_QWORD *)(v49 - 56) = *(v50 - 7);
            *(_QWORD *)(v49 - 48) = *(v50 - 6);
            *(_QWORD *)(v49 - 40) = *(v50 - 5);
            *(_QWORD *)(v49 - 32) = *(v50 - 4);
            *(_QWORD *)(v49 - 24) = *(v50 - 3);
            *(_QWORD *)(v49 - 16) = *(v50 - 2);
            *(_QWORD *)(v49 - 8) = *(v50 - 1);
          }
          while ( v49 != v47 + ((v51 + 1) << 6) );
          v53 = ((int)v51 + 1LL) << 6;
          v54 = &v48[v53];
          v55 = (_QWORD *)(v47 + v53);
        }
        switch ( v46 % 8 )
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
            v55[6] = *((_QWORD *)v54 + 6);
LABEL_70:
            v55[5] = *((_QWORD *)v54 + 5);
LABEL_71:
            v55[4] = *((_QWORD *)v54 + 4);
LABEL_72:
            v55[3] = *((_QWORD *)v54 + 3);
LABEL_73:
            v55[2] = *((_QWORD *)v54 + 2);
LABEL_74:
            v55[1] = *((_QWORD *)v54 + 1);
LABEL_75:
            *v55 = *(_QWORD *)v54;
            break;
          default:
            break;
        }
      }
      if ( v48 )
        operator delete[](v48);
      v56 = 4 * v10;
      *((_QWORD *)this + 17) = v47;
      v57 = (__m128i *)operator new[](v56);
      v58 = *((_DWORD *)this + 2);
      v59 = v57;
      v60 = *((__m128i **)this + 22);
      if ( v58 && v60 != v57 )
      {
        v61 = v58 >> 3;
        if ( v58 >> 3 <= 0 )
        {
          m128i_i32 = *((__int32 **)this + 22);
        }
        else
        {
          if ( (v60 >= &v57[2] || v57 >= &v60[2]) && v61 > 1 )
          {
            v62 = *((const __m128i **)this + 22);
            v63 = v57;
            v64 = v61 - 1;
            do
            {
              v65 = _mm_loadu_si128(v62);
              v62 += 2;
              v63 += 2;
              v66 = _mm_loadu_si128(v62 - 1);
              v63[-2] = v65;
              v63[-1] = v66;
            }
            while ( v62 != &v60[2 * v64 + 2] );
          }
          else
          {
            v150 = *((int **)this + 22);
            v64 = v61 - 1;
            do
            {
              v151 = *v150;
              v150 += 8;
              v57 += 2;
              v57[-2].m128i_i32[0] = v151;
              v57[-2].m128i_i32[1] = *(v150 - 7);
              v57[-2].m128i_i32[2] = *(v150 - 6);
              v57[-2].m128i_i32[3] = *(v150 - 5);
              v57[-1].m128i_i32[0] = *(v150 - 4);
              v57[-1].m128i_i32[1] = *(v150 - 3);
              v57[-1].m128i_i32[2] = *(v150 - 2);
              v57[-1].m128i_i32[3] = *(v150 - 1);
            }
            while ( v150 != (int *)&v60[2 * v64 + 2] );
          }
          v67 = 2 * ((int)v64 + 1LL);
          m128i_i32 = v60[v67].m128i_i32;
          v57 = &v59[v67];
        }
        switch ( v58 % 8 )
        {
          case 1:
            goto LABEL_93;
          case 2:
            goto LABEL_92;
          case 3:
            goto LABEL_91;
          case 4:
            goto LABEL_90;
          case 5:
            goto LABEL_89;
          case 6:
            goto LABEL_88;
          case 7:
            v57[1].m128i_i32[2] = m128i_i32[6];
LABEL_88:
            v57[1].m128i_i32[1] = m128i_i32[5];
LABEL_89:
            v57[1].m128i_i32[0] = m128i_i32[4];
LABEL_90:
            v57->m128i_i32[3] = m128i_i32[3];
LABEL_91:
            v57->m128i_i32[2] = m128i_i32[2];
LABEL_92:
            v57->m128i_i32[1] = m128i_i32[1];
LABEL_93:
            v57->m128i_i32[0] = *m128i_i32;
            break;
          default:
            break;
        }
      }
      if ( v60 )
        operator delete[](v60);
      v69 = *((_BYTE *)this + 708) == 0;
      *((_QWORD *)this + 22) = v59;
      if ( v69 )
        CoinModelHash::resize((CoinModel *)((char *)this + 144), v9, 0);
      if ( (*((_BYTE *)this + 712) & 1) != 0 )
        CoinModelLinkedList::resize((CoinModel *)((char *)this + 336), v9, v6);
      if ( !*((_DWORD *)this + 176) )
      {
        if ( (unsigned __int64)(v9 + 1) > 0x1FFFFFFFFFFFFFFELL )
          goto LABEL_267;
        v70 = (_DWORD *)operator new[](v56 + 4);
        v71 = *((char **)this + 36);
        v72 = (unsigned __int64)v70;
        if ( v71 )
        {
          v73 = *((_DWORD *)this + 2);
          v74 = v73 + 1;
          if ( v73 != -1 && v71 != (char *)v72 )
          {
            v75 = v74 >> 3;
            if ( v74 >> 3 <= 0 )
            {
              v83 = (_DWORD *)v72;
              v82 = *((char **)this + 36);
            }
            else
            {
              if ( ((unsigned __int64)v71 >= v72 + 32 || v72 >= (unsigned __int64)(v71 + 32)) && v75 > 1 )
              {
                v76 = *((const __m128i **)this + 36);
                v77 = v72;
                v78 = v75 - 1;
                do
                {
                  v79 = _mm_loadu_si128(v76);
                  v76 += 2;
                  v77 += 32LL;
                  v80 = _mm_loadu_si128(v76 - 1);
                  *(__m128i *)(v77 - 32) = v79;
                  *(__m128i *)(v77 - 16) = v80;
                }
                while ( v76 != (const __m128i *)&v71[32 * v78 + 32] );
              }
              else
              {
                v160 = v72;
                v161 = *((char **)this + 36);
                v78 = v75 - 1;
                do
                {
                  v162 = *(_DWORD *)v161;
                  v161 += 32;
                  v160 += 32LL;
                  *(_DWORD *)(v160 - 32) = v162;
                  *(_DWORD *)(v160 - 28) = *((_DWORD *)v161 - 7);
                  *(_DWORD *)(v160 - 24) = *((_DWORD *)v161 - 6);
                  *(_DWORD *)(v160 - 20) = *((_DWORD *)v161 - 5);
                  *(_DWORD *)(v160 - 16) = *((_DWORD *)v161 - 4);
                  *(_DWORD *)(v160 - 12) = *((_DWORD *)v161 - 3);
                  *(_DWORD *)(v160 - 8) = *((_DWORD *)v161 - 2);
                  *(_DWORD *)(v160 - 4) = *((_DWORD *)v161 - 1);
                }
                while ( &v71[32 * v78 + 32] != v161 );
              }
              v81 = 32 * ((int)v78 + 1LL);
              v82 = &v71[v81];
              v83 = (_DWORD *)(v72 + v81);
            }
            switch ( v74 % 8 )
            {
              case 1:
                goto LABEL_21;
              case 2:
                goto LABEL_20;
              case 3:
                goto LABEL_19;
              case 4:
                goto LABEL_18;
              case 5:
                goto LABEL_17;
              case 6:
                goto LABEL_16;
              case 7:
                v83[6] = *((_DWORD *)v82 + 6);
LABEL_16:
                v83[5] = *((_DWORD *)v82 + 5);
LABEL_17:
                v83[4] = *((_DWORD *)v82 + 4);
LABEL_18:
                v83[3] = *((_DWORD *)v82 + 3);
LABEL_19:
                v83[2] = *((_DWORD *)v82 + 2);
LABEL_20:
                v83[1] = *((_DWORD *)v82 + 1);
LABEL_21:
                *v83 = *(_DWORD *)v82;
                break;
              default:
                break;
            }
          }
          operator delete[](v71);
        }
        else
        {
          *v70 = 0;
        }
        *((_QWORD *)this + 36) = v72;
      }
      *((_DWORD *)this + 25) = v9;
      if ( !v166 )
      {
        v148 = *((_DWORD *)this + 2);
        *((_DWORD *)this + 2) = 0;
        CoinModel::fillRows(this, v148 - 1, 1, 0);
      }
      result = *((unsigned int *)this + 176);
    }
    if ( (unsigned int)(result - 1) > 1 )
    {
      if ( (_DWORD)result != 3 )
      {
LABEL_29:
        v21 = *((_DWORD *)this + 28);
        goto LABEL_32;
      }
LABEL_52:
      CoinModel::badType(this);
    }
    if ( *((_DWORD *)this + 3) >= a3 )
      a3 = *((_DWORD *)this + 3);
    if ( a3 <= *((_DWORD *)this + 26) )
      goto LABEL_29;
LABEL_44:
    v33 = *((_QWORD *)this + 24);
    if ( (unsigned __int64)a3 > 0xFFFFFFFFFFFFFFFLL )
      goto LABEL_267;
    v34 = operator new[](8LL * a3);
    v35 = *((_DWORD *)this + 3);
    v36 = v34;
    v37 = *((char **)this + 24);
    if ( v35 && v37 != (char *)v34 )
    {
      if ( v35 >> 3 <= 0 )
      {
        v44 = (_QWORD *)v34;
        v43 = *((char **)this + 24);
      }
      else
      {
        v38 = v34;
        v39 = *((__int64 **)this + 24);
        v40 = (unsigned int)((v35 >> 3) - 1);
        do
        {
          v41 = *v39;
          v38 += 64;
          v39 += 8;
          *(_QWORD *)(v38 - 64) = v41;
          *(_QWORD *)(v38 - 56) = *(v39 - 7);
          *(_QWORD *)(v38 - 48) = *(v39 - 6);
          *(_QWORD *)(v38 - 40) = *(v39 - 5);
          *(_QWORD *)(v38 - 32) = *(v39 - 4);
          *(_QWORD *)(v38 - 24) = *(v39 - 3);
          *(_QWORD *)(v38 - 16) = *(v39 - 2);
          *(_QWORD *)(v38 - 8) = *(v39 - 1);
        }
        while ( v38 != v36 + ((v40 + 1) << 6) );
        v42 = ((int)v40 + 1LL) << 6;
        v43 = &v37[v42];
        v44 = (_QWORD *)(v36 + v42);
      }
      switch ( v35 % 8 )
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
          v44[6] = *((_QWORD *)v43 + 6);
LABEL_129:
          v44[5] = *((_QWORD *)v43 + 5);
LABEL_130:
          v44[4] = *((_QWORD *)v43 + 4);
LABEL_131:
          v44[3] = *((_QWORD *)v43 + 3);
LABEL_132:
          v44[2] = *((_QWORD *)v43 + 2);
LABEL_133:
          v44[1] = *((_QWORD *)v43 + 1);
LABEL_134:
          *v44 = *(_QWORD *)v43;
          break;
        default:
          break;
      }
    }
    if ( v37 )
    {
      v167 = v36;
      operator delete[](v37);
      v36 = v167;
    }
    *((_QWORD *)this + 24) = v36;
    v85 = operator new[](8LL * a3);
    v86 = *((_DWORD *)this + 3);
    v87 = v85;
    v88 = *((char **)this + 25);
    if ( v86 && v88 != (char *)v85 )
    {
      if ( v86 >> 3 <= 0 )
      {
        v95 = (_QWORD *)v85;
        v94 = *((char **)this + 25);
      }
      else
      {
        v89 = v85;
        v90 = *((__int64 **)this + 25);
        v91 = (unsigned int)((v86 >> 3) - 1);
        do
        {
          v92 = *v90;
          v89 += 64;
          v90 += 8;
          *(_QWORD *)(v89 - 64) = v92;
          *(_QWORD *)(v89 - 56) = *(v90 - 7);
          *(_QWORD *)(v89 - 48) = *(v90 - 6);
          *(_QWORD *)(v89 - 40) = *(v90 - 5);
          *(_QWORD *)(v89 - 32) = *(v90 - 4);
          *(_QWORD *)(v89 - 24) = *(v90 - 3);
          *(_QWORD *)(v89 - 16) = *(v90 - 2);
          *(_QWORD *)(v89 - 8) = *(v90 - 1);
        }
        while ( v89 != v87 + ((v91 + 1) << 6) );
        v93 = ((int)v91 + 1LL) << 6;
        v94 = &v88[v93];
        v95 = (_QWORD *)(v87 + v93);
      }
      switch ( v86 % 8 )
      {
        case 1:
          goto LABEL_150;
        case 2:
          goto LABEL_149;
        case 3:
          goto LABEL_148;
        case 4:
          goto LABEL_147;
        case 5:
          goto LABEL_146;
        case 6:
          goto LABEL_145;
        case 7:
          v95[6] = *((_QWORD *)v94 + 6);
LABEL_145:
          v95[5] = *((_QWORD *)v94 + 5);
LABEL_146:
          v95[4] = *((_QWORD *)v94 + 4);
LABEL_147:
          v95[3] = *((_QWORD *)v94 + 3);
LABEL_148:
          v95[2] = *((_QWORD *)v94 + 2);
LABEL_149:
          v95[1] = *((_QWORD *)v94 + 1);
LABEL_150:
          *v95 = *(_QWORD *)v94;
          break;
        default:
          break;
      }
    }
    if ( v88 )
    {
      v168 = v87;
      operator delete[](v88);
      v87 = v168;
    }
    *((_QWORD *)this + 25) = v87;
    v96 = operator new[](8LL * a3);
    v97 = *((_DWORD *)this + 3);
    v98 = v96;
    v99 = *((char **)this + 23);
    if ( v97 && v99 != (char *)v96 )
    {
      if ( v97 >> 3 <= 0 )
      {
        v106 = (_QWORD *)v96;
        v105 = *((char **)this + 23);
      }
      else
      {
        v100 = v96;
        v101 = *((__int64 **)this + 23);
        v102 = (unsigned int)((v97 >> 3) - 1);
        do
        {
          v103 = *v101;
          v100 += 64;
          v101 += 8;
          *(_QWORD *)(v100 - 64) = v103;
          *(_QWORD *)(v100 - 56) = *(v101 - 7);
          *(_QWORD *)(v100 - 48) = *(v101 - 6);
          *(_QWORD *)(v100 - 40) = *(v101 - 5);
          *(_QWORD *)(v100 - 32) = *(v101 - 4);
          *(_QWORD *)(v100 - 24) = *(v101 - 3);
          *(_QWORD *)(v100 - 16) = *(v101 - 2);
          *(_QWORD *)(v100 - 8) = *(v101 - 1);
        }
        while ( v100 != v96 + ((v102 + 1) << 6) );
        v104 = ((int)v102 + 1LL) << 6;
        v105 = &v99[v104];
        v106 = (_QWORD *)(v98 + v104);
      }
      switch ( v97 % 8 )
      {
        case 1:
          goto LABEL_166;
        case 2:
          goto LABEL_165;
        case 3:
          goto LABEL_164;
        case 4:
          goto LABEL_163;
        case 5:
          goto LABEL_162;
        case 6:
          goto LABEL_161;
        case 7:
          v106[6] = *((_QWORD *)v105 + 6);
LABEL_161:
          v106[5] = *((_QWORD *)v105 + 5);
LABEL_162:
          v106[4] = *((_QWORD *)v105 + 4);
LABEL_163:
          v106[3] = *((_QWORD *)v105 + 3);
LABEL_164:
          v106[2] = *((_QWORD *)v105 + 2);
LABEL_165:
          v106[1] = *((_QWORD *)v105 + 1);
LABEL_166:
          *v106 = *(_QWORD *)v105;
          break;
        default:
          break;
      }
    }
    if ( v99 )
      operator delete[](v99);
    v107 = 4LL * a3;
    *((_QWORD *)this + 23) = v98;
    v108 = operator new[](v107);
    v109 = *((_DWORD *)this + 3);
    v110 = v108;
    v111 = *((char **)this + 35);
    if ( v109 && v111 != (char *)v108 )
    {
      v112 = v109 >> 3;
      if ( v109 >> 3 <= 0 )
      {
        v120 = (_DWORD *)v110;
        v119 = *((char **)this + 35);
      }
      else
      {
        if ( ((unsigned __int64)v111 >= v110 + 32 || v110 >= (unsigned __int64)(v111 + 32)) && v112 > 1 )
        {
          v113 = *((const __m128i **)this + 35);
          v114 = v110;
          v115 = v112 - 1;
          do
          {
            v116 = _mm_loadu_si128(v113);
            v113 += 2;
            v114 += 32LL;
            v117 = _mm_loadu_si128(v113 - 1);
            *(__m128i *)(v114 - 32) = v116;
            *(__m128i *)(v114 - 16) = v117;
          }
          while ( v113 != (const __m128i *)&v111[32 * v115 + 32] );
        }
        else
        {
          v157 = v110;
          v158 = *((char **)this + 35);
          v115 = v112 - 1;
          do
          {
            v159 = *(_DWORD *)v158;
            v158 += 32;
            v157 += 32LL;
            *(_DWORD *)(v157 - 32) = v159;
            *(_DWORD *)(v157 - 28) = *((_DWORD *)v158 - 7);
            *(_DWORD *)(v157 - 24) = *((_DWORD *)v158 - 6);
            *(_DWORD *)(v157 - 20) = *((_DWORD *)v158 - 5);
            *(_DWORD *)(v157 - 16) = *((_DWORD *)v158 - 4);
            *(_DWORD *)(v157 - 12) = *((_DWORD *)v158 - 3);
            *(_DWORD *)(v157 - 8) = *((_DWORD *)v158 - 2);
            *(_DWORD *)(v157 - 4) = *((_DWORD *)v158 - 1);
          }
          while ( &v111[32 * v115 + 32] != v158 );
        }
        v118 = 32 * ((int)v115 + 1LL);
        v119 = &v111[v118];
        v120 = (_DWORD *)(v110 + v118);
      }
      switch ( v109 % 8 )
      {
        case 1:
          goto LABEL_184;
        case 2:
          goto LABEL_183;
        case 3:
          goto LABEL_182;
        case 4:
          goto LABEL_181;
        case 5:
          goto LABEL_180;
        case 6:
          goto LABEL_179;
        case 7:
          v120[6] = *((_DWORD *)v119 + 6);
LABEL_179:
          v120[5] = *((_DWORD *)v119 + 5);
LABEL_180:
          v120[4] = *((_DWORD *)v119 + 4);
LABEL_181:
          v120[3] = *((_DWORD *)v119 + 3);
LABEL_182:
          v120[2] = *((_DWORD *)v119 + 2);
LABEL_183:
          v120[1] = *((_DWORD *)v119 + 1);
LABEL_184:
          *v120 = *(_DWORD *)v119;
          break;
        default:
          break;
      }
    }
    if ( v111 )
      operator delete[](v111);
    *((_QWORD *)this + 35) = v110;
    v121 = operator new[](v107);
    v122 = *((_DWORD *)this + 3);
    v123 = v121;
    v124 = *((char **)this + 30);
    if ( v122 && v124 != (char *)v121 )
    {
      v125 = v122 >> 3;
      if ( v122 >> 3 <= 0 )
      {
        v133 = (_DWORD *)v123;
        v132 = *((char **)this + 30);
      }
      else
      {
        if ( (v123 >= (unsigned __int64)(v124 + 32) || (unsigned __int64)v124 >= v123 + 32) && v125 > 1 )
        {
          v126 = v123;
          v127 = *((const __m128i **)this + 30);
          v128 = v125 - 1;
          do
          {
            v129 = _mm_loadu_si128(v127);
            v126 += 32LL;
            v127 += 2;
            v130 = _mm_loadu_si128(v127 - 1);
            *(__m128i *)(v126 - 32) = v129;
            *(__m128i *)(v126 - 16) = v130;
          }
          while ( v123 + 32 * v128 + 32 != v126 );
        }
        else
        {
          v152 = v125 - 1;
          v153 = v123;
          v154 = *((int **)this + 30);
          LODWORD(v128) = v152;
          v155 = v123 + 32 * (v152 + 1);
          do
          {
            v156 = *v154;
            v153 += 32LL;
            v154 += 8;
            *(_DWORD *)(v153 - 32) = v156;
            *(_DWORD *)(v153 - 28) = *(v154 - 7);
            *(_DWORD *)(v153 - 24) = *(v154 - 6);
            *(_DWORD *)(v153 - 20) = *(v154 - 5);
            *(_DWORD *)(v153 - 16) = *(v154 - 4);
            *(_DWORD *)(v153 - 12) = *(v154 - 3);
            *(_DWORD *)(v153 - 8) = *(v154 - 2);
            *(_DWORD *)(v153 - 4) = *(v154 - 1);
          }
          while ( v155 != v153 );
        }
        v131 = 32 * ((int)v128 + 1LL);
        v132 = &v124[v131];
        v133 = (_DWORD *)(v123 + v131);
      }
      switch ( v122 % 8 )
      {
        case 1:
          goto LABEL_202;
        case 2:
          goto LABEL_201;
        case 3:
          goto LABEL_200;
        case 4:
          goto LABEL_199;
        case 5:
          goto LABEL_198;
        case 6:
          goto LABEL_197;
        case 7:
          v133[6] = *((_DWORD *)v132 + 6);
LABEL_197:
          v133[5] = *((_DWORD *)v132 + 5);
LABEL_198:
          v133[4] = *((_DWORD *)v132 + 4);
LABEL_199:
          v133[3] = *((_DWORD *)v132 + 3);
LABEL_200:
          v133[2] = *((_DWORD *)v132 + 2);
LABEL_201:
          v133[1] = *((_DWORD *)v132 + 1);
LABEL_202:
          *v133 = *(_DWORD *)v132;
          break;
        default:
          break;
      }
    }
    if ( v124 )
      operator delete[](v124);
    v69 = *((_BYTE *)this + 708) == 0;
    *((_QWORD *)this + 30) = v123;
    if ( v69 )
      CoinModelHash::resize((CoinModel *)((char *)this + 208), a3, 0);
    if ( (*((_BYTE *)this + 712) & 2) != 0 )
      CoinModelLinkedList::resize((CoinModel *)((char *)this + 392), a3, v6);
    if ( *((_DWORD *)this + 176) == 1 )
    {
      if ( (unsigned __int64)(a3 + 1) > 0x1FFFFFFFFFFFFFFELL )
        goto LABEL_267;
      v134 = (_DWORD *)operator new[](v107 + 4);
      v135 = *((char **)this + 36);
      v136 = (unsigned __int64)v134;
      if ( v135 )
      {
        v137 = *((_DWORD *)this + 3);
        v138 = v137 + 1;
        if ( v137 != -1 && v135 != (char *)v136 )
        {
          v139 = v138 >> 3;
          if ( v138 >> 3 <= 0 )
          {
            v147 = (_DWORD *)v136;
            v146 = *((char **)this + 36);
          }
          else
          {
            if ( (v136 >= (unsigned __int64)(v135 + 32) || (unsigned __int64)v135 >= v136 + 32) && v139 > 1 )
            {
              v140 = v136;
              v141 = *((const __m128i **)this + 36);
              v142 = v139 - 1;
              do
              {
                v143 = _mm_loadu_si128(v141);
                v140 += 32LL;
                v141 += 2;
                v144 = _mm_loadu_si128(v141 - 1);
                *(__m128i *)(v140 - 32) = v143;
                *(__m128i *)(v140 - 16) = v144;
              }
              while ( v136 + 32 * v142 + 32 != v140 );
            }
            else
            {
              v163 = v136;
              v164 = *((char **)this + 36);
              v142 = v139 - 1;
              do
              {
                v165 = *(_DWORD *)v164;
                v164 += 32;
                v163 += 32LL;
                *(_DWORD *)(v163 - 32) = v165;
                *(_DWORD *)(v163 - 28) = *((_DWORD *)v164 - 7);
                *(_DWORD *)(v163 - 24) = *((_DWORD *)v164 - 6);
                *(_DWORD *)(v163 - 20) = *((_DWORD *)v164 - 5);
                *(_DWORD *)(v163 - 16) = *((_DWORD *)v164 - 4);
                *(_DWORD *)(v163 - 12) = *((_DWORD *)v164 - 3);
                *(_DWORD *)(v163 - 8) = *((_DWORD *)v164 - 2);
                *(_DWORD *)(v163 - 4) = *((_DWORD *)v164 - 1);
              }
              while ( v164 != &v135[32 * v142 + 32] );
            }
            v145 = 32 * ((int)v142 + 1LL);
            v146 = &v135[v145];
            v147 = (_DWORD *)(v136 + v145);
          }
          switch ( v138 % 8 )
          {
            case 1:
              goto LABEL_239;
            case 2:
              goto LABEL_238;
            case 3:
              goto LABEL_237;
            case 4:
              goto LABEL_236;
            case 5:
              goto LABEL_235;
            case 6:
              goto LABEL_234;
            case 7:
              v147[6] = *((_DWORD *)v146 + 6);
LABEL_234:
              v147[5] = *((_DWORD *)v146 + 5);
LABEL_235:
              v147[4] = *((_DWORD *)v146 + 4);
LABEL_236:
              v147[3] = *((_DWORD *)v146 + 3);
LABEL_237:
              v147[2] = *((_DWORD *)v146 + 2);
LABEL_238:
              v147[1] = *((_DWORD *)v146 + 1);
LABEL_239:
              *v147 = *(_DWORD *)v146;
              break;
            default:
              break;
          }
        }
        operator delete[](v135);
      }
      else
      {
        *v134 = 0;
      }
      *((_QWORD *)this + 36) = v136;
    }
    *((_DWORD *)this + 26) = a3;
    if ( !v33 )
    {
      v149 = *((_DWORD *)this + 3);
      *((_DWORD *)this + 3) = 0;
      CoinModel::fillColumns(this, v149 - 1, 1, 0);
    }
    result = *((unsigned int *)this + 176);
    if ( (_DWORD)result != 3 )
      goto LABEL_29;
    goto LABEL_52;
  }
  if ( (_DWORD)result == 3 )
    CoinModel::badType(this);
  result = (unsigned int)(result - 1);
  v21 = *((_DWORD *)this + 28);
  if ( (unsigned int)result <= 1 )
  {
    if ( *((_DWORD *)this + 3) >= a3 )
      a3 = *((_DWORD *)this + 3);
    if ( *((_DWORD *)this + 26) < a3 )
      goto LABEL_44;
    v21 = v7;
  }
LABEL_32:
  if ( v6 <= v21 )
    return result;
  if ( (unsigned __int64)v6 > 0x7FFFFFFFFFFFFFFLL )
LABEL_267:
    __cxa_throw_bad_array_new_length();
  v22 = operator new[](16LL * v6);
  v23 = *((_DWORD *)this + 27);
  v24 = v22;
  v25 = *((char **)this + 37);
  if ( v23 && v25 != (char *)v22 )
  {
    if ( v23 >> 3 <= 0 )
    {
      v32 = (__m128i *)v22;
      v31 = *((const __m128i **)this + 37);
    }
    else
    {
      v26 = v22;
      v27 = *((const __m128i **)this + 37);
      v28 = (unsigned int)((v23 >> 3) - 1);
      do
      {
        v29 = _mm_loadu_si128(v27);
        v26 += 128;
        v27 += 8;
        *(__m128i *)(v26 - 128) = v29;
        *(__m128i *)(v26 - 112) = _mm_loadu_si128(v27 - 7);
        *(__m128i *)(v26 - 96) = _mm_loadu_si128(v27 - 6);
        *(__m128i *)(v26 - 80) = _mm_loadu_si128(v27 - 5);
        *(__m128i *)(v26 - 64) = _mm_loadu_si128(v27 - 4);
        *(__m128i *)(v26 - 48) = _mm_loadu_si128(v27 - 3);
        *(__m128i *)(v26 - 32) = _mm_loadu_si128(v27 - 2);
        *(__m128i *)(v26 - 16) = _mm_loadu_si128(v27 - 1);
      }
      while ( v26 != v24 + ((v28 + 1) << 7) );
      v30 = ((int)v28 + 1LL) << 7;
      v31 = (const __m128i *)&v25[v30];
      v32 = (__m128i *)(v24 + v30);
    }
    switch ( v23 % 8 )
    {
      case 1:
        goto LABEL_118;
      case 2:
        goto LABEL_117;
      case 3:
        goto LABEL_116;
      case 4:
        goto LABEL_115;
      case 5:
        goto LABEL_114;
      case 6:
        goto LABEL_113;
      case 7:
        v32[6] = _mm_loadu_si128(v31 + 6);
LABEL_113:
        v32[5] = _mm_loadu_si128(v31 + 5);
LABEL_114:
        v32[4] = _mm_loadu_si128(v31 + 4);
LABEL_115:
        v32[3] = _mm_loadu_si128(v31 + 3);
LABEL_116:
        v32[2] = _mm_loadu_si128(v31 + 2);
LABEL_117:
        v32[1] = _mm_loadu_si128(v31 + 1);
LABEL_118:
        *v32 = _mm_loadu_si128(v31);
        break;
      default:
        break;
    }
  }
  if ( v25 )
    operator delete[](v25);
  v84 = *((_DWORD *)this + 80);
  *((_QWORD *)this + 37) = v24;
  if ( v84 )
    CoinModelHash2::resize((CoinModel *)((char *)this + 312));
  result = *((unsigned int *)this + 178);
  *((_DWORD *)this + 28) = v6;
  if ( (result & 1) != 0 )
  {
    CoinModelLinkedList::resize((CoinModel *)((char *)this + 336), *((_DWORD *)this + 25), v6);
    result = *((unsigned int *)this + 178);
  }
  if ( (result & 2) != 0 )
    return CoinModelLinkedList::resize(
             (CoinModel *)((char *)this + 392),
             *((_DWORD *)this + 26),
             *((_DWORD *)this + 28));
  return result;
}

