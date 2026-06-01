__int64 __fastcall sub_875840(
        __int64 a1,
        char *a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        int a5,
        __int64 a6,
        const __m128i *a7)
{
  char *v7; // r10
  void *(**v8)(size_t); // r13
  char *v11; // r14
  _BOOL4 v12; // r15d
  __m128i v13; // xmm0
  unsigned int v14; // edx
  int v15; // ecx
  unsigned int v16; // eax
  void *(*v17)(size_t); // rcx
  char *v18; // r12
  bool v19; // zf
  char *v20; // rsi
  void *(*v21)(size_t); // rcx
  int v22; // ecx
  char v23; // al
  __m128i v24; // xmm0
  int v25; // eax
  __int64 v26; // rdx
  unsigned int v27; // ecx
  void *v28; // rax
  unsigned int v30; // ecx
  unsigned __int64 v31; // rdi
  unsigned int v32; // eax
  unsigned int v33; // edx
  unsigned int v34; // ecx
  unsigned int v35; // edx
  unsigned __int64 v36; // r13
  unsigned __int64 v37; // rdx
  __int64 v38; // rdi
  __int64 v39; // rax
  unsigned __int64 v40; // rax
  unsigned __int64 v41; // rdx
  __m128i v42; // xmm0
  __m128i v43; // xmm2
  int v44; // eax
  int v45; // ecx
  int v46; // ecx
  char *v47; // r13
  unsigned __int64 v48; // rax
  char *v49; // r15
  char *v50; // rax
  __m128i v51; // xmm0
  unsigned __int16 v52; // dx
  int v53; // eax
  char *v54; // r11
  size_t v55; // r15
  bool v56; // r13
  char *v57; // r15
  unsigned __int8 v58; // al
  unsigned __int64 v59; // rdx
  __int64 v60; // rax
  unsigned __int64 v61; // rdx
  __int64 v62; // rax
  unsigned __int64 v63; // rax
  void *v64; // rax
  int v65; // edx
  int v66; // edx
  char *v67; // rax
  int v68; // eax
  char *v69; // r11
  unsigned int v70; // [rsp+4h] [rbp-254h]
  unsigned int v71; // [rsp+4h] [rbp-254h]
  unsigned __int64 n; // [rsp+8h] [rbp-250h]
  unsigned __int8 *v74; // [rsp+18h] [rbp-240h]
  int v76; // [rsp+24h] [rbp-234h]
  __int64 v77; // [rsp+38h] [rbp-220h]
  int v78; // [rsp+40h] [rbp-218h]
  int v79; // [rsp+44h] [rbp-214h]
  char *v81; // [rsp+50h] [rbp-208h]
  int v82; // [rsp+5Ch] [rbp-1FCh]
  __int64 v83; // [rsp+60h] [rbp-1F8h]
  char *v84; // [rsp+68h] [rbp-1F0h]
  char *v85; // [rsp+70h] [rbp-1E8h]
  char *v86; // [rsp+78h] [rbp-1E0h]
  int v87; // [rsp+80h] [rbp-1D8h]
  unsigned __int8 v88; // [rsp+84h] [rbp-1D4h]
  unsigned __int8 v89; // [rsp+85h] [rbp-1D3h]
  unsigned __int8 v90; // [rsp+86h] [rbp-1D2h]
  unsigned __int8 v91; // [rsp+87h] [rbp-1D1h]
  size_t v92; // [rsp+88h] [rbp-1D0h]
  size_t v93; // [rsp+88h] [rbp-1D0h]
  int v94; // [rsp+90h] [rbp-1C8h] BYREF
  char *v95; // [rsp+B0h] [rbp-1A8h]
  unsigned __int64 v96; // [rsp+B8h] [rbp-1A0h]
  __int64 v97; // [rsp+C0h] [rbp-198h]
  int v98; // [rsp+F8h] [rbp-160h]
  __m128i v99; // [rsp+100h] [rbp-158h] BYREF
  __int64 v100; // [rsp+110h] [rbp-148h]
  unsigned int v101; // [rsp+118h] [rbp-140h]
  unsigned int v102; // [rsp+11Ch] [rbp-13Ch]
  unsigned int v103; // [rsp+120h] [rbp-138h]
  int v104; // [rsp+124h] [rbp-134h]
  int v105; // [rsp+128h] [rbp-130h]
  int v106; // [rsp+12Ch] [rbp-12Ch]
  int v107; // [rsp+130h] [rbp-128h]
  int v108; // [rsp+134h] [rbp-124h]
  _BOOL4 v109; // [rsp+138h] [rbp-120h]
  __m128i v110; // [rsp+140h] [rbp-118h]
  unsigned __int64 v111; // [rsp+150h] [rbp-108h]
  unsigned __int64 v112; // [rsp+158h] [rbp-100h]
  __int64 v113; // [rsp+160h] [rbp-F8h]
  __int16 v114; // [rsp+168h] [rbp-F0h]
  __int16 v115; // [rsp+16Ah] [rbp-EEh]
  __int16 v116; // [rsp+16Ch] [rbp-ECh]
  __int16 v117; // [rsp+16Eh] [rbp-EAh]
  __m128i v118; // [rsp+170h] [rbp-E8h]
  char *v119; // [rsp+180h] [rbp-D8h]
  char *v120; // [rsp+188h] [rbp-D0h]
  __m128i v121; // [rsp+190h] [rbp-C8h]
  unsigned __int64 v122; // [rsp+1A0h] [rbp-B8h]
  __m128i v123; // [rsp+1A8h] [rbp-B0h]
  __int128 v124; // [rsp+1B8h] [rbp-A0h]
  void *s; // [rsp+1D0h] [rbp-88h]
  unsigned int v126; // [rsp+1DCh] [rbp-7Ch]
  unsigned int v127; // [rsp+1E0h] [rbp-78h]
  int v128; // [rsp+1E4h] [rbp-74h]
  __int64 v129; // [rsp+1E8h] [rbp-70h]
  unsigned int v130; // [rsp+1F0h] [rbp-68h] BYREF
  __int16 v131; // [rsp+1F4h] [rbp-64h]
  int *v132; // [rsp+1F8h] [rbp-60h]
  void *(*v133)(size_t); // [rsp+200h] [rbp-58h]
  void *(*v134)(size_t); // [rsp+208h] [rbp-50h]
  char v135; // [rsp+217h] [rbp-41h] BYREF
  unsigned __int64 v136; // [rsp+218h] [rbp-40h]

  v7 = &v135;
  n = a3;
  if ( a3 | (unsigned __int64)a2 )
    v7 = a2;
  v136 = __readfsqword(0x28u);
  v8 = (void *(**)(size_t))a7;
  v135 = -51;
  if ( !a6 )
    return (unsigned int)-51;
  if ( !a1 || (v11 = v7) == nullptr )
  {
    *(_DWORD *)(a6 + 112) = -51;
    return (unsigned int)-51;
  }
  if ( (a5 & 0x1FFB9FC0) != 0 )
    goto LABEL_229;
  if ( a3 == -1 )
    n = sub_877290(v7);
  if ( n < a4 )
  {
    *(_DWORD *)(a6 + 112) = -33;
    return (unsigned int)-33;
  }
  if ( *(_DWORD *)(a1 + 88) != 1346589253 )
  {
    *(_DWORD *)(a6 + 112) = -31;
    return (unsigned int)-31;
  }
  if ( (*(_DWORD *)(a1 + 104) & 7) != 1 )
  {
    *(_DWORD *)(a6 + 112) = -32;
    return (unsigned int)-32;
  }
  v12 = 0;
  v70 = (*(_DWORD *)(a1 + 104) >> 14) & 0xC | a5;
  if ( *(_QWORD *)(a1 + 32) )
    v12 = (a5 & 0xBFFFBFC0) == 0;
  if ( (a5 & 0x20) != 0 )
  {
    v114 = 2;
  }
  else
  {
    v114 = (v70 >> 4) & 1;
    if ( !v114 )
      goto LABEL_17;
  }
  if ( *(_DWORD *)(a1 + 96) & 0x20000000 | a5 & 0x20000000 )
  {
LABEL_229:
    *(_DWORD *)(a6 + 112) = -34;
    return (unsigned int)-34;
  }
LABEL_17:
  if ( a7 && a7[5].m128i_i64[1] != -1 && *(char *)(a1 + 98) >= 0 )
  {
    *(_DWORD *)(a6 + 112) = -56;
    return (unsigned int)-56;
  }
  if ( (*(_BYTE *)(a6 + 105) & 1) != 0 )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(a6 + 8))(*(_QWORD *)(a6 + 32), *(_QWORD *)(a6 + 16));
    *(_BYTE *)(a6 + 105) &= ~1u;
  }
  *(_QWORD *)(a6 + 32) = 0;
  *(_QWORD *)(a6 + 96) = 0;
  if ( !v12 || (v25 = sub_86F200(a1, (__int64)v11, n, a4, v70, a6, (__int64)a7), v27 = v25, v25 == -45) )
  {
    v120 = v11;
    if ( a7 )
    {
      v13 = _mm_loadu_si128(a7);
      v100 = a7[1].m128i_i64[0];
    }
    else
    {
      v13 = _mm_loadu_si128((const __m128i *)a1);
      v8 = &off_2C580A0;
      v100 = *(_QWORD *)(a1 + 16);
    }
    v99 = v13;
    v14 = *(_DWORD *)(a1 + 96);
    v15 = 0;
    v94 = 2;
    v95 = v11;
    v119 = v11;
    v98 = 0;
    if ( ((v14 | v70) & 0x80000000) == 0 )
      v15 = (v14 >> 8) & 1;
    v16 = *(_DWORD *)(a1 + 104);
    v78 = v14 | v70;
    v76 = v15;
    v17 = v8[11];
    v18 = &v11[n];
    v96 = n;
    v19 = (void *(*)(size_t))((char *)v17 + 1) == nullptr;
    v82 = v16 & 0x200;
    v20 = (char *)v17 + (_QWORD)v11;
    v132 = &v94;
    v21 = v8[5];
    if ( v19 )
      v20 = &v11[n];
    v112 = a4;
    v134 = v21;
    v133 = v8[6];
    v121 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v18, (__m128i)(unsigned __int64)v18);
    v106 = (v16 >> 12) & 1;
    v19 = *(_WORD *)(a1 + 132) == 0;
    v107 = HIBYTE(v16) & 1;
    v22 = 1;
    if ( v19 )
      v22 = (v16 >> 13) & 1;
    v23 = *(_BYTE *)(a1 + 100);
    v108 = v22;
    v124 = 0;
    v127 = v14;
    v129 = 0;
    v109 = (v23 & 0x40) != 0;
    v116 = *(_WORD *)(a1 + 142);
    v117 = *(_WORD *)(a1 + 140);
    v24 = _mm_add_epi64(
            (__m128i)_mm_loadh_ps((const double *)(a1 + 80)),
            _mm_unpacklo_epi64((__m128i)(unsigned __int64)a1, (__m128i)(unsigned __int64)a1));
    v115 = *(_WORD *)(a1 + 128);
    v118 = v24;
    switch ( *(_WORD *)(a1 + 130) )
    {
      case 1:
        v130 = 1;
        LOBYTE(v131) = 13;
        goto LABEL_44;
      case 2:
        v130 = 1;
        LOBYTE(v131) = 10;
        goto LABEL_44;
      case 3:
        v130 = 2;
        v131 = 2573;
        goto LABEL_44;
      case 4:
        HIDWORD(v129) = 1;
        goto LABEL_44;
      case 5:
        HIDWORD(v129) = 2;
        goto LABEL_44;
      case 6:
        v130 = 1;
        LOBYTE(v131) = 0;
LABEL_44:
        v30 = *((_DWORD *)v8 + 25);
        v31 = 16LL * *(unsigned __int16 *)(a1 + 136) + 136;
        v32 = *(_DWORD *)(a1 + 108);
        v74 = (unsigned __int8 *)(16LL * *(unsigned __int16 *)(a1 + 136) + 136);
        if ( v32 > *((_DWORD *)v8 + 24) )
          v32 = *((_DWORD *)v8 + 24);
        v33 = *(_DWORD *)(a1 + 112);
        v101 = v32;
        if ( v33 > v30 )
          v33 = v30;
        v34 = *((_DWORD *)v8 + 26);
        v102 = v33;
        v35 = *(_DWORD *)(a1 + 116);
        if ( v35 > v34 )
          v35 = v34;
        v36 = 10 * v31;
        v103 = v35;
        if ( 10 * v31 < 0x5000 )
          v36 = 20480;
        v37 = v36 >> 10;
        if ( v32 < v36 >> 10 )
        {
          v36 = v32 << 10;
          if ( v36 < v31 )
          {
            *(_DWORD *)(a6 + 112) = -63;
            return (unsigned int)-63;
          }
        }
        v38 = *(_QWORD *)(a6 + 48);
        if ( *(_QWORD *)(a6 + 56) >= v36 )
          goto LABEL_57;
        (*(void (__fastcall **)(__int64, _QWORD, unsigned __int64, _QWORD))(a6 + 8))(
          v38,
          *(_QWORD *)(a6 + 16),
          v37,
          v32);
        v39 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD))a6)(v36, *(_QWORD *)(a6 + 16));
        *(_QWORD *)(a6 + 48) = v39;
        v38 = v39;
        if ( !v39 )
        {
          *(_QWORD *)(a6 + 56) = 0;
          goto LABEL_240;
        }
        *(_QWORD *)(a6 + 56) = v36;
LABEL_57:
        memset((void *)(v38 + 136), 255, (size_t)(v74 - 136));
        v40 = *(_QWORD *)(a1 + 24);
        v41 = v40 + 256;
        v42 = (__m128i)v40;
        v111 = v40 + 832;
        v43 = (__m128i)(v40 + 256);
        v44 = *(_DWORD *)(a1 + 104);
        v110 = _mm_unpacklo_epi64(v42, v43);
        if ( (v44 & 0x10) != 0 )
        {
          v45 = *(_DWORD *)(a1 + 120);
          v88 = v45;
          if ( (v44 & 0x20) != 0 )
          {
            v79 = 1;
            v83 = 0;
            v89 = *(_BYTE *)(v41 + (unsigned __int8)v45);
          }
          else
          {
            v89 = v45;
            v79 = 1;
            v83 = 0;
          }
        }
        else if ( v82 || (v44 & 0x40) == 0 )
        {
          v89 = 0;
          v88 = 0;
          v79 = 0;
          v83 = 0;
        }
        else
        {
          v89 = 0;
          v83 = a1 + 40;
          v88 = 0;
          v79 = 0;
        }
        if ( (v44 & 0x80u) == 0 )
        {
          v91 = 0;
          v90 = 0;
          v87 = 0;
        }
        else
        {
          v46 = *(_DWORD *)(a1 + 124);
          v90 = v46;
          if ( (v44 & 0x100) != 0 )
          {
            v87 = 1;
            v91 = *(_BYTE *)(v41 + (unsigned __int8)v46);
          }
          else
          {
            v91 = v46;
            v87 = 1;
          }
        }
        v105 = 0;
        v47 = &v11[a4];
        v81 = &v11[a4 - 1];
        if ( (*(_BYTE *)(a1 + 144) & 4) != 0 )
        {
          v84 = nullptr;
          v77 = 0;
          v86 = nullptr;
          v85 = nullptr;
          if ( v76 )
            goto LABEL_112;
          goto LABEL_65;
        }
        v84 = nullptr;
        v77 = 0;
        v86 = nullptr;
        v85 = nullptr;
        break;
      default:
        *(_DWORD *)(a6 + 112) = -44;
        return (unsigned int)-44;
    }
LABEL_78:
    while ( 2 )
    {
      v51 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v47, (__m128i)(unsigned __int64)v47);
      if ( v20 < v47 )
        goto LABEL_125;
      v52 = *(_WORD *)(a1 + 136);
      v97 = v47 - v11;
      v98 |= 1u;
      v126 = v70;
      v104 = 0;
      v113 = 0;
      v128 = 0;
      v123 = v51;
      v53 = sub_86F8A0((unsigned __int64)v47, (unsigned __int8 *)v118.m128i_i64[1], v52, v74, a6, (__int64)&v99);
      if ( v105 && !v77 )
      {
        v84 = v47;
        v77 = v123.m128i_i64[0];
      }
      if ( v53 < -992 )
      {
        if ( v53 >= -997 )
        {
          switch ( v53 )
          {
            case -996:
            case -993:
              goto LABEL_86;
            case -995:
              v54 = (char *)s;
              if ( v47 >= s )
                goto LABEL_86;
              goto LABEL_87;
            case -994:
              v54 = v47;
              LODWORD(v129) = v128;
              goto LABEL_87;
            default:
              *(_QWORD *)(a6 + 24) = a1;
              *(_BYTE *)(a6 + 104) = 0;
              *(_DWORD *)(a6 + 108) = a5;
              *(_QWORD *)(a6 + 40) = *((_QWORD *)&v124 + 1);
              goto LABEL_154;
          }
        }
        v27 = v53;
        goto LABEL_126;
      }
      if ( v53 )
      {
        v27 = v53;
        v60 = v124;
        *(_QWORD *)(a6 + 24) = a1;
        *(_BYTE *)(a6 + 104) = 0;
        *(_QWORD *)(a6 + 40) = v60;
        *(_DWORD *)(a6 + 108) = a5;
        if ( v27 != 1 )
          goto LABEL_127;
        v27 = 0;
        if ( (int)v113 < 2 * *(unsigned __int16 *)(a6 + 106) )
          v27 = (int)v113 / 2 + 1;
        *(_DWORD *)(a6 + 112) = v27;
        v61 = v123.m128i_u64[1];
        *(_QWORD *)(a6 + 96) = v47 - v11;
        *(_QWORD *)(a6 + 72) = a4;
        v62 = v123.m128i_i64[0];
        *(_QWORD *)(a6 + 64) = n;
        *(_QWORD *)(a6 + 80) = v62 - (_QWORD)v11;
        v63 = v122;
        if ( v122 < v61 )
          v63 = v61;
        *(_QWORD *)(a6 + 88) = v63 - (_QWORD)v11;
        if ( (v70 & 0x4000) != 0 )
        {
          if ( !n )
            goto LABEL_186;
          v64 = (void *)(*(__int64 (__fastcall **)(unsigned __int64, _QWORD))a6)(n, *(_QWORD *)(a6 + 16));
          *(_QWORD *)(a6 + 32) = v64;
          if ( v64 )
          {
            memcpy(v64, v11, n);
            v27 = *(_DWORD *)(a6 + 112);
            goto LABEL_40;
          }
          goto LABEL_240;
        }
LABEL_177:
        *(_QWORD *)(a6 + 32) = a2;
        return v27;
      }
LABEL_86:
      LODWORD(v129) = 0;
      v54 = v47 + 1;
LABEL_87:
      if ( v76 )
      {
        if ( HIDWORD(v129) )
        {
          if ( (unsigned __int64)v47 < v121.m128i_i64[0] )
          {
            v93 = (size_t)v54;
            v68 = sub_876D00(v47, HIDWORD(v129), v121.m128i_i64[0], &v130, 0);
            v54 = (char *)v93;
            if ( v68 )
              goto LABEL_125;
          }
        }
        else if ( v121.m128i_i64[0] - (unsigned __int64)v130 >= (unsigned __int64)v47
               && *v47 == (_BYTE)v131
               && (v130 == 1 || v47[1] == HIBYTE(v131)) )
        {
          goto LABEL_125;
        }
      }
      if ( v18 < v54 || v78 < 0 )
        goto LABEL_125;
      if ( &v11[a4] < v54
        && *(v54 - 1) == 13
        && v54 < v18
        && *v54 == 10
        && (*(_BYTE *)(a1 + 105) & 8) == 0
        && ((unsigned int)(HIDWORD(v129) - 1) <= 1 || v130 == 2) )
      {
        ++v54;
      }
      *(_QWORD *)&v124 = 0;
      if ( (*(_BYTE *)(a1 + 144) & 4) == 0 )
      {
        v47 = v54;
        continue;
      }
      break;
    }
    if ( !v76 )
    {
LABEL_97:
      if ( !v79 )
        goto LABEL_133;
      goto LABEL_98;
    }
    v47 = v54;
LABEL_112:
    v57 = v47;
    if ( v47 >= v18 )
    {
      if ( v78 < 0 )
      {
        if ( !v83 && !v79 )
          goto LABEL_68;
        v18 = v47;
        v27 = 0;
        goto LABEL_126;
      }
      v18 = v47;
      v54 = v47;
      goto LABEL_97;
    }
    while ( 1 )
    {
      if ( HIDWORD(v129) )
      {
        if ( (unsigned __int64)v57 >= v121.m128i_i64[0] )
          goto LABEL_115;
        if ( (unsigned int)sub_876D00(v57, HIDWORD(v129), v121.m128i_i64[0], &v130, 0) )
          goto LABEL_121;
        if ( v18 == ++v57 )
        {
LABEL_131:
          if ( v78 < 0 )
            goto LABEL_66;
LABEL_132:
          v54 = v47;
          if ( !v79 )
          {
LABEL_133:
            if ( v82 )
            {
              v59 = (unsigned __int64)v119;
              v47 = v54;
              if ( &v119[a4] < v54 && v54 < v18 )
              {
                while ( 1 )
                {
                  if ( HIDWORD(v129) )
                  {
                    if ( v59 < (unsigned __int64)v47 && (unsigned int)sub_876DB0(v47, HIDWORD(v129), v59, &v130, 0) )
                    {
                      v69 = v47;
                      if ( *(v47 - 1) == 13 && (unsigned int)(HIDWORD(v129) - 1) <= 1 && v47 < v18 )
                      {
                        v18 = v47++;
                        if ( *v69 == 10 )
                          break;
                      }
                      else
                      {
                        v18 = v47;
                      }
LABEL_146:
                      v47 = v18;
                      break;
                    }
                  }
                  else if ( (unsigned __int64)v47 >= v130 + v59
                         && v47[-v130] == (_BYTE)v131
                         && (v130 == 1 || v47[1LL - v130] == HIBYTE(v131)) )
                  {
                    v18 = v47;
                    goto LABEL_146;
                  }
                  if ( v18 == ++v47 )
                    goto LABEL_146;
                  v59 = (unsigned __int64)v119;
                }
              }
LABEL_68:
              v18 = (char *)v121.m128i_i64[0];
              if ( !v114 )
              {
LABEL_69:
                v48 = v18 - v47;
                if ( v18 - v47 < *(unsigned __int16 *)(a1 + 134) )
                  goto LABEL_125;
                v49 = &v47[v79];
                if ( v81 < v49 && v87 && (v48 <= 0x1387 || v78 >= 0 && v48 <= 0x4C4B3F) )
                {
                  v50 = (char *)memchr(&v47[v79], v90, v18 - v49);
                  v81 = v50;
                  if ( v90 == v91 )
                  {
                    if ( !v50 )
                      goto LABEL_125;
                  }
                  else if ( !v50 )
                  {
                    v81 = (char *)memchr(v49, v91, v18 - v49);
                    if ( !v81 )
                      goto LABEL_125;
                  }
                  if ( v81 >= v18 )
                    goto LABEL_125;
                }
              }
              goto LABEL_78;
            }
            v47 = v54;
            if ( !v83 )
              goto LABEL_68;
            if ( v54 < v18 )
            {
              do
              {
                v66 = *(unsigned __int8 *)(v83 + ((unsigned __int8)*v54 >> 3));
                if ( _bittest(&v66, *v54 & 7) )
                {
                  v47 = v54;
                  goto LABEL_189;
                }
                ++v54;
              }
              while ( v18 != v54 );
              v47 = v18;
            }
            goto LABEL_189;
          }
LABEL_98:
          v55 = v18 - v54;
          if ( v88 == v89 )
          {
            v47 = (char *)memchr(v54, v88, v18 - v54);
            if ( !v47 )
              v47 = v18;
            goto LABEL_189;
          }
          v56 = v86 < v54 || v86 == nullptr;
          if ( v85 && v85 >= v54 )
          {
            if ( v18 != v85 )
            {
LABEL_102:
              if ( v56 )
              {
                v86 = (char *)memchr(v54, v89, v55);
                if ( !v86 )
                {
                  v86 = v18;
                  v47 = v85;
                  goto LABEL_189;
                }
              }
              else
              {
                v47 = v85;
                if ( v18 == v86 )
                  goto LABEL_189;
              }
              v47 = v86;
              if ( v85 <= v86 )
                v47 = v85;
LABEL_189:
              if ( v114 )
              {
                v18 = (char *)v121.m128i_i64[0];
                goto LABEL_78;
              }
              if ( (unsigned __int64)v47 < v121.m128i_i64[0] )
              {
                v18 = (char *)v121.m128i_i64[0];
                goto LABEL_69;
              }
LABEL_125:
              v27 = 0;
LABEL_126:
              *(_QWORD *)(a6 + 24) = a1;
              *(_BYTE *)(a6 + 104) = 0;
              *(_DWORD *)(a6 + 108) = a5;
LABEL_127:
              *(_QWORD *)(a6 + 40) = *((_QWORD *)&v124 + 1);
              if ( ((v27 + 2) & 0xFFFFFFFD) == 0 )
              {
LABEL_154:
                if ( v84 )
                {
                  v27 = -2;
                  *(_QWORD *)(a6 + 120) = v84 - v11;
                  *(_QWORD *)(a6 + 32) = a2;
                  *(_QWORD *)(a6 + 96) = v84 - v11;
                  *(_QWORD *)(a6 + 64) = n;
                  *(_QWORD *)(a6 + 128) = v18 - v11;
                  *(_QWORD *)(a6 + 72) = a4;
                  *(_QWORD *)(a6 + 80) = v77 - (_QWORD)v11;
                  *(_QWORD *)(a6 + 88) = v18 - v11;
                }
                else
                {
                  v27 = -1;
                  *(_QWORD *)(a6 + 32) = a2;
                  *(_QWORD *)(a6 + 64) = n;
                  *(_QWORD *)(a6 + 72) = a4;
                }
              }
              *(_DWORD *)(a6 + 112) = v27;
              return v27;
            }
            if ( !v56 )
            {
              v47 = v86;
              goto LABEL_189;
            }
          }
          else
          {
            v92 = (size_t)v54;
            v67 = (char *)memchr(v54, v88, v18 - v54);
            v54 = (char *)v92;
            v85 = v67;
            if ( v67 )
              goto LABEL_102;
            if ( !v56 )
            {
              v85 = v18;
              v47 = v86;
              goto LABEL_189;
            }
          }
          v86 = (char *)memchr(v54, v89, v55);
          v47 = v86;
          if ( !v86 )
          {
            v86 = v18;
            v47 = v18;
          }
          v85 = v18;
          goto LABEL_189;
        }
      }
      else
      {
        if ( v121.m128i_i64[0] - (unsigned __int64)v130 >= (unsigned __int64)v57
          && *v57 == (_BYTE)v131
          && (v130 == 1 || v57[1] == HIBYTE(v131)) )
        {
LABEL_121:
          v18 = v57;
LABEL_65:
          if ( v78 >= 0 )
            goto LABEL_132;
LABEL_66:
          if ( !v83 && !v79 )
            goto LABEL_68;
          if ( v47 < v18 )
          {
            v58 = *v47;
            if ( v79 )
            {
              if ( v88 == v58 || v89 == v58 )
                goto LABEL_68;
            }
            if ( v83 )
            {
              v65 = *(unsigned __int8 *)(v83 + (v58 >> 3));
              if ( _bittest(&v65, v58 & 7) )
                goto LABEL_68;
            }
          }
          goto LABEL_125;
        }
LABEL_115:
        if ( v18 == ++v57 )
          goto LABEL_131;
      }
    }
  }
  *(_DWORD *)(a6 + 108) = a5;
  if ( v25 < 0 || (v70 & 0x4000) == 0 )
  {
    if ( !*(_QWORD *)(a6 + 32) )
      return v27;
    goto LABEL_177;
  }
  if ( !n )
  {
LABEL_186:
    *(_QWORD *)(a6 + 32) = 0;
    goto LABEL_40;
  }
  v71 = v25;
  v28 = (void *)(*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, _QWORD))a6)(
                  n,
                  *(_QWORD *)(a6 + 16),
                  v26,
                  (unsigned int)v25);
  *(_QWORD *)(a6 + 32) = v28;
  if ( !v28 )
  {
LABEL_240:
    *(_DWORD *)(a6 + 112) = -48;
    return (unsigned int)-48;
  }
  memcpy(v28, v11, n);
  v27 = v71;
LABEL_40:
  *(_BYTE *)(a6 + 105) |= 1u;
  return v27;
}

