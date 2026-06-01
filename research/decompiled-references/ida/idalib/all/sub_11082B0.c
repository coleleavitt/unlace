void __fastcall sub_11082B0(__int64 a1, __int64 a2, const char *a3, unsigned __int8 a4, _QWORD *a5)
{
  _BYTE *v7; // rax
  size_t v8; // rdx
  __int64 v9; // rbx
  bool v10; // zf
  unsigned __int64 i; // r13
  const char **v12; // r14
  const char *v13; // r12
  size_t v14; // rax
  size_t v15; // rax
  __int64 v16; // rcx
  int v17; // edx
  bool v18; // al
  unsigned int v19; // ebx
  _QWORD *v20; // rsi
  const char **v21; // rdx
  signed __int64 v22; // rcx
  const char **v23; // rcx
  const char **v24; // rax
  __int64 v25; // r14
  _BYTE *v26; // rax
  _BYTE *v27; // rax
  __int64 v28; // rdx
  char *v29; // rsi
  __int64 v30; // rdx
  _BYTE *v31; // rax
  _BYTE *v32; // rax
  _BYTE *v33; // rsi
  __int64 v34; // rdx
  char *v35; // rsi
  __int64 v36; // rdx
  __int64 v37; // rax
  __int64 v38; // rdx
  unsigned __int64 v39; // rdx
  const void *v40; // rbp
  size_t v41; // r12
  unsigned __int64 v42; // rax
  __m128i *v43; // rax
  __int64 v44; // rax
  char *v45; // r14
  unsigned __int64 v46; // rax
  _BYTE *v47; // rdi
  unsigned __int64 v48; // rbp
  unsigned __int64 v49; // rdx
  _BYTE *v50; // rax
  __m128i *v51; // rdx
  _BYTE *v52; // rax
  __int64 v53; // rdx
  size_t v54; // rax
  void *v55; // rdi
  size_t v56; // rbx
  _BYTE *v57; // rax
  size_t v58; // rdx
  __int64 v59; // rax
  void *v60; // r8
  char *v61; // rcx
  size_t v62; // rax
  void *v63; // rdi
  __int64 v64; // rax
  char *v65; // rdi
  size_t v66; // rax
  const char *v67; // r8
  size_t v68; // r14
  char *v69; // rdi
  char *v70; // r14
  void **v71; // rsi
  char *v72; // rdi
  __m128i v73; // xmm2
  __int64 v74; // rax
  char *v75; // r14
  __int64 v76; // rdx
  void **v77; // rsi
  char *v78; // rdi
  __m128i v79; // xmm3
  char *v80; // r14
  char *v81; // r12
  size_t v82; // rax
  std::_V2 *v83; // rsi
  __int64 v84; // rcx
  size_t v85; // rdx
  _BYTE *v86; // rax
  __int64 v87; // rax
  __int64 v88; // rdx
  _BYTE *v89; // rax
  size_t v90; // rdx
  __int64 v91; // rbx
  __m128i v92; // xmm0
  char *v93; // rdi
  size_t v94; // rax
  size_t v95; // rax
  char *v96; // rdi
  char *v97; // r12
  void **v98; // rbx
  const char *v99; // r14
  size_t v100; // r10
  __int64 v101; // r10
  size_t v102; // r14
  void *v103; // rax
  size_t v104; // r10
  char *v105; // r14
  unsigned __int64 v106; // rsi
  char *v107; // rdi
  void **v108; // rax
  __m128i v109; // xmm6
  __m128i v110; // xmm0
  unsigned int v111; // eax
  __int64 v112; // rdx
  __int64 v113; // rsi
  char *v114; // [rsp+0h] [rbp-7C8h]
  unsigned __int64 v115; // [rsp+8h] [rbp-7C0h]
  __int64 v117; // [rsp+20h] [rbp-7A8h]
  std::_V2 *v118; // [rsp+30h] [rbp-798h]
  const char *v119; // [rsp+38h] [rbp-790h]
  bool v122; // [rsp+53h] [rbp-775h]
  void *src; // [rsp+58h] [rbp-770h]
  const char *srca; // [rsp+58h] [rbp-770h]
  char *srcb; // [rsp+58h] [rbp-770h]
  void *srcc; // [rsp+58h] [rbp-770h]
  char *v128; // [rsp+60h] [rbp-768h]
  size_t v129; // [rsp+60h] [rbp-768h]
  unsigned __int64 v130; // [rsp+68h] [rbp-760h]
  _BYTE v131[32]; // [rsp+70h] [rbp-758h] BYREF
  __int16 v132; // [rsp+90h] [rbp-738h]
  _QWORD v133[4]; // [rsp+A0h] [rbp-728h] BYREF
  __int16 v134; // [rsp+C0h] [rbp-708h]
  _BYTE v135[32]; // [rsp+D0h] [rbp-6F8h] BYREF
  __int16 v136; // [rsp+F0h] [rbp-6D8h]
  void *v137; // [rsp+100h] [rbp-6C8h] BYREF
  size_t n[2]; // [rsp+108h] [rbp-6C0h]
  char v139; // [rsp+118h] [rbp-6B0h] BYREF
  __int16 v140; // [rsp+120h] [rbp-6A8h]
  void *v141; // [rsp+1A0h] [rbp-628h] BYREF
  __m128i si128; // [rsp+1A8h] [rbp-620h] BYREF
  _BYTE v143[8]; // [rsp+1B8h] [rbp-610h] BYREF
  __int16 v144; // [rsp+1C0h] [rbp-608h]
  char *s; // [rsp+240h] [rbp-588h] BYREF
  __m128i v146; // [rsp+248h] [rbp-580h] BYREF
  _BYTE v147[296]; // [rsp+258h] [rbp-570h] BYREF
  void *ptr; // [rsp+380h] [rbp-448h] BYREF
  __int64 v149; // [rsp+388h] [rbp-440h]
  _BYTE v150[1080]; // [rsp+390h] [rbp-438h] BYREF

  v7 = *(_BYTE **)(a2 + 32);
  if ( *(_QWORD *)(a2 + 24) <= (unsigned __int64)v7 )
  {
    sub_227BA10(a2, 32);
  }
  else
  {
    *(_QWORD *)(a2 + 32) = v7 + 1;
    *v7 = 32;
  }
  v8 = 0;
  v9 = *(_QWORD *)(a1 + 40);
  if ( v9 )
    v8 = strlen(*(const char **)(a1 + 40));
  sub_2290F40(a2, v9, v8, 1);
  v10 = *(_QWORD *)(a1 + 248) == 0;
  v114 = *(char **)(a1 + 56);
  v115 = *(unsigned int *)(a1 + 64);
  ptr = v150;
  v149 = 0x8000000000LL;
  if ( !v10 )
  {
    sub_1108210(a1, (__int64)&ptr);
    v115 = (unsigned int)v149 - 1LL;
    v114 = (char *)ptr + 8;
    goto LABEL_7;
  }
  if ( !*(_QWORD *)(a1 + 48) )
  {
LABEL_7:
    if ( a5 )
      goto LABEL_8;
LABEL_163:
    if ( !v115 )
      goto LABEL_73;
    v122 = 0;
    goto LABEL_9;
  }
  v89 = *(_BYTE **)(a2 + 32);
  if ( (unsigned __int64)v89 >= *(_QWORD *)(a2 + 24) )
  {
    sub_227BA10(a2, 32);
  }
  else
  {
    *(_QWORD *)(a2 + 32) = v89 + 1;
    *v89 = 32;
  }
  v90 = 0;
  v91 = *(_QWORD *)(a1 + 48);
  if ( v91 )
    v90 = strlen(*(const char **)(a1 + 48));
  sub_2290F40(a2, v91, v90, 1);
  if ( !a5 )
    goto LABEL_163;
LABEL_8:
  v122 = a5[3] != 0;
  if ( !v115 )
    goto LABEL_49;
LABEL_9:
  for ( i = 0; i < v115; ++i )
  {
    while ( 1 )
    {
      v12 = (const char **)&v114[8 * i];
      v13 = *v12;
      if ( !a5 )
      {
        v19 = a4;
LABEL_89:
        v57 = *(_BYTE **)(a2 + 32);
        if ( (unsigned __int64)v57 >= *(_QWORD *)(a2 + 24) )
        {
          sub_227BA10(a2, 32);
        }
        else
        {
          *(_QWORD *)(a2 + 32) = v57 + 1;
          *v57 = 32;
        }
        v58 = 0;
        if ( v13 )
          v58 = strlen(v13);
        sub_2290F40(a2, v13, v58, v19);
        goto LABEL_94;
      }
      if ( v13 )
      {
        v14 = strlen(*v12);
        switch ( v14 )
        {
          case 3uLL:
            if ( *(_WORD *)v13 == 19757 && v13[2] == 70
              || *(_WORD *)v13 == 19757 && (v13[2] == 84 || *(_WORD *)v13 == 19757 && v13[2] == 81) )
            {
LABEL_141:
              ++i;
              goto LABEL_94;
            }
            break;
          case 0x1AuLL:
            if ( !(*(_QWORD *)v13 ^ 0x696C61697265732DLL | *((_QWORD *)v13 + 1) ^ 0x6E676169642D657ALL)
              && *((_QWORD *)v13 + 2) == 0x69662D636974736FLL
              && *((_WORD *)v13 + 12) == 25964 )
            {
              goto LABEL_141;
            }
            break;
          case 2uLL:
            if ( *(_WORD *)v13 == 28461 )
            {
              ++i;
              goto LABEL_94;
            }
            break;
          case 0x10uLL:
            if ( !(*(_QWORD *)v13 ^ 0x65646E657065642DLL | *((_QWORD *)v13 + 1) ^ 0x656C69662D79636ELL) )
            {
              ++i;
              goto LABEL_94;
            }
            break;
          case 0x17uLL:
            if ( !(*(_QWORD *)v13 ^ 0x2D6775626564662DLL | *((_QWORD *)v13 + 1) ^ 0x74616C69706D6F63LL)
              && *((_DWORD *)v13 + 4) == 762212201
              && *((_WORD *)v13 + 10) == 26980
              && v13[22] == 114 )
            {
              goto LABEL_141;
            }
            break;
          case 0x14uLL:
            if ( !(*(_QWORD *)v13 ^ 0x736F6E676169642DLL | *((_QWORD *)v13 + 1) ^ 0x2D676F6C2D636974LL)
              && *((_DWORD *)v13 + 4) == 1701603686 )
            {
              goto LABEL_141;
            }
            break;
          case 0x12uLL:
            if ( !(*(_QWORD *)v13 ^ 0x642D66726177642DLL | *((_QWORD *)v13 + 1) ^ 0x616C662D67756265LL)
              && *((_WORD *)v13 + 8) == 29543 )
            {
              ++i;
              goto LABEL_94;
            }
            break;
          default:
            if ( v14 == 12 && *(_QWORD *)v13 == 0x65766F736676692DLL && *((_DWORD *)v13 + 2) == 2036427890 )
              goto LABEL_141;
            break;
        }
        v15 = strlen(v13);
        switch ( v15 )
        {
          case 8uLL:
            if ( *(_QWORD *)v13 == 0x6564756C636E692DLL
              || *(_QWORD *)v13 == 0x786966657270692DLL
              || *(_QWORD *)v13 == 0x6D6574737973692DLL )
            {
              goto LABEL_19;
            }
            goto LABEL_152;
          case 0x14uLL:
            if ( !(*(_QWORD *)v13 ^ 0x2D7265646165682DLL | *((_QWORD *)v13 + 1) ^ 0x2D6564756C636E69LL)
              && *((_DWORD *)v13 + 4) == 1701603686 )
            {
              goto LABEL_19;
            }
            break;
          case 0xAuLL:
            if ( *(_QWORD *)v13 == 0x746661726964692DLL && *((_WORD *)v13 + 4) == 29285 )
              goto LABEL_19;
            goto LABEL_152;
          case 0x11uLL:
            if ( !(*(_QWORD *)v13 ^ 0x616E7265746E692DLL | *((_QWORD *)v13 + 1) ^ 0x6574737973692D6CLL)
              && v13[16] == 109 )
            {
              goto LABEL_19;
            }
            goto LABEL_152;
          case 0xCuLL:
            if ( *(_QWORD *)v13 == 0x727068746977692DLL && *((_DWORD *)v13 + 2) == 2020173413
              || *(_QWORD *)v13 == 0x6564756C636E692DLL && *((_DWORD *)v13 + 2) == 1751347245 )
            {
LABEL_19:
              v16 = 2;
              v17 = 2;
              v117 = 1;
              v18 = !v122;
              goto LABEL_20;
            }
            goto LABEL_152;
          case 0x19uLL:
            if ( !(*(_QWORD *)v13 ^ 0x616E7265746E692DLL | *((_QWORD *)v13 + 1) ^ 0x6E72657478652D6CLL)
              && *((_QWORD *)v13 + 2) == 0x6574737973692D63LL
              && v13[24] == 109 )
            {
              goto LABEL_19;
            }
            goto LABEL_152;
          case 0x12uLL:
            if ( !(*(_QWORD *)v13 ^ 0x727068746977692DLL | *((_QWORD *)v13 + 1) ^ 0x6F66656278696665LL)
              && *((_WORD *)v13 + 8) == 25970 )
            {
              goto LABEL_19;
            }
            goto LABEL_245;
          case 7uLL:
            if ( *(_DWORD *)v13 == 1970366765 && *((_WORD *)v13 + 2) == 29807 && v13[6] == 101 )
              goto LABEL_19;
            goto LABEL_152;
          case 9uLL:
            if ( *(_QWORD *)v13 == 0x6F6F72737973692DLL && v13[8] == 116 )
              goto LABEL_19;
            goto LABEL_152;
        }
      }
      else
      {
        v15 = 0;
      }
      if ( v15 == 2 )
      {
        if ( *(_WORD *)v13 == 18733 || *(_WORD *)v13 == 17965 )
          goto LABEL_19;
LABEL_152:
        if ( !v13 )
          goto LABEL_153;
        goto LABEL_180;
      }
      if ( v15 == 13 )
      {
        if ( *(_QWORD *)v13 == 0x6372756F7365722DLL && *((_DWORD *)v13 + 2) == 1768172901 && v13[12] == 114 )
          goto LABEL_19;
        goto LABEL_152;
      }
LABEL_245:
      if ( v15 == 20 )
      {
        if ( !(*(_QWORD *)v13 ^ 0x616E7265746E692DLL | *((_QWORD *)v13 + 1) ^ 0x656D617266692D6CLL)
          && *((_DWORD *)v13 + 4) == 1802661751 )
        {
          goto LABEL_19;
        }
        goto LABEL_152;
      }
      if ( v15 != 11 )
        goto LABEL_152;
      if ( *(_QWORD *)v13 == 0x77656D617266692DLL && *((_WORD *)v13 + 4) == 29295 && v13[10] == 107 )
        goto LABEL_19;
LABEL_180:
      v94 = strlen(v13);
      if ( v94 == 2 )
      {
        if ( *(_WORD *)v13 == 19757 )
          goto LABEL_94;
      }
      else if ( v94 == 3 )
      {
        if ( *(_WORD *)v13 == 19757 && v13[2] == 77
          || *(_WORD *)v13 == 19757 && v13[2] == 71
          || *(_WORD *)v13 == 19757 && v13[2] == 80
          || *(_WORD *)v13 == 19757 && v13[2] == 68 )
        {
          goto LABEL_94;
        }
      }
      else if ( v94 == 4 && *(_DWORD *)v13 == 1145916717 )
      {
        goto LABEL_94;
      }
      v95 = strlen(v13);
      if ( v95 <= 1 )
        goto LABEL_153;
      if ( *(_WORD *)v13 != 17965 && *(_WORD *)v13 != 18733 )
      {
        if ( v95 > 0x14
          && !(*(_QWORD *)v13 ^ 0x656C75646F6D662DLL | *((_QWORD *)v13 + 1) ^ 0x2D65686361632D73LL)
          && *((_DWORD *)v13 + 4) == 1752457584
          && v13[20] == 61 )
        {
          goto LABEL_94;
        }
LABEL_153:
        v19 = a4;
        goto LABEL_22;
      }
      v16 = 1;
      v17 = 1;
      v117 = 0;
      v18 = !v122;
LABEL_20:
      if ( v18 )
      {
        i += v117;
        goto LABEL_94;
      }
      v19 = a4;
      if ( v122 )
        break;
LABEL_22:
      v20 = *(_QWORD **)(a1 + 208);
      v21 = *(const char ***)(a1 + 200);
      v22 = 0xCCCCCCCCCCCCCCCDLL * ((const char **)v20 - v21);
      if ( v22 >> 2 > 0 )
      {
        if ( v13 == *v21 )
        {
          v24 = *(const char ***)(a1 + 200);
        }
        else if ( v13 == v21[5] )
        {
          v24 = v21 + 5;
        }
        else if ( v13 == v21[10] )
        {
          v24 = v21 + 10;
        }
        else if ( v13 == v21[15] )
        {
          v24 = v21 + 15;
        }
        else
        {
          v23 = &v21[20 * (v22 >> 2)];
          while ( 1 )
          {
            v24 = v21 + 20;
            if ( v23 == v21 + 20 )
            {
              v22 = 0xCCCCCCCCCCCCCCCDLL * ((const char **)v20 - v24);
              goto LABEL_35;
            }
            if ( v13 == v21[20] )
              goto LABEL_39;
            if ( v13 == v21[25] )
            {
              v24 = v21 + 25;
              goto LABEL_39;
            }
            if ( v13 == v21[30] )
            {
              v24 = v21 + 30;
              goto LABEL_39;
            }
            if ( v13 == v21[35] )
              break;
            v21 += 20;
          }
          v24 = v21 + 35;
        }
        goto LABEL_39;
      }
      v24 = *(const char ***)(a1 + 200);
LABEL_35:
      if ( v22 != 2 )
      {
        if ( v22 != 3 )
        {
          if ( v22 != 1 || v13 != *v24 )
            goto LABEL_89;
          goto LABEL_39;
        }
        if ( v13 == *v24 )
          goto LABEL_39;
        v24 += 5;
      }
      if ( v13 != *v24 )
      {
        v24 += 5;
        if ( v13 != *v24 )
          goto LABEL_89;
      }
LABEL_39:
      if ( v20 == v24 )
        goto LABEL_89;
      if ( i )
      {
        v25 = *(_QWORD *)&v114[8 * i - 8];
        if ( v25 )
        {
          if ( strlen(*(const char **)&v114[8 * i - 8]) == 15
            && *(_QWORD *)v25 == 0x69662D6E69616D2DLL
            && *(_DWORD *)(v25 + 8) == 1848468844
            && *(_WORD *)(v25 + 12) == 28001
            && *(_BYTE *)(v25 + 14) == 101 )
          {
            goto LABEL_89;
          }
        }
      }
      v26 = *(_BYTE **)(a2 + 32);
      if ( (unsigned __int64)v26 >= *(_QWORD *)(a2 + 24) )
      {
        sub_227BA10(a2, 32);
      }
      else
      {
        *(_QWORD *)(a2 + 32) = v26 + 1;
        *v26 = 32;
      }
      v27 = (_BYTE *)sub_228AA60(*a5, a5[1], 0);
      if ( v27 )
      {
        s = &v146.m128i_i8[8];
        sub_1106090(&s, v27, (__int64)&v27[v28]);
        v29 = s;
        v30 = v146.m128i_i64[0];
      }
      else
      {
        v29 = &v146.m128i_i8[8];
        v146.m128i_i8[8] = 0;
        v30 = 0;
        v146.m128i_i64[0] = 0;
        s = &v146.m128i_i8[8];
      }
      sub_2290F40(a2, v29, v30, v19);
      if ( s == (char *)&v146.m128i_u64[1] )
        goto LABEL_94;
      operator delete(s);
      if ( ++i >= v115 )
        goto LABEL_49;
    }
    s = &v146.m128i_i8[8];
    v146.m128i_i64[0] = 0x200000000LL;
    v137 = &v139;
    *(__m128i *)n = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
    if ( v17 == 1 )
    {
      v99 = *v12;
      if ( v99 )
      {
        v100 = strlen(v99);
        v129 = v100 - 2;
        srcb = (char *)(v99 + 2);
        if ( v100 > 1 )
        {
LABEL_220:
          v130 = v100;
          v141 = srcb;
          si128.m128i_i64[0] = v129;
          v144 = 261;
          if ( (unsigned __int8)sub_228B020(&v141, 0) || (unsigned int)sub_228DB00((std::_V2 *)&v137) )
            goto LABEL_107;
          v132 = 257;
          v141 = srcb;
          v134 = 257;
          si128.m128i_i64[0] = v129;
          v144 = 261;
          v136 = 257;
          sub_228A3B0(&v137, &v141, v135, v133, v131);
          v101 = v130;
          v141 = v143;
          si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
          if ( v130 > 1 )
          {
            v101 = 2;
          }
          else
          {
            if ( !v130 )
            {
LABEL_224:
              v102 = n[0];
              si128.m128i_i64[0] = v101;
              v103 = v137;
              if ( n[0] + v101 > 0x80 )
              {
                srcc = v137;
                sub_2236E10(&v141, v143, n[0] + v101, 1);
                v101 = si128.m128i_i64[0];
                v103 = srcc;
              }
              if ( v102 )
              {
                memcpy((char *)v141 + v101, v103, v102);
                v101 = si128.m128i_i64[0];
              }
              v104 = v102 + v101;
              v105 = s;
              si128.m128i_i64[0] = v104;
              v106 = v146.m128i_u32[0] + 1LL;
              v107 = &s[152 * v146.m128i_u32[0]];
              v108 = &v141;
              if ( v106 > v146.m128i_u32[1] )
              {
                if ( s > (char *)&v141 || v107 <= (char *)&v141 )
                {
                  sub_11077F0((__int64)&s, v106);
                  v107 = &s[152 * v146.m128i_u32[0]];
                  v108 = &v141;
                }
                else
                {
                  sub_11077F0((__int64)&s, v106);
                  v108 = (void **)&s[(char *)&v141 - v105];
                  v107 = &s[152 * v146.m128i_u32[0]];
                }
              }
              v109 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
              *(_QWORD *)v107 = v107 + 24;
              *(__m128i *)(v107 + 8) = v109;
              if ( v108[1] )
                sub_9C3C90((char **)v107, (char **)v108);
              ++v146.m128i_i32[0];
              if ( v141 != v143 )
                free(v141);
LABEL_107:
              v63 = v137;
              if ( v137 == &v139 )
                goto LABEL_109;
              goto LABEL_108;
            }
            v101 = 1;
          }
          v111 = 0;
          do
          {
            v112 = v111++;
            v143[v112] = v99[v112];
          }
          while ( v111 < (unsigned int)v101 );
          goto LABEL_224;
        }
        srcb = (char *)&v99[v100];
      }
      else
      {
        srcb = nullptr;
        v100 = 0;
      }
      v129 = 0;
      goto LABEL_220;
    }
    v59 = i + v16 - 1;
    v60 = nullptr;
    v61 = *(char **)&v114[8 * v59];
    if ( v61 )
    {
      v119 = *(const char **)&v114[8 * v59];
      v62 = strlen(v119);
      v61 = (char *)v119;
      v60 = (void *)v62;
    }
    v141 = v61;
    v144 = 261;
    v128 = v61;
    si128.m128i_i64[0] = (__int64)v60;
    src = v60;
    if ( (unsigned __int8)sub_228B020(&v141, 0) || (unsigned int)sub_228DB00((std::_V2 *)&v137) )
      goto LABEL_107;
    v136 = 257;
    v141 = v128;
    si128.m128i_i64[0] = (__int64)src;
    v132 = 257;
    v134 = 257;
    v144 = 261;
    sub_228A3B0(&v137, &v141, v135, v133, v131);
    if ( *v12 )
    {
      srca = *v12;
      v66 = strlen(*v12);
      v67 = srca;
      v68 = v66;
      v141 = v143;
      si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
      if ( v66 > 0x80 )
      {
        sub_2236E10(&v141, v143, v66, 1);
        v67 = srca;
        v69 = (char *)v141 + si128.m128i_i64[0];
LABEL_122:
        memcpy(v69, v67, v68);
        v66 = v68 + si128.m128i_i64[0];
        goto LABEL_123;
      }
      if ( v66 )
      {
        v69 = v143;
        goto LABEL_122;
      }
    }
    else
    {
      si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
      v141 = v143;
      v66 = 0;
    }
LABEL_123:
    si128.m128i_i64[0] = v66;
    v70 = s;
    v71 = &v141;
    v72 = &s[152 * v146.m128i_u32[0]];
    if ( (unsigned __int64)v146.m128i_u32[0] + 1 > v146.m128i_u32[1] )
    {
      v113 = v146.m128i_u32[0] + 1LL;
      if ( s > (char *)&v141 || v72 <= (char *)&v141 )
      {
        sub_11077F0((__int64)&s, v113);
        v71 = &v141;
        v72 = &s[152 * v146.m128i_u32[0]];
      }
      else
      {
        sub_11077F0((__int64)&s, v113);
        v71 = (void **)&s[(char *)&v141 - v70];
        v72 = &s[152 * v146.m128i_u32[0]];
      }
    }
    v73 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
    *(_QWORD *)v72 = v72 + 24;
    *(__m128i *)(v72 + 8) = v73;
    if ( v71[1] )
      sub_9C3C90((char **)v72, (char **)v71);
    v74 = (unsigned int)++v146.m128i_i32[0];
    if ( v141 != v143 )
    {
      free(v141);
      v74 = v146.m128i_u32[0];
    }
    v75 = s;
    v76 = v74 + 1;
    v77 = &v137;
    v78 = &s[152 * v74];
    if ( v74 + 1 > (unsigned __int64)v146.m128i_u32[1] )
    {
      if ( s > (char *)&v137 || v78 <= (char *)&v137 )
      {
        sub_11077F0((__int64)&s, v76);
        v77 = &v137;
        v78 = &s[152 * v146.m128i_u32[0]];
      }
      else
      {
        sub_11077F0((__int64)&s, v76);
        v77 = (void **)&s[(char *)&v137 - v75];
        v78 = &s[152 * v146.m128i_u32[0]];
      }
    }
    v79 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
    *(_QWORD *)v78 = v78 + 24;
    *(__m128i *)(v78 + 8) = v79;
    if ( v77[1] )
      sub_9C3C90((char **)v78, (char **)v77);
    v63 = v137;
    v64 = (unsigned int)++v146.m128i_i32[0];
    if ( v137 == &v139 )
    {
      v65 = s;
      if ( !(_DWORD)v64 )
      {
LABEL_110:
        if ( v65 != (char *)&v146.m128i_u64[1] )
          free(v65);
        goto LABEL_22;
      }
      goto LABEL_133;
    }
LABEL_108:
    free(v63);
LABEL_109:
    v64 = v146.m128i_u32[0];
    v65 = s;
    if ( !v146.m128i_i32[0] )
      goto LABEL_110;
LABEL_133:
    v80 = v65;
    v81 = &v65[152 * v64];
    do
    {
      v86 = *(_BYTE **)(a2 + 32);
      if ( (unsigned __int64)v86 >= *(_QWORD *)(a2 + 24) )
      {
        sub_227BA10(a2, 32);
        v87 = *((_QWORD *)v80 + 1);
        v88 = v87 + 1;
        if ( (unsigned __int64)(v87 + 1) <= *((_QWORD *)v80 + 2) )
          goto LABEL_138;
      }
      else
      {
        *(_QWORD *)(a2 + 32) = v86 + 1;
        *v86 = 32;
        v87 = *((_QWORD *)v80 + 1);
        v88 = v87 + 1;
        if ( (unsigned __int64)(v87 + 1) <= *((_QWORD *)v80 + 2) )
          goto LABEL_138;
      }
      sub_2236E10(v80, v80 + 24, v88, 1);
      v87 = *((_QWORD *)v80 + 1);
LABEL_138:
      *(_BYTE *)(*(_QWORD *)v80 + v87) = 0;
      if ( *(_QWORD *)v80 )
      {
        v118 = *(std::_V2 **)v80;
        v82 = strlen(*(const char **)v80);
        v83 = v118;
        v84 = a4;
        v85 = v82;
      }
      else
      {
        v84 = a4;
        v83 = nullptr;
        v85 = 0;
      }
      v80 += 152;
      sub_2290F40(a2, v83, v85, v84);
    }
    while ( v81 != v80 );
    v97 = s;
    i += v117;
    v98 = (void **)&s[152 * v146.m128i_u32[0]];
    while ( v97 != (char *)v98 )
    {
      while ( 1 )
      {
        v98 -= 19;
        if ( *v98 == v98 + 3 )
          break;
        free(*v98);
        if ( v97 == (char *)v98 )
          goto LABEL_209;
      }
    }
LABEL_209:
    if ( s != (char *)&v146.m128i_u64[1] )
      free(s);
LABEL_94:
    ;
  }
LABEL_49:
  if ( v122 )
  {
    v31 = *(_BYTE **)(a2 + 32);
    if ( (unsigned __int64)v31 >= *(_QWORD *)(a2 + 24) )
    {
      sub_227BA10(a2, 32);
    }
    else
    {
      *(_QWORD *)(a2 + 32) = v31 + 1;
      *v31 = 32;
    }
    sub_2290F40(a2, "-ivfsoverlay", 12, a4);
    v32 = *(_BYTE **)(a2 + 32);
    if ( (unsigned __int64)v32 >= *(_QWORD *)(a2 + 24) )
    {
      sub_227BA10(a2, 32);
    }
    else
    {
      *(_QWORD *)(a2 + 32) = v32 + 1;
      *v32 = 32;
    }
    v33 = (_BYTE *)a5[2];
    if ( v33 )
    {
      v34 = a5[3];
      s = &v146.m128i_i8[8];
      sub_1106090(&s, v33, (__int64)&v33[v34]);
      v35 = s;
      v36 = v146.m128i_i64[0];
    }
    else
    {
      v35 = &v146.m128i_i8[8];
      v146.m128i_i8[8] = 0;
      v36 = 0;
      s = &v146.m128i_i8[8];
      v146.m128i_i64[0] = 0;
    }
    sub_2290F40(a2, v35, v36, a4);
    if ( s != (char *)&v146.m128i_u64[1] )
      operator delete(s);
    v37 = sub_228A4B0(a5[2], a5[3], 0);
    v40 = (const void *)sub_228A4B0(v37, v38, 0);
    v41 = v39;
    v42 = v39;
    s = v147;
    v146 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
    if ( v39 > 0x80 )
    {
      sub_2236E10(&s, v147, v39, 1);
      v96 = &s[v146.m128i_i64[0]];
    }
    else
    {
      if ( !v39 )
        goto LABEL_60;
      v96 = v147;
    }
    memcpy(v96, v40, v41);
    v42 = v41 + v146.m128i_i64[0];
LABEL_60:
    v146.m128i_i64[0] = v42;
    v144 = 257;
    v140 = 257;
    v136 = 257;
    v133[0] = "repro-modules";
    v134 = 259;
    sub_228A3B0(&s, v133, v135, &v137, &v141);
    v141 = &si128.m128i_u64[1];
    v43 = (__m128i *)operator new(0x16u);
    si128.m128i_i64[1] = 21;
    v141 = v43;
    *v43 = _mm_load_si128((const __m128i *)&xmmword_23A9820);
    v43[1].m128i_i32[0] = 1752457584;
    v43[1].m128i_i8[4] = 61;
    v43[1].m128i_i8[5] = 0;
    v44 = v146.m128i_i64[0];
    si128.m128i_i64[0] = 21;
    if ( (unsigned __int64)(v146.m128i_i64[0] + 1) > v146.m128i_i64[1] )
    {
      sub_2236E10(&s, v147, v146.m128i_i64[0] + 1, 1);
      v44 = v146.m128i_i64[0];
    }
    s[v44] = 0;
    v45 = s;
    v46 = strlen(s);
    if ( 0x7FFFFFFFFFFFFFFFLL - si128.m128i_i64[0] < v46 )
      std::__throw_length_error("basic_string::append");
    v47 = v141;
    v48 = si128.m128i_i64[0] + v46;
    if ( v141 == &si128.m128i_u64[1] )
      v49 = 15;
    else
      v49 = si128.m128i_u64[1];
    if ( v48 > v49 )
    {
      sub_998B30((__int64)&v141, si128.m128i_u64[0], 0, v45, v46);
      v47 = v141;
    }
    else if ( v46 )
    {
      v93 = (char *)v141 + si128.m128i_i64[0];
      if ( v46 == 1 )
        *v93 = *v45;
      else
        memcpy(v93, v45, v46);
      v47 = v141;
    }
    si128.m128i_i64[0] = v48;
    v47[v48] = 0;
    v50 = *(_BYTE **)(a2 + 32);
    if ( (unsigned __int64)v50 >= *(_QWORD *)(a2 + 24) )
    {
      sub_227BA10(a2, 32);
    }
    else
    {
      *(_QWORD *)(a2 + 32) = v50 + 1;
      *v50 = 32;
    }
    sub_2290F40(a2, v141, si128.m128i_i64[0], a4);
    if ( v141 != &si128.m128i_u64[1] )
      operator delete(v141);
    if ( s != v147 )
      free(s);
  }
LABEL_73:
  if ( *(_QWORD *)(a1 + 248) )
  {
    v51 = *(__m128i **)(a2 + 32);
    if ( *(_QWORD *)(a2 + 24) - (_QWORD)v51 > 0x25u )
    {
      v92 = _mm_load_si128((const __m128i *)&xmmword_23A9830);
      v51[2].m128i_i32[0] = 1701603686;
      v51[2].m128i_i16[2] = 2618;
      *v51 = v92;
      v51[1] = _mm_load_si128((const __m128i *)&xmmword_23A9840);
      *(_QWORD *)(a2 + 32) += 38LL;
    }
    else
    {
      sub_227BF10(a2, "\n Arguments passed via response file:\n", 38);
    }
    sub_11063D0(a1, a2);
    if ( *(_DWORD *)(a1 + 24) == 1 )
    {
LABEL_79:
      v53 = *(_QWORD *)(a2 + 32);
    }
    else
    {
      v52 = *(_BYTE **)(a2 + 32);
      if ( *(_BYTE **)(a2 + 24) == v52 )
      {
        sub_227BF10(a2, "\n", 1);
        goto LABEL_79;
      }
      *v52 = 10;
      v53 = *(_QWORD *)(a2 + 32) + 1LL;
      *(_QWORD *)(a2 + 32) = v53;
    }
    if ( (unsigned __int64)(*(_QWORD *)(a2 + 24) - v53) > 0x16 )
    {
      v110 = _mm_load_si128((const __m128i *)&xmmword_23A9850);
      *(_DWORD *)(v53 + 16) = 1768300645;
      *(_WORD *)(v53 + 20) = 25964;
      *(__m128i *)v53 = v110;
      *(_BYTE *)(v53 + 22) = 41;
      *(_QWORD *)(a2 + 32) += 23LL;
    }
    else
    {
      sub_227BF10(a2, " (end of response file)", 23);
    }
  }
  if ( a3 )
  {
    v54 = strlen(a3);
    v55 = *(void **)(a2 + 32);
    v56 = v54;
    if ( v54 <= *(_QWORD *)(a2 + 24) - (_QWORD)v55 )
    {
      if ( v54 )
      {
        memcpy(v55, a3, v54);
        *(_QWORD *)(a2 + 32) += v56;
      }
    }
    else
    {
      sub_227BF10(a2, a3, v54);
    }
  }
  if ( ptr != v150 )
    free(ptr);
}
