unsigned __int64 __fastcall sub_6D21D0(
        __int64 *a1,
        double a2,
        __m128 a3,
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
  unsigned __int64 *v12; // rax
  char *v13; // rsi
  __int64 *v14; // rbp
  __int64 *v15; // rax
  __int64 *v16; // r14
  char *v17; // rdi
  const char *v18; // rdi
  char *idati; // rax
  const char *v20; // rdx
  __m128i v21; // xmm0
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rbx
  __int64 v25; // r8
  __int64 v26; // r9
  unsigned __int64 v27; // rbp
  __int64 v28; // r12
  unsigned __int64 v29; // rbx
  unsigned __int64 v30; // rbp
  _QWORD *v31; // rax
  __int64 v32; // rax
  _QWORD *v33; // rsi
  __int64 v34; // rbp
  unsigned __int64 v35; // rbx
  unsigned __int64 v36; // rax
  _QWORD *v37; // rax
  __int64 v38; // r13
  int v39; // eax
  __int64 *v40; // r14
  char v41; // r12
  unsigned __int64 v42; // rax
  double v43; // xmm4_8
  double v44; // xmm5_8
  unsigned int v45; // r12d
  _DWORD *v46; // rax
  unsigned __int64 v47; // r13
  __int64 v48; // rax
  void **v49; // r14
  unsigned __int64 v50; // rdx
  unsigned __int64 v51; // rsi
  unsigned __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  char *v55; // r12
  void ***v56; // rax
  unsigned int v57; // ebp
  unsigned int v58; // ebx
  __int64 v59; // rax
  char v60; // r13
  __int64 v61; // rbp
  _QWORD *v62; // rax
  __int64 v63; // r14
  __int64 *v64; // r15
  char v65; // bl
  unsigned __int64 v66; // rax
  double v67; // xmm4_8
  double v68; // xmm5_8
  __int64 v70; // rbp
  unsigned __int64 v71; // rbx
  unsigned __int64 v72; // rax
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
  __int64 v84; // r12
  _QWORD *v85; // rsi
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
  char **v97; // [rsp+0h] [rbp-178h]
  unsigned __int64 v98; // [rsp+0h] [rbp-178h]
  __int64 v99; // [rsp+0h] [rbp-178h]
  __int64 *v100; // [rsp+8h] [rbp-170h]
  __int64 **v101; // [rsp+10h] [rbp-168h]
  char *v102; // [rsp+18h] [rbp-160h]
  __int64 *v103; // [rsp+20h] [rbp-158h]
  int n; // [rsp+28h] [rbp-150h]
  __int64 na; // [rsp+28h] [rbp-150h]
  int v106; // [rsp+30h] [rbp-148h]
  __int64 v107; // [rsp+38h] [rbp-140h] BYREF
  char *s1[3]; // [rsp+40h] [rbp-138h] BYREF
  int v109; // [rsp+58h] [rbp-120h] BYREF
  void *v110; // [rsp+60h] [rbp-118h]
  int *v111; // [rsp+68h] [rbp-110h]
  int *v112; // [rsp+70h] [rbp-108h]
  __int64 v113; // [rsp+78h] [rbp-100h]
  void *ptr[2]; // [rsp+80h] [rbp-F8h] BYREF
  __int64 v115[2]; // [rsp+90h] [rbp-E8h]
  void *v116; // [rsp+A0h] [rbp-D8h]
  __int64 v117; // [rsp+A8h] [rbp-D0h]
  void *v118; // [rsp+B0h] [rbp-C8h]
  __int64 v119; // [rsp+B8h] [rbp-C0h]
  int v120; // [rsp+C0h] [rbp-B8h]
  __int64 v121; // [rsp+C8h] [rbp-B0h]
  __int64 v122; // [rsp+D0h] [rbp-A8h] BYREF
  void *s; // [rsp+D8h] [rbp-A0h]
  unsigned __int64 v124; // [rsp+E0h] [rbp-98h]
  void *v125; // [rsp+E8h] [rbp-90h] BYREF
  unsigned __int64 v126; // [rsp+F0h] [rbp-88h]
  int v127; // [rsp+F8h] [rbp-80h] BYREF
  __int64 v128; // [rsp+100h] [rbp-78h]
  __int64 v129; // [rsp+108h] [rbp-70h] BYREF
  char s2[40]; // [rsp+110h] [rbp-68h] BYREF
  unsigned __int64 v131; // [rsp+138h] [rbp-40h]

  v9 = 0;
  v100 = a1;
  v131 = __readfsqword(0x28u);
  v10 = *(__int64 **)(*a1 + 1672);
  func_qty = get_func_qty();
  v97 = s1;
  if ( func_qty )
  {
    do
    {
      v12 = sub_5CAAB0((__int64)v10, v9);
      v13 = (char *)v12[3];
      v14 = (__int64 *)v12;
      v15 = sub_5310F0((__int64)v100, (unsigned __int64)v13);
      v16 = v15;
      if ( v15 )
      {
        v17 = (char *)*v15;
        *((_DWORD *)v15 + 7) = *((_DWORD *)v15 + 7) & 0xFFFFEFAF | 0x40;
        if ( !(unsigned __int8)is_mapped(v17) )
        {
          sub_5BC640(v10, (__int64)s2, 32, *v14);
          memset(s1, 0, sizeof(s1));
          if ( !sub_5301C0(v100, (void **)s1, *v16) )
            goto LABEL_8;
          v18 = haystack;
          if ( s1[1] )
            v18 = s1[0];
          v13 = s2;
          if ( strcmp(v18, s2) )
          {
LABEL_8:
            v13 = (char *)v16;
            sub_52F580(v100, (__int64)v16, s2);
          }
          v17 = s1[0];
          if ( s1[0] )
          {
            s1[1] = nullptr;
            qfree(s1[0]);
          }
        }
        idati = (char *)v10[1];
        v107 = 0;
        s1[1] = s2;
        LOWORD(s1[2]) = 256;
        if ( !idati )
          idati = (char *)get_idati(v17, v13);
        s1[0] = idati;
        if ( (unsigned __int8)create_tinfo(&v107, 61, 61, s1) && (get_tinfo_property(v107, 2) & 0x2F) == 0xD )
        {
          memset(s1, 0, sizeof(s1));
          sub_35A790(s1);
          v20 = haystack;
          if ( s1[1] )
            v20 = s1[0];
          if ( !(unsigned int)set_tinfo_property4(&v107, 4, v20, 1025, 0, 0) )
          {
            tinfo_property = get_tinfo_property(v107, 7);
            sub_651240(v10, v10[1], tinfo_property, 0);
          }
          if ( s1[0] )
          {
            s1[1] = nullptr;
            qfree(s1[0]);
          }
        }
        clear_tinfo_t(&v107);
      }
      ++v9;
    }
    while ( func_qty != v9 );
  }
  v21 = _mm_loadl_epi64((const __m128i *)(*v100 + 1672));
  v109 = 0;
  v111 = &v109;
  v112 = &v109;
  *(__m128i *)s1 = _mm_unpacklo_epi64(v21, v21);
  *(_OWORD *)ptr = 0;
  *(_OWORD *)v115 = 0;
  v103 = &v122;
  v116 = &v122;
  v110 = nullptr;
  v113 = 0;
  v117 = 1;
  v118 = nullptr;
  v119 = 0;
  v121 = 0;
  v122 = 0;
  v102 = (char *)&v129;
  s = &v129;
  v124 = 1;
  v125 = nullptr;
  v126 = 0;
  v128 = 0;
  v129 = 0;
  v120 = 1065353216;
  v127 = 1065353216;
  v24 = sub_52FD10((__int64)v100);
  v27 = 0;
  v101 = (__int64 **)s1;
  if ( v24 )
  {
    do
      sub_6CE820(
        v101,
        v27++,
        v22,
        v23,
        v25,
        v26,
        (__int64)v97,
        (int)v100,
        (int)v101,
        (int)v102,
        (int)v103,
        n,
        v106,
        v107,
        (int)s1[0],
        (int)s1[1],
        (__int64)s1[2]);
    while ( v24 != v27 );
  }
  v28 = sub_52FD10((__int64)v100);
  v29 = 0;
  if ( v28 )
  {
    do
    {
      while ( 1 )
      {
        v30 = sub_52FDF0(*(_QWORD *)(*(_QWORD *)s1[0] + 1872LL), v29);
        v31 = sub_5310F0(*(_QWORD *)(*(_QWORD *)s1[0] + 1872LL), v30);
        if ( v31 )
        {
          if ( (*((_BYTE *)v31 + 28) & 0x40) == 0
            && !(unsigned __int8)sub_6CF740(
                                   (__int64)s1,
                                   (__int64)v31,
                                   COERCE_DOUBLE(1065353216),
                                   *(double *)a3.m128_u64) )
          {
            break;
          }
        }
        if ( v28 == ++v29 )
          goto LABEL_34;
      }
      v32 = v115[0];
      v33 = ptr[1];
      if ( v115[1] < (unsigned __int64)(v115[0] + 1) )
      {
        ptr[1] = (void *)qvector_reserve(&ptr[1], ptr[1], v115[0] + 1, 8);
        v33 = ptr[1];
        v32 = v115[0];
      }
      ++v29;
      v33[v32] = v30;
      ++v115[0];
    }
    while ( v28 != v29 );
  }
LABEL_34:
  sub_6CE4C0(s1);
  sub_6CF1E0((__int64 **)s1);
  v34 = sub_52FD10((__int64)v100);
  v35 = 0;
  if ( v34 )
  {
    while ( 1 )
    {
      v36 = sub_52FDF0((__int64)v100, v35);
      v37 = sub_5310F0((__int64)v100, v36);
      v38 = (__int64)v37;
      if ( !v37 )
        goto LABEL_36;
      v39 = *((_DWORD *)v37 + 7);
      if ( (v39 & 0x40) != 0 )
        goto LABEL_36;
      v40 = (__int64 *)s1[0];
      v41 = (v39 & 8) == 0;
      v42 = sub_6BB440((_QWORD *)s1[0], *((_QWORD *)s1[0] + 1), *(_DWORD *)v38);
      sub_6BC950(v40, v42, v41);
      sub_6BBC80((__int64 *)s1[0], *(_QWORD *)v38, 1, (*(_BYTE *)(v38 + 28) & 0x20) != 0);
      if ( !(unsigned __int8)sub_6D1D10(
                               *(__int64 **)(*(_QWORD *)s1[0] + 1872LL),
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
        v83 = v115[0];
        v84 = *(_QWORD *)v38;
        v85 = ptr[1];
        if ( v115[1] < (unsigned __int64)(v115[0] + 1) )
        {
          ptr[1] = (void *)qvector_reserve(&ptr[1], ptr[1], v115[0] + 1, 8);
          v85 = ptr[1];
          v83 = v115[0];
        }
        v85[v83] = v84;
        ++v115[0];
        goto LABEL_36;
      }
      *(_DWORD *)(v38 + 28) |= 0x1000u;
      v45 = *(_DWORD *)(v38 + 32);
      if ( !v126 )
      {
        v46 = v125;
        if ( v125 )
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
        v98 = v45;
        v47 = v45 % v124;
        goto LABEL_45;
      }
      v98 = v45;
      v86 = *((_QWORD **)s + v45 % v124);
      v47 = v45 % v124;
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
          if ( *((unsigned int *)v88 + 2) % v124 != v45 % v124 )
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
        v49 = (void **)v48;
        v50 = v126;
        *(_QWORD *)v48 = 0;
        v51 = v124;
        if ( (unsigned __int8)std::__detail::_Prime_rehash_policy::_M_need_rehash(
                                (std::__detail::_Prime_rehash_policy *)&v127,
                                v124,
                                v50,
                                1u) )
        {
          v90 = v52;
          if ( v52 == 1 )
          {
            v129 = 0;
            v55 = v102;
          }
          else
          {
            if ( v52 >> 60 )
            {
              if ( v52 >> 61 )
                sub_2EBC5E(&v127, v51, v52, v53, v54);
              std::__throw_bad_alloc();
            }
            na = 8 * v52;
            v55 = (char *)operator new(8 * v52);
            memset(v55, 0, na);
          }
          v91 = (unsigned int *)v125;
          v92 = 0;
          v125 = nullptr;
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
            *(_QWORD *)v93 = v125;
            v125 = v93;
            *v95 = &v125;
            if ( *(_QWORD *)v93 )
              *(_QWORD *)&v55[8 * v92] = v93;
            v92 = v94;
          }
LABEL_103:
          if ( s != v102 )
            operator delete(s, 8 * v124);
          v124 = v90;
          s = v55;
          v47 = v98 % v90;
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
          v96 = (unsigned int *)v125;
          v125 = v49;
          *v49 = v96;
          if ( v96 )
          {
            *(_QWORD *)&v55[8 * (v96[2] % v124)] = v49;
            v56 = (void ***)((char *)s + 8 * v47);
          }
          *v56 = &v125;
        }
        ++v126;
        if ( v34 == ++v35 )
          break;
      }
    }
  }
  v57 = sub_64E0C0((__int64)v10, v10[1]);
  v58 = 1;
  if ( v57 > 1 )
  {
    do
      sub_6CB7D0((unsigned __int64)s1, v58++, COERCE_DOUBLE(1065353216), a3);
    while ( v57 != v58 );
  }
  v59 = v115[0];
  v60 = 0;
  v99 = v115[0];
  if ( v115[0] )
  {
    while ( 1 )
    {
      v61 = v59 - 1;
      if ( v59 - 1 < 0 )
        goto LABEL_59;
      while ( 1 )
      {
        do
        {
          v62 = sub_5310F0(*(_QWORD *)(*(_QWORD *)s1[0] + 1872LL), *((_QWORD *)ptr[1] + v61));
          v63 = (__int64)v62;
          if ( !v62 )
          {
            if ( !under_debugger )
              interr(3054);
            BUG();
          }
          v64 = (__int64 *)s1[0];
          v65 = (*((_BYTE *)v62 + 28) & 8) == 0;
          v66 = sub_6BB440((_QWORD *)s1[0], *((_QWORD *)s1[0] + 1), *(_DWORD *)v62);
          sub_6BC950(v64, v66, v65);
          sub_6BBC80((__int64 *)s1[0], *(_QWORD *)v63, 1, (*(_BYTE *)(v63 + 28) & 0x20) != 0);
          if ( (unsigned __int8)sub_6D1D10(
                                  *(__int64 **)(*(_QWORD *)s1[0] + 1872LL),
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
            *(_DWORD *)(v63 + 28) |= 0x1000u;
            v60 = 0;
            memmove((char *)ptr[1] + 8 * v61, (char *)ptr[1] + 8 * v61 + 8, 8 * v115[0]-- - 8 - 8 * v61);
          }
        }
        while ( v61-- != 0 );
        v59 = v115[0];
LABEL_59:
        if ( v99 != v59 )
          break;
        if ( !v60 )
        {
          v60 = 1;
          v61 = v99 - 1;
          if ( v99 - 1 >= 0 )
            continue;
        }
        goto LABEL_64;
      }
      if ( !v59 )
        break;
      v99 = v59;
    }
  }
LABEL_64:
  sub_6CE4C0(s1);
  v70 = sub_52FD10((__int64)v100);
  v71 = 0;
  if ( v70 )
  {
    do
    {
      while ( 1 )
      {
        v72 = sub_52FDF0((__int64)v100, v71);
        v73 = (unsigned int *)sub_5310F0(*(_QWORD *)(*(_QWORD *)s1[0] + 1872LL), v72);
        if ( v73 )
        {
          if ( (int)v73[8] > 0 )
            break;
        }
        if ( v70 == ++v71 )
          goto LABEL_70;
      }
      ptr[0] = v73;
      v74 = sub_60CC60((__int64)s1[0], *((_QWORD *)s1[0] + 1), v73[8], nullptr);
      sub_6CBFC0((__int64 **)&s1[1], v74);
      ++v71;
    }
    while ( v70 != v71 );
  }
LABEL_70:
  v75 = v125;
  if ( v125 )
  {
    do
    {
      v76 = v75;
      v75 = (_QWORD *)*v75;
      operator delete(v76, 0x10u);
    }
    while ( v75 );
  }
  memset(s, 0, 8 * v124);
  v126 = 0;
  v125 = nullptr;
  if ( s != v102 )
    operator delete(s, 8 * v124);
  v77 = v118;
  if ( v118 )
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
  memset(v116, 0, 8 * v117);
  v119 = 0;
  v118 = nullptr;
  if ( v116 != v103 )
    operator delete(v116, 8 * v117);
  if ( ptr[1] )
  {
    v115[0] = 0;
    qfree(ptr[1]);
  }
  v80 = (_QWORD **)v110;
  if ( v110 )
  {
    do
    {
      sub_6CA010(v80[3]);
      v81 = v80;
      v80 = (_QWORD **)v80[2];
      operator delete(v81, 0x30u);
    }
    while ( v80 );
  }
  return v131 - __readfsqword(0x28u);
}
