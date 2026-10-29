__int64 __fastcall sub_12006F0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *v3; // rbx
  unsigned __int64 v4; // rax
  __int64 v5; // rdx
  __int64 *v6; // r15
  __int64 v7; // rbp
  __int64 v8; // r13
  void **v9; // r12
  __int64 v10; // rsi
  __int64 v11; // r14
  __int64 v12; // r15
  unsigned __int64 v13; // rax
  __int64 v14; // rdx
  __int64 *v15; // r15
  __int64 v16; // rbp
  __m128 v17; // xmm1
  __int64 v18; // r13
  void **v19; // r12
  __int64 v20; // rsi
  __m128i v21; // xmm1
  __int64 *v22; // r13
  __int64 v23; // r14
  __int64 v24; // rax
  __int64 *v25; // r15
  __int64 v26; // rbp
  void **v27; // r12
  __int64 v28; // rsi
  __int64 v29; // rax
  __int64 v30; // rcx
  void **v31; // rbp
  void **v32; // r13
  signed __int64 *p_dest; // r14
  unsigned __int8 *v34; // r12
  _QWORD *v35; // rdx
  __int64 v36; // rax
  unsigned __int8 *v37; // r12
  _BYTE *v38; // rsi
  signed __int64 v39; // r15
  signed __int64 *v40; // rax
  _QWORD *v41; // rdx
  __int64 v42; // rax
  __int64 v43; // rcx
  __int64 v44; // rax
  char *v45; // r12
  signed __int64 *v46; // rdi
  signed __int64 v47; // rax
  void **v48; // r12
  _QWORD *v49; // rax
  void **v50; // rdx
  void **v51; // r15
  __int64 *v52; // r14
  void **v53; // rbx
  void **v54; // rdi
  void **v55; // rdi
  void **v56; // r15
  void **v57; // rbp
  __int64 *v59; // r13
  __int64 v60; // r14
  __int64 v61; // rax
  __int64 *v62; // r15
  __int64 v63; // rbp
  void **v64; // r12
  __int64 v65; // rsi
  __int64 v66; // rax
  __int64 v67; // rcx
  size_t v68; // rdx
  __int64 v69; // rdx
  const char **v70; // rax
  size_t v71; // rsi
  const char *v72; // rbp
  _QWORD *v73; // rdx
  int v74; // eax
  _QWORD *v75; // rdx
  int v76; // eax
  __int64 v77; // rax
  __int64 v78; // rax
  __int64 v79; // rcx
  __int64 v80; // rax
  __int64 v81; // rbp
  __int64 v82; // rbx
  void *v83; // rdi
  __int64 v84; // rax
  __int64 v85; // r15
  __int64 v86; // rdx
  __int64 v87; // r15
  __int64 *v88; // r14
  __int64 v89; // rbx
  void *v90; // rdi
  __int64 v91; // r14
  __int64 v92; // r14
  __m128i src; // [rsp+0h] [rbp-F8h] BYREF
  __int64 v94; // [rsp+10h] [rbp-E8h]
  __int64 v95; // [rsp+18h] [rbp-E0h]
  __int64 *v96; // [rsp+20h] [rbp-D8h]
  signed __int64 *v97; // [rsp+28h] [rbp-D0h]
  void **v98; // [rsp+30h] [rbp-C8h] BYREF
  void *v99; // [rsp+38h] [rbp-C0h]
  size_t n[2]; // [rsp+50h] [rbp-A8h]
  signed __int64 dest; // [rsp+60h] [rbp-98h] BYREF
  void *v102[2]; // [rsp+70h] [rbp-88h] BYREF
  __int128 v103; // [rsp+80h] [rbp-78h] BYREF
  void *v104; // [rsp+90h] [rbp-68h]
  int v105; // [rsp+98h] [rbp-60h]
  int v106; // [rsp+9Ch] [rbp-5Ch]
  int v107; // [rsp+A0h] [rbp-58h]
  int v108; // [rsp+A4h] [rbp-54h]
  int v109; // [rsp+A8h] [rbp-50h]
  int v110; // [rsp+ACh] [rbp-4Ch]
  __int16 v111; // [rsp+B0h] [rbp-48h]

  v3 = (__int64 *)v102;
  v95 = a1;
  v94 = a2;
  src.m128i_i64[1] = a3;
  v102[0] = (void *)0x71D00000C04LL;
  LODWORD(v102[1]) = 1414;
  v4 = sub_21B6DA0(a2, v102, 3);
  v5 = *(_QWORD *)(a2 + 8);
  *(_QWORD *)&v103 = 0x71D00000C04LL;
  DWORD2(v103) = 1414;
  v6 = (__int64 *)(v5 + 8LL * (unsigned int)v4);
  v7 = v5 + 8 * HIDWORD(v4);
  src.m128i_i64[0] = v7;
  for ( *(__m128 *)v102 = _mm_loadh_ps((const double *)src.m128i_i64); (__int64 *)v7 != v6; v102[0] = v6 )
  {
    v8 = *v6;
    v9 = v102;
    if ( *v6 )
    {
      do
      {
        v10 = *((unsigned int *)v9 + 4);
        if ( !(_DWORD)v10 )
          break;
        if ( (unsigned __int8)sub_21B9810(v8, v10) )
        {
          src.m128i_i64[0] = v7;
          *(_QWORD *)&v103 = 0x71D00000C04LL;
          DWORD2(v103) = 1414;
          *(__m128 *)v102 = _mm_loadh_ps((const double *)src.m128i_i64);
          if ( (__int64 *)v7 != v6 )
          {
            v59 = (__int64 *)v7;
            src.m128i_i64[0] = (__int64)&v102[1] + 4;
LABEL_80:
            v60 = *v6;
            v61 = *(_QWORD *)(*v6 + 16);
            if ( !v61 )
              v61 = *v6;
            v62 = v6 + 1;
            *(_BYTE *)(v61 + 44) |= 1u;
            for ( v102[0] = v62; v59 != v62; v102[0] = v62 )
            {
              v63 = *v62;
              v64 = v102;
              if ( *v62 )
              {
                do
                {
                  v65 = *((unsigned int *)v64 + 4);
                  if ( !(_DWORD)v65 )
                    break;
                  if ( (unsigned __int8)sub_21B9810(v63, v65) )
                  {
                    v6 = (__int64 *)v102[0];
                    if ( v59 != v102[0] )
                      goto LABEL_80;
                    goto LABEL_88;
                  }
                  v64 = (void **)((char *)v64 + 4);
                }
                while ( (void **)src.m128i_i64[0] != v64 );
              }
              ++v62;
            }
LABEL_88:
            if ( !(unsigned __int8)sub_21B9810(v60, 1414) )
            {
              v66 = *(unsigned int *)(src.m128i_i64[1] + 8);
              if ( v66 + 1 > (unsigned __int64)*(unsigned int *)(src.m128i_i64[1] + 12) )
              {
                v92 = src.m128i_i64[1];
                sub_2237220(src.m128i_i64[1], src.m128i_i64[1] + 16, v66 + 1, 8);
                v66 = *(unsigned int *)(v92 + 8);
              }
              v67 = src.m128i_i64[1];
              *(_QWORD *)(*(_QWORD *)src.m128i_i64[1] + 8 * v66) = "-fstack-arrays";
              ++*(_DWORD *)(v67 + 8);
            }
          }
          goto LABEL_7;
        }
        v9 = (void **)((char *)v9 + 4);
      }
      while ( (void **)((char *)&v102[1] + 4) != v9 );
    }
    ++v6;
  }
LABEL_7:
  v11 = v94;
  v12 = src.m128i_i64[1];
  sub_11BBB80(v94, src.m128i_i64[1]);
  sub_11BC7F0(v11, v12);
  sub_11BC850(v11, v12);
  LODWORD(v103) = 1473;
  *(__m128i *)v102 = _mm_load_si128((const __m128i *)&xmmword_23A9C00);
  v13 = sub_21B6DA0(v11, v102, 5);
  v14 = *(_QWORD *)(v11 + 8);
  LODWORD(dest) = 1473;
  LODWORD(v104) = 1473;
  v15 = (__int64 *)(v14 + 8LL * (unsigned int)v13);
  v16 = v14 + 8 * HIDWORD(v13);
  *(__m128i *)n = _mm_load_si128((const __m128i *)&xmmword_23A9C00);
  src.m128i_i64[0] = v16;
  v103 = *(_OWORD *)n;
  v17 = _mm_loadh_ps((const double *)src.m128i_i64);
  *(__m128 *)v102 = v17;
  if ( v15 != (__int64 *)v16 )
  {
    do
    {
      v18 = *v15;
      v19 = v102;
      if ( *v15 )
      {
        do
        {
          v20 = *((unsigned int *)v19 + 4);
          if ( !(_DWORD)v20 )
            break;
          if ( (unsigned __int8)sub_21B9810(v18, v20) )
          {
            src.m128i_i64[0] = v16;
            v17 = _mm_loadh_ps((const double *)src.m128i_i64);
            goto LABEL_14;
          }
          v19 = (void **)((char *)v19 + 4);
        }
        while ( (void **)((char *)&v103 + 4) != v19 );
      }
      v102[0] = ++v15;
    }
    while ( (__int64 *)v16 != v15 );
    src.m128i_i64[0] = v16;
    v21 = _mm_loadl_epi64(&src);
    v17 = (__m128)_mm_unpacklo_epi64(v21, v21);
  }
LABEL_14:
  *(__m128 *)v102 = v17;
  if ( (__int64 *)v16 != v15 )
  {
    v22 = (__int64 *)v16;
    src.m128i_i64[0] = (__int64)&v103 + 4;
LABEL_16:
    v23 = *v15;
    v24 = *(_QWORD *)(*v15 + 16);
    if ( !v24 )
      v24 = *v15;
    v25 = v15 + 1;
    *(_BYTE *)(v24 + 44) |= 1u;
    for ( v102[0] = v25; v22 != v25; v102[0] = v25 )
    {
      v26 = *v25;
      v27 = v102;
      if ( *v25 )
      {
        do
        {
          v28 = *((unsigned int *)v27 + 4);
          if ( !(_DWORD)v28 )
            break;
          if ( (unsigned __int8)sub_21B9810(v26, v28) )
          {
            v15 = (__int64 *)v102[0];
            if ( v22 != v102[0] )
              goto LABEL_16;
            goto LABEL_24;
          }
          v27 = (void **)((char *)v27 + 4);
        }
        while ( v27 != (void **)src.m128i_i64[0] );
      }
      ++v25;
    }
LABEL_24:
    if ( !(unsigned __int8)sub_21B9810(v23, 1473) )
    {
      if ( (unsigned __int8)sub_21B9810(v23, 1931)
        || (unsigned __int8)sub_21B9810(v23, 3076)
        || (unsigned __int8)sub_21B9810(v23, 3063) )
      {
        goto LABEL_26;
      }
      sub_21B9810(v23, 3114);
      v70 = *(const char ***)(v23 + 48);
      v71 = 0;
      v72 = *v70;
      if ( *v70 )
        v71 = strlen(*v70);
      if ( !(unsigned __int8)sub_2247970(v72, v71, 10, v102)
        && v102[0] == (void *)LODWORD(v102[0])
        && v102[0] > (char *)&dword_0 + 2 )
      {
LABEL_26:
        v29 = *(unsigned int *)(src.m128i_i64[1] + 8);
        if ( v29 + 1 > (unsigned __int64)*(unsigned int *)(src.m128i_i64[1] + 12) )
        {
          v91 = src.m128i_i64[1];
          sub_2237220(src.m128i_i64[1], src.m128i_i64[1] + 16, v29 + 1, 8);
          v29 = *(unsigned int *)(v91 + 8);
        }
        v30 = src.m128i_i64[1];
        *(_QWORD *)(*(_QWORD *)src.m128i_i64[1] + 8 * v29) = "-fversion-loops-for-stride";
        ++*(_DWORD *)(v30 + 8);
      }
    }
  }
  sub_21B7150(&v98, v94, 1698);
  v31 = v98;
  v32 = (void **)v99;
  if ( v98 == v99 )
    goto LABEL_71;
  p_dest = &dest;
  do
  {
    while ( 1 )
    {
      if ( !sub_9B4AA0((__int64)v31, "whole") || !sub_9B4AA0((__int64)v31, "innermost") )
        goto LABEL_31;
      sub_FC70B0((__int64)v3, **(_QWORD **)(*(_QWORD *)(v95 + 24) + 8LL), 0, 497);
      v34 = (unsigned __int8 *)v102[0];
      if ( !v102[0] )
      {
        v75 = v102[1];
        v76 = *((_DWORD *)v102[1] + 3744);
        if ( v76 )
        {
          v84 = (unsigned int)(v76 - 1);
          *((_DWORD *)v102[1] + 3744) = v84;
          v34 = (unsigned __int8 *)v75[v84 + 1856];
          v85 = *((unsigned int *)v34 + 134);
          v86 = *((_QWORD *)v34 + 66);
          *v34 = 0;
          *((_DWORD *)v34 + 106) = 0;
          v87 = v86 + (v85 << 6);
          if ( v86 != v87 )
          {
            src.m128i_i64[0] = (__int64)p_dest;
            v88 = v3;
            v89 = v86;
            do
            {
              while ( 1 )
              {
                v87 -= 64;
                v90 = *(void **)(v87 + 24);
                if ( v90 == (void *)(v87 + 40) )
                  break;
                operator delete(v90);
                if ( v89 == v87 )
                  goto LABEL_139;
              }
            }
            while ( v89 != v87 );
LABEL_139:
            v3 = v88;
            p_dest = (signed __int64 *)src.m128i_i64[0];
          }
          *((_DWORD *)v34 + 134) = 0;
        }
        else
        {
          v34 = (unsigned __int8 *)operator new(0x3A0u);
          *v34 = 0;
          *((_QWORD *)v34 + 12) = v34 + 112;
          *((_QWORD *)v34 + 16) = v34 + 144;
          *((_QWORD *)v34 + 20) = v34 + 176;
          *((_QWORD *)v34 + 24) = v34 + 208;
          *((_QWORD *)v34 + 28) = v34 + 240;
          *((_QWORD *)v34 + 32) = v34 + 272;
          *((_QWORD *)v34 + 36) = v34 + 304;
          *((_QWORD *)v34 + 40) = v34 + 336;
          *((_QWORD *)v34 + 44) = v34 + 368;
          *((_QWORD *)v34 + 48) = v34 + 400;
          *((_QWORD *)v34 + 52) = v34 + 432;
          *((_QWORD *)v34 + 13) = 0;
          v34[112] = 0;
          *((_QWORD *)v34 + 17) = 0;
          v34[144] = 0;
          *((_QWORD *)v34 + 21) = 0;
          v34[176] = 0;
          *((_QWORD *)v34 + 25) = 0;
          v34[208] = 0;
          *((_QWORD *)v34 + 29) = 0;
          v34[240] = 0;
          *((_QWORD *)v34 + 33) = 0;
          v34[272] = 0;
          *((_QWORD *)v34 + 37) = 0;
          v34[304] = 0;
          *((_QWORD *)v34 + 41) = 0;
          v34[336] = 0;
          *((_QWORD *)v34 + 45) = 0;
          v34[368] = 0;
          *((_QWORD *)v34 + 49) = 0;
          v34[400] = 0;
          *((_QWORD *)v34 + 53) = 0x800000000LL;
          *((_QWORD *)v34 + 66) = v34 + 544;
          *((_QWORD *)v34 + 67) = 0x600000000LL;
        }
        v102[0] = v34;
      }
      v34[*v34 + 1] = 1;
      v35 = v102[0];
      v36 = *(unsigned __int8 *)v102[0];
      *(_BYTE *)v102[0] = v36 + 1;
      v35[v36 + 2] = "-frepack-arrays-contiguity=";
      v37 = (unsigned __int8 *)v102[0];
      v38 = *v31;
      v39 = (signed __int64)v31[1];
      if ( !v102[0] )
      {
        v73 = v102[1];
        v74 = *((_DWORD *)v102[1] + 3744);
        if ( v74 )
        {
          v77 = (unsigned int)(v74 - 1);
          *((_DWORD *)v102[1] + 3744) = v77;
          v37 = (unsigned __int8 *)v73[v77 + 1856];
          v78 = *((unsigned int *)v37 + 134);
          v79 = *((_QWORD *)v37 + 66);
          *v37 = 0;
          *((_DWORD *)v37 + 106) = 0;
          v80 = v79 + (v78 << 6);
          if ( v79 != v80 )
          {
            src.m128i_i64[0] = (__int64)v31;
            v81 = v79;
            v96 = v3;
            v82 = v80;
            v97 = p_dest;
            do
            {
              while ( 1 )
              {
                v82 -= 64;
                v83 = *(void **)(v82 + 24);
                if ( v83 == (void *)(v82 + 40) )
                  break;
                operator delete(v83);
                if ( v81 == v82 )
                  goto LABEL_131;
              }
            }
            while ( v81 != v82 );
LABEL_131:
            v31 = (void **)src.m128i_i64[0];
            v3 = v96;
            p_dest = v97;
          }
          *((_DWORD *)v37 + 134) = 0;
        }
        else
        {
          src.m128i_i64[0] = (__int64)*v31;
          v37 = (unsigned __int8 *)operator new(0x3A0u);
          *v37 = 0;
          *((_QWORD *)v37 + 12) = v37 + 112;
          *((_QWORD *)v37 + 16) = v37 + 144;
          *((_QWORD *)v37 + 20) = v37 + 176;
          *((_QWORD *)v37 + 24) = v37 + 208;
          *((_QWORD *)v37 + 28) = v37 + 240;
          *((_QWORD *)v37 + 32) = v37 + 272;
          *((_QWORD *)v37 + 36) = v37 + 304;
          *((_QWORD *)v37 + 40) = v37 + 336;
          *((_QWORD *)v37 + 44) = v37 + 368;
          *((_QWORD *)v37 + 48) = v37 + 400;
          *((_QWORD *)v37 + 52) = v37 + 432;
          *((_QWORD *)v37 + 13) = 0;
          v37[112] = 0;
          *((_QWORD *)v37 + 17) = 0;
          v37[144] = 0;
          *((_QWORD *)v37 + 21) = 0;
          v37[176] = 0;
          *((_QWORD *)v37 + 25) = 0;
          v37[208] = 0;
          *((_QWORD *)v37 + 29) = 0;
          v37[240] = 0;
          *((_QWORD *)v37 + 33) = 0;
          v37[272] = 0;
          *((_QWORD *)v37 + 37) = 0;
          v37[304] = 0;
          *((_QWORD *)v37 + 41) = 0;
          v37[336] = 0;
          *((_QWORD *)v37 + 45) = 0;
          v37[368] = 0;
          *((_QWORD *)v37 + 49) = 0;
          v37[400] = 0;
          *((_QWORD *)v37 + 53) = 0x800000000LL;
          v38 = (_BYTE *)src.m128i_i64[0];
          *((_QWORD *)v37 + 66) = v37 + 544;
          *((_QWORD *)v37 + 67) = 0x600000000LL;
        }
        v102[0] = v37;
      }
      v37[*v37 + 1] = 0;
      n[0] = (size_t)p_dest;
      if ( &v38[v39] && !v38 )
        std::__throw_logic_error("basic_string::_M_construct null not valid");
      if ( (unsigned __int64)v39 > 0xF )
      {
        if ( v39 < 0 )
          std::__throw_length_error("basic_string::_M_create");
        src.m128i_i64[0] = (__int64)v38;
        v40 = (signed __int64 *)operator new(v39 + 1);
        dest = v39;
        v38 = (_BYTE *)src.m128i_i64[0];
        n[0] = (size_t)v40;
LABEL_101:
        memcpy(v40, v38, v39);
        v40 = (signed __int64 *)n[0];
        goto LABEL_41;
      }
      if ( v39 == 1 )
      {
        LOBYTE(dest) = *v38;
        v40 = p_dest;
        goto LABEL_41;
      }
      v40 = p_dest;
      if ( v39 )
        goto LABEL_101;
LABEL_41:
      n[1] = v39;
      *((_BYTE *)v40 + v39) = 0;
      v41 = v102[0];
      v42 = *(unsigned __int8 *)v102[0];
      *(_BYTE *)v102[0] = v42 + 1;
      v43 = (unsigned __int8)v42;
      v44 = 4 * (v42 + 3);
      v45 = (char *)&v41[v44];
      v46 = (signed __int64 *)v41[v44];
      if ( (signed __int64 *)n[0] == p_dest )
      {
        v68 = n[1];
        if ( n[1] )
        {
          if ( n[1] == 1 )
            *(_BYTE *)v46 = dest;
          else
            memcpy(v46, p_dest, n[1]);
          v68 = n[1];
          v46 = *(signed __int64 **)v45;
        }
        *((_QWORD *)v45 + 1) = v68;
        *((_BYTE *)v46 + v68) = 0;
        v46 = (signed __int64 *)n[0];
      }
      else
      {
        if ( v46 == &v41[v44 + 2] )
        {
          *(_QWORD *)v45 = n[0];
          *((_QWORD *)v45 + 1) = n[1];
          *((_QWORD *)v45 + 2) = dest;
        }
        else
        {
          v47 = v41[4 * v43 + 14];
          *(_QWORD *)v45 = n[0];
          *((_QWORD *)v45 + 1) = n[1];
          *((_QWORD *)v45 + 2) = dest;
          if ( v46 )
          {
            n[0] = (size_t)v46;
            dest = v47;
            goto LABEL_45;
          }
        }
        n[0] = (size_t)p_dest;
        v46 = p_dest;
      }
LABEL_45:
      n[1] = 0;
      *(_BYTE *)v46 = 0;
      if ( (signed __int64 *)n[0] != p_dest )
        operator delete((void *)n[0]);
      if ( (_BYTE)v111 )
      {
        sub_FC7790(v103, v3, SHIBYTE(v111));
        *(_QWORD *)&v103 = 0;
        v111 = 0;
      }
      if ( v104 != v3 + 6 )
        operator delete(v104);
      v48 = (void **)v102[0];
      if ( !v102[0] )
        goto LABEL_31;
      v49 = v102[1];
      if ( !v102[1] )
        goto LABEL_31;
      if ( v102[0] < v102[1] || v102[0] > (char *)v102[1] + 14848 )
        break;
      v69 = *((unsigned int *)v102[1] + 3744);
      *((_DWORD *)v102[1] + 3744) = v69 + 1;
      v49[v69 + 1856] = v48;
LABEL_31:
      v31 += 4;
      if ( v32 == v31 )
        goto LABEL_67;
    }
    v50 = *((void ***)v102[0] + 66);
    v51 = &v50[8 * (unsigned __int64)*((unsigned int *)v102[0] + 134)];
    if ( v50 != v51 )
    {
      src.m128i_i64[0] = (__int64)p_dest;
      v52 = v3;
      v53 = v50;
      do
      {
        while ( 1 )
        {
          v51 -= 8;
          v54 = (void **)v51[3];
          if ( v54 == v51 + 5 )
            break;
          operator delete(v54);
          if ( v53 == v51 )
            goto LABEL_58;
        }
      }
      while ( v53 != v51 );
LABEL_58:
      v3 = v52;
      v51 = (void **)v48[66];
      p_dest = (signed __int64 *)src.m128i_i64[0];
    }
    if ( v51 != v48 + 68 )
      free(v51);
    v55 = (void **)v48[52];
    v56 = v48 + 52;
    if ( v55 != v48 + 54 )
      free(v55);
    src.m128i_i64[0] = (__int64)(v48 + 12);
    do
    {
      while ( 1 )
      {
        v56 -= 4;
        if ( *v56 == v56 + 2 )
          break;
        operator delete(*v56);
        if ( v56 == (void **)src.m128i_i64[0] )
          goto LABEL_66;
      }
    }
    while ( v56 != (void **)src.m128i_i64[0] );
LABEL_66:
    v31 += 4;
    operator delete(v48, 0x3A0u);
  }
  while ( v32 != v31 );
LABEL_67:
  v57 = (void **)v99;
  v32 = v98;
  if ( v99 != v98 )
  {
    do
    {
      while ( *v32 != v32 + 2 )
      {
        operator delete(*v32);
        v32 += 4;
        if ( v57 == v32 )
        {
          v32 = v98;
          goto LABEL_71;
        }
      }
      v32 += 4;
    }
    while ( v57 != v32 );
    v32 = v98;
  }
LABEL_71:
  if ( v32 )
    operator delete(v32);
  v102[0] = (void *)0x37F00000273LL;
  v102[1] = (void *)0x5040000037ELL;
  *(_QWORD *)&v103 = 0x3580000064FLL;
  *((_QWORD *)&v103 + 1) = 0x6A30000049DLL;
  v104 = (void *)0x6A20000053BLL;
  v105 = 1827;
  v106 = 1418;
  v107 = 1866;
  v108 = 1865;
  v109 = 1903;
  v110 = 1454;
  return sub_21B6650(v94, src.m128i_i64[1], v3, 16);
}
