__int64 __fastcall sub_114EAE0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rsi
  void (__fastcall *v7)(__int128 *, __int64, __m128i *, unsigned int *); // r8
  __int64 result; // rax
  _BYTE *v9; // r12
  __int64 v10; // rbp
  __int64 v11; // rax
  unsigned __int64 v12; // rdx
  _DWORD *v13; // r14
  size_t v14; // rbx
  unsigned __int64 v15; // rax
  __int64 v16; // rdx
  volatile signed __int32 *v17; // rbx
  char *v18; // rsi
  int v19; // eax
  volatile signed __int32 *v20; // rbx
  int v21; // eax
  size_t v22; // r8
  size_t v23; // r8
  size_t v24; // rax
  __int64 v25; // r8
  size_t v26; // rax
  size_t v27; // r14
  size_t v28; // r14
  size_t v29; // r14
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rdx
  __int64 v33; // rax
  unsigned int v34; // eax
  size_t v35; // r12
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  unsigned int v40; // r14d
  __int64 *v41; // rbp
  __int64 v42; // rax
  __int64 v43; // rcx
  __m128i *v44; // rax
  __int64 v45; // rax
  unsigned int v46; // eax
  unsigned __int32 v47; // ebx
  __int64 v48; // rax
  __int64 v49; // rbp
  __int64 v50; // rax
  void *v51; // r14
  __int64 v52; // rbx
  __int64 v53; // rdx
  void *v54; // rdi
  void *v55; // rdi
  char *s1; // [rsp+8h] [rbp-140h]
  void *s1a; // [rsp+8h] [rbp-140h]
  void *s1b; // [rsp+8h] [rbp-140h]
  size_t v59; // [rsp+10h] [rbp-138h]
  size_t v60; // [rsp+10h] [rbp-138h]
  size_t v61; // [rsp+10h] [rbp-138h]
  __int64 v62; // [rsp+10h] [rbp-138h]
  __int64 *v63; // [rsp+38h] [rbp-110h] BYREF
  unsigned int v64; // [rsp+40h] [rbp-108h] BYREF
  __int64 v65; // [rsp+48h] [rbp-100h]
  __int128 v66; // [rsp+50h] [rbp-F8h] BYREF
  void *ptr; // [rsp+60h] [rbp-E8h] BYREF
  __m128i si128; // [rsp+68h] [rbp-E0h]
  char v69; // [rsp+78h] [rbp-D0h] BYREF
  __m128i v70[3]; // [rsp+80h] [rbp-C8h] BYREF
  __m128i v71; // [rsp+B0h] [rbp-98h] BYREF
  __m128i v72; // [rsp+C0h] [rbp-88h] BYREF
  __int16 v73; // [rsp+D0h] [rbp-78h]
  __m128i v74; // [rsp+E0h] [rbp-68h] BYREF
  void *v75; // [rsp+F0h] [rbp-58h] BYREF
  __int64 v76; // [rsp+F8h] [rbp-50h]
  __m128i v77[4]; // [rsp+100h] [rbp-48h] BYREF

  v64 = 0;
  v65 = std::_V2::system_category((std::_V2 *)a1);
  v6 = *(_QWORD *)(*(_QWORD *)a1 + 8LL);
  v7 = *(void (__fastcall **)(__int128 *, __int64, __m128i *, unsigned int *))(*(_QWORD *)v6 + 64LL);
  v74.m128i_i64[0] = a2;
  v77[0].m128i_i16[0] = 261;
  v74.m128i_i64[1] = a3;
  v7(&v66, v6, &v74, &v64);
  while ( 1 )
  {
    result = v64;
    if ( v64 )
      break;
    result = v66;
    if ( !(_QWORD)v66 )
      break;
    v9 = *(_BYTE **)(v66 + 8);
    v10 = *(_QWORD *)(v66 + 16);
    v11 = sub_2266D20(v9, v10, 0);
    v13 = (_DWORD *)v11;
    if ( v12 <= 2 )
      goto LABEL_6;
    v14 = v12 - 3;
    s1 = (char *)v11;
    v15 = v11 + v12 - 3;
    if ( *(_WORD *)v15 != 25134 || *(_BYTE *)(v15 + 2) != 99 )
      goto LABEL_6;
    if ( v12 > 9
      && (v18 = (char *)v13 + v12 - 10, *(_QWORD *)v18 == 0x2E6E6367646D612ELL)
      && *((_WORD *)v18 + 4) == 25442 )
    {
      v14 = v12 - 10;
      if ( v12 <= v12 - 10 )
        v14 = v12;
    }
    else
    {
      if ( *(_WORD *)v15 != 25134 || *(_BYTE *)(v15 + 2) != 99 )
      {
        if ( !j__strlen("ockl") )
          goto LABEL_67;
        if ( !j__strlen("opencl") )
          goto LABEL_38;
        if ( !j__strlen("asanrtl") )
        {
LABEL_84:
          *(_QWORD *)(a1 + 488) = 0;
          sub_9FC110((_QWORD *)(a1 + 480), v9, &v9[v10]);
          goto LABEL_6;
        }
        s1 = nullptr;
        v14 = 0;
        goto LABEL_21;
      }
      if ( v12 <= v14 )
        v14 = v12;
    }
    if ( v14 == 4 )
    {
      if ( *v13 == 1819108207 )
      {
        *(_QWORD *)(a1 + 416) = 0;
        sub_9FC110((_QWORD *)(a1 + 408), v9, &v9[v10]);
        goto LABEL_6;
      }
      if ( j__strlen("ockl") != 4 )
      {
        v22 = j__strlen("opencl");
        if ( v22 != 4 )
        {
          v14 = j__strlen("asanrtl");
          if ( v14 == 4 )
            goto LABEL_47;
          v25 = 4;
LABEL_73:
          v61 = v25;
          v26 = j__strlen("oclc_finite_only_off");
          v23 = v61;
          if ( v61 == v26 )
            goto LABEL_54;
          v14 = v61;
          goto LABEL_75;
        }
LABEL_71:
        v60 = v22;
        if ( !memcmp(v13, "opencl", v22) )
        {
LABEL_38:
          *(_QWORD *)(a1 + 464) = 0;
          sub_9FC110((_QWORD *)(a1 + 456), v9, &v9[v10]);
          goto LABEL_6;
        }
        v24 = j__strlen("asanrtl");
        v25 = v60;
        v14 = v24;
        if ( v60 == v24 )
          goto LABEL_47;
        goto LABEL_73;
      }
      goto LABEL_62;
    }
    if ( j__strlen("ockl") == v14 )
    {
      if ( !v14 )
        goto LABEL_67;
LABEL_62:
      if ( !memcmp(v13, "ockl", v14) )
      {
LABEL_67:
        *(_QWORD *)(a1 + 440) = 0;
        sub_9FC110((_QWORD *)(a1 + 432), v9, &v9[v10]);
        goto LABEL_6;
      }
      v22 = j__strlen("opencl");
      if ( v14 == v22 )
        goto LABEL_71;
      if ( v14 == j__strlen("asanrtl") )
        goto LABEL_47;
      goto LABEL_21;
    }
    if ( j__strlen("opencl") == v14 )
    {
      if ( !v14 )
        goto LABEL_38;
      v22 = v14;
      goto LABEL_71;
    }
    if ( j__strlen("asanrtl") == v14 )
    {
      if ( !v14 )
        goto LABEL_84;
LABEL_47:
      if ( !memcmp(v13, "asanrtl", v14) )
        goto LABEL_84;
      v23 = j__strlen("oclc_finite_only_off");
      if ( v14 != v23 )
      {
        if ( j__strlen("oclc_finite_only_on") != v14 )
          goto LABEL_50;
        goto LABEL_85;
      }
LABEL_54:
      v59 = v23;
      if ( !memcmp(s1, "oclc_finite_only_off", v23) )
      {
LABEL_23:
        *(_QWORD *)(a1 + 584) = 0;
        sub_9FC110((_QWORD *)(a1 + 576), v9, &v9[v10]);
        goto LABEL_6;
      }
      v14 = j__strlen("oclc_finite_only_on");
      if ( v59 != v14 )
      {
        v14 = v59;
        if ( v59 != j__strlen("oclc_daz_opt_on") )
        {
LABEL_57:
          if ( j__strlen("oclc_daz_opt_off") != v14 )
            goto LABEL_88;
          if ( !v14 )
            goto LABEL_59;
          goto LABEL_109;
        }
        goto LABEL_92;
      }
      goto LABEL_85;
    }
LABEL_21:
    if ( j__strlen("oclc_finite_only_off") == v14 )
    {
      if ( !v14 )
        goto LABEL_23;
      v23 = v14;
      goto LABEL_54;
    }
LABEL_75:
    if ( j__strlen("oclc_finite_only_on") != v14 )
    {
LABEL_50:
      if ( j__strlen("oclc_daz_opt_on") != v14 )
        goto LABEL_57;
      if ( !v14 )
        goto LABEL_52;
LABEL_92:
      v27 = v14;
LABEL_93:
      if ( !memcmp(s1, "oclc_daz_opt_on", v27) )
      {
LABEL_52:
        *(_QWORD *)(a1 + 656) = 0;
        sub_9FC110((_QWORD *)(a1 + 648), v9, &v9[v10]);
        goto LABEL_6;
      }
      v14 = j__strlen("oclc_daz_opt_off");
      if ( v27 != v14 )
      {
        v14 = v27;
        if ( v27 != j__strlen("oclc_correctly_rounded_sqrt_on") )
        {
LABEL_123:
          if ( j__strlen("oclc_correctly_rounded_sqrt_off") == v14 )
          {
            if ( !v14 )
            {
LABEL_125:
              *(_QWORD *)(a1 + 728) = 0;
              sub_9FC110((_QWORD *)(a1 + 720), v9, &v9[v10]);
              goto LABEL_6;
            }
LABEL_112:
            if ( !memcmp(s1, "oclc_correctly_rounded_sqrt_off", v14) )
              goto LABEL_125;
            v29 = j__strlen("oclc_unsafe_math_on");
            if ( v14 == v29 )
              goto LABEL_101;
            if ( v14 == j__strlen("oclc_unsafe_math_off") )
              goto LABEL_115;
            goto LABEL_132;
          }
          goto LABEL_126;
        }
        goto LABEL_96;
      }
      goto LABEL_109;
    }
    if ( !v14 )
      goto LABEL_77;
LABEL_85:
    if ( !memcmp(s1, "oclc_finite_only_on", v14) )
    {
LABEL_77:
      *(_QWORD *)(a1 + 560) = 0;
      sub_9FC110((_QWORD *)(a1 + 552), v9, &v9[v10]);
      goto LABEL_6;
    }
    v27 = j__strlen("oclc_daz_opt_on");
    if ( v14 == v27 )
      goto LABEL_93;
    if ( j__strlen("oclc_daz_opt_off") != v14 )
    {
LABEL_88:
      if ( j__strlen("oclc_correctly_rounded_sqrt_on") != v14 )
        goto LABEL_123;
      if ( !v14 )
        goto LABEL_90;
LABEL_96:
      v28 = v14;
      goto LABEL_97;
    }
LABEL_109:
    if ( !memcmp(s1, "oclc_daz_opt_off", v14) )
    {
LABEL_59:
      *(_QWORD *)(a1 + 680) = 0;
      sub_9FC110((_QWORD *)(a1 + 672), v9, &v9[v10]);
      goto LABEL_6;
    }
    v28 = j__strlen("oclc_correctly_rounded_sqrt_on");
    if ( v14 != v28 )
    {
      if ( v14 == j__strlen("oclc_correctly_rounded_sqrt_off") )
        goto LABEL_112;
LABEL_126:
      if ( j__strlen("oclc_unsafe_math_on") == v14 )
      {
        if ( !v14 )
        {
LABEL_131:
          *(_QWORD *)(a1 + 608) = 0;
          sub_9FC110((_QWORD *)(a1 + 600), v9, &v9[v10]);
          goto LABEL_6;
        }
LABEL_100:
        v29 = v14;
LABEL_101:
        if ( !memcmp(s1, "oclc_unsafe_math_on", v29) )
          goto LABEL_131;
        if ( j__strlen("oclc_unsafe_math_off") == v29 )
        {
LABEL_116:
          if ( !memcmp(s1, "oclc_unsafe_math_off", v29) )
            goto LABEL_129;
          if ( j__strlen("oclc_wavefrontsize64_on") == v29 )
            goto LABEL_105;
        }
        else
        {
          v14 = v29;
          if ( v29 == j__strlen("oclc_wavefrontsize64_on") )
            goto LABEL_104;
        }
        v14 = v29;
        goto LABEL_119;
      }
      goto LABEL_127;
    }
LABEL_97:
    if ( !memcmp(s1, "oclc_correctly_rounded_sqrt_on", v28) )
    {
LABEL_90:
      *(_QWORD *)(a1 + 704) = 0;
      sub_9FC110((_QWORD *)(a1 + 696), v9, &v9[v10]);
      goto LABEL_6;
    }
    v14 = j__strlen("oclc_correctly_rounded_sqrt_off");
    if ( v28 == v14 )
      goto LABEL_112;
    v14 = v28;
    if ( v28 == j__strlen("oclc_unsafe_math_on") )
      goto LABEL_100;
LABEL_127:
    if ( j__strlen("oclc_unsafe_math_off") == v14 )
    {
      if ( !v14 )
      {
LABEL_129:
        *(_QWORD *)(a1 + 632) = 0;
        sub_9FC110((_QWORD *)(a1 + 624), v9, &v9[v10]);
        goto LABEL_6;
      }
LABEL_115:
      v29 = v14;
      goto LABEL_116;
    }
LABEL_132:
    if ( j__strlen("oclc_wavefrontsize64_on") == v14 )
    {
      if ( !v14 )
      {
LABEL_134:
        *(_QWORD *)(a1 + 512) = 0;
        sub_9FC110((_QWORD *)(a1 + 504), v9, &v9[v10]);
        goto LABEL_6;
      }
LABEL_104:
      v29 = v14;
LABEL_105:
      if ( !memcmp(s1, "oclc_wavefrontsize64_on", v29) )
        goto LABEL_134;
      v14 = v29;
      if ( j__strlen("oclc_wavefrontsize64_off") == v29 )
        goto LABEL_107;
      goto LABEL_135;
    }
LABEL_119:
    if ( j__strlen("oclc_wavefrontsize64_off") == v14 )
    {
      if ( !v14 )
      {
LABEL_108:
        *(_QWORD *)(a1 + 536) = 0;
        sub_9FC110((_QWORD *)(a1 + 528), v9, &v9[v10]);
        goto LABEL_6;
      }
LABEL_107:
      if ( !memcmp(s1, "oclc_wavefrontsize64_off", v14) )
        goto LABEL_108;
    }
LABEL_135:
    if ( v14 > 0x10 )
    {
      if ( !(*(_QWORD *)s1 ^ 0x6962615F636C636FLL | *((_QWORD *)s1 + 1) ^ 0x6E6F69737265765FLL) && s1[16] == 95 )
      {
        if ( !(unsigned __int8)sub_2223C30(s1 + 17, v14 - 17, 0, &v74) )
        {
          v47 = v74.m128i_i32[0];
          if ( v74.m128i_i64[0] == v74.m128i_u32[0] )
          {
            if ( v9 )
            {
              v74.m128i_i64[0] = (__int64)&v75;
              sub_1148360(&v74, v9, (__int64)&v9[v10]);
            }
            else
            {
              LOBYTE(v75) = 0;
              v74.m128i_i64[1] = 0;
              v74.m128i_i64[0] = (__int64)&v75;
            }
            v48 = *(_QWORD *)(a1 + 760);
            v49 = a1 + 752;
            if ( !v48 )
              goto LABEL_173;
            do
            {
              if ( v47 <= *(_DWORD *)(v48 + 32) )
              {
                v49 = v48;
                v48 = *(_QWORD *)(v48 + 16);
              }
              else
              {
                v48 = *(_QWORD *)(v48 + 24);
              }
            }
            while ( v48 );
            if ( v49 == a1 + 752 || v47 < *(_DWORD *)(v49 + 32) )
            {
LABEL_173:
              s1b = (void *)v49;
              v50 = operator new(0x48u);
              v51 = (void *)(v50 + 56);
              *(_DWORD *)(v50 + 32) = v47;
              v49 = v50;
              *(_QWORD *)(v50 + 40) = v50 + 56;
              *(_QWORD *)(v50 + 48) = 0;
              *(_BYTE *)(v50 + 56) = 0;
              v52 = sub_114E9C0((_QWORD *)(a1 + 744), (__int64)s1b, (unsigned int *)(v50 + 32));
              if ( v53 )
              {
                std::_Rb_tree_insert_and_rebalance();
                ++*(_QWORD *)(a1 + 784);
              }
              else
              {
                v54 = *(void **)(v49 + 40);
                if ( v51 != v54 )
                  operator delete(v54);
                v55 = (void *)v49;
                v49 = v52;
                operator delete(v55);
              }
            }
            sub_9E6D90(v49 + 40, &v74);
            if ( (void **)v74.m128i_i64[0] != &v75 )
              operator delete((void *)v74.m128i_i64[0]);
          }
        }
        goto LABEL_6;
      }
      if ( !(*(_QWORD *)s1 ^ 0x6173695F636C636FLL | *((_QWORD *)s1 + 1) ^ 0x6E6F69737265765FLL) && s1[16] == 95 )
      {
        v74.m128i_i64[1] = v14 - 17;
        v74.m128i_i64[0] = (__int64)(s1 + 17);
        v71.m128i_i64[0] = (__int64)"gfx";
        v77[0].m128i_i16[0] = 261;
        v73 = 259;
        sub_A1D840(v70, &v71, &v74, (__int64)s1, v30, v31);
        ptr = &v69;
        si128 = _mm_load_si128((const __m128i *)&xmmword_2384E70);
        if ( v9 )
        {
          v71.m128i_i64[0] = (__int64)&v72;
          sub_1148360(&v71, v9, (__int64)&v9[v10]);
        }
        else
        {
          v72.m128i_i8[0] = 0;
          v71.m128i_i64[0] = (__int64)&v72;
          v71.m128i_i64[1] = 0;
        }
        v74.m128i_i64[0] = (__int64)sub_1148680((const char **)v70, (__int64)&ptr);
        v74.m128i_i64[1] = v32;
        v75 = v77;
        if ( (__m128i *)v71.m128i_i64[0] == &v72 )
        {
          v77[0] = _mm_load_si128(&v72);
        }
        else
        {
          v75 = (void *)v71.m128i_i64[0];
          v77[0].m128i_i64[0] = v72.m128i_i64[0];
        }
        v33 = v71.m128i_i64[1];
        v71.m128i_i64[1] = 0;
        v72.m128i_i8[0] = 0;
        v76 = v33;
        v71.m128i_i64[0] = (__int64)&v72;
        v34 = sub_2220DF0(v74.m128i_i64[0], v74.m128i_i64[1]);
        v35 = v74.m128i_u64[1];
        s1a = (void *)v74.m128i_i64[0];
        v36 = (unsigned int)sub_2220F70(a1 + 384, v74.m128i_i64[0], v74.m128i_i64[1], v34);
        v40 = v36;
        v41 = (__int64 *)(*(_QWORD *)(a1 + 384) + 8 * v36);
        if ( *v41 )
        {
          if ( *v41 != -8 )
          {
            sub_114EAA0(&v63, v41, 0);
LABEL_147:
            if ( v75 != v77 )
              operator delete(v75);
            if ( (__m128i *)v71.m128i_i64[0] != &v72 )
              operator delete((void *)v71.m128i_i64[0]);
            if ( ptr != &v69 )
              free(ptr);
            goto LABEL_6;
          }
          --*(_DWORD *)(a1 + 400);
        }
        v42 = sub_220C370(v35 + 41, 8, v36, v37, v38, v39);
        v43 = v42;
        if ( v35 )
        {
          v62 = v42;
          memcpy((void *)(v42 + 40), s1a, v35);
          v43 = v62;
        }
        *(_BYTE *)(v43 + v35 + 40) = 0;
        *(_QWORD *)(v43 + 8) = v43 + 24;
        v44 = (__m128i *)v75;
        *(_QWORD *)v43 = v35;
        if ( v44 == v77 )
        {
          *(__m128i *)(v43 + 24) = _mm_load_si128(v77);
        }
        else
        {
          *(_QWORD *)(v43 + 8) = v44;
          *(_QWORD *)(v43 + 24) = v77[0].m128i_i64[0];
        }
        v45 = v76;
        v77[0].m128i_i8[0] = 0;
        v76 = 0;
        *(_QWORD *)(v43 + 16) = v45;
        v75 = v77;
        *v41 = v43;
        ++*(_DWORD *)(a1 + 396);
        v46 = sub_2221390(a1 + 384, v40);
        sub_114EAA0(&v63, (__int64 *)(*(_QWORD *)(a1 + 384) + 8LL * v46), 0);
        goto LABEL_147;
      }
    }
LABEL_6:
    v64 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v66 + 16LL))(v66);
    v65 = v16;
    if ( !*(_QWORD *)(v66 + 16) )
    {
      v17 = *((volatile signed __int32 **)&v66 + 1);
      v66 = 0;
      if ( v17 )
      {
        if ( &_pthread_key_create )
        {
          if ( !_InterlockedSub(v17 + 2, 1u) )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 16LL))(v17);
            if ( !&_pthread_key_create )
              goto LABEL_31;
LABEL_11:
            if ( !_InterlockedSub(v17 + 3, 1u) )
              goto LABEL_12;
          }
        }
        else
        {
          v19 = *((_DWORD *)v17 + 2);
          *((_DWORD *)v17 + 2) = v19 - 1;
          if ( v19 == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 16LL))(v17);
            if ( &_pthread_key_create )
              goto LABEL_11;
LABEL_31:
            v21 = *((_DWORD *)v17 + 3);
            *((_DWORD *)v17 + 3) = v21 - 1;
            if ( v21 == 1 )
LABEL_12:
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 24LL))(v17);
          }
        }
      }
    }
  }
  v20 = *((volatile signed __int32 **)&v66 + 1);
  if ( !*((_QWORD *)&v66 + 1) )
    return result;
  if ( &_pthread_key_create )
  {
    result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v66 + 1) + 8LL), 0xFFFFFFFF);
    if ( (_DWORD)result != 1 )
      return result;
LABEL_34:
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 16LL))(v20);
    if ( &_pthread_key_create )
    {
      result = (unsigned int)_InterlockedExchangeAdd(v20 + 3, 0xFFFFFFFF);
    }
    else
    {
      result = *((unsigned int *)v20 + 3);
      *((_DWORD *)v20 + 3) = result - 1;
    }
    if ( (_DWORD)result == 1 )
      return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 24LL))(v20);
  }
  else
  {
    result = *(unsigned int *)(*((_QWORD *)&v66 + 1) + 8LL);
    *(_DWORD *)(*((_QWORD *)&v66 + 1) + 8LL) = result - 1;
    if ( (_DWORD)result == 1 )
      goto LABEL_34;
  }
  return result;
}

