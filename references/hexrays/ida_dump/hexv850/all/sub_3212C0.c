unsigned __int64 __fastcall sub_3212C0(unsigned __int64 a1, unsigned int a2)
{
  unsigned __int64 *func; // rax
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rax
  char **p_s1; // rsi
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned int ordinal_limit; // eax
  __int64 v11; // r13
  __int64 (__fastcall **v12)(); // rax
  const char *numbered_type_name; // rdi
  char *v14; // rbx
  void *v15; // rax
  char *v16; // r14
  size_t v17; // rbx
  __int64 *v18; // rcx
  __m128i *v19; // rdx
  __int64 (__fastcall **v20)(); // r9
  __int64 v21; // rax
  __int64 (__fastcall **v22)(); // rdi
  __int64 module_data; // rax
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  unsigned __int64 *i; // r12
  __int64 m; // rax
  char **v29; // rbx
  unsigned int ii; // ebx
  __m128i *v31; // r15
  char *v32; // rdi
  __int64 v33; // r8
  __int64 v34; // r9
  unsigned int jj; // r12d
  __int64 problem_name; // rax
  __int64 kk; // r12
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // r12
  unsigned __int64 v41; // r15
  char *v42; // r13
  __int64 nn; // rax
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // rbx
  char tinfo_property; // r15
  __int64 head; // r12
  __int64 v49; // r9
  __int64 fchunk; // rax
  unsigned __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r9
  unsigned __int64 *v54; // rax
  __int64 v55; // rcx
  unsigned __int64 v56; // r15
  _QWORD *v57; // rbx
  _QWORD *v58; // rdi
  _QWORD *v59; // rdi
  __int64 v60; // rdi
  char **v61; // rdi
  __int64 v62; // r13
  __int64 v63; // rbx
  char **v64; // rax
  char *v65; // rdi
  char **v66; // r15
  char *v67; // rdi
  __int64 v68; // rsi
  char **v69; // rbx
  char *v70; // rax
  __m128i *idati; // rax
  __int64 v72; // r9
  unsigned int v73; // r14d
  unsigned int v74; // ebx
  __int64 mm; // rax
  __int64 v77; // rdx
  unsigned __int64 v78; // rax
  _QWORD *v79; // r12
  __int64 v80; // r8
  __int64 v81; // r9
  void *v82; // r15
  char v83; // bl
  void (__fastcall *v84)(void *); // rax
  __m128i *v85; // rbx
  __m128i *v86; // r14
  unsigned __int64 j; // r12
  __m128i **v88; // rdi
  __m128i *v89; // r15
  __m128i *v90; // r13
  char tinfo_details; // al
  __int64 v92; // r9
  __m128i *v93; // r15
  __int64 v94; // rbx
  __int64 v95; // r13
  __m128i *v96; // r15
  __int64 v97; // rdi
  __int64 v98; // rdi
  __int64 v99; // rsi
  __int64 (__fastcall **v100)(); // rcx
  __int64 (__fastcall **v101)(); // r15
  __int64 (__fastcall *v102)(); // rdx
  __m128i *v103; // r12
  __m128i *v104; // r14
  unsigned __int64 *k; // rax
  __int64 (__fastcall ***v106)(); // rsi
  __int64 v107; // rdx
  __int64 v108; // r8
  __int64 v109; // r9
  unsigned __int64 *v110; // r15
  __int64 v111; // rdx
  __int64 v112; // r8
  __int64 v113; // r9
  unsigned __int64 v114; // r13
  __int64 (__fastcall ***v115)(); // r12
  __int64 v116; // rbx
  __int64 v117; // r15
  __int64 v118; // rax
  __m128i v119; // xmm0
  __int64 (__fastcall ****v120)(); // r13
  __int64 (__fastcall ***v121)(); // r14
  __int64 v122; // [rsp+0h] [rbp-6C0h]
  char *v123; // [rsp+0h] [rbp-6C0h]
  __int64 v124; // [rsp+8h] [rbp-6B8h]
  __int64 v125; // [rsp+8h] [rbp-6B8h]
  __int64 v126; // [rsp+8h] [rbp-6B8h]
  void *srca; // [rsp+10h] [rbp-6B0h]
  char *src; // [rsp+10h] [rbp-6B0h]
  _BYTE *srcb; // [rsp+10h] [rbp-6B0h]
  _BYTE *srcc; // [rsp+10h] [rbp-6B0h]
  __int64 v131; // [rsp+18h] [rbp-6A8h]
  void **v132; // [rsp+18h] [rbp-6A8h]
  __int64 v133; // [rsp+20h] [rbp-6A0h]
  __m128i *v134; // [rsp+20h] [rbp-6A0h]
  unsigned __int64 v135; // [rsp+28h] [rbp-698h]
  __int64 (__fastcall ***v136)(); // [rsp+30h] [rbp-690h]
  __int64 v138; // [rsp+38h] [rbp-688h]
  __int64 v139; // [rsp+38h] [rbp-688h]
  size_t na; // [rsp+40h] [rbp-680h]
  size_t n; // [rsp+40h] [rbp-680h]
  __int64 (__fastcall ***v142)(); // [rsp+48h] [rbp-678h]
  __int64 v143; // [rsp+58h] [rbp-668h] BYREF
  __int64 v144; // [rsp+60h] [rbp-660h] BYREF
  __int64 (__fastcall **v145)(); // [rsp+68h] [rbp-658h] BYREF
  __int64 v146; // [rsp+70h] [rbp-650h] BYREF
  __m128i *v147; // [rsp+78h] [rbp-648h] BYREF
  void *v148; // [rsp+80h] [rbp-640h] BYREF
  char *s; // [rsp+88h] [rbp-638h] BYREF
  char *v150; // [rsp+90h] [rbp-630h] BYREF
  char *v151; // [rsp+98h] [rbp-628h] BYREF
  __int128 v152; // [rsp+A0h] [rbp-620h] BYREF
  char *s1; // [rsp+B0h] [rbp-610h] BYREF
  __int128 v154; // [rsp+B8h] [rbp-608h]
  char *haystack; // [rsp+D0h] [rbp-5F0h] BYREF
  __int128 v156; // [rsp+D8h] [rbp-5E8h]
  __int64 (__fastcall **v157)(); // [rsp+F0h] [rbp-5D0h] BYREF
  __int128 v158; // [rsp+F8h] [rbp-5C8h]
  _OWORD v159[2]; // [rsp+110h] [rbp-5B0h] BYREF
  __int64 (__fastcall **v160)(); // [rsp+130h] [rbp-590h] BYREF
  __int128 v161; // [rsp+138h] [rbp-588h]
  __int64 v162; // [rsp+148h] [rbp-578h]
  int v163; // [rsp+150h] [rbp-570h]
  __m128i *v164; // [rsp+160h] [rbp-560h] BYREF
  __int128 v165; // [rsp+168h] [rbp-558h]
  _BYTE v166[24]; // [rsp+178h] [rbp-548h] BYREF
  int v167; // [rsp+190h] [rbp-530h]
  _OWORD v168[2]; // [rsp+1A0h] [rbp-520h] BYREF
  __int64 v169; // [rsp+1C0h] [rbp-500h]
  __int64 v170; // [rsp+1C8h] [rbp-4F8h]
  __int64 v171; // [rsp+1D0h] [rbp-4F0h]
  __int128 v172; // [rsp+1D8h] [rbp-4E8h]
  __int128 v173; // [rsp+1E8h] [rbp-4D8h]
  __int128 v174; // [rsp+1F8h] [rbp-4C8h]
  __int128 v175; // [rsp+208h] [rbp-4B8h]
  __int128 v176; // [rsp+218h] [rbp-4A8h]
  __int128 v177; // [rsp+228h] [rbp-498h]
  __int128 v178; // [rsp+238h] [rbp-488h]
  __int128 v179; // [rsp+248h] [rbp-478h]
  unsigned __int64 v180; // [rsp+258h] [rbp-468h]
  char v181[32]; // [rsp+260h] [rbp-460h] BYREF
  _BYTE v182[1032]; // [rsp+280h] [rbp-440h] BYREF
  unsigned __int64 v183; // [rsp+688h] [rbp-38h]

  v135 = a1;
  v183 = __readfsqword(0x28u);
  func = (unsigned __int64 *)get_func(a1);
  if ( func )
  {
    v135 = *func;
  }
  else if ( (a2 & 4) == 0 )
  {
    return v183 - __readfsqword(0x28u);
  }
  lock_func_range(func, 1);
  v154 = 0;
  s1 = nullptr;
  v6 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))callui)(61, 1, v3, &callui, v4, v5);
  p_s1 = &s1;
  callui(146, &s1, v6, &callui, v8, v9, v122, v124, srca, v131);
  sub_1326A0((__int64)"HIDECANCEL\nDeleting segments...");
  if ( (a2 & 8) != 0 )
  {
    ordinal_limit = get_ordinal_limit(0);
    if ( ordinal_limit > 1 )
    {
      v11 = 1;
      v133 = ordinal_limit;
      v132 = &v148;
      while ( 1 )
      {
        p_s1 = (char **)(unsigned int)v11;
        if ( (unsigned __int8)get_numbered_type(0, (unsigned int)v11, &s, &v150, &v151, &v152, &v148) )
          break;
LABEL_33:
        if ( v133 == ++v11 )
          goto LABEL_34;
      }
      v157 = nullptr;
      v158 = 0;
      if ( s )
      {
        src = s;
        na = strlen(s);
        v12 = (__int64 (__fastcall **)())qvector_reserve(&v157, 0, na + 1, 1);
        *(_QWORD *)&v158 = na + 1;
        v157 = v12;
        memmove(v12, src, na);
        *((_BYTE *)v157 + na) = 0;
      }
      qsnprintf(v181, 32, "T%u", v11);
      numbered_type_name = (const char *)get_numbered_type_name(0, (unsigned int)v11);
      if ( !numbered_type_name || (p_s1 = (char **)v181, strcmp(numbered_type_name, v181)) )
      {
        v14 = v150;
        memset(v159, 0, 24);
        if ( v150 )
        {
          srcb = (_BYTE *)strlen(v150);
          v15 = (void *)qvector_reserve(v159, 0, srcb + 1, 1);
          *((_QWORD *)&v159[0] + 1) = srcb + 1;
          *(_QWORD *)&v159[0] = v15;
          memmove(v15, v14, (size_t)srcb);
          srcb[*(_QWORD *)&v159[0]] = 0;
        }
        v16 = v151;
        v160 = nullptr;
        v161 = 0;
        if ( v151 )
        {
          srcc = (_BYTE *)strlen(v151);
          v123 = srcc + 1;
          v160 = (__int64 (__fastcall **)())qvector_reserve(&v160, 0, srcc + 1, 1);
          *(_QWORD *)&v161 = srcc + 1;
          memmove(v160, v16, (size_t)srcc);
          srcc[(_QWORD)v160] = 0;
        }
        v164 = nullptr;
        v165 = 0;
        src = (char *)v152;
        if ( (_QWORD)v152 )
        {
          v17 = strlen((const char *)v152);
          v123 = (char *)(v17 + 1);
          v164 = (__m128i *)qvector_reserve(&v164, 0, v17 + 1, 1);
          *(_QWORD *)&v165 = v17 + 1;
          memmove(v164, src, v17);
          v18 = &v146;
          v164->m128i_i8[v17] = 0;
          v19 = v164;
          v20 = v160;
          haystack = nullptr;
          v145 = v157;
          v21 = *(_QWORD *)&v159[0];
          if ( !*(_QWORD *)&v159[0] )
            v18 = nullptr;
          if ( v164 )
            src = (char *)&v147;
          else
            src = nullptr;
        }
        else
        {
          v19 = nullptr;
          v18 = &v146;
          haystack = nullptr;
          v20 = v160;
          v145 = v157;
          v21 = *(_QWORD *)&v159[0];
          if ( !*(_QWORD *)&v159[0] )
            v18 = nullptr;
        }
        v147 = v19;
        p_s1 = nullptr;
        v146 = v21;
        if ( !(unsigned __int8)deserialize_tinfo(&haystack, 0, &v145, v18, src, v20)
          || (p_s1 = nullptr, (unsigned int)save_tinfo(&haystack, 0, v11, v181, 5)) )
        {
          clear_tinfo_t(&haystack);
          if ( v164 )
          {
            *(_QWORD *)&v165 = 0;
            qfree(v164);
          }
          if ( v160 )
          {
            *(_QWORD *)&v161 = 0;
            qfree(v160);
          }
          if ( *(_QWORD *)&v159[0] )
          {
            *((_QWORD *)&v159[0] + 1) = 0;
            qfree(*(_QWORD *)&v159[0]);
          }
          v22 = v157;
          if ( !v157 )
            goto LABEL_33;
LABEL_32:
          *(_QWORD *)&v158 = 0;
          qfree(v22);
          goto LABEL_33;
        }
        clear_tinfo_t(&haystack);
        if ( v164 )
        {
          *(_QWORD *)&v165 = 0;
          qfree(v164);
        }
        if ( v160 )
        {
          *(_QWORD *)&v161 = 0;
          qfree(v160);
        }
        if ( *(_QWORD *)&v159[0] )
        {
          *((_QWORD *)&v159[0] + 1) = 0;
          qfree(*(_QWORD *)&v159[0]);
        }
      }
      v22 = v157;
      if ( (unsigned __int64)v158 > 1 && (*(_BYTE *)v157 & 0x3F) == 0x2D )
      {
        qsnprintf(v182, 64, "enum %s {};", v181);
        p_s1 = (char **)v182;
        parse_decls(0, v182, sub_68620, 1024);
        v22 = v157;
      }
      if ( !v22 )
        goto LABEL_33;
      goto LABEL_32;
    }
  }
LABEL_34:
  module_data = get_module_data((unsigned int)dword_4C2AB8);
  n = module_data;
  if ( (a2 & 1) != 0 )
  {
    v160 = nullptr;
    v162 = 0;
    v163 = -1;
    v161 = 0;
    if ( (a2 & 4) != 0 )
    {
      for ( i = (unsigned __int64 *)getn_func(0); i; i = (unsigned __int64 *)get_next_func(*i) )
      {
        if ( (i[2] & 4) == 0 && !(unsigned __int8)is_spec_ea(*i) )
        {
          p_s1 = (char **)&v160;
          sub_320810(n, (__int64)&v160, *i, (a2 >> 1) & 1);
        }
      }
    }
    else
    {
      p_s1 = (char **)&v160;
      sub_320810(module_data, (__int64)&v160, v135, (a2 >> 1) & 1);
    }
    callui(27, p_s1, v24, &callui, v25, v26, v123, v125, src, v132);
    if ( (a2 & 0x80u) != 0 )
    {
      netnode_check(&v164, "$ PE header", 0, 0);
      v88 = &v164;
      netnode_kill(&v164);
      goto LABEL_195;
    }
    v164 = nullptr;
    *(_QWORD *)v166 = 0;
    *(_DWORD *)&v166[8] = -1;
    v148 = nullptr;
    v165 = 0;
    callui(7, 0x9676D4FFFEBD5C67LL, &v148, &callui, v80, v81, v123, v125, src, v132);
    v82 = v148;
    if ( v148 )
    {
      v83 = (**(__int64 (__fastcall ***)(void *, __int64 (__fastcall ***)(), __m128i **, unsigned __int64))v148)(
              v148,
              &v160,
              &v164,
              v135);
      v84 = *(void (__fastcall **)(void *))(*(_QWORD *)v82 + 16LL);
      if ( v84 == sub_320760 )
        operator delete(v82, 0x10u);
      else
        v84(v82);
      if ( v83 )
      {
        v85 = v164;
        v86 = &v164[v165];
        if ( v164 == v86 )
          goto LABEL_160;
        do
        {
          for ( j = v85->m128i_i64[0]; j < v85->m128i_i64[1]; ++j )
          {
            del_items(j, 0, 1, 0);
            put_byte(j, 0);
          }
          ++v85;
        }
        while ( v86 != v85 );
      }
      else
      {
        sub_2AFAB0((__int64)"Failed to interact with the eh34 plugin, will delete eh34 data");
      }
    }
    v86 = v164;
LABEL_160:
    v88 = (__m128i **)v86;
    if ( v86 )
    {
      *(_QWORD *)&v165 = 0;
      qfree(v86);
    }
LABEL_195:
    v99 = v161;
    v100 = v160;
    v164 = nullptr;
    v165 = 0;
    *(_DWORD *)&v166[8] = -1;
    v101 = v160;
    *(_QWORD *)v166 = 0;
    if ( 16LL * (_QWORD)v161 )
    {
      while ( 1 )
      {
        v102 = v101[1];
        v88 = (__m128i **)(v101 + 2);
        v101 = (__int64 (__fastcall **)())v88;
        if ( v88 == (__m128i **)&v100[2 * v99] )
          break;
        if ( v102 != (__int64 (__fastcall *)())-1LL && (unsigned __int64)((char *)*v88 - (char *)v102) <= 0xF )
        {
          v159[0] = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v102, (__m128i)(unsigned __int64)*v88);
          rangeset_t_add(&v164, v159);
          v100 = v160;
          v99 = v161;
        }
      }
      v103 = v164;
      v104 = &v164[v165];
      if ( v164 != v104 )
      {
        do
        {
          v88 = (__m128i **)&v160;
          rangeset_t_add(&v160, v103++);
        }
        while ( v104 != v103 );
        v104 = v164;
      }
      if ( v104 )
      {
        *(_QWORD *)&v165 = 0;
        v88 = (__m128i **)v104;
        qfree(v104);
      }
    }
    for ( k = (unsigned __int64 *)get_last_seg(v88); ; k = (unsigned __int64 *)get_prev_seg(v142) )
    {
      v110 = k;
      if ( !k )
        break;
      v142 = (__int64 (__fastcall ***)())*k;
      if ( !(unsigned __int8)rangeset_t_has_common(&v160, k, 0) )
      {
        callui(27, v110, v111, &callui, v112, v113, v123, v125, src, v132);
        v106 = (__int64 (__fastcall ***)())&byte_5;
        del_segm(*v110, 5);
        goto LABEL_207;
      }
      v164 = nullptr;
      v165 = 0;
      v114 = *v110;
      v115 = (__int64 (__fastcall ***)())v110[1];
      *(_QWORD *)v166 = 0;
      *(_DWORD *)&v166[8] = -1;
      if ( v114 < (unsigned __int64)v115 )
      {
        v164 = (__m128i *)qvector_reserve(&v164, 0, 1, 16);
        v164[(_QWORD)v165] = _mm_unpacklo_epi64((__m128i)v114, (__m128i)(unsigned __int64)v115);
        *(_QWORD *)&v165 = v165 + 1;
        v115 = (__int64 (__fastcall ***)())v110[1];
      }
      v106 = &v160;
      rangeset_t_sub2(&v164, &v160);
      v116 = (unsigned int)(v165 - 1);
      v117 = v116;
      if ( (int)v116 >= 0 )
      {
        do
        {
          while ( 1 )
          {
            v120 = (__int64 (__fastcall ****)())&v164[v117];
            callui(27, v106, v107, &callui, v108, v109, v123, v125, src, v132);
            v121 = *v120;
            v106 = v120[1];
            if ( *v120 != v142 )
              break;
            set_segm_start(v142, v106, 5);
LABEL_218:
            LODWORD(v116) = v116 - 1;
            --v117;
            if ( (_DWORD)v116 == -1 )
              goto LABEL_222;
          }
          if ( v106 != v115 )
          {
            v136 = v120[1];
            if ( v121 != v106 )
            {
              v169 = 0;
              v170 = 0;
              v171 = 0;
              v180 = 0xFFFFFFFF00000000LL;
              memset(v168, 0, sizeof(v168));
              v172 = -1;
              v173 = -1;
              v174 = -1;
              v175 = -1;
              v176 = -1;
              v177 = -1;
              v178 = -1;
              v179 = -1;
              v118 = getseg(v121);
              v119 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v121, (__m128i)(unsigned __int64)v136);
              if ( v118 )
              {
                v171 = *(_QWORD *)(v118 + 48);
                BYTE3(v170) = *(_BYTE *)(v118 + 43);
              }
              v168[0] = v119;
              add_segm_ex(v168, &unk_3F5793, &unk_3F5793, 12);
              v106 = (__int64 (__fastcall ***)())&byte_5;
              del_segm(v121, 5);
            }
            goto LABEL_218;
          }
          v106 = *v120;
          set_segm_end(*v120, *v120, 5);
          LODWORD(v116) = v116 - 1;
          --v117;
        }
        while ( (_DWORD)v116 != -1 );
      }
LABEL_222:
      if ( v164 )
      {
        *(_QWORD *)&v165 = 0;
        qfree(v164);
      }
LABEL_207:
      callui(27, v106, v107, &callui, v108, v109, v123, v125, src, v132);
    }
    if ( v160 )
    {
      *(_QWORD *)&v161 = 0;
      qfree(v160);
    }
  }
  netnode_check(&v143, "$ dwarf mappings lut", 0, 0);
  for ( m = netnode_hashfirst(v143, v182, 1024, 72); m > 0; m = netnode_hashnext(v143, v182, v182, 1024, 72) )
  {
    v164 = (__m128i *)netnode_hashval_long(v143, v182, 72);
    netnode_kill(&v164);
  }
  netnode_kill(&v143);
  delete_imports();
  v29 = off_4B6D60;
  do
  {
    netnode_check(&s, *v29, 0, 0);
    netnode_kill(&s);
    netnode_rename(s, &unk_3F5793, 0);
    ++v29;
  }
  while ( v29 != (char **)algn_4B6F10 );
  for ( ii = 65; ii != 90; ++ii )
  {
    v165 = 0;
    v164 = nullptr;
    sub_66DF0((__int64 *)&v164, (__int64)"$ Pseudocode-%c", ii);
    netnode_check(&v150, v164, 0, 0);
    netnode_kill(&v150);
    netnode_rename(v150, &unk_3F5793, 0);
    sub_66DF0((__int64 *)&v164, (__int64)"$ IDA View-%c", ii);
    v31 = v164;
    v32 = (char *)::s1;
    if ( (_QWORD)v154 )
      v32 = s1;
    if ( !strcmp(v32, &v164->m128i_i8[2]) )
    {
      callui(100, "EmptyStack", 0, 0, v33, v34, v123, v125, src, v132);
    }
    else
    {
      netnode_check(&v151, v31, 0, 0);
      netnode_kill(&v151);
      netnode_rename(v151, &unk_3F5793, 0);
    }
    if ( v164 )
    {
      *(_QWORD *)&v165 = 0;
      qfree(v164);
    }
  }
  for ( jj = 1; jj != 17; ++jj )
  {
    problem_name = get_problem_name(jj, 1);
    netnode_check(&haystack, problem_name, 0, 0);
    netnode_kill(&haystack);
    netnode_rename(haystack, &unk_3F5793, 0);
  }
  for ( kk = 0; kk != -1; kk = node2ea(v39) )
  {
    if ( !(unsigned __int8)is_mapped(kk) )
      netnode_supdel(*(_QWORD *)(n + 104), kk, 256);
    v38 = ea2node(kk);
    v39 = netnode_supnext(*(_QWORD *)(n + 104), v38, 0);
  }
  if ( (a2 & 4) == 0 )
  {
    for ( mm = getn_func(0); ; mm = get_next_func(*v79) )
    {
      v79 = (_QWORD *)mm;
      if ( !mm )
        break;
      v77 = *(_QWORD *)(mm + 16);
      v78 = v77 & 0xFFFFFFFFFFFFFFFBLL;
      if ( *v79 != v135 )
        v78 = v77 | 4;
      v79[2] = v78;
      update_func(v79);
    }
  }
  v144 = -1;
  haystack = nullptr;
  v156 = 0;
  if ( (unsigned __int8)netnode_start(&v144) )
  {
    do
    {
      v40 = v144;
      v41 = node2ea(v144);
      if ( netnode_get_name(v144, &haystack) <= 0 )
      {
        if ( (a2 & 0x10) == 0 )
          goto LABEL_73;
        v152 = 0;
        getinf_buf(26, &v152, 16);
        if ( v41 >= (unsigned __int64)v152 && v41 < *((_QWORD *)&v152 + 1) )
          goto LABEL_73;
        if ( (unsigned __int8)is_mapped(v41) )
          goto LABEL_73;
      }
      else
      {
        v42 = haystack;
        if ( strncmp(haystack, "$ chooser\\", 0xAu)
          && strncmp(v42, "TIB[", 4u)
          && (strncmp(v42, "debug", 5u) || (unsigned __int8)(v42[5] - 48) > 9u)
          && (!strchr(v42, 91) || !strchr(v42, 93) || *v42 == 45)
          && !strstr(v42, ".dll")
          || v135 == v41 )
        {
          goto LABEL_73;
        }
      }
      netnode_rename(v144, &unk_3F5793, 0);
      netnode_kill(&v144);
LABEL_73:
      if ( (a2 & 0x40) != 0 )
        netnode_delblob(v144, 1085440, 83);
      v144 = v40;
    }
    while ( (unsigned __int8)netnode_next(&v144) );
  }
  for ( nn = first_named_type(0, 0); ; nn = next_named_type(0, v46, 0) )
  {
    v46 = nn;
    if ( !nn )
      break;
    v164 = nullptr;
    if ( !(unsigned __int8)sub_321180((__int64)&v164, nn) )
    {
      clear_tinfo_t(&v164);
LABEL_78:
      del_named_type(0, v46, 0);
      continue;
    }
    tinfo_property = get_tinfo_property(v164, 2);
    clear_tinfo_t(&v164);
    if ( (tinfo_property & 0x3F) != 0x2D )
      goto LABEL_78;
  }
  if ( (a2 & 0x20) == 0 )
    goto LABEL_135;
  sub_3210A0((__int64)"Deleting unused types...");
  head = 0;
  v152 = 0u;
  LODWORD(src) = a2 & 0x80;
  v151 = nullptr;
  while ( 2 )
  {
    if ( (unsigned __int8)get_tinfo(&v151, head) )
    {
      *(_QWORD *)&v158 = 4;
      v157 = off_4B6D40;
      *((_QWORD *)&v158 + 1) = &v152;
      visit_subtypes(&v157, 0, &v151, 0, 0, v49, v123, v125);
    }
    fchunk = get_fchunk(head);
    v138 = fchunk;
    if ( fchunk && (unsigned __int8)get_func_frame(&v151, fchunk) )
    {
      v164 = nullptr;
      v167 = 1;
      v165 = 0;
      memset(v166, 0, sizeof(v166));
      tinfo_details = get_tinfo_details(v151, 13, &v164);
      v93 = v164;
      if ( tinfo_details )
      {
        v134 = &v164[9 * v165];
        if ( v164 != v134 )
        {
          v132 = (void **)v159;
          do
          {
            *((_QWORD *)&v159[0] + 1) = 4;
            *(_QWORD *)&v159[0] = off_4B6D40;
            *(_QWORD *)&v159[1] = &v152;
            visit_subtypes(v159, 0, &v93[4], 0, 0, v92, v123, v125);
            v93 += 9;
          }
          while ( v134 != v93 );
          v93 = v164;
        }
      }
      if ( v93 )
      {
        if ( (_QWORD)v165 )
        {
          v94 = v138;
          v139 = 0;
          v95 = v165;
          do
          {
            v96 = &v93[9 * v139];
            clear_tinfo_t(&v96[4]);
            v97 = v96[2].m128i_i64[1];
            if ( v97 )
            {
              v96[3].m128i_i64[0] = 0;
              qfree(v97);
            }
            v98 = v96[1].m128i_i64[0];
            if ( v98 )
            {
              v96[1].m128i_i64[1] = 0;
              qfree(v98);
            }
            ++v139;
            v93 = v164;
          }
          while ( v95 != v139 );
          v138 = v94;
        }
        *(_QWORD *)&v165 = 0;
        qfree(v93);
      }
    }
    v164 = nullptr;
    memset(v166, 0, sizeof(v166));
    v167 = 1;
    v165 = 0;
    if ( !(unsigned __int8)sub_2B32F0(*(_QWORD *)(n + 112), (__int64)&v164, head)
      || (v89 = v164, v90 = &v164[6 * v165], v164 == v90) )
    {
      if ( !v138 )
        goto LABEL_167;
      goto LABEL_101;
    }
    do
    {
      *(_QWORD *)&v161 = 4;
      v160 = off_4B6D40;
      *((_QWORD *)&v161 + 1) = &v152;
      visit_subtypes(&v160, 0, &v89[3], 0, 0, v53, v123, v125);
      v89 += 6;
    }
    while ( v90 != v89 );
    if ( v138 )
    {
LABEL_101:
      head = *(_QWORD *)(v138 + 8);
      goto LABEL_102;
    }
LABEL_167:
    head = next_head(head, -1);
LABEL_102:
    v54 = *(unsigned __int64 **)v166;
    if ( !*(_QWORD *)v166 )
      goto LABEL_113;
    v55 = **(_QWORD **)v166;
    v56 = **(_QWORD **)v166;
    if ( !*(_QWORD *)&v166[8] )
    {
      v52 = **(_QWORD **)v166 & 3LL;
      v51 = v52 | *(_QWORD *)v166 & 0xFFFFFFFFFFFFFFFCLL;
      **(_QWORD **)v166 = v51;
      *(__m128i *)(*(_QWORD *)v166 + 8LL) = _mm_unpacklo_epi64(
                                              (__m128i)*(unsigned __int64 *)v166,
                                              (__m128i)*(unsigned __int64 *)v166);
      **(_QWORD **)v166 &= ~1uLL;
      **(_QWORD **)v166 |= 2uLL;
      v60 = *(_QWORD *)v166;
      if ( !*(_QWORD *)v166 )
        goto LABEL_113;
      goto LABEL_163;
    }
    v57 = (_QWORD *)(v55 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (*(_BYTE *)(v55 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
      goto LABEL_112;
    v58 = (_QWORD *)v57[1];
    if ( (*(_BYTE *)v58 & 2) != 0 )
    {
      v59 = (_QWORD *)v57[2];
      if ( (*(_BYTE *)v59 & 2) == 0 )
      {
LABEL_107:
        sub_320F50(v59);
        goto LABEL_108;
      }
      goto LABEL_228;
    }
    sub_320F50(v58);
    v59 = (_QWORD *)v57[2];
    if ( (*(_BYTE *)v59 & 2) == 0 )
      goto LABEL_107;
LABEL_108:
    if ( (*(_BYTE *)v57 & 2) == 0 )
    {
LABEL_228:
      cleanup_argloc(v57 + 6);
      cleanup_argloc(v57 + 3);
      *v57 |= 2uLL;
    }
    if ( v56 > 3 )
      qfree(v57);
    v54 = *(unsigned __int64 **)v166;
    v56 = **(_QWORD **)v166;
LABEL_112:
    v52 = v56 & 3;
    v51 = v52 | (unsigned __int64)v54 & 0xFFFFFFFFFFFFFFFCLL;
    *v54 = v51;
    *(__m128i *)(*(_QWORD *)v166 + 8LL) = _mm_unpacklo_epi64(
                                            (__m128i)*(unsigned __int64 *)v166,
                                            (__m128i)*(unsigned __int64 *)v166);
    **(_QWORD **)v166 &= ~1uLL;
    **(_QWORD **)v166 |= 2uLL;
    v60 = *(_QWORD *)v166;
    *(_QWORD *)&v166[8] = 0;
    if ( *(_QWORD *)v166 )
LABEL_163:
      qfree(v60);
LABEL_113:
    v61 = (char **)v164;
    if ( v164 )
    {
      v62 = v165;
      if ( (_QWORD)v165 )
      {
        v63 = 0;
        do
        {
          v64 = &v61[12 * v63];
          v65 = v64[7];
          v66 = v64;
          if ( v65 )
          {
            v64[8] = nullptr;
            qfree(v65);
          }
          clear_tinfo_t(v66 + 6);
          v67 = v66[3];
          if ( v67 )
          {
            v66[4] = nullptr;
            qfree(v67);
          }
          ++v63;
          cleanup_argloc(v66);
          v61 = (char **)v164;
        }
        while ( v62 != v63 );
      }
      *(_QWORD *)&v165 = 0;
      qfree(v61);
    }
    if ( head != -1 )
      continue;
    break;
  }
  v68 = (unsigned int)src;
  if ( !(_DWORD)src )
  {
    v69 = off_4B6F20;
    do
    {
      while ( 1 )
      {
        v70 = *v69;
        if ( *v69 )
        {
          WORD4(v165) = 256;
          *(_QWORD *)&v165 = v70;
          idati = (__m128i *)get_idati(v61, v68, v51, v52);
          v61 = &v151;
          v68 = 61;
          v164 = idati;
          if ( (unsigned __int8)create_tinfo(&v151, 61, 61, &v164) )
            break;
        }
        if ( &unk_4B6F78 == (_UNKNOWN *)++v69 )
          goto LABEL_129;
      }
      v68 = 0;
      v61 = (char **)&v164;
      *(_QWORD *)&v165 = 4;
      v164 = (__m128i *)off_4B6D40;
      *((_QWORD *)&v165 + 1) = &v152;
      visit_subtypes(&v164, 0, &v151, 0, 0, v72, v123, v125);
      ++v69;
    }
    while ( &unk_4B6F78 != (_UNKNOWN *)v69 );
  }
LABEL_129:
  clear_tinfo_t(&v151);
  v73 = get_ordinal_limit(0);
  v74 = 1;
  if ( v73 > 1 )
  {
    do
    {
      while ( sub_5FEB0(&v152, v74) )
      {
        if ( v73 == ++v74 )
          goto LABEL_134;
      }
      del_numbered_type(0, v74++);
    }
    while ( v73 != v74 );
  }
LABEL_134:
  qfree(v152);
LABEL_135:
  callui(24, 10, 0, &callui, v44, v45, v123, v125, src, v132);
  if ( haystack )
  {
    *(_QWORD *)&v156 = 0;
    qfree(haystack);
  }
  if ( s1 )
  {
    *(_QWORD *)&v154 = 0;
    qfree(s1);
  }
  lock_func_range(v126, 0);
  return v183 - __readfsqword(0x28u);
}
