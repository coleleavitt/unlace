__int64 __fastcall sub_11EAE40(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 *a5,
        char a6,
        unsigned int a7,
        int a8,
        int a9)
{
  __int64 v13; // r14
  char v14; // al
  __int64 v15; // rax
  __int64 v16; // rsi
  __int64 v17; // rax
  __int64 v18; // rax
  unsigned __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // r13
  __int64 *v22; // r15
  __int64 v23; // rbx
  __m256i *p_ptr; // rbp
  __int64 v25; // rsi
  __int64 v26; // r15
  __int64 v27; // rax
  __int64 v28; // r13
  __int64 result; // rax
  __int64 v30; // rdx
  __m128 v31; // xmm0
  __int64 *v32; // r15
  __int64 v33; // rbp
  __int64 *v34; // r13
  __int64 v35; // rax
  __int64 v36; // r14
  __m256i *v37; // r12
  __int64 v38; // rsi
  __int64 v39; // r15
  __int64 v40; // rdi
  unsigned __int64 v41; // rax
  char *v42; // r13
  char *v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // rax
  void *v48; // rdi
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r9
  _BYTE *v52; // rax
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // r13
  const char **v56; // rax
  const char *v57; // r13
  __int64 v58; // rax
  __int64 v59; // rdx
  __int64 v60; // rax
  unsigned __int8 *v61; // rax
  __int64 v62; // rdi
  __int64 v63; // r15
  __int64 v64; // rax
  size_t v65; // rdx
  size_t v66; // r13
  const void *v67; // r15
  __int64 v68; // rdi
  __int64 v69; // rax
  _BYTE *v70; // rax
  __int64 v71; // rdx
  __int64 v72; // rdi
  __int64 v73; // rax
  __int64 v74; // rax
  char *v75; // rdx
  char *v76; // r13
  __int64 v77; // r8
  const __m128i *v78; // r9
  __int64 v79; // rax
  const char *v80; // rax
  __int64 v81; // r9
  __int64 v82; // r8
  size_t v83; // rax
  unsigned __int8 *v84; // rax
  int v85; // eax
  __m128i *v87; // [rsp+8h] [rbp-1D0h] BYREF
  __int64 v88; // [rsp+10h] [rbp-1C8h]
  __m128i *v89; // [rsp+18h] [rbp-1C0h]
  __int64 *v90; // [rsp+20h] [rbp-1B8h]
  __m128i *v91; // [rsp+28h] [rbp-1B0h]
  __int64 v92; // [rsp+30h] [rbp-1A8h]
  __int64 *v93; // [rsp+38h] [rbp-1A0h]
  _QWORD v94[4]; // [rsp+40h] [rbp-198h] BYREF
  __int16 v95; // [rsp+60h] [rbp-178h]
  __m128i v96[2]; // [rsp+70h] [rbp-168h] BYREF
  __int16 v97; // [rsp+90h] [rbp-148h]
  __m128i v98[2]; // [rsp+A0h] [rbp-138h] BYREF
  __int16 v99; // [rsp+C0h] [rbp-118h]
  __m128i v100; // [rsp+D0h] [rbp-108h] BYREF
  _BYTE v101[16]; // [rsp+E0h] [rbp-F8h] BYREF
  __int16 v102; // [rsp+F0h] [rbp-E8h]
  __m256i ptr; // [rsp+100h] [rbp-D8h] BYREF
  __int16 v104; // [rsp+120h] [rbp-B8h]

  v92 = a2;
  LODWORD(v88) = a9;
  v13 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL);
  v90 = *(__int64 **)(a1 + 24);
  *(_OWORD *)ptr.m256i_i8 = 0x64u;
  if ( ((unsigned __int8)sub_A09E20(&a7, (unsigned int *)&ptr) != 1 || a6) && !sub_10DCD30(a3, 0xDBFu) )
    sub_10DC5D0(a4, (__int64)"-demangle");
  if ( sub_10DCD30(a3, 0xC83u) )
  {
    *(_OWORD *)ptr.m256i_i8 = 0x89u;
    if ( !(unsigned __int8)sub_A09E20(&a7, (unsigned int *)&ptr) || a6 )
      sub_10DC5D0(a4, (__int64)"-export_dynamic");
  }
  if ( (unsigned __int8)sub_21B7850(a3, 431, 1019, 0) )
    sub_10DC5D0(a4, (__int64)"-application_extension");
  if ( *(_DWORD *)(v13 + 40) )
  {
    LODWORD(v87) = *(_DWORD *)(v13 + 40);
    *(_OWORD *)ptr.m256i_i8 = 0x74u;
    if ( (unsigned __int8)sub_A09E20(&a7, (unsigned int *)&ptr) != 1 || a6 )
    {
      v58 = *a5;
      v59 = *a5 + 40LL * *((unsigned int *)a5 + 2);
      if ( v59 != *a5 )
      {
        if ( *(_DWORD *)(v58 + 24) == 58 )
        {
          v60 = v58 + 40;
          while ( v59 != v60 )
          {
            v60 += 40;
            if ( *(_DWORD *)(v60 - 16) != 58 )
              goto LABEL_98;
          }
        }
        else
        {
LABEL_98:
          v101[0] = 0;
          v100.m128i_i64[1] = 0;
          v100.m128i_i64[0] = (__int64)v101;
          if ( (_DWORD)v87 == 1 )
          {
            v80 = (const char *)sub_12CC940(58, 0);
            v81 = 0;
            v82 = (__int64)v80;
            if ( v80 )
            {
              v87 = (__m128i *)v80;
              v83 = j__strlen(v80);
              v82 = (__int64)v87;
              v81 = v83;
            }
            v89 = (__m128i *)v82;
            v87 = (__m128i *)v81;
            v84 = (unsigned __int8 *)j__strlen("cc");
            sub_10DB4E0(&ptr, (__int64 *)v13, (unsigned __int8 *)"cc", v84, (__int64)v89, (__int64)v87);
          }
          else
          {
            if ( (_DWORD)v87 != 2 )
              goto LABEL_9;
            v61 = (unsigned __int8 *)j__strlen("thinlto");
            sub_10DB630(&ptr, (__int64 *)v13, (unsigned __int8 *)"thinlto", v61);
          }
          sub_A0AAD0((__int64)&v100, &ptr);
          if ( (unsigned __int64 *)ptr.m256i_i64[0] != &ptr.m256i_u64[2] )
            operator delete((void *)ptr.m256i_i64[0]);
          if ( v100.m128i_i64[1] )
          {
            ptr.m256i_i64[0] = (__int64)&v100;
            v62 = *(_QWORD *)(v92 + 80);
            v104 = 260;
            v87 = (__m128i *)sub_10DA6C0(v62, (__int64)&ptr);
            sub_10DC5D0(v92 + 248, (__int64)v87);
            sub_10DC5D0(a4, (__int64)"-object_path_lto");
            sub_10DC5D0(a4, (__int64)v87);
          }
          if ( (_BYTE *)v100.m128i_i64[0] != v101 )
            operator delete((void *)v100.m128i_i64[0]);
        }
      }
    }
  }
LABEL_9:
  *(_OWORD *)ptr.m256i_i8 = 0x85u;
  v14 = sub_A09E20(&a7, (unsigned int *)&ptr);
  if ( !a6 && !v14 )
  {
    v70 = (_BYTE *)sub_228A4B0(*(_QWORD *)(v13 + 104), *(_QWORD *)(v13 + 112), 0);
    v93 = &ptr.m256i_i64[3];
    *(__m128i *)&ptr.m256i_u64[1] = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
    ptr.m256i_i64[0] = (__int64)&ptr.m256i_i64[3];
    sub_A1FE50(&ptr, v70, &v70[v71]);
    v99 = 257;
    v94[0] = "lib";
    v97 = 257;
    v95 = 259;
    v102 = 257;
    v91 = v98;
    v89 = v96;
    v87 = (__m128i *)v94;
    sub_228A3B0(&ptr, v94, v96, v98, &v100);
    v102 = 257;
    v99 = 257;
    v97 = 257;
    v94[0] = "libLTO.dylib";
    v95 = 259;
    sub_228A3B0(&ptr, v94, v96, v98, &v100);
    sub_10DC5D0(a4, (__int64)"-lto_library");
    v72 = *(_QWORD *)(v92 + 80);
    v102 = 261;
    v100 = *(__m128i *)ptr.m256i_i8;
    v73 = sub_10DA6C0(v72, (__int64)&v100);
    sub_10DC5D0(a4, v73);
    if ( (unsigned __int64 *)ptr.m256i_i64[0] != &ptr.m256i_u64[3] )
      free((void *)ptr.m256i_i64[0]);
  }
  *(_OWORD *)ptr.m256i_i8 = 0x106u;
  if ( !(unsigned __int8)sub_A09E20(&a7, (unsigned int *)&ptr) )
  {
    LODWORD(v87) = *(_DWORD *)(v92 + 160);
    v54 = sub_10DCD30(a3, 0xAu);
    v55 = v54;
    if ( v54 )
    {
      if ( !(unsigned __int8)sub_21B9810(v54, 3060) )
      {
        if ( !(unsigned __int8)sub_21B9810(v55, 3114) )
          goto LABEL_12;
        v56 = *(const char ***)(v55 + 48);
        v57 = *v56;
        if ( !*v56 || j__strlen(*v56) != 1 || *v57 != 49 )
          goto LABEL_12;
      }
    }
    else if ( !(_DWORD)v87 )
    {
      goto LABEL_12;
    }
    sub_10DC5D0(a4, (__int64)"-no_deduplicate");
  }
LABEL_12:
  sub_21B7F70(a3, a4, 3299);
  if ( !sub_10DCD30(a3, 0xCE3u) )
    sub_10DC5D0(a4, (__int64)"-dynamic");
  sub_10DCD30(a3, 0x32Eu);
  if ( sub_10DCD30(a3, 0x142u) )
  {
    sub_10DC5D0(a4, (__int64)"-dylib");
    v15 = sub_10DCD30(a3, 0xA4u);
    if ( v15
      || (v15 = sub_10DCD30(a3, 0xA3u)) != 0
      || (v15 = sub_10DCD30(a3, 0xCDu)) != 0
      || (v15 = sub_10DCD30(a3, 0x627u)) != 0
      || (v15 = sub_10DCD30(a3, 0x885u)) != 0
      || (v15 = sub_10DCD30(a3, 0xC66u)) != 0 )
    {
      v16 = *(_QWORD *)v13;
      v87 = (__m128i *)v15;
      sub_FC70B0((__int64)&ptr, v16, 0, 323);
      sub_21B5FF0(&v100, v87, a3);
      sub_AEC220((unsigned __int8 **)&ptr, v100.m128i_i64[0], v100.m128i_i64[1]);
      sub_AE9DF0((unsigned __int8 **)&ptr, (__int64)"-dynamiclib", 1u);
      if ( (_BYTE *)v100.m128i_i64[0] != v101 )
        operator delete((void *)v100.m128i_i64[0]);
      sub_AEA040((__int64)&ptr);
    }
    sub_21B7580(a3, a4, 216, "-dylib_compatibility_version", 0);
    sub_21B7580(a3, a4, 245, "-dylib_current_version", 0);
    sub_11E88F0(a1, a3, a4);
    sub_21B7580(a3, a4, 2160, "-dylib_install_name", 0);
  }
  else
  {
    sub_11E88F0(a1, a3, a4);
    sub_118FCD0(a3, a4, 0x626u);
    sub_118FCD0(a3, a4, 0xA4u);
    sub_21B7F70(a3, a4, 163);
    sub_21B7F70(a3, a4, 205);
    v63 = sub_10DCD30(a3, 0xD8u);
    if ( v63 || (v63 = sub_10DCD30(a3, 0xF5u)) != 0 || (v63 = sub_10DCD30(a3, 0x870u)) != 0 )
    {
      sub_FC70B0((__int64)&ptr, *(_QWORD *)v13, 0, 324);
      sub_21B5FF0(&v100, v63, a3);
      sub_AEC220((unsigned __int8 **)&ptr, v100.m128i_i64[0], v100.m128i_i64[1]);
      sub_AE9DF0((unsigned __int8 **)&ptr, (__int64)"-dynamiclib", 1u);
      if ( (_BYTE *)v100.m128i_i64[0] != v101 )
        operator delete((void *)v100.m128i_i64[0]);
      sub_AEA040((__int64)&ptr);
    }
    sub_118FCD0(a3, a4, 0x627u);
    sub_118FCD0(a3, a4, 0x885u);
    sub_118FCD0(a3, a4, 0xC66u);
  }
  v17 = sub_10DCD30(a3, 0x4Fu);
  if ( v17 )
    sub_21B5A40(v17, a3, a4);
  sub_21B7F70(a3, a4, 80);
  sub_118FCD0(a3, a4, 0x9Bu);
  sub_118FCD0(a3, a4, 0x108u);
  sub_118FCD0(a3, a4, 0xBD8u);
  sub_21B7F70(a3, a4, 318);
  sub_118FCD0(a3, a4, 0x143u);
  sub_21B7F70(a3, a4, 373);
  sub_118FCD0(a3, a4, 0x381u);
  sub_21B7F70(a3, a4, 1576);
  sub_21B7F70(a3, a4, 2102);
  sub_21B7F70(a3, a4, 2137);
  sub_21B7F70(a3, a4, 2158);
  *(_OWORD *)ptr.m256i_i8 = 0x208u;
  if ( !(unsigned __int8)sub_A09E20(&a7, (unsigned int *)&ptr) )
  {
    v18 = *v90;
LABEL_24:
    (*(void (__fastcall **)(__int64 *, __int64, __int64))(v18 + 800))(v90, a3, a4);
    goto LABEL_25;
  }
  v18 = *v90;
  if ( a6 || (_BYTE)v88 )
    goto LABEL_24;
  (*(void (__fastcall **)(__int64 *, __int64, __int64))(v18 + 792))(v90, a3, a4);
LABEL_25:
  sub_118FCD0(a3, a4, 0xBE6u);
  sub_118FCD0(a3, a4, 0xB6Cu);
  sub_118FCD0(a3, a4, 0xCC9u);
  sub_21B7F70(a3, a4, 2926);
  sub_21B7F70(a3, a4, 2925);
  *(__m128i *)ptr.m256i_i8 = _mm_load_si128((const __m128i *)&xmmword_23A9BE0);
  v19 = sub_21B6DA0(a3, &ptr, 4);
  v20 = *(_QWORD *)(a3 + 8);
  v21 = v20 + 8 * HIDWORD(v19);
  *(__m128i *)&ptr.m256i_u64[2] = _mm_load_si128((const __m128i *)&xmmword_23A9BE0);
  v87 = (__m128i *)v21;
  *(__m128 *)ptr.m256i_i8 = _mm_loadh_ps((const double *)&v87);
  if ( v20 + 8LL * (unsigned int)v19 != v21 )
  {
    v88 = a3;
    v22 = (__int64 *)(v20 + 8LL * (unsigned int)v19);
    v87 = (__m128i *)&ptr.m256i_u64[2];
    v89 = (__m128i *)a4;
    do
    {
      v23 = *v22;
      p_ptr = &ptr;
      if ( *v22 )
      {
        do
        {
          v25 = p_ptr->m256i_u32[4];
          if ( !(_DWORD)v25 )
            break;
          if ( (unsigned __int8)sub_21B9810(v23, v25) )
          {
            v30 = (__int64)v22;
            a3 = v88;
            a4 = (__int64)v89;
            v87 = (__m128i *)v21;
            v31 = _mm_loadh_ps((const double *)&v87);
            *(__m128i *)&ptr.m256i_u64[2] = _mm_load_si128((const __m128i *)&xmmword_23A9BE0);
            *(__m128 *)ptr.m256i_i8 = v31;
            if ( v22 != (__int64 *)v21 )
            {
              v87 = (__m128i *)v13;
              v32 = (__int64 *)v21;
              v91 = (__m128i *)&ptr.m256i_u64[2];
LABEL_49:
              v33 = *(_QWORD *)v30;
              v34 = (__int64 *)(v30 + 8);
              v35 = *(_QWORD *)(*(_QWORD *)v30 + 16LL);
              if ( !v35 )
                v35 = *(_QWORD *)v30;
              *(_BYTE *)(v35 + 44) |= 1u;
              for ( ptr.m256i_i64[0] = v30 + 8; v32 != v34; ptr.m256i_i64[0] = (__int64)v34 )
              {
                v36 = *v34;
                v37 = &ptr;
                if ( *v34 )
                {
                  do
                  {
                    v38 = v37->m256i_u32[4];
                    if ( !(_DWORD)v38 )
                      break;
                    if ( (unsigned __int8)sub_21B9810(v36, v38) )
                    {
                      v30 = ptr.m256i_i64[0];
                      if ( v32 != (__int64 *)ptr.m256i_i64[0] )
                        goto LABEL_49;
                      goto LABEL_57;
                    }
                    v37 = (__m256i *)((char *)v37 + 4);
                  }
                  while ( v37 != (__m256i *)v91 );
                }
                ++v34;
              }
LABEL_57:
              v39 = v33;
              v13 = (__int64)v87;
              v40 = v33;
              a4 = (__int64)v89;
              a3 = v88;
              if ( (unsigned __int8)sub_21B9810(v40, 1610) || (unsigned __int8)sub_21B9810(v39, 1609) )
                sub_10DC5D0(a4, (__int64)"-pie");
              else
                sub_10DC5D0(a4, (__int64)"-no_pie");
            }
            goto LABEL_33;
          }
          p_ptr = (__m256i *)((char *)p_ptr + 4);
        }
        while ( p_ptr != (__m256i *)v87 );
      }
      ptr.m256i_i64[0] = (__int64)++v22;
    }
    while ( (__int64 *)v21 != v22 );
    a3 = v88;
    a4 = (__int64)v89;
  }
LABEL_33:
  v26 = v92;
  if ( *(_DWORD *)(*(_QWORD *)v92 + 24LL) )
  {
    if ( (*(unsigned __int8 (__fastcall **)(__int64 *))(*v90 + 480))(v90) )
    {
      sub_10DC5D0(a4, (__int64)"-bitcode_bundle");
      if ( *(_DWORD *)(*(_QWORD *)v26 + 24LL) == 1 )
      {
        *(_OWORD *)ptr.m256i_i8 = 0x116u;
        if ( !(unsigned __int8)sub_A09E20(&a7, (unsigned int *)&ptr) )
        {
          sub_10DC5D0(a4, (__int64)"-bitcode_process_mode");
          sub_10DC5D0(a4, (__int64)"marker");
        }
      }
    }
    else
    {
      sub_FC70B0((__int64)&ptr, *(_QWORD *)v13, 0, 327);
      sub_AEA040((__int64)&ptr);
    }
  }
  v27 = sub_10DE660(a3, 0x32Bu, 0x482u);
  if ( v27 && (unsigned __int8)sub_21B9810(v27, 811) )
  {
    sub_10DC5D0(a4, (__int64)"-mllvm");
    sub_10DC5D0(a4, (__int64)"-global-isel");
    sub_10DC5D0(a4, (__int64)"-mllvm");
    sub_10DC5D0(a4, (__int64)"-global-isel-abort=0");
  }
  if ( sub_10DCD30(a3, 0x992u) || sub_10DCD30(a3, 0x1ACu) || sub_10DCD30(a3, 0x31Fu) )
  {
    sub_10DC5D0(a4, (__int64)"-mllvm");
    sub_10DC5D0(a4, (__int64)"-disable-atexit-based-global-dtor-lowering");
  }
  sub_118FCD0(a3, a4, 0xC43u);
  sub_118FCD0(a3, a4, 0xBE8u);
  sub_118FCD0(a3, a4, 0xBDFu);
  sub_118FCD0(a3, a4, 0xC42u);
  sub_118FCD0(a3, a4, 0xC84u);
  sub_21B7F70(a3, a4, 3244);
  sub_21B7F70(a3, a4, 3246);
  sub_21B7F70(a3, a4, 3247);
  sub_21B7F70(a3, a4, 3253);
  sub_21B7F70(a3, a4, 3250);
  sub_21B7F70(a3, a4, 3254);
  sub_21B7F70(a3, a4, 3255);
  sub_21B7F70(a3, a4, 3249);
  sub_21B7F70(a3, a4, 3248);
  sub_21B7F70(a3, a4, 3310);
  sub_21B7F70(a3, a4, 3311);
  v28 = sub_10DCD30(a3, 0xCF4u);
  if ( v28 || (v28 = sub_10DCD30(a3, 0x878u)) != 0 )
  {
    sub_10DC5D0(a4, (__int64)"-syslibroot");
    sub_10DC5D0(a4, **(_QWORD **)(v28 + 48));
  }
  else
  {
    v64 = sub_10D4C90(v92);
    v66 = v65;
    v67 = (const void *)v64;
    if ( j__strlen(&byte_22F0C30) != v65 || v66 && memcmp(v67, &byte_22F0C30, v66) )
    {
      sub_10DC5D0(a4, (__int64)"-syslibroot");
      v104 = 261;
      v68 = *(_QWORD *)(v92 + 80);
      ptr.m256i_i64[0] = (__int64)v67;
      ptr.m256i_i64[1] = v66;
      v69 = sub_10DA6C0(v68, (__int64)&ptr);
      sub_10DC5D0(a4, v69);
    }
  }
  sub_118FCD0(a3, a4, 0xD14u);
  sub_118FCD0(a3, a4, 0xD13u);
  sub_21B7F70(a3, a4, 3352);
  sub_21B7F70(a3, a4, 3355);
  sub_21B7F70(a3, a4, 3357);
  sub_21B7F70(a3, a4, 3423);
  sub_118FCD0(a3, a4, 0xDB4u);
  sub_21B7F70(a3, a4, 3516);
  sub_118FCD0(a3, a4, 0xD98u);
  sub_21B7F70(a3, a4, 3118);
  sub_21B7F70(a3, a4, 3256);
  sub_118FCD0(a3, a4, 0xCB4u);
  sub_118FCD0(a3, a4, 0xBEAu);
  sub_21B7F70(a3, a4, 3243);
  sub_21B7F70(a3, a4, 3245);
  sub_21B7F70(a3, a4, 3251);
  sub_118FCD0(a3, a4, 0xD66u);
  sub_118FCD0(a3, a4, 0xD65u);
  sub_21B7F70(a3, a4, 319);
  sub_118FCD0(a3, a4, 0x140u);
  result = sub_118FCD0(a3, a4, 0x8B1u);
  if ( a6 )
  {
    v41 = sub_11BB1D0(a3);
    if ( v41 )
    {
      if ( *(_DWORD *)(v41 + 56) )
      {
        v43 = nullptr;
        v42 = **(char ***)(v41 + 48);
        if ( !v42 )
        {
LABEL_78:
          ptr.m256i_i64[0] = (__int64)&ptr.m256i_i64[3];
          *(__m128i *)&ptr.m256i_u64[1] = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
          sub_A1FE50(&ptr, v42, v43);
          v99 = 257;
          v97 = 257;
          v94[0] = "default_%m.profraw";
          v102 = 257;
          v95 = 259;
          sub_228A3B0(&ptr, v94, v96, v98, &v100);
          sub_10DC5D0(a4, (__int64)"--cs-profile-generate");
          v99 = 261;
          v96[0].m128i_i64[0] = (__int64)"--cs-profile-path=";
          v98[0] = *(__m128i *)ptr.m256i_i8;
          v97 = 259;
          sub_A41580(&v100, v96, v98, v44, v45, v46);
          v47 = sub_10DA6C0(a3, (__int64)&v100);
          sub_10DC5D0(a4, v47);
          v48 = (void *)ptr.m256i_i64[0];
          if ( (unsigned __int64 *)ptr.m256i_i64[0] == &ptr.m256i_u64[3] )
            goto LABEL_80;
          goto LABEL_79;
        }
      }
      else
      {
        v42 = (char *)&byte_22F0C30;
      }
      v43 = &v42[j__strlen(v42)];
      goto LABEL_78;
    }
    v74 = sub_11BFE40(a3);
    if ( !v74 )
    {
LABEL_80:
      result = sub_10DCD30(a3, 0x1F8u);
      if ( result )
      {
        v52 = **(_BYTE ***)(result + 48);
        v102 = 257;
        if ( *v52 )
        {
          v100.m128i_i64[0] = (__int64)v52;
          LOBYTE(v102) = 3;
        }
        v98[0].m128i_i64[0] = (__int64)"--codegen-data-generate-path=";
        v99 = 259;
        sub_A41580((__m128i *)&ptr, v98, &v100, v49, v50, v51);
        v53 = sub_10DA6C0(a3, (__int64)&ptr);
        return sub_10DC5D0(a4, v53);
      }
      return result;
    }
    if ( *(_DWORD *)(v74 + 56) )
    {
      v75 = nullptr;
      v76 = **(char ***)(v74 + 48);
      if ( !v76 )
      {
LABEL_135:
        ptr.m256i_i64[0] = (__int64)&ptr.m256i_i64[3];
        *(__m128i *)&ptr.m256i_u64[1] = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
        sub_A1FE50(&ptr, v76, v75);
        if ( !ptr.m256i_i64[1]
          || (v102 = 261, v100 = *(__m128i *)ptr.m256i_i8, v85 = sub_228B230(&v100, v98), v78 = v98, !v85)
          && v98[0].m128i_i8[0] )
        {
          v97 = 257;
          v102 = 257;
          v99 = 257;
          v87 = v98;
          v94[0] = "default.profdata";
          v95 = 259;
          sub_228A3B0(&ptr, v94, v96, v98, &v100);
          v78 = v87;
        }
        v97 = 259;
        v99 = 261;
        v98[0] = *(__m128i *)ptr.m256i_i8;
        v96[0].m128i_i64[0] = (__int64)"--cs-profile-path=";
        sub_A41580(&v100, v96, v78, 261, v77, (__int64)v78);
        v79 = sub_10DA6C0(a3, (__int64)&v100);
        sub_10DC5D0(a4, v79);
        v48 = (void *)ptr.m256i_i64[0];
        if ( (unsigned __int64 *)ptr.m256i_i64[0] == &ptr.m256i_u64[3] )
          goto LABEL_80;
LABEL_79:
        free(v48);
        goto LABEL_80;
      }
    }
    else
    {
      v76 = (char *)&byte_22F0C30;
    }
    v75 = &v76[j__strlen(v76)];
    goto LABEL_135;
  }
  return result;
}
