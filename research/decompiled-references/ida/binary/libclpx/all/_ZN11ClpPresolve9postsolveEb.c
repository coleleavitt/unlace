void __fastcall ClpPresolve::postsolve(ClpPresolve *this, char a2, double a3)
{
  __int64 v4; // rax
  __int64 v5; // rax
  int v6; // r14d
  int v7; // r12d
  int v8; // r13d
  __int64 v9; // r15
  ClpSimplex *v10; // rsi
  unsigned __int8 *v11; // rdx
  __int64 v12; // rsi
  int v13; // r8d
  _QWORD *v14; // rdi
  _QWORD *v15; // r9
  __int64 *v16; // rdx
  _QWORD *v17; // rax
  __int64 v18; // xmm0_8
  __int64 v19; // rax
  ClpSimplex *v20; // rdi
  __int64 v21; // rax
  _BYTE *v22; // rcx
  unsigned __int8 *v23; // rdi
  unsigned int v24; // esi
  __int64 v25; // rax
  unsigned int v26; // ecx
  __int64 v27; // rax
  unsigned __int8 *v28; // rcx
  unsigned __int8 *v29; // rax
  signed int v30; // esi
  __int64 v31; // rcx
  unsigned __int8 *v32; // rcx
  __int64 *v33; // r12
  int v34; // r15d
  __int64 *v35; // rax
  __int64 *v36; // rcx
  __int64 *v37; // rdx
  __int64 v38; // xmm0_8
  __int64 v39; // rdx
  double *v40; // rdi
  CoinMessageHandler *v41; // rax
  CoinMessageHandler *v42; // rax
  CoinMessageHandler *v43; // rax
  CoinMessageHandler *v44; // rax
  double v45; // xmm0_8
  CoinMessageHandler *v46; // rax
  __int64 v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rax
  int v50; // ecx
  __int64 v51; // rax
  _QWORD *v52; // rax
  _QWORD *v53; // rax
  _QWORD *v54; // rax
  _QWORD *v55; // rax
  unsigned __int64 v56; // rax
  unsigned __int8 *v57; // r11
  unsigned __int8 *v58; // rdi
  unsigned int v59; // r8d
  __int64 v60; // rax
  unsigned int v61; // ecx
  __int64 v62; // rax
  unsigned __int8 *v63; // rcx
  unsigned __int8 *v64; // rax
  signed int v65; // r8d
  __int64 v66; // rcx
  unsigned __int8 *v67; // rcx
  unsigned __int8 *v68; // rcx
  unsigned int v69; // r8d
  __int64 v70; // rax
  unsigned int v71; // edi
  __int64 v72; // rax
  unsigned __int8 *v73; // rdi
  unsigned __int8 *v74; // rax
  signed int v75; // r8d
  int v76; // eax
  __int64 v77; // rdi
  unsigned __int8 *v78; // rdi
  unsigned __int64 v79; // rdi
  __int64 v80; // rax
  int v81; // r9d
  int v82; // r10d
  double *v83; // rcx
  unsigned int v84; // edx
  unsigned int v85; // r11d
  __int64 v86; // rax
  unsigned int v87; // r11d
  __int128 v88; // xmm0
  unsigned int v89; // eax
  double *v90; // rdx
  int v91; // eax
  _QWORD *v92; // rdi
  _QWORD *v93; // rax
  __int64 *v94; // rdx
  __int64 v95; // xmm0_8
  __int64 v96; // rax
  _QWORD *v97; // rdi
  __int64 *v98; // rdx
  _QWORD *v99; // rax
  __int64 v100; // xmm0_8
  __int64 v101; // rax
  int v102; // edi
  unsigned __int8 *v103; // rcx
  unsigned int v104; // esi
  __int64 v105; // rax
  unsigned int v106; // edx
  __int64 v107; // rax
  unsigned __int8 *v108; // rdx
  unsigned __int8 *v109; // rax
  signed int v110; // esi
  __int64 v111; // rax
  unsigned __int8 *v112; // r9
  unsigned int v113; // esi
  __int64 v114; // rax
  unsigned int v115; // ecx
  __int64 v116; // rax
  unsigned __int8 *v117; // rcx
  unsigned __int8 *v118; // rax
  signed int v119; // esi
  __int64 v120; // rcx
  unsigned __int8 *v121; // rcx
  unsigned __int8 *v122; // rax
  unsigned __int8 *v123; // rcx
  unsigned __int8 v124; // r9
  unsigned __int8 *v125; // rcx
  unsigned __int8 *v126; // rax
  unsigned __int8 v127; // di
  unsigned __int8 *v128; // rdi
  unsigned __int8 *v129; // rax
  unsigned __int8 v130; // r9
  unsigned __int64 v131; // rcx
  unsigned __int8 *v132; // rax
  unsigned __int8 v133; // r9
  unsigned __int8 *v134; // rax
  unsigned __int8 *v135; // rdx
  unsigned __int8 v136; // r8
  int v137; // [rsp-1B4h] [rbp-1B4h]
  int v138; // [rsp-1B0h] [rbp-1B0h]
  std::string *v140; // [rsp-1A8h] [rbp-1A8h]
  __int64 v141; // [rsp-1A0h] [rbp-1A0h]
  unsigned __int8 *v142; // [rsp-190h] [rbp-190h]
  __int64 v143; // [rsp-180h] [rbp-180h] BYREF
  _BYTE v144[32]; // [rsp-178h] [rbp-178h] BYREF
  _QWORD v145[21]; // [rsp-158h] [rbp-158h] BYREF
  _QWORD *v146; // [rsp-B0h] [rbp-B0h]
  __int64 v147; // [rsp-A8h] [rbp-A8h]
  __int64 v148; // [rsp-98h] [rbp-98h]

  if ( !*((_QWORD *)this + 2) )
    return;
  CoinMessages::CoinMessages((CoinMessages *)v144, (const CoinMessages *)(*((_QWORD *)this + 1) + 448LL));
  v4 = *((_QWORD *)this + 2);
  if ( *(_DWORD *)(v4 + 320) )
  {
    v5 = CoinMessageHandler::message(*(CoinMessageHandler **)(v4 + 344), 19, (const CoinMessages *)v144);
    CoinMessageHandler::operator<<(v5, 0, a3);
    v4 = *((_QWORD *)this + 2);
  }
  v6 = *(_DWORD *)(v4 + 108);
  v7 = *((_DWORD *)this + 16);
  v8 = *((_DWORD *)this + 17);
  v137 = *(_DWORD *)(v4 + 104);
  v138 = *((_DWORD *)this + 18);
  v140 = (ClpPresolve *)((char *)this + 88);
  if ( !(unsigned int)std::string::compare((ClpPresolve *)((char *)this + 88), "") )
  {
    v20 = *((ClpSimplex **)this + 1);
    v9 = *((_QWORD *)v20 + 14);
    v141 = *((_QWORD *)v20 + 15);
    if ( !a2 )
    {
LABEL_10:
      v10 = *((ClpSimplex **)this + 2);
      v142 = nullptr;
      v11 = nullptr;
      goto LABEL_11;
    }
    if ( v6 + v137 > 0 )
    {
      v21 = 0;
      do
      {
        v22 = (_BYTE *)(v21 + *(_QWORD *)(*((_QWORD *)this + 2) + 264LL));
        if ( (*v22 & 7) == 5 )
          *v22 = *v22 & 0xF8 | 3;
        ++v21;
      }
      while ( v21 != (unsigned int)(v6 + v137 - 1) + 1LL );
      v20 = *((ClpSimplex **)this + 1);
    }
    v142 = *((unsigned __int8 **)v20 + 33);
    if ( !v142 )
    {
      ClpSimplex::createStatus(v20);
      v142 = *(unsigned __int8 **)(*((_QWORD *)this + 1) + 264LL);
    }
    v10 = *((ClpSimplex **)this + 2);
    v11 = &v142[v7];
    v23 = *((unsigned __int8 **)v10 + 33);
    if ( v6 && v142 != v23 )
    {
      v24 = v6 >> 3;
      if ( v6 >> 3 <= 0 )
      {
        v32 = v142;
      }
      else
      {
        if ( (v23 >= v142 + 16 || v142 >= v23 + 16) && v24 > 1 )
        {
          v25 = 0;
          v26 = 0;
          do
          {
            ++v26;
            *(__m128i *)&v142[v25] = _mm_loadu_si128((const __m128i *)&v23[v25]);
            v25 += 16;
          }
          while ( v26 < v24 >> 1 );
          v27 = 8LL * (v24 & 0xFFFFFFFE);
          v28 = &v23[v27];
          v29 = &v142[v27];
          if ( v24 != (v24 & 0xFFFFFFFE) )
          {
            *v29 = *v28;
            v29[1] = v28[1];
            v29[2] = v28[2];
            v29[3] = v28[3];
            v29[4] = v28[4];
            v29[5] = v28[5];
            v29[6] = v28[6];
            v29[7] = v28[7];
          }
          v30 = v24 - 1;
        }
        else
        {
          v30 = v24 - 1;
          v122 = v23;
          v123 = v142;
          do
          {
            v124 = *v122;
            v122 += 8;
            v123 += 8;
            *(v123 - 8) = v124;
            *(v123 - 7) = *(v122 - 7);
            *(v123 - 6) = *(v122 - 6);
            *(v123 - 5) = *(v122 - 5);
            *(v123 - 4) = *(v122 - 4);
            *(v123 - 3) = *(v122 - 3);
            *(v123 - 2) = *(v122 - 2);
            *(v123 - 1) = *(v122 - 1);
          }
          while ( &v23[8 * v30 + 8] != v122 );
        }
        v31 = 8LL * v30 + 8;
        v23 += v31;
        v32 = &v142[v31];
      }
      switch ( v6 % 8 )
      {
        case 1:
          goto LABEL_189;
        case 2:
          goto LABEL_188;
        case 3:
          goto LABEL_187;
        case 4:
          goto LABEL_186;
        case 5:
          goto LABEL_185;
        case 6:
          goto LABEL_184;
        case 7:
          v32[6] = v23[6];
LABEL_184:
          v32[5] = v23[5];
LABEL_185:
          v32[4] = v23[4];
LABEL_186:
          v32[3] = v23[3];
LABEL_187:
          v32[2] = v23[2];
LABEL_188:
          v32[1] = v23[1];
LABEL_189:
          *v32 = *v23;
          break;
        default:
          break;
      }
      v10 = *((ClpSimplex **)this + 2);
      v23 = *((unsigned __int8 **)v10 + 33);
    }
    v112 = &v23[v6];
    if ( v137 && v112 != v11 )
    {
      v113 = v137 >> 3;
      if ( v137 >> 3 <= 0 )
      {
        v121 = &v142[v7];
      }
      else
      {
        if ( (v112 >= &v142[v7 + 16] || v11 >= &v23[v6 + 16]) && v113 > 1 )
        {
          v114 = 0;
          v115 = 0;
          do
          {
            ++v115;
            *(__m128i *)&v11[v114] = _mm_loadu_si128((const __m128i *)&v112[v114]);
            v114 += 16;
          }
          while ( v115 < v113 >> 1 );
          v116 = 8LL * (v113 & 0xFFFFFFFE);
          v117 = &v112[v116];
          v118 = &v11[v116];
          if ( v113 != (v113 & 0xFFFFFFFE) )
          {
            *v118 = *v117;
            v118[1] = v117[1];
            v118[2] = v117[2];
            v118[3] = v117[3];
            v118[4] = v117[4];
            v118[5] = v117[5];
            v118[6] = v117[6];
            v118[7] = v117[7];
          }
          v119 = v113 - 1;
        }
        else
        {
          v119 = v113 - 1;
          v125 = &v142[v7];
          v126 = &v23[v6];
          do
          {
            v127 = *v126;
            v126 += 8;
            v125 += 8;
            *(v125 - 8) = v127;
            *(v125 - 7) = *(v126 - 7);
            *(v125 - 6) = *(v126 - 6);
            *(v125 - 5) = *(v126 - 5);
            *(v125 - 4) = *(v126 - 4);
            *(v125 - 3) = *(v126 - 3);
            *(v125 - 2) = *(v126 - 2);
            *(v125 - 1) = *(v126 - 1);
          }
          while ( &v112[8 * v119 + 8] != v126 );
        }
        v120 = 8LL * v119 + 8;
        v112 += v120;
        v121 = &v11[v120];
      }
      switch ( v137 % 8 )
      {
        case 1:
          goto LABEL_209;
        case 2:
          goto LABEL_208;
        case 3:
          goto LABEL_207;
        case 4:
          goto LABEL_206;
        case 5:
          goto LABEL_205;
        case 6:
          goto LABEL_204;
        case 7:
          v121[6] = v112[6];
LABEL_204:
          v121[5] = v112[5];
LABEL_205:
          v121[4] = v112[4];
LABEL_206:
          v121[3] = v112[3];
LABEL_207:
          v121[2] = v112[2];
LABEL_208:
          v121[1] = v112[1];
LABEL_209:
          *v121 = *v112;
          break;
        default:
          break;
      }
      v10 = *((ClpSimplex **)this + 2);
    }
  }
  else
  {
    if ( (unsigned __int64)v8 > 0xFFFFFFFFFFFFFFFLL )
      __cxa_throw_bad_array_new_length();
    v9 = operator new[](8LL * v8);
    if ( (unsigned __int64)v7 > 0xFFFFFFFFFFFFFFFLL )
      __cxa_throw_bad_array_new_length();
    v141 = operator new[](8LL * v7);
    if ( v8 )
    {
      if ( v8 / 8 <= 0 )
      {
        v55 = (_QWORD *)v9;
      }
      else
      {
        v54 = (_QWORD *)v9;
        do
        {
          *v54 = 0;
          v54[1] = 0;
          v54 += 8;
          *(v54 - 6) = 0;
          *(v54 - 5) = 0;
          *(v54 - 4) = 0;
          *(v54 - 3) = 0;
          *(v54 - 2) = 0;
          *(v54 - 1) = 0;
        }
        while ( v54 != (_QWORD *)(v9 + (((unsigned int)(v8 / 8 - 1) + 1LL) << 6)) );
        v55 = (_QWORD *)(v9 + ((v8 / 8 - 1 + 1LL) << 6));
      }
      switch ( v8 % 8 )
      {
        case 1:
          goto LABEL_132;
        case 2:
          goto LABEL_131;
        case 3:
          goto LABEL_130;
        case 4:
          goto LABEL_129;
        case 5:
          goto LABEL_128;
        case 6:
          goto LABEL_127;
        case 7:
          v55[6] = 0;
LABEL_127:
          v55[5] = 0;
LABEL_128:
          v55[4] = 0;
LABEL_129:
          v55[3] = 0;
LABEL_130:
          v55[2] = 0;
LABEL_131:
          v55[1] = 0;
LABEL_132:
          *v55 = 0;
          break;
        default:
          break;
      }
    }
    if ( v7 )
    {
      if ( v7 / 8 <= 0 )
      {
        v53 = (_QWORD *)v141;
      }
      else
      {
        v52 = (_QWORD *)v141;
        do
        {
          *v52 = 0;
          v52[1] = 0;
          v52 += 8;
          *(v52 - 6) = 0;
          *(v52 - 5) = 0;
          *(v52 - 4) = 0;
          *(v52 - 3) = 0;
          *(v52 - 2) = 0;
          *(v52 - 1) = 0;
        }
        while ( v52 != (_QWORD *)(v141 + (((unsigned int)(v7 / 8 - 1) + 1LL) << 6)) );
        v53 = (_QWORD *)(v141 + ((v7 / 8 - 1 + 1LL) << 6));
      }
      switch ( v7 % 8 )
      {
        case 1:
          goto LABEL_125;
        case 2:
          goto LABEL_124;
        case 3:
          goto LABEL_123;
        case 4:
          goto LABEL_122;
        case 5:
          goto LABEL_121;
        case 6:
          goto LABEL_120;
        case 7:
          v53[6] = 0;
LABEL_120:
          v53[5] = 0;
LABEL_121:
          v53[4] = 0;
LABEL_122:
          v53[3] = 0;
LABEL_123:
          v53[2] = 0;
LABEL_124:
          v53[1] = 0;
LABEL_125:
          *v53 = 0;
          break;
        default:
          break;
      }
    }
    if ( !a2 )
      goto LABEL_10;
    v56 = operator new[](v7 + v8);
    v10 = *((ClpSimplex **)this + 2);
    v57 = (unsigned __int8 *)v56;
    v142 = (unsigned __int8 *)v56;
    v11 = (unsigned __int8 *)(v56 + v7);
    v58 = *((unsigned __int8 **)v10 + 33);
    if ( v6 && (unsigned __int8 *)v56 != v58 )
    {
      v59 = v6 >> 3;
      if ( v6 >> 3 <= 0 )
      {
        v67 = (unsigned __int8 *)v56;
      }
      else
      {
        if ( (v56 >= (unsigned __int64)(v58 + 16) || (unsigned __int64)v58 >= v56 + 16) && v59 > 1 )
        {
          v60 = 0;
          v61 = 0;
          do
          {
            ++v61;
            *(__m128i *)&v57[v60] = _mm_loadu_si128((const __m128i *)&v58[v60]);
            v60 += 16;
          }
          while ( v61 < v59 >> 1 );
          v142 = v57;
          v62 = 8LL * (v59 & 0xFFFFFFFE);
          v63 = &v58[v62];
          v64 = &v57[v62];
          if ( v59 != (v59 & 0xFFFFFFFE) )
          {
            *v64 = *v63;
            v64[1] = v63[1];
            v64[2] = v63[2];
            v64[3] = v63[3];
            v64[4] = v63[4];
            v64[5] = v63[5];
            v64[6] = v63[6];
            v64[7] = v63[7];
          }
          v65 = v59 - 1;
        }
        else
        {
          v65 = v59 - 1;
          v131 = v56;
          v132 = *((unsigned __int8 **)v10 + 33);
          do
          {
            v133 = *v132;
            v132 += 8;
            v131 += 8LL;
            *(_BYTE *)(v131 - 8) = v133;
            *(_BYTE *)(v131 - 7) = *(v132 - 7);
            *(_BYTE *)(v131 - 6) = *(v132 - 6);
            *(_BYTE *)(v131 - 5) = *(v132 - 5);
            *(_BYTE *)(v131 - 4) = *(v132 - 4);
            *(_BYTE *)(v131 - 3) = *(v132 - 3);
            *(_BYTE *)(v131 - 2) = *(v132 - 2);
            *(_BYTE *)(v131 - 1) = *(v132 - 1);
          }
          while ( &v58[8 * v65 + 8] != v132 );
          v142 = v57;
        }
        v66 = 8LL * v65 + 8;
        v58 += v66;
        v67 = &v142[v66];
      }
      switch ( v6 % 8 )
      {
        case 1:
          goto LABEL_105;
        case 2:
          goto LABEL_104;
        case 3:
          goto LABEL_103;
        case 4:
          goto LABEL_102;
        case 5:
          goto LABEL_101;
        case 6:
          goto LABEL_100;
        case 7:
          v67[6] = v58[6];
LABEL_100:
          v67[5] = v58[5];
LABEL_101:
          v67[4] = v58[4];
LABEL_102:
          v67[3] = v58[3];
LABEL_103:
          v67[2] = v58[2];
LABEL_104:
          v67[1] = v58[1];
LABEL_105:
          *v67 = *v58;
          break;
        default:
          break;
      }
      v58 = *((unsigned __int8 **)v10 + 33);
    }
    v68 = &v58[v6];
    if ( v137 && v68 != v11 )
    {
      v69 = v137 >> 3;
      if ( v137 >> 3 <= 0 )
      {
        v78 = v11;
        v76 = v137;
      }
      else
      {
        if ( (v68 >= &v142[v7 + 16] || v11 >= &v58[v6 + 16]) && v69 > 1 )
        {
          v70 = 0;
          v71 = 0;
          do
          {
            ++v71;
            *(__m128i *)&v11[v70] = _mm_loadu_si128((const __m128i *)&v68[v70]);
            v70 += 16;
          }
          while ( v71 < v69 >> 1 );
          v72 = 8LL * (v69 & 0xFFFFFFFE);
          v73 = &v68[v72];
          v74 = &v11[v72];
          if ( v69 != (v69 & 0xFFFFFFFE) )
          {
            *v74 = *v73;
            v74[1] = v73[1];
            v74[2] = v73[2];
            v74[3] = v73[3];
            v74[4] = v73[4];
            v74[5] = v73[5];
            v74[6] = v73[6];
            v74[7] = v73[7];
          }
          v75 = v69 - 1;
        }
        else
        {
          v75 = v69 - 1;
          v128 = v11;
          v129 = v68;
          do
          {
            v130 = *v129;
            v129 += 8;
            v128 += 8;
            *(v128 - 8) = v130;
            *(v128 - 7) = *(v129 - 7);
            *(v128 - 6) = *(v129 - 6);
            *(v128 - 5) = *(v129 - 5);
            *(v128 - 4) = *(v129 - 4);
            *(v128 - 3) = *(v129 - 3);
            *(v128 - 2) = *(v129 - 2);
            *(v128 - 1) = *(v129 - 1);
          }
          while ( &v68[8 * v75 + 8] != v129 );
        }
        v76 = v137;
        v77 = 8LL * v75 + 8;
        v68 += v77;
        v78 = &v11[v77];
      }
      switch ( v76 % 8 )
      {
        case 1:
          goto LABEL_217;
        case 2:
          goto LABEL_216;
        case 3:
          goto LABEL_215;
        case 4:
          goto LABEL_214;
        case 5:
          goto LABEL_213;
        case 6:
          goto LABEL_212;
        case 7:
          v78[6] = v68[6];
LABEL_212:
          v78[5] = v68[5];
LABEL_213:
          v78[4] = v68[4];
LABEL_214:
          v78[3] = v68[3];
LABEL_215:
          v78[2] = v68[2];
LABEL_216:
          v78[1] = v68[1];
LABEL_217:
          *v78 = *v68;
          break;
        default:
          break;
      }
    }
  }
LABEL_11:
  CoinPostsolveMatrix::CoinPostsolveMatrix(
    (CoinPostsolveMatrix *)v145,
    v10,
    v7,
    v8,
    v138,
    *(double *)v10,
    (double *)v141,
    (double *)v9,
    v142,
    v11);
  (*(void (__fastcall **)(ClpPresolve *, _QWORD *))(*(_QWORD *)this + 32LL))(this, v145);
  if ( !(unsigned int)std::string::compare(v140, "") )
  {
    v145[20] = 0;
    v147 = 0;
    v148 = 0;
LABEL_13:
    v12 = *((_QWORD *)this + 1);
  }
  else
  {
    ClpSimplex::restoreModel(*((ClpSimplex **)this + 1), *((const char **)this + 11));
    remove(*((const char **)this + 11));
    v12 = *((_QWORD *)this + 1);
    v92 = *(_QWORD **)(v12 + 112);
    if ( v8 && (_QWORD *)v9 != v92 )
    {
      if ( v8 >> 3 > 0 )
      {
        v93 = *(_QWORD **)(v12 + 112);
        v94 = (__int64 *)v9;
        do
        {
          v95 = *v94;
          v93 += 8;
          v94 += 8;
          *(v93 - 8) = v95;
          *(v93 - 7) = *(v94 - 7);
          *(v93 - 6) = *(v94 - 6);
          *(v93 - 5) = *(v94 - 5);
          *(v93 - 4) = *(v94 - 4);
          *(v93 - 3) = *(v94 - 3);
          *(v93 - 2) = *(v94 - 2);
          *(v93 - 1) = *(v94 - 1);
        }
        while ( &v92[8 * (unsigned int)((v8 >> 3) - 1) + 8] != v93 );
        v96 = ((v8 >> 3) - 1 + 1LL) << 6;
        v9 += v96;
        v92 = (_QWORD *)((char *)v92 + v96);
      }
      switch ( v8 % 8 )
      {
        case 1:
          goto LABEL_155;
        case 2:
          goto LABEL_154;
        case 3:
          goto LABEL_153;
        case 4:
          goto LABEL_152;
        case 5:
          goto LABEL_151;
        case 6:
          goto LABEL_150;
        case 7:
          v92[6] = *(_QWORD *)(v9 + 48);
LABEL_150:
          v92[5] = *(_QWORD *)(v9 + 40);
LABEL_151:
          v92[4] = *(_QWORD *)(v9 + 32);
LABEL_152:
          v92[3] = *(_QWORD *)(v9 + 24);
LABEL_153:
          v92[2] = *(_QWORD *)(v9 + 16);
LABEL_154:
          v92[1] = *(_QWORD *)(v9 + 8);
LABEL_155:
          *v92 = *(_QWORD *)v9;
          break;
        default:
          break;
      }
    }
    v97 = *(_QWORD **)(v12 + 120);
    if ( v7 )
    {
      v98 = (__int64 *)v141;
      if ( (_QWORD *)v141 != v97 )
      {
        if ( v7 >> 3 > 0 )
        {
          v99 = *(_QWORD **)(v12 + 120);
          do
          {
            v100 = *v98;
            v99 += 8;
            v98 += 8;
            *(v99 - 8) = v100;
            *(v99 - 7) = *(v98 - 7);
            *(v99 - 6) = *(v98 - 6);
            *(v99 - 5) = *(v98 - 5);
            *(v99 - 4) = *(v98 - 4);
            *(v99 - 3) = *(v98 - 3);
            *(v99 - 2) = *(v98 - 2);
            *(v99 - 1) = *(v98 - 1);
          }
          while ( v99 != &v97[8 * (unsigned int)((v7 >> 3) - 1) + 8] );
          v101 = ((v7 >> 3) - 1 + 1LL) << 6;
          v141 += v101;
          v97 = (_QWORD *)((char *)v97 + v101);
        }
        switch ( v7 % 8 )
        {
          case 1:
            goto LABEL_169;
          case 2:
            goto LABEL_168;
          case 3:
            goto LABEL_167;
          case 4:
            goto LABEL_166;
          case 5:
            goto LABEL_165;
          case 6:
            goto LABEL_164;
          case 7:
            v97[6] = *(_QWORD *)(v141 + 48);
LABEL_164:
            v97[5] = *(_QWORD *)(v141 + 40);
LABEL_165:
            v97[4] = *(_QWORD *)(v141 + 32);
LABEL_166:
            v97[3] = *(_QWORD *)(v141 + 24);
LABEL_167:
            v97[2] = *(_QWORD *)(v141 + 16);
LABEL_168:
            v97[1] = *(_QWORD *)(v141 + 8);
LABEL_169:
            *v97 = *(_QWORD *)v141;
            break;
          default:
            break;
        }
      }
    }
    if ( a2 )
    {
      v102 = v7 + v8;
      v103 = *(unsigned __int8 **)(v12 + 264);
      if ( v8 + v7 )
      {
        if ( v142 != v103 )
        {
          v104 = v102 >> 3;
          if ( v102 >> 3 > 0 )
          {
            if ( (v103 >= v142 + 16 || v142 >= v103 + 16) && v104 > 1 )
            {
              v105 = 0;
              v106 = 0;
              do
              {
                ++v106;
                *(__m128i *)&v103[v105] = _mm_loadu_si128((const __m128i *)&v142[v105]);
                v105 += 16;
              }
              while ( v106 < v104 >> 1 );
              v107 = 8LL * (v104 & 0xFFFFFFFE);
              v108 = &v142[v107];
              v109 = &v103[v107];
              if ( v104 != (v104 & 0xFFFFFFFE) )
              {
                *v109 = *v108;
                v109[1] = v108[1];
                v109[2] = v108[2];
                v109[3] = v108[3];
                v109[4] = v108[4];
                v109[5] = v108[5];
                v109[6] = v108[6];
                v109[7] = v108[7];
              }
              v110 = v104 - 1;
            }
            else
            {
              v110 = v104 - 1;
              v134 = v103;
              v135 = v142;
              do
              {
                v136 = *v135;
                v134 += 8;
                v135 += 8;
                *(v134 - 8) = v136;
                *(v134 - 7) = *(v135 - 7);
                *(v134 - 6) = *(v135 - 6);
                *(v134 - 5) = *(v135 - 5);
                *(v134 - 4) = *(v135 - 4);
                *(v134 - 3) = *(v135 - 3);
                *(v134 - 2) = *(v135 - 2);
                *(v134 - 1) = *(v135 - 1);
              }
              while ( v134 != &v103[8 * v110 + 8] );
            }
            v111 = 8LL * v110 + 8;
            v142 += v111;
            v103 += v111;
          }
          switch ( v102 % 8 )
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
              v103[6] = v142[6];
LABEL_225:
              v103[5] = v142[5];
LABEL_226:
              v103[4] = v142[4];
LABEL_227:
              v103[3] = v142[3];
LABEL_228:
              v103[2] = v142[2];
LABEL_229:
              v103[1] = v142[1];
LABEL_230:
              *v103 = *v142;
              v12 = *((_QWORD *)this + 1);
              break;
            default:
              goto LABEL_13;
          }
        }
      }
    }
  }
  v13 = *((_DWORD *)this + 17);
  v14 = *(_QWORD **)(v12 + 128);
  v15 = v146;
  if ( v13 && v146 != v14 )
  {
    if ( v13 >> 3 > 0 )
    {
      v16 = v146;
      v17 = *(_QWORD **)(v12 + 128);
      do
      {
        v18 = *v16;
        v17 += 8;
        v16 += 8;
        *(v17 - 8) = v18;
        *(v17 - 7) = *(v16 - 7);
        *(v17 - 6) = *(v16 - 6);
        *(v17 - 5) = *(v16 - 5);
        *(v17 - 4) = *(v16 - 4);
        *(v17 - 3) = *(v16 - 3);
        *(v17 - 2) = *(v16 - 2);
        *(v17 - 1) = *(v16 - 1);
      }
      while ( v17 != &v14[8 * (unsigned int)((v13 >> 3) - 1) + 8] );
      v19 = ((v13 >> 3) - 1 + 1LL) << 6;
      v15 = (_QWORD *)((char *)v15 + v19);
      v14 = (_QWORD *)((char *)v14 + v19);
    }
    switch ( v13 % 8 )
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
        v14[6] = v15[6];
LABEL_43:
        v14[5] = v15[5];
LABEL_44:
        v14[4] = v15[4];
LABEL_45:
        v14[3] = v15[3];
LABEL_46:
        v14[2] = v15[2];
LABEL_47:
        v14[1] = v15[1];
LABEL_48:
        *v14 = *v15;
        break;
      default:
        break;
    }
  }
  if ( *(double *)v12 >= 0.0 )
    goto LABEL_50;
  v79 = *(_QWORD *)(v12 + 128);
  if ( v13 <= 0 )
    goto LABEL_50;
  v80 = (v79 >> 3) & 1;
  if ( 2 - (unsigned int)((_DWORD)v80 == 0) > v13 - 1 )
  {
    v89 = 0;
  }
  else
  {
    v81 = 0;
    if ( (_DWORD)v80 )
    {
      v81 = 1;
      *(double *)v79 = -*(double *)v79;
    }
    v82 = v13 - v80;
    v83 = (double *)(v79 + 8 * v80);
    v84 = 0;
    v85 = v13 - v80;
    v86 = 0;
    v87 = v85 >> 1;
    do
    {
      ++v84;
      *(double *)&v88 = -v83[v86];
      *((double *)&v88 + 1) = -v83[v86 + 1];
      *(_OWORD *)&v83[v86] = v88;
      v86 += 2;
    }
    while ( v87 > v84 );
    v89 = (v82 & 0xFFFFFFFE) + v81;
    if ( (v82 & 0xFFFFFFFE) == v82 )
      goto LABEL_50;
  }
  v90 = (double *)(v79 + 8LL * (int)v89);
  v91 = v89 + 1;
  *v90 = -*v90;
  if ( v13 > v91 )
    *(double *)(v79 + 8LL * v91) = -*(double *)(v79 + 8LL * v91);
LABEL_50:
  v33 = *(__int64 **)(v12 + 136);
  v34 = *((_DWORD *)this + 16);
  v35 = (__int64 *)(***(__int64 (__fastcall ****)(_QWORD, __int64, _QWORD, __int64 *, __int64, __int64))(v12 + 160))(
                     *(_QWORD *)(v12 + 160),
                     v12,
                     *(_QWORD *)(v12 + 120),
                     &v143,
                     1,
                     2);
  if ( v34 && v35 != v33 )
  {
    if ( v34 >> 3 > 0 )
    {
      v36 = v35;
      v37 = v33;
      do
      {
        v38 = *v36;
        v37 += 8;
        v36 += 8;
        *(v37 - 8) = v38;
        *(v37 - 7) = *(v36 - 7);
        *(v37 - 6) = *(v36 - 6);
        *(v37 - 5) = *(v36 - 5);
        *(v37 - 4) = *(v36 - 4);
        *(v37 - 3) = *(v36 - 3);
        *(v37 - 2) = *(v36 - 2);
        *(v37 - 1) = *(v36 - 1);
      }
      while ( v37 != &v33[8 * (unsigned int)((v34 >> 3) - 1) + 8] );
      v39 = ((v34 >> 3) - 1 + 1LL) << 6;
      v35 = (__int64 *)((char *)v35 + v39);
      v33 = (__int64 *)((char *)v33 + v39);
    }
    switch ( v34 % 8 )
    {
      case 1:
        goto LABEL_63;
      case 2:
        goto LABEL_62;
      case 3:
        goto LABEL_61;
      case 4:
        goto LABEL_60;
      case 5:
        goto LABEL_59;
      case 6:
        goto LABEL_58;
      case 7:
        v33[6] = v35[6];
LABEL_58:
        v33[5] = v35[5];
LABEL_59:
        v33[4] = v35[4];
LABEL_60:
        v33[3] = v35[3];
LABEL_61:
        v33[2] = v35[2];
LABEL_62:
        v33[1] = v35[1];
LABEL_63:
        *v33 = *v35;
        break;
      default:
        break;
    }
  }
  (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, double))(**(_QWORD **)(*((_QWORD *)this + 1) + 192LL) + 376LL))(
    *(_QWORD *)(*((_QWORD *)this + 1) + 192LL),
    *(_QWORD *)(*((_QWORD *)this + 1) + 128LL),
    *(_QWORD *)(*((_QWORD *)this + 1) + 136LL),
    -1.0);
  memset(*(void **)(*((_QWORD *)this + 1) + 112LL), 0, 8LL * *((int *)this + 17));
  (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, double))(**(_QWORD **)(*((_QWORD *)this + 1) + 192LL) + 360LL))(
    *(_QWORD *)(*((_QWORD *)this + 1) + 192LL),
    *(_QWORD *)(*((_QWORD *)this + 1) + 120LL),
    *(_QWORD *)(*((_QWORD *)this + 1) + 112LL),
    1.0);
  ClpSimplex::checkSolutionInternal(*((ClpSimplex **)this + 1));
  v40 = *((double **)this + 1);
  if ( v40[111] > 0.1 )
    ClpSimplexOther::cleanupAfterPostsolve((ClpSimplexOther *)v40);
  v41 = (CoinMessageHandler *)CoinMessageHandler::message(
                                *(CoinMessageHandler **)(*((_QWORD *)this + 2) + 344LL),
                                25,
                                (const CoinMessages *)v144);
  v42 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v41);
  v43 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v42);
  v44 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v43);
  v45 = *(double *)(*((_QWORD *)this + 1) + 896LL);
  v46 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v44);
  v47 = CoinMessageHandler::operator<<(v46);
  CoinMessageHandler::operator<<(v47, 0, v45);
  v48 = *((_QWORD *)this + 2);
  v49 = *((_QWORD *)this + 1);
  *(_DWORD *)(v49 + 308) = *(_DWORD *)(v48 + 308);
  v50 = *(_DWORD *)(v48 + 320);
  if ( v50 )
  {
    *(_DWORD *)(v49 + 320) = v50;
    if ( *(double *)(v49 + 896) < 0.1 )
      *(_QWORD *)(v49 + 320) = 0x7FFFFFFFFLL;
  }
  else if ( *(_DWORD *)(v49 + 1224) || *(_DWORD *)(v49 + 1232) )
  {
    *(_QWORD *)(v49 + 320) = 0x7FFFFFFFFLL;
    v51 = CoinMessageHandler::message(*(CoinMessageHandler **)(v48 + 344), 26, (const CoinMessages *)v144);
    CoinMessageHandler::operator<<(v51, 0, v45);
  }
  else
  {
    *(_DWORD *)(v49 + 320) = 0;
  }
  if ( (unsigned int)std::string::compare(v140, "") )
    *((_QWORD *)this + 2) = 0;
  CoinPostsolveMatrix::~CoinPostsolveMatrix((CoinPostsolveMatrix *)v145);
  CoinMessages::~CoinMessages((CoinMessages *)v144);
}

