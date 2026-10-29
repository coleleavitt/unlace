/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_808FFA0
// Address: 0x0808FFA0

//----- (0808FFA0) --------------------------------------------------------
int __cdecl sub_808FFA0(int *a1, char a2)
{
  int result; // eax
  int v3; // eax
  int v4; // edx
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // ebx
  int v9; // edx
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // ebx
  int v14; // eax
  int v15; // edx
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // ebx
  int v20; // edx
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // ebx
  int v25; // eax
  int v26; // edx
  int v27; // eax
  int v28; // eax
  int v29; // eax
  int v30; // ebx
  int v31; // edx
  int v32; // eax
  int v33; // eax
  int v34; // eax
  int v35; // ebx
  int v36; // eax
  char v37; // dl
  int v38; // edx
  int v39; // eax
  int v40; // eax
  int v41; // eax
  int v42; // edi
  unsigned int v43; // eax
  int v44; // edi
  unsigned __int8 *v45; // eax
  bool v46; // zf
  int v47; // eax
  int v48; // edx
  int v49; // eax
  int v50; // eax
  int v51; // eax
  int v52; // ebx
  unsigned int v53; // eax
  int v54; // eax
  int v55; // edx
  int v56; // eax
  int v57; // eax
  int v58; // eax
  int v59; // ebx
  unsigned int v60; // eax
  int v61; // eax
  int v62; // edx
  int v63; // eax
  int v64; // eax
  int v65; // eax
  int v66; // edi
  int v67; // edx
  int v68; // eax
  int v69; // eax
  int v70; // eax
  int v71; // edi
  int v72; // eax
  int v73; // edx
  int v74; // eax
  int v75; // eax
  int v76; // eax
  int v77; // edi
  unsigned int v78; // eax
  int v79; // eax
  int v80; // edx
  int v81; // eax
  int v82; // eax
  int v83; // eax
  int v84; // ebx
  unsigned int v85; // eax
  int v86; // edx
  int v87; // eax
  int v88; // eax
  int v89; // eax
  int v90; // ebx
  unsigned int v91; // eax
  int v92; // edx
  int v93; // eax
  int v94; // eax
  int v95; // eax
  int v96; // ebx
  unsigned int v97; // eax
  int v98; // eax
  int v99; // edx
  int v100; // eax
  int v101; // eax
  int v102; // eax
  int v103; // ebx
  unsigned int v104; // eax
  int v105; // eax
  int v106; // edx
  int v107; // eax
  int v108; // eax
  int v109; // eax
  int v110; // edi
  int v111; // edx
  int v112; // eax
  int v113; // eax
  int v114; // eax
  __m128i v115; // xmm1
  int v116; // eax
  int v117; // eax
  char *v118; // ebx
  char *v119; // edi
  int v120; // eax
  int v121; // eax
  int v122; // eax
  int v123; // eax
  char *v124; // edx
  int v125; // ecx
  char *v126; // edi
  __int16 v127; // dx
  int v128; // eax
  int v129; // edx
  int v130; // eax
  int v131; // ebx
  __int64 v132; // rax
  int v133; // edi
  __m128i v134; // xmm0
  __m128i v135; // xmm1
  __m128i v136; // xmm0
  __m128i v137; // xmm1
  int v138; // ecx
  int v139; // eax
  int v140; // ecx
  int v141; // eax
  int v142; // ecx
  int v143; // eax
  int v144; // ecx
  int v145; // eax
  int v146; // ecx
  int v147; // eax
  int v148; // ecx
  int v149; // eax
  int v150; // ecx
  int v151; // eax
  int v152; // ecx
  int v153; // eax
  int v154; // ebx
  int v155; // eax
  int v156; // ecx
  int v157; // eax
  int v158; // ecx
  int v159; // eax
  int v160; // ecx
  int v161; // eax
  int v162; // ecx
  int v163; // eax
  int v164; // ecx
  int v165; // eax
  int v166; // ecx
  int v167; // eax
  int v168; // ecx
  int v169; // eax
  int v170; // ecx
  int v171; // eax
  int v172; // ecx
  int v173; // eax
  void *v174; // eax
  unsigned __int64 v175; // [esp+4FE8h] [ebp-78h]
  int v176; // [esp+4FECh] [ebp-74h]
  int v177; // [esp+4FF0h] [ebp-70h]
  int v178; // [esp+4FF4h] [ebp-6Ch]
  _BOOL4 v179; // [esp+4FF8h] [ebp-68h]
  _BOOL4 v180; // [esp+4FF8h] [ebp-68h]
  _BOOL4 v181; // [esp+4FF8h] [ebp-68h]
  _BOOL4 v182; // [esp+4FF8h] [ebp-68h]
  _BOOL4 v183; // [esp+4FF8h] [ebp-68h]
  unsigned int v184; // [esp+4FF8h] [ebp-68h]
  int v185; // [esp+4FF8h] [ebp-68h]
  unsigned __int8 *v186; // [esp+4FF8h] [ebp-68h]
  int v187; // [esp+4FF8h] [ebp-68h]
  int v188; // [esp+4FF8h] [ebp-68h]
  int v189; // [esp+5008h] [ebp-58h]
  char *v190; // [esp+500Ch] [ebp-54h]
  char *v191; // [esp+5010h] [ebp-50h]
  char v192[4]; // [esp+501Ch] [ebp-44h] BYREF
  void *src[4]; // [esp+5020h] [ebp-40h] BYREF
  unsigned __int8 v194[4]; // [esp+5030h] [ebp-30h] BYREF
  __int128 v195; // [esp+5034h] [ebp-2Ch]
  unsigned int v196; // [esp+5044h] [ebp-1Ch]

  v196 = __readgsdword(0x14u);
  switch ( a2 )
  {
    case -80:
      v111 = 5 * a1[1];
      v112 = *a1;
      v192[0] = 2;
      *(_OWORD *)src = 0;
      if ( !sub_808A290((unsigned __int8 *)v192, (unsigned __int8 *)(v112 + 4 * v111 - 20)) )
      {
        v113 = a1[1];
        v194[0] = 2;
        v195 = 0;
        sub_8089810(v194, (unsigned __int8 *)(*a1 + 20 * v113 - 20));
        v114 = a1[1];
        if ( v114 )
        {
          v146 = *a1;
          v147 = v114 - 1;
          a1[1] = v147;
          sub_8089430(v146 + 20 * v147);
        }
        sub_8089430((int)v194);
      }
      v186 = sub_8089920((unsigned __int8 *)(*a1 + 20 * a1[1] - 20), 2);
      if ( *v186 == 7 )
      {
        v105 = sub_8089CE0((int)v192);
        if ( v105 )
          goto LABEL_137;
        if ( src[1] )
        {
          v124 = (char *)src[1] - 1;
          if ( src[1] != (void *)1 )
          {
            v125 = (*((_DWORD *)v186 + 2) == 0) + *((_DWORD *)v186 + 2) - 1;
            v191 = &v124[v125];
            v126 = (char *)src[1] + v125;
            if ( *((_DWORD *)v186 + 3) < (unsigned int)src[1] + v125 )
            {
              v189 = (*((_DWORD *)v186 + 2) == 0) + *((_DWORD *)v186 + 2) - 1;
              v190 = (char *)src[1] - 1;
              v174 = sub_80CF920((int)(v186 + 4), *((void **)v186 + 1), (unsigned int)src[1] + v125, 1u);
              v125 = v189;
              *((_DWORD *)v186 + 1) = v174;
              v124 = v190;
            }
            *((_DWORD *)v186 + 2) = v126;
            v191[*((_DWORD *)v186 + 1)] = 0;
            memcpy((void *)(*((_DWORD *)v186 + 1) + v125), src[0], (size_t)v124);
          }
        }
      }
      else
      {
        switch ( sub_808A7D0(v186, v192) )
        {
          case 2u:
            *((_DWORD *)v186 + 1) += src[0];
            goto LABEL_223;
          case 3u:
            v122 = sub_80C8F00((int)(v186 + 4), (int)src, v186 + 4, 0);
            switch ( v122 )
            {
              case 1:
                goto LABEL_223;
              case 4:
                v123 = 86;
                break;
              case 5:
                v123 = 98;
                break;
              case 2:
                v123 = 97;
                break;
              default:
                goto LABEL_223;
            }
            sub_80C7880(v123);
            break;
          case 5u:
            if ( !sub_808E880((int)v186, (int)v186) )
            {
              v175 = __PAIR64__(*((_DWORD *)src[0] + 3), *((_DWORD *)v186 + 1));
              sub_8089DD0((_DWORD *)v175, SHIDWORD(v175), (int)src[0] + 4);
            }
            goto LABEL_223;
          case 6u:
          case 8u:
            sub_80C7880(1531);
            goto LABEL_223;
          case 7u:
            if ( !sub_808A540((int)v186) && !sub_808A540((int)v192) )
              goto LABEL_180;
            goto LABEL_223;
          case 9u:
LABEL_180:
            *(_QWORD *)(v186 + 4) = _mm_add_epi64(
                                      _mm_loadl_epi64((const __m128i *)(v186 + 4)),
                                      _mm_loadl_epi64((const __m128i *)src)).m128i_u64[0];
            goto LABEL_223;
          default:
            goto LABEL_223;
        }
      }
      goto LABEL_223;
    case -79:
      v106 = 5 * a1[1];
      v107 = *a1;
      v192[0] = 2;
      *(_OWORD *)src = 0;
      if ( !sub_808A290((unsigned __int8 *)v192, (unsigned __int8 *)(v107 + 4 * v106 - 20)) )
      {
        v108 = a1[1];
        v194[0] = 2;
        v195 = 0;
        sub_8089810(v194, (unsigned __int8 *)(*a1 + 20 * v108 - 20));
        v109 = a1[1];
        if ( v109 )
        {
          v148 = *a1;
          v149 = v109 - 1;
          a1[1] = v149;
          sub_8089430(v148 + 20 * v149);
        }
        sub_8089430((int)v194);
      }
      v110 = *a1 + 20 * a1[1] - 20;
      switch ( sub_808A7D0((unsigned __int8 *)v110, v192) )
      {
        case 2u:
          *(_DWORD *)(v110 + 4) -= src[0];
          v105 = 0;
          goto LABEL_137;
        case 3u:
          v120 = sub_80C8F00(v110 + 4, (int)src, (_OWORD *)(v110 + 4), 1);
          switch ( v120 )
          {
            case 1:
              goto LABEL_148;
            case 4:
              v117 = 86;
              break;
            case 5:
              v117 = 98;
              break;
            case 2:
              v117 = 97;
              break;
            default:
              goto LABEL_148;
          }
          goto LABEL_170;
        case 5u:
          v105 = sub_808E880(v110, v110);
          if ( v105 )
            goto LABEL_137;
          v118 = *((char **)src[0] + 3);
          if ( v118 == (char *)src[0] + 4 )
            goto LABEL_148;
          v188 = v110;
          v119 = (char *)src[0] + 4;
          do
          {
            sub_808E960(*(_DWORD **)(v188 + 4), (int)(v118 + 16));
            v118 = (char *)std::_Rb_tree_increment(v118);
          }
          while ( v118 != v119 );
          v105 = 0;
          break;
        case 6u:
        case 8u:
          v105 = sub_80C7880(1531);
          goto LABEL_137;
        case 7u:
          v105 = sub_808A540(v110);
          if ( !v105 )
          {
            v105 = sub_808A540((int)v192);
            if ( !v105 )
              goto LABEL_147;
          }
          goto LABEL_137;
        case 9u:
LABEL_147:
          *(_QWORD *)(v110 + 4) = _mm_sub_epi64(
                                    _mm_loadl_epi64((const __m128i *)(v110 + 4)),
                                    _mm_loadl_epi64((const __m128i *)src)).m128i_u64[0];
          goto LABEL_148;
        default:
LABEL_148:
          v105 = 0;
          break;
      }
      goto LABEL_137;
    case -78:
      v67 = 5 * a1[1];
      v68 = *a1;
      v192[0] = 2;
      *(_OWORD *)src = 0;
      if ( !sub_808A290((unsigned __int8 *)v192, (unsigned __int8 *)(v68 + 4 * v67 - 20)) )
      {
        v69 = a1[1];
        v194[0] = 2;
        v195 = 0;
        sub_8089810(v194, (unsigned __int8 *)(*a1 + 20 * v69 - 20));
        v70 = a1[1];
        if ( v70 )
        {
          v156 = *a1;
          v157 = v70 - 1;
          a1[1] = v157;
          sub_8089430(v156 + 20 * v157);
        }
        sub_8089430((int)v194);
      }
      v71 = *a1 + 20 * a1[1] - 20;
      switch ( sub_808A7D0((unsigned __int8 *)v71, v192) )
      {
        case 2u:
          *(_DWORD *)(v71 + 4) *= (_DWORD)src[0];
          v105 = 0;
          goto LABEL_137;
        case 3u:
          v116 = sub_80C9450(v71 + 4, (int)src, (_OWORD *)(v71 + 4));
          switch ( v116 )
          {
            case 1:
              goto LABEL_152;
            case 4:
              v117 = 86;
              break;
            case 5:
              v117 = 98;
              break;
            case 2:
              v117 = 97;
              break;
            default:
              goto LABEL_152;
          }
          goto LABEL_170;
        case 5u:
        case 6u:
        case 8u:
          v105 = sub_80C7880(1531);
          goto LABEL_137;
        case 7u:
          v105 = sub_808A540(v71);
          if ( !v105 )
          {
            v105 = sub_808A540((int)v192);
            if ( !v105 )
              goto LABEL_151;
          }
          goto LABEL_137;
        case 9u:
LABEL_151:
          *(_QWORD *)(v71 + 4) *= *(_QWORD *)src;
          break;
        default:
          break;
      }
LABEL_152:
      v105 = 0;
      goto LABEL_137;
    case -77:
      v61 = a1[1];
      v192[0] = 2;
      v62 = 5 * v61;
      v63 = *a1;
      *(_OWORD *)src = 0;
      if ( !sub_808A290((unsigned __int8 *)v192, (unsigned __int8 *)(v63 + 4 * v62 - 20)) )
      {
        v64 = a1[1];
        v194[0] = 2;
        v195 = 0;
        sub_8089810(v194, (unsigned __int8 *)(*a1 + 20 * v64 - 20));
        v65 = a1[1];
        if ( v65 )
        {
          v154 = *a1;
          v155 = v65 - 1;
          a1[1] = v155;
          sub_8089430(v154 + 20 * v155);
        }
        sub_8089430((int)v194);
      }
      v66 = *a1 + 20 * a1[1] - 20;
      switch ( sub_808A7D0((unsigned __int8 *)v66, v192) )
      {
        case 2u:
          if ( !src[0] )
            goto LABEL_227;
          *(int *)(v66 + 4) /= (int)src[0];
          v105 = 0;
          break;
        case 3u:
          v121 = sub_80C9530(v66 + 4, (int)src, (_OWORD *)(v66 + 4));
          switch ( v121 )
          {
            case 1:
              goto LABEL_144;
            case 4:
              v117 = 86;
              break;
            case 5:
              v117 = 98;
              break;
            case 2:
              v117 = 97;
              break;
            default:
              goto LABEL_144;
          }
LABEL_170:
          v105 = sub_80C7880(v117);
          break;
        case 5u:
        case 6u:
        case 8u:
          v105 = sub_80C7880(1531);
          break;
        case 7u:
          v105 = sub_808A540(v66);
          if ( !v105 )
          {
            v105 = sub_808A540((int)v192);
            if ( !v105 )
              goto LABEL_142;
          }
          break;
        case 9u:
LABEL_142:
          v115 = _mm_loadl_epi64((const __m128i *)src);
          if ( !(_mm_cvtsi128_si32(_mm_srli_epi64(v115, 0x20u)) | _mm_cvtsi128_si32(v115)) )
            goto LABEL_227;
          *(__int64 *)(v66 + 4) /= v115.m128i_i64[0];
          goto LABEL_144;
        default:
LABEL_144:
          v105 = 0;
          break;
      }
      goto LABEL_137;
    case -76:
      v98 = a1[1];
      v192[0] = 2;
      v99 = 5 * v98;
      v100 = *a1;
      *(_OWORD *)src = 0;
      if ( !sub_808A290((unsigned __int8 *)v192, (unsigned __int8 *)(v100 + 4 * v99 - 20)) )
      {
        v101 = a1[1];
        v194[0] = 2;
        v195 = 0;
        sub_8089810(v194, (unsigned __int8 *)(*a1 + 20 * v101 - 20));
        v102 = a1[1];
        if ( v102 )
        {
          v152 = *a1;
          v153 = v102 - 1;
          a1[1] = v153;
          sub_8089430(v152 + 20 * v153);
        }
        sub_8089430((int)v194);
      }
      v103 = *a1 + 20 * a1[1] - 20;
      v104 = sub_808A7D0((unsigned __int8 *)v103, v192);
      if ( v104 == 2 )
      {
        if ( src[0] )
        {
          *(int *)(v103 + 4) %= (int)src[0];
          goto LABEL_223;
        }
LABEL_227:
        v105 = sub_80C7880(86);
        goto LABEL_137;
      }
      if ( v104 != 9 )
      {
        v105 = sub_80C7880(61);
LABEL_137:
        v187 = v105;
        sub_8089430((int)v192);
        result = v187;
        goto LABEL_6;
      }
      v137 = _mm_loadl_epi64((const __m128i *)src);
      if ( !(_mm_cvtsi128_si32(_mm_srli_epi64(v137, 0x20u)) | _mm_cvtsi128_si32(v137)) )
        goto LABEL_227;
      *(__int64 *)(v103 + 4) %= v137.m128i_i64[0];
LABEL_223:
      sub_8089430((int)v192);
      result = 0;
LABEL_6:
      if ( v196 != __readgsdword(0x14u) )
        sub_80D7AB0();
      return result;
    case -75:
      v92 = 5 * a1[1];
      v93 = *a1;
      v192[0] = 2;
      *(_OWORD *)src = 0;
      if ( !sub_808A290((unsigned __int8 *)v192, (unsigned __int8 *)(v93 + 4 * v92 - 20)) )
      {
        v94 = a1[1];
        v194[0] = 2;
        v195 = 0;
        sub_8089810(v194, (unsigned __int8 *)(*a1 + 20 * v94 - 20));
        v95 = a1[1];
        if ( v95 )
        {
          v150 = *a1;
          v151 = v95 - 1;
          a1[1] = v151;
          sub_8089430(v150 + 20 * v151);
        }
        sub_8089430((int)v194);
      }
      v96 = *a1 + 20 * a1[1] - 20;
      v97 = sub_808A7D0((unsigned __int8 *)v96, v192);
      if ( v97 == 2 )
      {
        *(_DWORD *)(v96 + 4) = ((int)src[0] | *(_DWORD *)(v96 + 4)) != 0;
      }
      else
      {
        if ( v97 != 9 )
          goto LABEL_113;
        v134 = _mm_loadl_epi64((const __m128i *)(v96 + 4));
        v135 = _mm_loadl_epi64((const __m128i *)src);
        *(_DWORD *)(v96 + 8) = 0;
        v136 = _mm_or_si128(v134, v135);
        *(_DWORD *)(v96 + 4) = (_mm_cvtsi128_si32(_mm_srli_epi64(v136, 0x20u)) | _mm_cvtsi128_si32(v136)) != 0;
      }
      goto LABEL_223;
    case -74:
      v47 = a1[1];
      v192[0] = 2;
      v48 = 5 * v47;
      v49 = *a1;
      *(_OWORD *)src = 0;
      if ( !sub_808A290((unsigned __int8 *)v192, (unsigned __int8 *)(v49 + 4 * v48 - 20)) )
      {
        v50 = a1[1];
        v194[0] = 2;
        v195 = 0;
        sub_8089810(v194, (unsigned __int8 *)(*a1 + 20 * v50 - 20));
        v51 = a1[1];
        if ( v51 )
        {
          v138 = *a1;
          v139 = v51 - 1;
          a1[1] = v139;
          sub_8089430(v138 + 20 * v139);
        }
        sub_8089430((int)v194);
      }
      v52 = *a1 + 20 * a1[1] - 20;
      v53 = sub_808A7D0((unsigned __int8 *)v52, v192);
      if ( v53 == 2 )
      {
        v130 = *(_DWORD *)(v52 + 4);
        if ( v130 )
          v130 = src[0] != nullptr;
        *(_DWORD *)(v52 + 4) = v130;
      }
      else
      {
        if ( v53 != 9 )
          goto LABEL_113;
        v128 = *(_DWORD *)(v52 + 4);
        v129 = *(_DWORD *)(v52 + 8);
        if ( *(_QWORD *)(v52 + 4) )
        {
          v129 = 0;
          v128 = *(_QWORD *)src != 0;
        }
        *(_DWORD *)(v52 + 4) = v128;
        *(_DWORD *)(v52 + 8) = v129;
      }
      goto LABEL_223;
    case -73:
      v44 = *a1 + 20 * a1[1] - 20;
      v45 = sub_8089920((unsigned __int8 *)v44, 0);
      if ( v45 && *v45 == 5 )
      {
        sub_8089430(v44);
        *(_DWORD *)(v44 + 4) = 1;
      }
      if ( *(_BYTE *)v44 == 2 )
      {
        *(_DWORD *)(v44 + 4) = *(_DWORD *)(v44 + 4) == 0;
        result = 0;
      }
      else
      {
        if ( *(_BYTE *)v44 != 9 )
          goto LABEL_190;
        v46 = *(_QWORD *)(v44 + 4) == 0;
        *(_DWORD *)(v44 + 8) = 0;
        *(_DWORD *)(v44 + 4) = v46;
        result = 0;
      }
      goto LABEL_6;
    case -72:
      v86 = 5 * a1[1];
      v87 = *a1;
      v192[0] = 2;
      *(_OWORD *)src = 0;
      if ( !sub_808A290((unsigned __int8 *)v192, (unsigned __int8 *)(v87 + 4 * v86 - 20)) )
      {
        v88 = a1[1];
        v194[0] = 2;
        v195 = 0;
        sub_8089810(v194, (unsigned __int8 *)(*a1 + 20 * v88 - 20));
        v89 = a1[1];
        if ( v89 )
        {
          v144 = *a1;
          v145 = v89 - 1;
          a1[1] = v145;
          sub_8089430(v144 + 20 * v145);
        }
        sub_8089430((int)v194);
      }
      v90 = *a1 + 20 * a1[1] - 20;
      v91 = sub_808A7D0((unsigned __int8 *)v90, v192);
      if ( v91 == 2 )
      {
        *(_DWORD *)(v90 + 4) |= (unsigned int)src[0];
      }
      else
      {
        if ( v91 != 9 )
          goto LABEL_113;
        *(_QWORD *)(v90 + 4) = _mm_or_si128(
                                 _mm_loadl_epi64((const __m128i *)(v90 + 4)),
                                 _mm_loadl_epi64((const __m128i *)src)).m128i_u64[0];
      }
      goto LABEL_223;
    case -71:
      v79 = a1[1];
      v192[0] = 2;
      v80 = 5 * v79;
      v81 = *a1;
      *(_OWORD *)src = 0;
      if ( !sub_808A290((unsigned __int8 *)v192, (unsigned __int8 *)(v81 + 4 * v80 - 20)) )
      {
        v82 = a1[1];
        v194[0] = 2;
        v195 = 0;
        sub_8089810(v194, (unsigned __int8 *)(*a1 + 20 * v82 - 20));
        v83 = a1[1];
        if ( v83 )
        {
          v142 = *a1;
          v143 = v83 - 1;
          a1[1] = v143;
          sub_8089430(v142 + 20 * v143);
        }
        sub_8089430((int)v194);
      }
      v84 = *a1 + 20 * a1[1] - 20;
      v85 = sub_808A7D0((unsigned __int8 *)v84, v192);
      if ( v85 == 2 )
      {
        *(_DWORD *)(v84 + 4) &= (unsigned int)src[0];
      }
      else
      {
        if ( v85 != 9 )
          goto LABEL_113;
        *(_QWORD *)(v84 + 4) = _mm_and_si128(
                                 _mm_loadl_epi64((const __m128i *)(v84 + 4)),
                                 _mm_loadl_epi64((const __m128i *)src)).m128i_u64[0];
      }
      goto LABEL_223;
    case -70:
      v55 = 5 * a1[1];
      v56 = *a1;
      v192[0] = 2;
      *(_OWORD *)src = 0;
      if ( !sub_808A290((unsigned __int8 *)v192, (unsigned __int8 *)(v56 + 4 * v55 - 20)) )
      {
        v57 = a1[1];
        v194[0] = 2;
        v195 = 0;
        sub_8089810(v194, (unsigned __int8 *)(*a1 + 20 * v57 - 20));
        v58 = a1[1];
        if ( v58 )
        {
          v140 = *a1;
          v141 = v58 - 1;
          a1[1] = v141;
          sub_8089430(v140 + 20 * v141);
        }
        sub_8089430((int)v194);
      }
      v59 = *a1 + 20 * a1[1] - 20;
      v60 = sub_808A7D0((unsigned __int8 *)v59, v192);
      if ( v60 == 2 )
      {
        *(_DWORD *)(v59 + 4) ^= (unsigned int)src[0];
      }
      else
      {
        if ( v60 != 9 )
          goto LABEL_113;
        *(_QWORD *)(v59 + 4) = _mm_xor_si128(
                                 _mm_loadl_epi64((const __m128i *)(v59 + 4)),
                                 _mm_loadl_epi64((const __m128i *)src)).m128i_u64[0];
      }
      goto LABEL_223;
    case -69:
      v54 = *a1 + 20 * a1[1] - 20;
      if ( *(_BYTE *)v54 == 2 )
      {
        *(_DWORD *)(v54 + 4) = ~*(_DWORD *)(v54 + 4);
        result = 0;
      }
      else
      {
        if ( *(_BYTE *)v54 != 9 )
          goto LABEL_190;
        *(_QWORD *)(v54 + 4) = _mm_xor_si128(_mm_loadl_epi64((const __m128i *)(v54 + 4)), (__m128i)-1LL).m128i_u64[0];
        result = 0;
      }
      goto LABEL_6;
    case -68:
      v72 = a1[1];
      v192[0] = 2;
      v73 = 5 * v72;
      v74 = *a1;
      *(_OWORD *)src = 0;
      if ( !sub_808A290((unsigned __int8 *)v192, (unsigned __int8 *)(v74 + 4 * v73 - 20)) )
      {
        v75 = a1[1];
        v194[0] = 2;
        v195 = 0;
        sub_8089810(v194, (unsigned __int8 *)(*a1 + 20 * v75 - 20));
        v76 = a1[1];
        if ( v76 )
        {
          v158 = *a1;
          v159 = v76 - 1;
          a1[1] = v159;
          sub_8089430(v158 + 20 * v159);
        }
        sub_8089430((int)v194);
      }
      v77 = *a1 + 20 * a1[1] - 20;
      v78 = sub_808A7D0((unsigned __int8 *)v77, v192);
      if ( v78 == 2 )
      {
        *(int *)(v77 + 4) >>= SLOBYTE(src[0]);
      }
      else
      {
        if ( v78 != 9 )
          goto LABEL_113;
        v131 = v77;
        v132 = *(__int64 *)(v77 + 4) >> ((int)src[0] & 0x1F);
        v133 = *(int *)(v77 + 8) >> SLOBYTE(src[0]) >> 31;
        if ( ((int)src[0] & 0x20) != 0 )
          v132 = __PAIR64__(v133, HIDWORD(v132));
        *(_QWORD *)(v131 + 4) = v132;
      }
      goto LABEL_223;
    case -67:
      v38 = 5 * a1[1];
      v39 = *a1;
      v192[0] = 2;
      *(_OWORD *)src = 0;
      if ( !sub_808A290((unsigned __int8 *)v192, (unsigned __int8 *)(v39 + 4 * v38 - 20)) )
      {
        v40 = a1[1];
        v194[0] = 2;
        v195 = 0;
        sub_8089810(v194, (unsigned __int8 *)(*a1 + 20 * v40 - 20));
        v41 = a1[1];
        if ( v41 )
        {
          v172 = *a1;
          v173 = v41 - 1;
          a1[1] = v173;
          sub_8089430(v172 + 20 * v173);
        }
        sub_8089430((int)v194);
      }
      v42 = *a1 + 20 * a1[1] - 20;
      v43 = sub_808A7D0((unsigned __int8 *)v42, v192);
      if ( v43 == 2 )
      {
        *(_DWORD *)(v42 + 4) <<= SLOBYTE(src[0]);
      }
      else
      {
        if ( v43 != 9 )
        {
LABEL_113:
          v185 = sub_80C7880(61);
          sub_8089430((int)v192);
          result = v185;
          goto LABEL_6;
        }
        *(_QWORD *)(v42 + 4) <<= SLOBYTE(src[0]);
      }
      goto LABEL_223;
    case -66:
      v36 = *a1 + 20 * a1[1] - 20;
      v37 = *(_BYTE *)v36;
      if ( *(_BYTE *)v36 == 3 )
      {
        v127 = *(_WORD *)(v36 + 18);
        if ( v127 )
        {
          *(_WORD *)(v36 + 18) = v127 + 0x8000;
          result = 0;
        }
        else
        {
LABEL_14:
          result = 0;
        }
      }
      else if ( v37 == 2 )
      {
        *(_DWORD *)(v36 + 4) = -*(_DWORD *)(v36 + 4);
        result = 0;
      }
      else if ( v37 == 9 )
      {
        *(_QWORD *)(v36 + 4) = _mm_sub_epi64((__m128i)0LL, _mm_loadl_epi64((const __m128i *)(v36 + 4))).m128i_u64[0];
        result = 0;
      }
      else
      {
LABEL_190:
        result = sub_80C7880(61);
      }
      goto LABEL_6;
    case -65:
      result = sub_8089CE0(*a1 + 20 * a1[1] - 20);
      goto LABEL_6;
    case -56:
      v20 = 5 * a1[1];
      v21 = *a1;
      v192[0] = 2;
      *(_OWORD *)src = 0;
      if ( !sub_808A290((unsigned __int8 *)v192, (unsigned __int8 *)(v21 + 4 * v20 - 20)) )
      {
        v22 = a1[1];
        v194[0] = 2;
        v195 = 0;
        sub_8089810(v194, (unsigned __int8 *)(*a1 + 20 * v22 - 20));
        v23 = a1[1];
        if ( v23 )
        {
          v170 = *a1;
          v171 = v23 - 1;
          a1[1] = v171;
          sub_8089430(v170 + 20 * v171);
        }
        sub_8089430((int)v194);
      }
      v24 = *a1 + 20 * a1[1] - 20;
      v182 = sub_808A980(v24, (int)v192) == 0;
      sub_8089430(v24);
      sub_8089430((int)v192);
      *(_DWORD *)(v24 + 4) = v182;
      sub_8089430((int)v192);
      result = 0;
      goto LABEL_6;
    case -55:
      v14 = a1[1];
      v192[0] = 2;
      v15 = 5 * v14;
      v16 = *a1;
      *(_OWORD *)src = 0;
      if ( !sub_808A290((unsigned __int8 *)v192, (unsigned __int8 *)(v16 + 4 * v15 - 20)) )
      {
        v17 = a1[1];
        v194[0] = 2;
        v195 = 0;
        sub_8089810(v194, (unsigned __int8 *)(*a1 + 20 * v17 - 20));
        v18 = a1[1];
        if ( v18 )
        {
          v164 = *a1;
          v165 = v18 - 1;
          a1[1] = v165;
          sub_8089430(v164 + 20 * v165);
        }
        sub_8089430((int)v194);
      }
      v19 = *a1 + 20 * a1[1] - 20;
      v181 = sub_808A980(v19, (int)v192) != 0;
      sub_8089430(v19);
      sub_8089430((int)v192);
      *(_DWORD *)(v19 + 4) = v181;
      sub_8089430((int)v192);
      result = 0;
      goto LABEL_6;
    case -54:
      v9 = 5 * a1[1];
      v10 = *a1;
      v192[0] = 2;
      *(_OWORD *)src = 0;
      if ( !sub_808A290((unsigned __int8 *)v192, (unsigned __int8 *)(v10 + 4 * v9 - 20)) )
      {
        v11 = a1[1];
        v194[0] = 2;
        v195 = 0;
        sub_8089810(v194, (unsigned __int8 *)(*a1 + 20 * v11 - 20));
        v12 = a1[1];
        if ( v12 )
        {
          v166 = *a1;
          v167 = v12 - 1;
          a1[1] = v167;
          sub_8089430(v166 + 20 * v167);
        }
        sub_8089430((int)v194);
      }
      v13 = *a1 + 20 * a1[1] - 20;
      v180 = sub_808A980(v13, (int)v192) <= 0;
      sub_8089430(v13);
      sub_8089430((int)v192);
      *(_DWORD *)(v13 + 4) = v180;
      sub_8089430((int)v192);
      result = 0;
      goto LABEL_6;
    case -53:
      v3 = a1[1];
      v192[0] = 2;
      v4 = 5 * v3;
      v5 = *a1;
      *(_OWORD *)src = 0;
      if ( !sub_808A290((unsigned __int8 *)v192, (unsigned __int8 *)(v5 + 4 * v4 - 20)) )
      {
        v6 = a1[1];
        v194[0] = 2;
        v195 = 0;
        sub_8089810(v194, (unsigned __int8 *)(*a1 + 20 * v6 - 20));
        v7 = a1[1];
        if ( v7 )
        {
          v168 = *a1;
          v169 = v7 - 1;
          a1[1] = v169;
          sub_8089430(v168 + 20 * v169);
        }
        sub_8089430((int)v194);
      }
      v8 = *a1 + 20 * a1[1] - 20;
      v179 = sub_808A980(v8, (int)v192) >= 0;
      sub_8089430(v8);
      sub_8089430((int)v192);
      *(_DWORD *)(v8 + 4) = v179;
      sub_8089430((int)v192);
      goto LABEL_14;
    case -52:
      v31 = 5 * a1[1];
      v32 = *a1;
      v192[0] = 2;
      *(_OWORD *)src = 0;
      if ( !sub_808A290((unsigned __int8 *)v192, (unsigned __int8 *)(v32 + 4 * v31 - 20)) )
      {
        v33 = a1[1];
        v194[0] = 2;
        v195 = 0;
        sub_8089810(v194, (unsigned __int8 *)(*a1 + 20 * v33 - 20));
        v34 = a1[1];
        if ( v34 )
        {
          v160 = *a1;
          v161 = v34 - 1;
          a1[1] = v161;
          sub_8089430(v160 + 20 * v161);
        }
        sub_8089430((int)v194);
      }
      v35 = *a1 + 20 * a1[1] - 20;
      v184 = (unsigned int)sub_808A980(v35, (int)v192) >> 31;
      sub_8089430(v35);
      sub_8089430((int)v192);
      *(_DWORD *)(v35 + 4) = v184;
      sub_8089430((int)v192);
      result = 0;
      goto LABEL_6;
    case -51:
      v25 = a1[1];
      v192[0] = 2;
      v26 = 5 * v25;
      v27 = *a1;
      *(_OWORD *)src = 0;
      if ( !sub_808A290((unsigned __int8 *)v192, (unsigned __int8 *)(v27 + 4 * v26 - 20)) )
      {
        v28 = a1[1];
        v194[0] = 2;
        v195 = 0;
        sub_8089810(v194, (unsigned __int8 *)(*a1 + 20 * v28 - 20));
        v29 = a1[1];
        if ( v29 )
        {
          v162 = *a1;
          v163 = v29 - 1;
          a1[1] = v163;
          sub_8089430(v162 + 20 * v163);
        }
        sub_8089430((int)v194);
      }
      v30 = *a1 + 20 * a1[1] - 20;
      v183 = sub_808A980(v30, (int)v192) > 0;
      sub_8089430(v30);
      sub_8089430((int)v192);
      *(_DWORD *)(v30 + 4) = v183;
      sub_8089430((int)v192);
      result = 0;
      goto LABEL_6;
    case -50:
      result = sub_808A3E0(*a1 + 20 * a1[1] - 20);
      goto LABEL_6;
    case -48:
      result = sub_808A6A0(*a1 + 20 * a1[1] - 20);
      goto LABEL_6;
    case -47:
      result = sub_808A540(*a1 + 20 * a1[1] - 20);
      goto LABEL_6;
    default:
      if ( !byte_811F8A1 )
      {
        if ( v196 == __readgsdword(0x14u) )
          sub_80CFF40(1448, v176, v177, v178);
        sub_80D7AB0();
      }
      JUMPOUT(0x804F004);
  }
}
// 808FFE3: control flows out of bounds to 804F004
// 8090003: variable 'v176' is possibly undefined
// 8090003: variable 'v177' is possibly undefined
// 8090003: variable 'v178' is possibly undefined
// 804B870: using guessed type int __cdecl std::_Rb_tree_increment(_DWORD);
// 811F8A1: using guessed type char byte_811F8A1;
