__int64 __fastcall sub_3BE3D0(
        __int64 a1,
        const char *a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // r12
  __m128 v14; // xmm0
  __int64 v15; // rdx
  __int64 v16; // rax
  void **p_src; // rsi
  __int64 v18; // r8
  __int64 v19; // r9
  __m128 v20; // xmm4
  __m128 v21; // xmm5
  __int64 v22; // rcx
  __int64 v23; // r8
  char v24; // r9
  __int64 (*v25)(); // rax
  unsigned int v26; // r13d
  __int64 v28; // rdi
  __int64 v29; // r12
  int v30; // eax
  double v31; // xmm4_8
  double v32; // xmm5_8
  __int64 v33; // r9
  const char *v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rax
  const char *v37; // rsi
  __int64 v38; // r8
  __int64 v39; // r9
  __m128 v40; // xmm4
  __m128 v41; // xmm5
  __m128 v42; // xmm0
  __int64 v43; // rdi
  __int64 v44; // r8
  const char *v45; // rcx
  __int64 v46; // rdx
  char v47; // al
  int i; // r14d
  const char *v49; // r15
  size_t v50; // r13
  unsigned int v51; // r13d
  double v52; // xmm4_8
  double v53; // xmm5_8
  unsigned __int8 (*v54)(void); // rax
  const char *v55; // rcx
  unsigned int v56; // eax
  __int64 *func; // rax
  const char *v58; // r9
  char v59; // al
  __int64 v60; // rdx
  void *v61; // r14
  unsigned int v62; // eax
  unsigned __int64 v63; // r15
  size_t v64; // r8
  char v65; // al
  __int64 v66; // rdx
  __int64 (*v67)(void); // rax
  char v68; // al
  __int64 tinfo_property4; // rax
  __int64 v70; // rax
  const char *v71; // rcx
  char v72; // al
  void *v73; // r15
  __int64 v74; // rax
  const char *v75; // rdx
  __int64 *v76; // r15
  char v77; // al
  void *v78; // r14
  void *v79; // r9
  void *v80; // rdi
  const char *v81; // [rsp-10h] [rbp-1E0h]
  __int64 v82; // [rsp-10h] [rbp-1E0h]
  __m128i v83; // [rsp+0h] [rbp-1D0h] BYREF
  void *v84; // [rsp+10h] [rbp-1C0h]
  __int64 *v85; // [rsp+18h] [rbp-1B8h]
  __int64 v86; // [rsp+28h] [rbp-1A8h] BYREF
  void *dest; // [rsp+30h] [rbp-1A0h] BYREF
  __int128 v88; // [rsp+38h] [rbp-198h]
  void *src; // [rsp+50h] [rbp-180h] BYREF
  __m128 v90; // [rsp+58h] [rbp-178h]
  __int64 tinfo_property; // [rsp+70h] [rbp-160h] BYREF
  __m128i v92; // [rsp+78h] [rbp-158h] BYREF
  __int128 v93; // [rsp+88h] [rbp-148h]
  __int64 v94; // [rsp+98h] [rbp-138h]
  __int128 v95; // [rsp+A0h] [rbp-130h]
  _QWORD v96[7]; // [rsp+B0h] [rbp-120h] BYREF
  int v97; // [rsp+E8h] [rbp-E8h]
  __int64 v98; // [rsp+F0h] [rbp-E0h]
  char v99; // [rsp+F8h] [rbp-D8h]
  __int128 v100; // [rsp+100h] [rbp-D0h] BYREF
  __int64 v101; // [rsp+110h] [rbp-C0h]
  int v102; // [rsp+118h] [rbp-B8h]
  __int64 v103; // [rsp+120h] [rbp-B0h]
  __int128 v104; // [rsp+128h] [rbp-A8h]
  __m128i si128; // [rsp+138h] [rbp-98h] BYREF
  int v106; // [rsp+148h] [rbp-88h]
  char v107; // [rsp+150h] [rbp-80h]
  __int64 v108; // [rsp+158h] [rbp-78h]
  int v109; // [rsp+160h] [rbp-70h]
  __int64 v110; // [rsp+168h] [rbp-68h]
  __int128 v111; // [rsp+170h] [rbp-60h]
  __int64 v112; // [rsp+180h] [rbp-50h]
  char v113; // [rsp+188h] [rbp-48h]
  unsigned __int64 v114; // [rsp+198h] [rbp-38h]

  v114 = __readfsqword(0x28u);
  sub_3B8B90(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
  v12 = *(_DWORD *)(a1 + 8);
  if ( v12 != 58 && v12 != 25 )
  {
    v104 = 0;
    v112 = 0xFFFFFFFFLL;
    si128 = _mm_load_si128((const __m128i *)&xmmword_5DC360);
    v107 = 0;
    LODWORD(v100) = 0;
    *((_QWORD *)&v100 + 1) = 0;
    v101 = -1;
    v102 = -1;
    v103 = 0;
    v106 = -1;
    v108 = -1;
    v109 = -2;
    v110 = -1;
    v113 = 0;
    v111 = 0;
    if ( (unsigned int)sub_1ED900(qword_8CD7E8, &v100, 0, v11, 0.0) == 5 )
    {
      v13 = si128.m128i_i64[0];
      if ( si128.m128i_i64[0] == -1 )
      {
        v13 = v108;
        v65 = is_mapped(v108);
        if ( v13 != -1 && v65 == 1 )
          goto LABEL_6;
      }
      else if ( (unsigned __int8)is_mapped(si128.m128i_i64[0]) )
      {
        goto LABEL_6;
      }
    }
    v13 = *(_QWORD *)(a1 + 88);
    if ( *(_QWORD *)(a1 + 104)
      && (~((unsigned __int16)get_flags_ex(*(_QWORD *)(a1 + 88), 4) >> 8) & 6) == 0
      && (get_aflags(v13) & 0x800) == 0 )
    {
      v13 = **(_QWORD **)(a1 + 104);
    }
LABEL_6:
    v14 = 0;
    dest = nullptr;
    src = nullptr;
    v88 = 0;
    v90 = 0;
    get_ea_name(&src, v13, 0, 0);
    if ( v90.m128_u64[0] <= 1 )
      get_ea_name(&src, v13, 64, 0);
    v86 = 0;
    v85 = &v86;
    get_tinfo(&v86, v13);
    if ( (_BYTE)v86 )
    {
      v14 = 0;
      v92 = 0;
      tinfo_property = 0;
      calc_c_cpp_name(&tinfo_property, src, v85, 0);
      v59 = print_tinfo(&dest, 0, 0, 0, 8, v85, tinfo_property, 0);
      v60 = v82;
      v61 = (void *)tinfo_property;
      if ( v59 )
      {
        a4 = 0;
        v14 = (__m128)_mm_loadu_si128(&v92);
        tinfo_property = 0;
        v92 = 0;
        if ( !src )
        {
          src = v61;
          v90 = v14;
          goto LABEL_9;
        }
        v83 = (__m128i)v14;
        v90.m128_u64[0] = 0;
        qfree(src, nullptr, v82);
        v14 = (__m128)_mm_load_si128(&v83);
        src = v61;
        v61 = (void *)tinfo_property;
        v90 = v14;
      }
      if ( v61 )
      {
        v92.m128i_i64[0] = 0;
        *(double *)v14.m128_u64 = qfree(v61, nullptr, v60);
      }
    }
LABEL_9:
    if ( (unsigned __int64)v88 > 1 )
    {
LABEL_10:
      if ( ((get_tinfo_property(v86, 2) & 0xF) == 0xC || !(_BYTE)v86)
        && ((func = *(__int64 **)(a1 + 104)) != nullptr && *func == v13
         || (func = (__int64 *)get_func(v13)) != nullptr && *func == v13) )
      {
        v58 = &s1;
        if ( v90.m128_u64[0] )
          v58 = (const char *)src;
        p_src = nullptr;
        v26 = (unsigned __int8)sub_3BE010(nullptr, 0, nullptr, func, (__int64)v85, v58, 1);
      }
      else
      {
        v16 = itext(1114, 2, v15);
        p_src = (void **)&byte_6;
        if ( (unsigned __int8)sub_196F50(
                                (int)&dest,
                                6,
                                (int)"%s",
                                v16,
                                v18,
                                v19,
                                v14,
                                a4,
                                a5,
                                a6,
                                v20,
                                v21,
                                a9,
                                a10,
                                v83.m128i_i8[0]) )
        {
          v24 = 1;
          v25 = *(__int64 (**)())(*QT::QCoreApplication::self + 296LL);
          if ( v25 != sub_3B5230 )
            v24 = ((__int64 (__fastcall *)(_QWORD *, __int64, __int64 (*)(), __int64, __int64, __int64))v25)(
                    QT::QCoreApplication::self,
                    6,
                    sub_3B5230,
                    v22,
                    v23,
                    1)
                ^ 1;
          p_src = &src;
          v26 = (unsigned __int8)sub_3B8310((__int64 *)&dest, &src, v85, v13, 0, v24);
        }
        else
        {
          v26 = 1;
        }
      }
      clear_tinfo_t(v85);
      if ( src )
      {
        v90.m128_u64[0] = 0;
        *(double *)v14.m128_u64 = qfree(src, (const char *)p_src);
      }
      if ( dest )
      {
        *(_QWORD *)&v88 = 0;
        *(double *)v14.m128_u64 = qfree(dest, (const char *)p_src, *(double *)v14.m128_u64);
      }
      if ( v109 >= -1 && v110 )
      {
        *(_QWORD *)&v111 = 0;
        *(double *)v14.m128_u64 = qfree(v110, (const char *)p_src, *(double *)v14.m128_u64);
      }
      clear_tinfo_t(&si128.m128i_u64[1]);
      if ( v103 )
      {
        *(_QWORD *)&v104 = 0;
        qfree(v103, (const char *)p_src, *(double *)v14.m128_u64);
      }
      return v26;
    }
    if ( (unsigned int)guess_tinfo(v85, v13) )
    {
      v76 = v85;
      v14 = 0;
      v92 = 0;
      tinfo_property = 0;
      calc_c_cpp_name(&tinfo_property, src, v85, 0);
      v77 = print_tinfo(&dest, 0, 0, 0, 8, v76, tinfo_property, 0);
      v78 = (void *)tinfo_property;
      if ( v77 )
      {
        v14 = 0;
        a4 = (__m128)_mm_loadu_si128(&v92);
        tinfo_property = 0;
        v92 = 0;
        if ( !src )
        {
          src = v78;
          v90 = a4;
          goto LABEL_86;
        }
        v83 = (__m128i)a4;
        v90.m128_u64[0] = 0;
        *(double *)v14.m128_u64 = qfree(src, nullptr);
        a4 = (__m128)_mm_load_si128(&v83);
        src = v78;
        v78 = (void *)tinfo_property;
        v90 = a4;
      }
      if ( v78 )
      {
        v92.m128i_i64[0] = 0;
        *(double *)v14.m128_u64 = qfree(v78, nullptr);
      }
    }
LABEL_86:
    if ( (unsigned __int64)v88 > 1 )
      goto LABEL_10;
    v62 = getinf(36);
    if ( (int)demangle_name(&dest, src, v62, 2) <= 0 )
    {
LABEL_88:
      if ( (unsigned __int64)v88 <= 1 )
      {
        clear_tinfo_t(v85);
        calc_c_cpp_name(&src, src, 0, 0);
        v63 = v90.m128_u64[0];
        if ( v90.m128_u64[0] && (v64 = v90.m128_u64[0] - 1, v90.m128_u64[0] != 1) )
        {
          v79 = src;
          v80 = dest;
          if ( *((_QWORD *)&v88 + 1) < v90.m128_u64[0] )
          {
            v84 = src;
            v83.m128i_i64[0] = v90.m128_u64[0] - 1;
            dest = (void *)qvector_reserve(&dest, dest, v90.m128_u64[0], 1);
            v79 = v84;
            v80 = dest;
            v64 = v83.m128i_i64[0];
          }
          *(_QWORD *)&v88 = v63;
          memmove(v80, v79, v64);
          *((char *)dest + v63 - 1) = 0;
        }
        else
        {
          *(_QWORD *)&v88 = 0;
        }
      }
      goto LABEL_10;
    }
    v14 = 0;
    tinfo_property = 0;
    v71 = &s1;
    v92 = 0;
    if ( (_QWORD)v88 )
      v71 = (const char *)dest;
    v72 = parse_decl(v85, &tinfo_property, 0, v71, 49423);
    v73 = (void *)tinfo_property;
    if ( v72 )
    {
      a4 = 0;
      v14 = (__m128)_mm_loadu_si128(&v92);
      tinfo_property = 0;
      v92 = 0;
      if ( !src )
      {
        src = v73;
        v90 = v14;
        goto LABEL_88;
      }
      v83 = (__m128i)v14;
      v90.m128_u64[0] = 0;
      qfree(src, (const char *)&tinfo_property);
      v14 = (__m128)_mm_load_si128(&v83);
      src = v73;
      v73 = (void *)tinfo_property;
      v90 = v14;
    }
    if ( v73 )
    {
      v92.m128i_i64[0] = 0;
      *(double *)v14.m128_u64 = qfree(v73, (const char *)&tinfo_property);
    }
    goto LABEL_88;
  }
  v28 = *(_QWORD *)a1;
  if ( !*(_QWORD *)a1 )
    return 0;
  v29 = *(_QWORD *)(a1 + 208);
  if ( !*(_DWORD *)(v29 + 24) )
    return 0;
  v30 = sub_3ACD40(v28, *(_QWORD *)(a1 + 208));
  if ( v30 == 2 )
  {
    v26 = 1;
    sub_3A9A00(*(_DWORD *)(v29 + 24), 1u, *(double *)a3.m128_u64, a4, a5, a6, v31, v32, a9, a10);
    return v26;
  }
  if ( !v30 )
    return 0;
  dest = nullptr;
  v88 = 0;
  if ( *(_BYTE *)(v29 + 31) == 12 )
  {
    v74 = *(_QWORD *)(v29 + 296);
    if ( !v74 )
    {
      tinfo_property = 0;
      tinfo_property = get_tinfo_property(*(_QWORD *)(v29 + 8), 24);
      print_tinfo(&dest, 0, 0, 0, 0, &tinfo_property, 0, 0);
      clear_tinfo_t(&tinfo_property);
      goto LABEL_35;
    }
    v33 = v74 + 64;
    v75 = &s1;
    if ( *(_QWORD *)(v74 + 24) )
      v75 = *(const char **)(v74 + 16);
    v81 = v75;
  }
  else
  {
    v33 = v29 + 112;
    v34 = &s1;
    if ( *(_QWORD *)(v29 + 72) )
      v34 = *(const char **)(v29 + 64);
    v81 = v34;
  }
  print_tinfo(&dest, 0, 0, 0, 0, v33, v81, 0);
LABEL_35:
  v36 = itext(1114, 0, v35);
  v37 = &byte_6;
  v26 = 1;
  if ( !(unsigned __int8)sub_196F50(
                           (int)&dest,
                           6,
                           (int)"%s",
                           v36,
                           v38,
                           v39,
                           (__m128)0LL,
                           a4,
                           a5,
                           a6,
                           v40,
                           v41,
                           a9,
                           a10,
                           v83.m128i_i8[0]) )
    goto LABEL_82;
  v42 = 0;
  v86 = 0;
  src = nullptr;
  v90 = 0;
  v43 = *(_QWORD *)(v29 + 8);
  v85 = &v86;
  v44 = get_tinfo_property(v43, 22) == 0 ? 53262 : 53646;
  if ( *(_BYTE *)(v29 + 31) == 12 && !*(_QWORD *)(v29 + 296) )
    v44 = (unsigned int)v44 | 0x10000;
  v45 = &s1;
  if ( (_QWORD)v88 )
    v45 = (const char *)dest;
  v37 = (const char *)&src;
  v85 = &v86;
  if ( !(unsigned __int8)parse_decl(&v86, &src, 0, v45, v44) )
  {
LABEL_78:
    v26 = 0;
    goto LABEL_79;
  }
  v47 = *(_BYTE *)(v29 + 31);
  v83.m128i_i64[0] = -1;
  if ( v47 == 13 )
  {
    v46 = *(_QWORD *)(v29 + 16);
    if ( v46 == -1 )
    {
      v83.m128i_i64[0] = 8LL * *(_QWORD *)(v29 + 192);
    }
    else if ( v46 != -2 && *(_QWORD *)(v29 + 32) == -1 )
    {
      v83.m128i_i64[0] = *(_QWORD *)(v29 + 232);
    }
  }
  for ( i = 0; ; i = 4 )
  {
    if ( v47 == 12 )
    {
      if ( !*(_QWORD *)(v29 + 296) )
      {
        v56 = set_tinfo_property4(v29 + 8, 32, v85, 0, 0, i);
LABEL_63:
        v51 = v56;
        goto LABEL_51;
      }
      v51 = set_tinfo_property4(v29 + 8, 31, *(_QWORD *)(v29 + 32), v85, 0, i);
      if ( v90.m128_u64[0] > 1 )
      {
        v54 = *(unsigned __int8 (**)(void))(*QT::QCoreApplication::self + 296LL);
        if ( (char *)v54 != (char *)sub_3B5230 )
        {
          if ( v54() )
          {
            v55 = &s1;
            if ( v90.m128_u64[0] )
              v55 = (const char *)src;
            v56 = set_tinfo_property4(v29 + 8, 30, *(_QWORD *)(v29 + 32), v55, 0, 0);
            goto LABEL_63;
          }
        }
      }
    }
    else if ( v83.m128i_i64[0] == -1 )
    {
      v66 = set_tinfo_property4(v29 + 8, 12, *(_QWORD *)(v29 + 32), v85, 0, (unsigned int)i);
      v51 = v66;
      v67 = *(__int64 (**)(void))(*QT::QCoreApplication::self + 296LL);
      if ( v67 != sub_3B5230 )
      {
        v84 = (void *)v66;
        v68 = v67();
        if ( !(_DWORD)v84 )
        {
          if ( v68 )
          {
            if ( v90.m128_u64[0] <= 1 )
              goto LABEL_104;
            v56 = set_tinfo_property4(v29 + 8, 11, *(_QWORD *)(v29 + 32), src, 0, 0);
            goto LABEL_63;
          }
        }
      }
    }
    else
    {
      v49 = &s1;
      if ( v90.m128_u64[0] )
        v49 = (const char *)src;
      v92 = 0u;
      tinfo_property = v83.m128i_i64[0];
      v93 = 0;
      if ( v49 )
      {
        v50 = strlen(v49);
        v84 = (void *)(v50 + 1);
        v92.m128i_i64[1] = qvector_reserve(&v92.m128i_u64[1], 0, v50 + 1, 1);
        *(_QWORD *)&v93 = v50 + 1;
        memmove((void *)v92.m128i_i64[1], v49, v50);
        *(_BYTE *)(v92.m128i_i64[1] + v50) = 0;
      }
      v42 = 0;
      v94 = 0;
      v95 = 0;
      v96[0] = 0;
      copy_tinfo_t(v96, v85, v46);
      v96[1] = 0;
      v96[6] = 1;
      v97 = -1;
      v98 = 0;
      v99 = 0;
      v92.m128i_i64[0] = 8 * get_tinfo_size(0, v86, 0);
      v51 = set_tinfo_property4(v29 + 8, 9, &tinfo_property, 1, -1, 320);
      clear_tinfo_t(v96);
      if ( v94 )
      {
        *(_QWORD *)&v95 = 0;
        *(double *)v42.m128_u64 = qfree(v94, byte_9);
      }
      if ( v92.m128i_i64[1] )
      {
        *(_QWORD *)&v93 = 0;
        *(double *)v42.m128_u64 = qfree(v92.m128i_i64[1], byte_9);
      }
    }
LABEL_51:
    if ( v51 != -13 || i )
      break;
    v37 = "AUTOHIDE REGISTRY\n"
          "HIDECANCEL\n"
          "ICON WARNING\n"
          "The new type overlaps with existing fields.\n"
          "Do you want to destroy the overlapping fields?";
    if ( (int)sub_1698A0(
                0,
                (int)"AUTOHIDE REGISTRY\n"
                     "HIDECANCEL\n"
                     "ICON WARNING\n"
                     "The new type overlaps with existing fields.\n"
                     "Do you want to destroy the overlapping fields?") <= 0 )
      goto LABEL_78;
    v47 = *(_BYTE *)(v29 + 31);
  }
  if ( v51 )
    goto LABEL_107;
LABEL_104:
  if ( get_tinfo_property4(*(_QWORD *)(v29 + 8), 300, 0, 0, 0, 0) != -1 )
  {
    tinfo_property4 = get_tinfo_property4(*(_QWORD *)(v29 + 8), 300, 0, 0, 0, 0);
    v70 = get_func(tinfo_property4);
    reanalyze_function(v70, 0, -1, 0);
  }
  v51 = 0;
LABEL_107:
  v37 = (const char *)v51;
  v26 = (unsigned __int8)sub_3AC490(
                           (__int64 *)a1,
                           v51,
                           (__int64)"Failed to set type",
                           v42,
                           a4,
                           a5,
                           a6,
                           v52,
                           v53,
                           a9,
                           a10);
LABEL_79:
  if ( src )
  {
    v90.m128_u64[0] = 0;
    qfree(src, v37);
  }
  clear_tinfo_t(v85);
LABEL_82:
  if ( dest )
  {
    *(_QWORD *)&v88 = 0;
    qfree(dest, v37);
  }
  return v26;
}
