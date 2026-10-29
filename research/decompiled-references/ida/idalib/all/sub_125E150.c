__int64 __fastcall sub_125E150(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // r15
  __int64 *v4; // rax
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  _QWORD *v8; // rbx
  _QWORD *v9; // r12
  _QWORD *v10; // rax
  _QWORD *v11; // r14
  _QWORD *v12; // rax
  __int64 v13; // r13
  int v14; // eax
  const char **v15; // rax
  size_t v16; // r12
  char *v17; // rbp
  int v18; // ecx
  __int64 v19; // rsi
  const char *v21; // rbp
  size_t v22; // rax
  size_t v23; // rax
  size_t v24; // r12
  __int64 v25; // rax
  __int64 v26; // rdx
  const char *v27; // r8
  size_t v28; // r9
  __int64 v29; // rax
  __int64 v30; // rax
  const char **v31; // rax
  size_t v32; // rbp
  const char *v33; // r12
  __int64 v34; // rax
  __int64 v35; // rdx
  char *v36; // r8
  __int64 v37; // rax
  _QWORD *v38; // rbx
  const char **v39; // rax
  size_t v40; // rbp
  const char *v41; // r12
  __int64 *v42; // rdi
  __int64 v43; // rsi
  __int64 v44; // rax
  __int64 v45; // rdx
  const char **v46; // rax
  size_t v47; // rsi
  char *v48; // rbp
  int v49; // eax
  size_t v50; // rbp
  const char **v51; // rax
  const char *v52; // r12
  __int64 v53; // rax
  __int64 v54; // rdx
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rdx
  __int64 v59; // rax
  __m128 *v60; // rbp
  _BYTE **v61; // r12
  size_t v62; // rbx
  const char *v63; // rsi
  void *v64; // rdi
  __m128i v65; // xmm1
  void **v66; // r15
  unsigned __int64 v67; // rbx
  void *v68; // rdi
  volatile signed __int32 *v69; // rbx
  char v70; // bl
  volatile signed __int32 *v71; // rax
  __int64 v72; // rcx
  __int64 v73; // r8
  _QWORD *v74; // rbx
  _QWORD *v75; // rdx
  unsigned __int32 v76; // ebp
  _QWORD *v77; // r12
  __int64 v78; // r13
  _QWORD *v79; // r14
  __int64 v80; // rax
  void **v81; // rbp
  void **v82; // rbx
  __int64 v83; // rax
  unsigned __int8 *v84; // rbx
  _QWORD *v85; // rdx
  __int64 v86; // rax
  int v87; // eax
  signed __int32 v88; // eax
  int v89; // ecx
  signed __int32 v90; // edx
  size_t v91; // rbx
  __int64 v92; // rax
  __int64 v93; // rdx
  __int64 v94; // rax
  __int64 v95; // rdx
  int v96; // eax
  __int64 v97; // rax
  __int64 v98; // rax
  __int64 v99; // rcx
  __int64 v100; // rax
  __int64 v101; // r15
  unsigned __int8 *v102; // rbp
  __int64 v103; // rbx
  void *v104; // rdi
  size_t v105; // rax
  __int64 v106; // r12
  __m128 *v107; // rbx
  __int64 v108; // rax
  __int64 v109; // rdx
  __int64 v110; // rax
  __int64 v111; // r12
  char *v112; // rbx
  __int64 v113; // rcx
  __int64 v114; // r8
  __int64 v115; // r9
  __int64 v116; // rcx
  __int64 v117; // r8
  __int64 v118; // r9
  __int64 *v119; // [rsp+0h] [rbp-368h]
  __int64 *v121; // [rsp+10h] [rbp-358h]
  size_t v122; // [rsp+10h] [rbp-358h]
  _BYTE *v124; // [rsp+30h] [rbp-338h]
  char v125; // [rsp+38h] [rbp-330h]
  __m128 *v126; // [rsp+38h] [rbp-330h]
  __int64 *v127; // [rsp+40h] [rbp-328h]
  char *i; // [rsp+40h] [rbp-328h]
  volatile signed __int32 *v129; // [rsp+48h] [rbp-320h]
  __int64 v130; // [rsp+58h] [rbp-310h]
  void *v131; // [rsp+60h] [rbp-308h] BYREF
  _BYTE *v132; // [rsp+68h] [rbp-300h]
  __m128i *v133; // [rsp+80h] [rbp-2E8h] BYREF
  __int64 v134; // [rsp+88h] [rbp-2E0h]
  __m128i v135; // [rsp+90h] [rbp-2D8h] BYREF
  void *v136[2]; // [rsp+A0h] [rbp-2C8h] BYREF
  _BYTE v137[16]; // [rsp+B0h] [rbp-2B8h] BYREF
  void *v138[2]; // [rsp+C0h] [rbp-2A8h] BYREF
  char v139; // [rsp+D0h] [rbp-298h] BYREF
  __m128i v140[2]; // [rsp+E0h] [rbp-288h] BYREF
  __int16 v141; // [rsp+100h] [rbp-268h]
  __m128i v142; // [rsp+110h] [rbp-258h] BYREF
  _WORD v143[16]; // [rsp+120h] [rbp-248h] BYREF
  void *v144[2]; // [rsp+140h] [rbp-228h] BYREF
  _BYTE v145[16]; // [rsp+150h] [rbp-218h] BYREF
  __int16 v146; // [rsp+160h] [rbp-208h]
  __m128i v147; // [rsp+170h] [rbp-1F8h] BYREF
  __m128i v148; // [rsp+180h] [rbp-1E8h] BYREF
  __int16 v149; // [rsp+190h] [rbp-1D8h]
  void *v150; // [rsp+1A0h] [rbp-1C8h] BYREF
  __int64 v151; // [rsp+1A8h] [rbp-1C0h]
  __m128i v152; // [rsp+1B0h] [rbp-1B8h]
  void *v153; // [rsp+270h] [rbp-F8h]
  __m128i v154; // [rsp+2A0h] [rbp-C8h] BYREF
  void *v155; // [rsp+2B0h] [rbp-B8h]
  void *v156; // [rsp+2D0h] [rbp-98h]
  unsigned __int64 v157; // [rsp+2F8h] [rbp-70h]
  __int64 v158; // [rsp+318h] [rbp-50h]

  v2 = *(_QWORD *)(a2 + 176);
  v3 = operator new(0x148u);
  sub_21B6CD0(v3, v2);
  v4 = sub_1105E80();
  v8 = *(_QWORD **)(a2 + 8);
  v119 = v4;
  v9 = &v8[*(unsigned int *)(a2 + 16)];
  if ( v9 == v8 )
    goto LABEL_26;
  v10 = v8 + 1;
  if ( !*v8 )
  {
    do
    {
      v8 = v10;
      if ( v9 == v10 )
        goto LABEL_26;
      ++v10;
    }
    while ( !*(v10 - 1) );
  }
  v11 = v9;
  while ( 1 )
  {
    v13 = *v8;
    v14 = *(_DWORD *)(*(_QWORD *)*v8 + 40LL);
    if ( v14 != 3369 )
      goto LABEL_4;
    v15 = *(const char ***)(v13 + 48);
    v16 = 0;
    v17 = (char *)*v15;
    if ( *v15 )
      v16 = j__strlen(*v15);
    *(_OWORD *)v144 = 0;
    v121 = *(__int64 **)(a1 + 8);
    if ( (unsigned __int8)sub_22578D0(v144, v17, v16, v5, v6, v7)
      || SHIBYTE(v144[1]) < 0
      || SBYTE3(v144[1]) < 0
      || SHIBYTE(v144[0]) >= 0 )
    {
      v18 = 379;
      v19 = *v121;
      goto LABEL_25;
    }
    if ( !LODWORD(v144[0]) && (HIDWORD(v144[0]) & 0x7FFFFFFF) != 0 )
    {
      v18 = 378;
      v19 = *v121;
      goto LABEL_25;
    }
    v147 = (__m128i)0x8000000000000001LL;
    if ( !(unsigned __int8)sub_A09E20((unsigned int *)v144, (unsigned int *)&v147) )
    {
      v14 = *(_DWORD *)(*(_QWORD *)v13 + 40LL);
LABEL_4:
      switch ( v14 )
      {
        case 388:
          v31 = *(const char ***)(v13 + 48);
          v32 = 0;
          v33 = *v31;
          if ( *v31 )
            v32 = j__strlen(*v31);
          v34 = sub_21BB380(v119, 2121);
          v36 = (char *)v33;
LABEL_40:
          v29 = sub_21B9430(v3, 0, v34, v35, v36, v32);
          goto LABEL_34;
        case 1573:
          v39 = *(const char ***)(v13 + 48);
          v40 = 0;
          v41 = *v39;
          if ( *v39 )
            v40 = j__strlen(*v39);
          v25 = sub_21BB380(v119, 643);
          v27 = v41;
          v28 = v40;
          break;
        case 3115:
          v21 = **(const char ***)(v13 + 48);
          v22 = j__strlen("d");
          if ( v21 )
          {
            v122 = v22;
            v23 = j__strlen(v21);
            v24 = v23;
            if ( v23 == v122 && (!v23 || !memcmp(v21, "d", v23)) )
              goto LABEL_55;
          }
          else
          {
            if ( !v22 )
            {
LABEL_55:
              v42 = v119;
              v43 = 3060;
              goto LABEL_56;
            }
            v24 = 0;
          }
          v25 = sub_21BB380(v119, 3114);
          v27 = v21;
          v28 = v24;
          break;
        case 352:
          v57 = sub_21BB380(v119, 345);
          v59 = sub_21B9090(v3, 0, v57, v58);
          sub_21B80F0(v3, v59);
          v43 = 289;
          v42 = v119;
LABEL_56:
          v44 = sub_21BB380(v42, v43);
          v29 = sub_21B9090(v3, 0, v44, v45);
          goto LABEL_34;
        case 2125:
          v46 = *(const char ***)(v13 + 48);
          v47 = 0;
          v48 = (char *)*v46;
          if ( *v46 )
            v47 = j__strlen(*v46);
          v49 = sub_FECA20(v48, v47);
          if ( v49 == 42 )
          {
            sub_FC70B0((__int64)&v150, **(_QWORD **)(a1 + 8), 0, 400);
            sub_AE9DF0((unsigned __int8 **)&v150, (__int64)"HV", 1u);
            sub_AE9DF0((unsigned __int8 **)&v150, **(_QWORD **)(v13 + 48), 1u);
            sub_AEA040((__int64)&v150);
            v83 = *(_QWORD *)(v13 + 16);
            if ( !v83 )
              v83 = v13;
            *(_BYTE *)(v83 + 44) |= 1u;
          }
          else
          {
            v50 = 0;
            v51 = (const char **)sub_FEB790(v49);
            v52 = *v51;
            if ( *v51 )
              v50 = j__strlen(*v51);
            v53 = sub_21BB380(v119, 3304);
            v55 = sub_21B9430(v3, 0, v53, v54, v52, v50);
            sub_21B80F0(v3, v55);
            v56 = *(_QWORD *)(v13 + 16);
            if ( !v56 )
              v56 = v13;
            *(_BYTE *)(v56 + 44) |= 1u;
          }
          goto LABEL_14;
        case 2025:
          v32 = j__strlen("strict");
          v34 = sub_21BB380(v119, 795);
          v36 = "strict";
          goto LABEL_40;
        default:
          if ( v14 != 1944 )
          {
            if ( v14 != 1946 && v14 != 1945 )
            {
              sub_21B80F0(v3, v13);
              goto LABEL_14;
            }
            sub_FC70B0((__int64)&v150, **(_QWORD **)(a1 + 8), 0, 333);
            sub_21B5FF0(&v147, v13, a2);
            sub_AEC220((unsigned __int8 **)&v150, v147.m128i_i64[0], v147.m128i_i64[1]);
            if ( (__m128i *)v147.m128i_i64[0] != &v148 )
              operator delete((void *)v147.m128i_i64[0]);
            sub_AEA040((__int64)&v150);
          }
          v37 = *(_QWORD *)(v13 + 16);
          if ( !v37 )
            v37 = v13;
          *(_BYTE *)(v37 + 44) |= 1u;
LABEL_14:
          v12 = v8 + 1;
          if ( v11 == v8 + 1 )
            goto LABEL_26;
          goto LABEL_15;
      }
      v29 = sub_21B8AA0(v3, 0, v25, v26, v27, v28);
LABEL_34:
      sub_21B80F0(v3, v29);
      v30 = *(_QWORD *)(v13 + 16);
      if ( !v30 )
        v30 = v13;
      *(_BYTE *)(v30 + 44) |= 1u;
      goto LABEL_14;
    }
    v18 = 392;
    v19 = *v121;
LABEL_25:
    sub_FC70B0((__int64)&v150, v19, 0, v18);
    sub_AEC220((unsigned __int8 **)&v150, v17, v16);
    sub_AEA040((__int64)&v150);
    v12 = v8 + 1;
    if ( v11 == v8 + 1 )
      goto LABEL_26;
LABEL_15:
    if ( !v8[1] )
      break;
LABEL_16:
    v8 = v12;
  }
  v38 = v8 + 2;
  while ( 1 )
  {
    v12 = v38;
    if ( v11 == v38 )
      break;
    if ( *v38++ )
      goto LABEL_16;
  }
LABEL_26:
  if ( *(_DWORD *)(a1 + 48) != 49 )
    goto LABEL_27;
  v60 = (__m128 *)&v150;
  sub_21B7150(&v131, a2, 1819);
  v61 = (_BYTE **)v131;
  v127 = *(__int64 **)(a1 + 8);
  v124 = v132;
  if ( v131 == v132 )
    goto LABEL_152;
  v125 = 1;
  v60 = (__m128 *)&v150;
  v130 = v3;
  while ( 2 )
  {
    while ( 2 )
    {
      v144[0] = v145;
      sub_124E3C0(v144, *v61, (__int64)&v61[1][(_QWORD)*v61]);
      v62 = j__strlen("KHR|SPV_[a-zA-Z0-9_]+");
      std::locale::locale((std::locale *)&v142);
      v147.m128i_i32[0] = 16;
      std::locale::locale((std::locale *)&v147.m128i_u64[1], (const std::locale *)&v142);
      v63 = "KHR|SPV_[a-zA-Z0-9_]+";
      if ( !v62 )
        v63 = nullptr;
      sub_125DB20(v60, v63, (__int64)&v63[v62], (const std::locale *)&v147.m128i_u64[1], v147.m128i_i32[0]);
      v64 = v156;
      v65 = _mm_load_si128(&v154);
      v154 = 0;
      v148 = v65;
      if ( v156 )
      {
        v66 = (void **)v157;
        v67 = v158 + 8;
        if ( v158 + 8 > v157 )
        {
          do
          {
            v68 = *v66++;
            operator delete(v68);
          }
          while ( v67 > (unsigned __int64)v66 );
          v64 = v156;
        }
        operator delete(v64);
      }
      if ( v155 != &v60[18] )
        operator delete(v155);
      v69 = (volatile signed __int32 *)v154.m128i_i64[1];
      if ( v154.m128i_i64[1] )
      {
        if ( &_pthread_key_create )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v154.m128i_i64[1] + 8), 0xFFFFFFFF) != 1 )
            goto LABEL_90;
LABEL_128:
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v69 + 16LL))(v69);
          if ( &_pthread_key_create )
          {
            v88 = _InterlockedExchangeAdd(v69 + 3, 0xFFFFFFFF);
          }
          else
          {
            v88 = *((_DWORD *)v69 + 3);
            *((_DWORD *)v69 + 3) = v88 - 1;
          }
          if ( v88 == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v69 + 24LL))(v69);
        }
        else
        {
          v87 = *(_DWORD *)(v154.m128i_i64[1] + 8);
          *(_DWORD *)(v154.m128i_i64[1] + 8) = v87 - 1;
          if ( v87 == 1 )
            goto LABEL_128;
        }
      }
LABEL_90:
      if ( v153 != &v60[14] )
        operator delete(v153);
      std::locale::~locale((std::locale *)&v142);
      v150 = nullptr;
      v151 = 0;
      v152 = 0u;
      v70 = sub_1255590((__int64)v144[0], (__int64)v144[0] + (unsigned __int64)v144[1], (__int64)v60, &v147, 0);
      if ( v150 )
        operator delete(v150);
      v71 = (volatile signed __int32 *)v148.m128i_i64[1];
      if ( v148.m128i_i64[1] )
      {
        if ( &_pthread_key_create )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v148.m128i_i64[1] + 8), 0xFFFFFFFF) != 1 )
            goto LABEL_97;
LABEL_133:
          v129 = v71;
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v71 + 16LL))(v71);
          if ( &_pthread_key_create )
          {
            v90 = _InterlockedExchangeAdd(v129 + 3, 0xFFFFFFFF);
          }
          else
          {
            v90 = *((_DWORD *)v129 + 3);
            *((_DWORD *)v129 + 3) = v90 - 1;
          }
          if ( v90 == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v129 + 24LL))(v129);
        }
        else
        {
          v89 = *(_DWORD *)(v148.m128i_i64[1] + 8);
          *(_DWORD *)(v148.m128i_i64[1] + 8) = v89 - 1;
          if ( v89 == 1 )
            goto LABEL_133;
        }
      }
LABEL_97:
      std::locale::~locale((std::locale *)&v147.m128i_u64[1]);
      if ( !v70 )
      {
        sub_FC70B0((__int64)v60, *v127, 0, 400);
        v84 = (unsigned __int8 *)v150;
        if ( !v150 )
        {
          v95 = v151;
          v96 = *(_DWORD *)(v151 + 14976);
          if ( v96 )
          {
            v97 = (unsigned int)(v96 - 1);
            *(_DWORD *)(v151 + 14976) = v97;
            v84 = *(unsigned __int8 **)(v95 + 8 * v97 + 14848);
            v98 = *((unsigned int *)v84 + 134);
            *v84 = 0;
            v99 = *((_QWORD *)v84 + 66);
            *((_DWORD *)v84 + 106) = 0;
            v100 = v99 + (v98 << 6);
            if ( v99 != v100 )
            {
              v126 = v60;
              v101 = v100;
              v102 = v84;
              v103 = v99;
              do
              {
                while ( 1 )
                {
                  v101 -= 64;
                  v104 = *(void **)(v101 + 24);
                  if ( v104 == (void *)(v101 + 40) )
                    break;
                  operator delete(v104);
                  if ( v103 == v101 )
                    goto LABEL_146;
                }
              }
              while ( v103 != v101 );
LABEL_146:
              v84 = v102;
              v60 = v126;
            }
            *((_DWORD *)v84 + 134) = 0;
          }
          else
          {
            v84 = (unsigned __int8 *)operator new(0x3A0u);
            *v84 = 0;
            *((_QWORD *)v84 + 12) = v84 + 112;
            *((_QWORD *)v84 + 16) = v84 + 144;
            *((_QWORD *)v84 + 20) = v84 + 176;
            *((_QWORD *)v84 + 24) = v84 + 208;
            *((_QWORD *)v84 + 28) = v84 + 240;
            *((_QWORD *)v84 + 32) = v84 + 272;
            *((_QWORD *)v84 + 36) = v84 + 304;
            *((_QWORD *)v84 + 40) = v84 + 336;
            *((_QWORD *)v84 + 44) = v84 + 368;
            *((_QWORD *)v84 + 48) = v84 + 400;
            *((_QWORD *)v84 + 52) = v84 + 432;
            *((_QWORD *)v84 + 13) = 0;
            v84[112] = 0;
            *((_QWORD *)v84 + 17) = 0;
            v84[144] = 0;
            *((_QWORD *)v84 + 21) = 0;
            v84[176] = 0;
            *((_QWORD *)v84 + 25) = 0;
            v84[208] = 0;
            *((_QWORD *)v84 + 29) = 0;
            v84[240] = 0;
            *((_QWORD *)v84 + 33) = 0;
            v84[272] = 0;
            *((_QWORD *)v84 + 37) = 0;
            v84[304] = 0;
            *((_QWORD *)v84 + 41) = 0;
            v84[336] = 0;
            *((_QWORD *)v84 + 45) = 0;
            v84[368] = 0;
            *((_QWORD *)v84 + 49) = 0;
            v84[400] = 0;
            *((_QWORD *)v84 + 53) = 0x800000000LL;
            *((_QWORD *)v84 + 66) = v84 + 544;
            *((_QWORD *)v84 + 67) = 0x600000000LL;
          }
          v150 = v84;
        }
        v84[*v84 + 1] = 1;
        v85 = v150;
        v86 = *(unsigned __int8 *)v150;
        *(_BYTE *)v150 = v86 + 1;
        v85[v86 + 2] = "-fspv-extension";
        sub_AEC220((unsigned __int8 **)v60, (_BYTE *)v144[0], (signed __int64)v144[1]);
        sub_AEA040((__int64)v60);
        v125 = 0;
      }
      if ( v144[0] != v145 )
      {
        operator delete(v144[0]);
        v61 += 4;
        if ( v124 == (_BYTE *)v61 )
          goto LABEL_100;
        continue;
      }
      break;
    }
    v61 += 4;
    if ( v124 != (_BYTE *)v61 )
      continue;
    break;
  }
LABEL_100:
  v3 = v130;
  if ( v125 )
  {
    if ( (v132 - (_BYTE *)v131) >> 5 )
    {
      v144[0] = "-spirv-ext=+";
      v111 = 32 * (((v132 - (_BYTE *)v131) >> 5) - 1);
      v149 = 260;
      v147.m128i_i64[0] = (__int64)v131;
      v112 = (char *)v131 + 32;
      v146 = 259;
      sub_A41580((__m128i *)v60, (const __m128i *)v144, &v147, v72, v73, 260);
      sub_2253560(&v133, v60);
      for ( i = &v112[v111]; i != v112; v112 += 32 )
      {
        while ( 1 )
        {
          v136[0] = v137;
          sub_124E3C0(v136, *(_BYTE **)v112, *(_QWORD *)v112 + *((_QWORD *)v112 + 1));
          if ( sub_9B4AA0((__int64)v136, "KHR") )
          {
            v149 = 260;
            v144[0] = "+";
            v146 = 259;
            v147.m128i_i64[0] = (__int64)v136;
            sub_A41580((__m128i *)v60, (const __m128i *)v144, &v147, v113, 259, v115);
            sub_2253560(&v142, v60);
            sub_A0AAD0((__int64)v136, &v142);
            if ( (_WORD *)v142.m128i_i64[0] != v143 )
              operator delete((void *)v142.m128i_i64[0]);
          }
          v149 = 260;
          v141 = 260;
          v142.m128i_i64[0] = (__int64)",";
          v143[8] = 259;
          v147.m128i_i64[0] = (__int64)v136;
          v140[0].m128i_i64[0] = (__int64)&v133;
          sub_A41580((__m128i *)v144, v140, &v142, 259, v114, v115);
          sub_A41580((__m128i *)v60, (const __m128i *)v144, &v147, v116, v117, v118);
          sub_2253560(v138, v60);
          sub_A0AAD0((__int64)&v133, v138);
          if ( v138[0] != &v139 )
            operator delete(v138[0]);
          if ( v136[0] == v137 )
            break;
          operator delete(v136[0]);
          v112 += 32;
          if ( i == v112 )
            goto LABEL_164;
        }
      }
LABEL_164:
      v107 = (__m128 *)v133;
      v150 = &v60[1];
      if ( v133 == &v135 )
      {
        v107 = v60 + 1;
        v152 = _mm_load_si128(&v135);
      }
      else
      {
        v150 = v133;
        v152.m128i_i64[0] = v135.m128i_i64[0];
      }
      v106 = v134;
      v151 = v134;
      goto LABEL_153;
    }
LABEL_152:
    v150 = &v60[1];
    v105 = j__strlen("-spirv-ext=all");
    sub_124E480(v60, "-spirv-ext=all", (__int64)&aSpirvExtAll_0[v105]);
    v106 = v151;
    v107 = (__m128 *)v150;
LABEL_153:
    v108 = sub_21BB380(v119, 2465);
    v110 = sub_21B9430(v3, 0, v108, v109, v107, v106);
    sub_21B80F0(v3, v110);
    if ( v150 != &v60[1] )
      operator delete(v150);
  }
  sub_10DC500((__int64)v60, a2, 0x71Bu);
  v74 = (_QWORD *)v151;
  v75 = v150;
  v76 = v152.m128i_i32[0];
  v77 = (_QWORD *)v152.m128i_i64[1];
  v78 = v151 - 16;
  while ( v77 != v75 )
  {
    while ( 1 )
    {
      v79 = v75 + 1;
      v80 = *(_QWORD *)(*v75 + 16LL);
      if ( !v80 )
        v80 = *v75;
      *(_BYTE *)(v80 + 44) |= 1u;
      if ( v74 == v79 )
        break;
      if ( v76 )
      {
        do
        {
          if ( *v79 && (unsigned __int8)sub_21B9810(*v79, v76) )
            break;
          ++v79;
        }
        while ( v74 != v79 );
      }
      else
      {
        v79 += ((unsigned __int64)(v78 - (_QWORD)v75) >> 3) + 1;
      }
      v75 = v79;
      if ( v77 == v79 )
        goto LABEL_111;
    }
    v75 = v74;
  }
LABEL_111:
  v81 = (void **)v132;
  v82 = (void **)v131;
  if ( v132 != v131 )
  {
    do
    {
      while ( *v82 != v82 + 2 )
      {
        operator delete(*v82);
        v82 += 4;
        if ( v82 == v81 )
          goto LABEL_114;
      }
      v82 += 4;
    }
    while ( v81 != v82 );
LABEL_114:
    v82 = (void **)v131;
  }
  if ( v82 )
    operator delete(v82);
LABEL_27:
  if ( !sub_10DCD30(v3, 0xAu) )
  {
    v91 = j__strlen("3");
    v92 = sub_21BB380(v119, 3114);
    v94 = sub_21B8AA0(v3, 0, v92, v93, "3", v91);
    sub_21B80F0(v3, v94);
  }
  return v3;
}
