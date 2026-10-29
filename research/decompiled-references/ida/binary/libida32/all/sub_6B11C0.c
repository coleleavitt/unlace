unsigned __int64 __fastcall sub_6B11C0(
        __int64 *a1,
        double a2,
        __m128i a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8,
        __m128 a9)
{
  unsigned __int64 v9; // rbx
  __int64 *v10; // r15
  __int64 func_qty; // r13
  unsigned int *v12; // rax
  char *v13; // rsi
  int *v14; // rbp
  unsigned int *v15; // rax
  unsigned int *v16; // r14
  unsigned __int64 v17; // rdi
  const char *v18; // rdi
  char *idati; // rax
  const char *v20; // rdx
  __m128i v21; // xmm0
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rbx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rbp
  __int64 v28; // r12
  __int64 v29; // rbx
  unsigned int v30; // ebp
  unsigned int *v31; // rax
  __int64 v32; // rax
  _DWORD *v33; // rsi
  __int64 v34; // rbp
  __int64 v35; // rbx
  unsigned int v36; // eax
  _DWORD *v37; // rax
  __int64 v38; // r13
  int v39; // eax
  __int64 *v40; // r14
  char v41; // r12
  unsigned int v42; // eax
  double v43; // xmm4_8
  double v44; // xmm5_8
  unsigned int v45; // r12d
  _DWORD *v46; // rax
  unsigned __int64 v47; // r13
  __int64 v48; // rax
  _QWORD *v49; // r14
  unsigned __int64 v50; // rdx
  unsigned __int64 v51; // rsi
  unsigned __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  char *v55; // r12
  void ***v56; // rax
  unsigned int v57; // ebp
  unsigned int v58; // ebx
  void *v59; // rax
  char v60; // r13
  signed __int64 v61; // rbp
  unsigned int *v62; // rax
  __int64 v63; // r15
  __int64 *v64; // r14
  char v65; // bl
  unsigned int v66; // eax
  double v67; // xmm4_8
  double v68; // xmm5_8
  __int64 v70; // rbp
  __int64 v71; // rbx
  unsigned int v72; // eax
  unsigned int *v73; // rax
  unsigned int v74; // eax
  _QWORD *v75; // rbx
  void *v76; // rdi
  _QWORD *v77; // rbx
  _QWORD *v78; // rbp
  void *v79; // rdi
  _QWORD **v80; // rbx
  void *v81; // rdi
  __int64 v83; // rax
  unsigned int v84; // r12d
  _DWORD *v85; // rsi
  _QWORD *v86; // r9
  _QWORD *v87; // rax
  _QWORD *v88; // rsi
  unsigned int tinfo_property; // eax
  unsigned __int64 v90; // r13
  unsigned int *v91; // rcx
  unsigned __int64 v92; // rdi
  unsigned int *v93; // rsi
  unsigned __int64 v94; // rdx
  void ***v95; // rax
  unsigned int *v96; // rdx
  __int64 *v97; // [rsp+0h] [rbp-178h]
  char **v98; // [rsp+8h] [rbp-170h]
  unsigned __int64 v99; // [rsp+8h] [rbp-170h]
  void *v100; // [rsp+8h] [rbp-170h]
  __int64 **v101; // [rsp+10h] [rbp-168h]
  int n; // [rsp+18h] [rbp-160h]
  signed __int64 na; // [rsp+18h] [rbp-160h]
  __int64 nb; // [rsp+18h] [rbp-160h]
  char *v105; // [rsp+20h] [rbp-158h]
  __int64 *v106; // [rsp+28h] [rbp-150h]
  int v107; // [rsp+30h] [rbp-148h]
  __int64 v108; // [rsp+38h] [rbp-140h] BYREF
  char *s1[3]; // [rsp+40h] [rbp-138h] BYREF
  int v110; // [rsp+58h] [rbp-120h] BYREF
  void *v111; // [rsp+60h] [rbp-118h]
  int *v112; // [rsp+68h] [rbp-110h]
  int *v113; // [rsp+70h] [rbp-108h]
  __int64 v114; // [rsp+78h] [rbp-100h]
  void *ptr[2]; // [rsp+80h] [rbp-F8h] BYREF
  int v116[4]; // [rsp+90h] [rbp-E8h]
  void *v117; // [rsp+A0h] [rbp-D8h]
  __int64 v118; // [rsp+A8h] [rbp-D0h]
  void *v119; // [rsp+B0h] [rbp-C8h]
  __int64 v120; // [rsp+B8h] [rbp-C0h]
  int v121; // [rsp+C0h] [rbp-B8h]
  __int64 v122; // [rsp+C8h] [rbp-B0h]
  __int64 v123; // [rsp+D0h] [rbp-A8h] BYREF
  void *s; // [rsp+D8h] [rbp-A0h]
  unsigned __int64 v125; // [rsp+E0h] [rbp-98h]
  void *v126; // [rsp+E8h] [rbp-90h] BYREF
  unsigned __int64 v127; // [rsp+F0h] [rbp-88h]
  int v128; // [rsp+F8h] [rbp-80h] BYREF
  __int64 v129; // [rsp+100h] [rbp-78h]
  __int64 v130; // [rsp+108h] [rbp-70h] BYREF
  char s2[40]; // [rsp+110h] [rbp-68h] BYREF
  unsigned __int64 v132; // [rsp+138h] [rbp-40h]

  v9 = 0;
  v97 = a1;
  v132 = __readfsqword(0x28u);
  v10 = *(__int64 **)(*a1 + 1480);
  func_qty = get_func_qty(a1);
  v98 = s1;
  if ( func_qty )
  {
    do
    {
      v12 = sub_5AFD80((__int64)v10, v9);
      v13 = (char *)v12[4];
      v14 = (int *)v12;
      v15 = sub_518BB0((__int64)v97, (unsigned int)v13);
      v16 = v15;
      if ( v15 )
      {
        v17 = *v15;
        v15[5] = v15[5] & 0xFFFFEFAF | 0x40;
        if ( !(unsigned __int8)is_mapped(v17) )
        {
          sub_5A2050(v10, (__int64)s2, 32, *v14);
          memset(s1, 0, sizeof(s1));
          if ( !sub_517DD0(v97, (void **)s1, *v16) )
            goto LABEL_8;
          v18 = haystack;
          if ( s1[1] )
            v18 = s1[0];
          v13 = s2;
          if ( strcmp(v18, s2) )
          {
LABEL_8:
            v13 = (char *)v16;
            sub_517140(v97, (__int64)v16, s2);
          }
          v17 = (unsigned __int64)s1[0];
          if ( s1[0] )
          {
            s1[1] = nullptr;
            qfree(s1[0]);
          }
        }
        idati = (char *)v10[1];
        v108 = 0;
        s1[1] = s2;
        LOWORD(s1[2]) = 256;
        if ( !idati )
          idati = (char *)get_idati(v17, v13);
        s1[0] = idati;
        if ( (unsigned __int8)create_tinfo(&v108, 61, 61, s1) && (get_tinfo_property(v108, 2) & 0x2F) == 0xD )
        {
          memset(s1, 0, sizeof(s1));
          sub_3573A0(s1);
          v20 = haystack;
          if ( s1[1] )
            v20 = s1[0];
          if ( !(unsigned int)set_tinfo_property4(&v108, 4, v20, 1025, 0, 0) )
          {
            tinfo_property = get_tinfo_property(v108, 7);
            sub_633C40(v10, v10[1], tinfo_property, 0);
          }
          if ( s1[0] )
          {
            s1[1] = nullptr;
            qfree(s1[0]);
          }
        }
        clear_tinfo_t(&v108);
      }
      ++v9;
    }
    while ( func_qty != v9 );
  }
  v21 = _mm_loadl_epi64((const __m128i *)(*v97 + 1480));
  v110 = 0;
  v112 = &v110;
  v113 = &v110;
  *(__m128i *)s1 = _mm_unpacklo_epi64(v21, v21);
  *(_OWORD *)ptr = 0;
  *(_OWORD *)v116 = 0;
  v106 = &v123;
  v117 = &v123;
  v111 = nullptr;
  v114 = 0;
  v118 = 1;
  v119 = nullptr;
  v120 = 0;
  v122 = 0;
  v123 = 0;
  v105 = (char *)&v130;
  s = &v130;
  v125 = 1;
  v126 = nullptr;
  v127 = 0;
  v129 = 0;
  v130 = 0;
  v121 = 1065353216;
  v128 = 1065353216;
  v24 = sub_517910((__int64)v97);
  v27 = 0;
  v101 = (__int64 **)s1;
  if ( v24 )
  {
    do
      sub_6AD860(
        v101,
        v27++,
        v22,
        v23,
        v25,
        v26,
        (__int64)v97,
        (int)v98,
        (int)v101,
        n,
        (int)v105,
        (int)v106,
        v107,
        v108,
        (int)s1[0],
        (int)s1[1],
        (__int64)s1[2]);
    while ( v24 != v27 );
  }
  v28 = sub_517910((__int64)v97);
  v29 = 0;
  if ( v28 )
  {
    do
    {
      while ( 1 )
      {
        v30 = sub_5179F0(*(_QWORD *)(*(_QWORD *)s1[0] + 1680LL), v29);
        v31 = sub_518BB0(*(_QWORD *)(*(_QWORD *)s1[0] + 1680LL), v30);
        if ( v31 )
        {
          if ( (v31[5] & 0x40) == 0
            && !(unsigned __int8)sub_6AE770((__int64)s1, v31, COERCE_DOUBLE(1065353216), *(double *)a3.m128i_i64) )
          {
            break;
          }
        }
        if ( v28 == ++v29 )
          goto LABEL_34;
      }
      v32 = *(_QWORD *)v116;
      v33 = ptr[1];
      if ( *(_QWORD *)&v116[2] < (unsigned __int64)(*(_QWORD *)v116 + 1LL) )
      {
        ptr[1] = (void *)qvector_reserve(&ptr[1], ptr[1], *(_QWORD *)v116 + 1LL, 4);
        v33 = ptr[1];
        v32 = *(_QWORD *)v116;
      }
      ++v29;
      v33[v32] = v30;
      ++*(_QWORD *)v116;
    }
    while ( v28 != v29 );
  }
LABEL_34:
  sub_6AD4F0(s1);
  sub_6AE210((__int64 **)s1);
  v34 = sub_517910((__int64)v97);
  v35 = 0;
  if ( v34 )
  {
    while ( 1 )
    {
      v36 = sub_5179F0((__int64)v97, v35);
      v37 = sub_518BB0((__int64)v97, v36);
      v38 = (__int64)v37;
      if ( !v37 )
        goto LABEL_36;
      v39 = v37[5];
      if ( (v39 & 0x40) != 0 )
        goto LABEL_36;
      v40 = (__int64 *)s1[0];
      v41 = (v39 & 8) == 0;
      v42 = sub_69AA70((_QWORD *)s1[0], *((_QWORD *)s1[0] + 1), *(_DWORD *)v38);
      sub_69BF00(v40, v42, v41);
      sub_69B2A0((__int64 *)s1[0], *(_DWORD *)v38, 1u, (*(_BYTE *)(v38 + 20) & 0x20) != 0);
      if ( !(unsigned __int8)sub_6B0D00(
                               *(__int64 **)(*(_QWORD *)s1[0] + 1680LL),
                               v38,
                               0,
                               COERCE_DOUBLE(1065353216),
                               a3,
                               a4,
                               a5,
                               v43,
                               v44,
                               a8,
                               a9) )
      {
        v83 = *(_QWORD *)v116;
        v84 = *(_DWORD *)v38;
        v85 = ptr[1];
        if ( *(_QWORD *)&v116[2] < (unsigned __int64)(*(_QWORD *)v116 + 1LL) )
        {
          ptr[1] = (void *)qvector_reserve(&ptr[1], ptr[1], *(_QWORD *)v116 + 1LL, 4);
          v85 = ptr[1];
          v83 = *(_QWORD *)v116;
        }
        v85[v83] = v84;
        ++*(_QWORD *)v116;
        goto LABEL_36;
      }
      *(_DWORD *)(v38 + 20) |= 0x1000u;
      v45 = *(_DWORD *)(v38 + 24);
      if ( !v127 )
      {
        v46 = v126;
        if ( v126 )
        {
          while ( v45 != v46[2] )
          {
            v46 = *(_DWORD **)v46;
            if ( !v46 )
              goto LABEL_44;
          }
          goto LABEL_36;
        }
LABEL_44:
        v99 = v45;
        v47 = v45 % v125;
        goto LABEL_45;
      }
      v99 = v45;
      v86 = *((_QWORD **)s + v45 % v125);
      v47 = v45 % v125;
      if ( !v86 )
        goto LABEL_45;
      v87 = (_QWORD *)*v86;
      if ( v45 != *(_DWORD *)(*v86 + 8LL) )
      {
        do
        {
          v88 = (_QWORD *)*v87;
          if ( !*v87 )
            goto LABEL_45;
          v86 = v87;
          if ( *((unsigned int *)v88 + 2) % v125 != v45 % v125 )
            goto LABEL_45;
          v87 = (_QWORD *)*v87;
        }
        while ( v45 != *((_DWORD *)v88 + 2) );
      }
      if ( v86 && *v86 )
      {
LABEL_36:
        if ( v34 == ++v35 )
          break;
      }
      else
      {
LABEL_45:
        v48 = operator new(0x10u);
        *(_DWORD *)(v48 + 8) = v45;
        v49 = (_QWORD *)v48;
        v50 = v127;
        *(_QWORD *)v48 = 0;
        v51 = v125;
        if ( (unsigned __int8)std::__detail::_Prime_rehash_policy::_M_need_rehash(
                                (std::__detail::_Prime_rehash_policy *)&v128,
                                v125,
                                v50,
                                1u) )
        {
          v90 = v52;
          if ( v52 == 1 )
          {
            v130 = 0;
            v55 = v105;
          }
          else
          {
            if ( v52 >> 60 )
            {
              if ( v52 >> 61 )
                sub_2E883E(&v128, v51, v52, v53, v54);
              std::__throw_bad_alloc();
            }
            nb = 8 * v52;
            v55 = (char *)operator new(8 * v52);
            memset(v55, 0, nb);
          }
          v91 = (unsigned int *)v126;
          v92 = 0;
          v126 = nullptr;
          while ( v91 )
          {
            while ( 1 )
            {
              v93 = v91;
              v91 = *(unsigned int **)v91;
              v94 = v93[2] % v90;
              v95 = (void ***)&v55[8 * v94];
              if ( !*v95 )
                break;
              *(_QWORD *)v93 = **v95;
              **v95 = v93;
              if ( !v91 )
                goto LABEL_103;
            }
            *(_QWORD *)v93 = v126;
            v126 = v93;
            *v95 = &v126;
            if ( *(_QWORD *)v93 )
              *(_QWORD *)&v55[8 * v92] = v93;
            v92 = v94;
          }
LABEL_103:
          if ( s != v105 )
            operator delete(s, 8 * v125);
          v125 = v90;
          s = v55;
          v47 = v99 % v90;
        }
        else
        {
          v55 = (char *)s;
        }
        v56 = (void ***)&v55[8 * v47];
        if ( *v56 )
        {
          *v49 = **v56;
          **v56 = v49;
        }
        else
        {
          v96 = (unsigned int *)v126;
          v126 = v49;
          *v49 = v96;
          if ( v96 )
          {
            *(_QWORD *)&v55[8 * (v96[2] % v125)] = v49;
            v56 = (void ***)((char *)s + 8 * v47);
          }
          *v56 = &v126;
        }
        ++v127;
        if ( v34 == ++v35 )
          break;
      }
    }
  }
  v57 = sub_630AA0((__int64)v10, v10[1]);
  v58 = 1;
  if ( v57 > 1 )
  {
    do
      sub_6AA870((unsigned __int64)s1, v58++, COERCE_DOUBLE(1065353216), *(double *)a3.m128i_i64);
    while ( v57 != v58 );
  }
  v59 = *(void **)v116;
  v60 = 0;
  v100 = *(void **)v116;
  if ( *(_QWORD *)v116 )
  {
    while ( 1 )
    {
      na = (signed __int64)v59 - 1;
      v61 = (signed __int64)v59 - 1;
      if ( (__int64)v59 - 1 < 0 )
        goto LABEL_59;
      while ( 1 )
      {
        do
        {
          v62 = sub_518BB0(*(_QWORD *)(*(_QWORD *)s1[0] + 1680LL), *((_DWORD *)ptr[1] + v61));
          v63 = (__int64)v62;
          if ( !v62 )
          {
            if ( !under_debugger )
              interr(3054);
            BUG();
          }
          v64 = (__int64 *)s1[0];
          v65 = (v62[5] & 8) == 0;
          v66 = sub_69AA70((_QWORD *)s1[0], *((_QWORD *)s1[0] + 1), *v62);
          sub_69BF00(v64, v66, v65);
          sub_69B2A0((__int64 *)s1[0], *(_DWORD *)v63, 1u, (*(_BYTE *)(v63 + 20) & 0x20) != 0);
          if ( (unsigned __int8)sub_6B0D00(
                                  *(__int64 **)(*(_QWORD *)s1[0] + 1680LL),
                                  v63,
                                  v60,
                                  COERCE_DOUBLE(1065353216),
                                  a3,
                                  a4,
                                  a5,
                                  v67,
                                  v68,
                                  a8,
                                  a9) )
          {
            *(_DWORD *)(v63 + 20) |= 0x1000u;
            v60 = 0;
            memmove((char *)ptr[1] + 4 * v61, (char *)ptr[1] + 4 * v61 + 4, 4LL * *(_QWORD *)v116 - 4 - 4 * v61);
            --*(_QWORD *)v116;
          }
        }
        while ( v61-- != 0 );
        v59 = *(void **)v116;
LABEL_59:
        if ( v59 != v100 )
          break;
        if ( !v60 )
        {
          v60 = 1;
          v61 = na;
          if ( na >= 0 )
            continue;
        }
        goto LABEL_64;
      }
      if ( !v59 )
        break;
      v100 = v59;
    }
  }
LABEL_64:
  sub_6AD4F0(s1);
  v70 = sub_517910((__int64)v97);
  v71 = 0;
  if ( v70 )
  {
    do
    {
      while ( 1 )
      {
        v72 = sub_5179F0((__int64)v97, v71);
        v73 = sub_518BB0(*(_QWORD *)(*(_QWORD *)s1[0] + 1680LL), v72);
        if ( v73 )
        {
          if ( (int)v73[6] > 0 )
            break;
        }
        if ( v70 == ++v71 )
          goto LABEL_70;
      }
      ptr[0] = v73;
      v74 = sub_5F0C80((__int64)s1[0], *((_QWORD *)s1[0] + 1), v73[6], nullptr);
      sub_6AB040((__int64 *)&s1[1], v74);
      ++v71;
    }
    while ( v70 != v71 );
  }
LABEL_70:
  v75 = v126;
  if ( v126 )
  {
    do
    {
      v76 = v75;
      v75 = (_QWORD *)*v75;
      operator delete(v76, 0x10u);
    }
    while ( v75 );
  }
  memset(s, 0, 8 * v125);
  v127 = 0;
  v126 = nullptr;
  if ( s != v105 )
    operator delete(s, 8 * v125);
  v77 = v119;
  if ( v119 )
  {
    do
    {
      v78 = v77;
      v77 = (_QWORD *)*v77;
      v79 = (void *)v78[2];
      if ( v79 )
      {
        v78[3] = 0;
        qfree(v79);
      }
      operator delete(v78, 0x28u);
    }
    while ( v77 );
  }
  memset(v117, 0, 8 * v118);
  v120 = 0;
  v119 = nullptr;
  if ( v117 != v106 )
    operator delete(v117, 8 * v118);
  if ( ptr[1] )
  {
    *(_QWORD *)v116 = 0;
    qfree(ptr[1]);
  }
  v80 = (_QWORD **)v111;
  if ( v111 )
  {
    do
    {
      sub_6A90D0(v80[3]);
      v81 = v80;
      v80 = (_QWORD **)v80[2];
      operator delete(v81, 0x30u);
    }
    while ( v80 );
  }
  return v132 - __readfsqword(0x28u);
}

