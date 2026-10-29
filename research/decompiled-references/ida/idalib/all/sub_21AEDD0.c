_QWORD *__fastcall sub_21AEDD0(_QWORD *a1, void **a2, __int64 a3)
{
  __int64 v4; // rbx
  unsigned int v5; // eax
  char *v6; // r12
  char *v7; // rsi
  char *v8; // rax
  _QWORD *p_src; // r15
  char v10; // al
  int v11; // eax
  _BYTE *v12; // rsi
  unsigned __int64 v13; // rdx
  _BYTE *v14; // rdi
  size_t v15; // rax
  unsigned __int64 v16; // r10
  __m128i *v17; // r8
  __m128i *v18; // rbp
  void **v19; // rbx
  size_t v20; // rbp
  void **v21; // r14
  __m128i *v22; // r12
  __int64 v23; // rax
  __int64 *v24; // rdx
  __int64 *v25; // r15
  unsigned int v26; // r13d
  __m128i *v27; // rax
  char v28; // dl
  __int64 v29; // rsi
  void **v30; // rcx
  size_t v31; // r14
  size_t v32; // rax
  size_t v33; // rbp
  _BYTE *v34; // rax
  size_t v35; // r13
  unsigned __int64 v36; // rdx
  _BYTE *v37; // rax
  size_t v38; // rbp
  unsigned __int64 v39; // rdx
  size_t v40; // rax
  _BYTE *v41; // rcx
  size_t v42; // rbp
  unsigned __int64 v43; // rdx
  __int64 v44; // r13
  __m128i *v45; // rdi
  char *v46; // rbx
  char *v47; // rdi
  char *v48; // rbp
  size_t v49; // rdx
  size_t v50; // r13
  size_t v51; // rcx
  size_t v52; // rdx
  const void *v53; // rsi
  const void *v54; // rdi
  __int64 v55; // rax
  size_t v56; // rax
  void **v57; // r14
  void **v58; // rbp
  __int64 v59; // rsi
  __m128i *v60; // r14
  void **v61; // rbp
  void **v62; // rbx
  _BYTE *v64; // rdi
  _BYTE *v65; // rdi
  _BYTE *v66; // rdi
  __int64 v67; // [rsp+0h] [rbp-268h]
  __int64 v68; // [rsp+10h] [rbp-258h]
  void **v69; // [rsp+18h] [rbp-250h] BYREF
  unsigned __int64 v70; // [rsp+20h] [rbp-248h]
  char *v71; // [rsp+28h] [rbp-240h]
  void *s2; // [rsp+30h] [rbp-238h]
  _QWORD *v73; // [rsp+38h] [rbp-230h]
  size_t v74; // [rsp+40h] [rbp-228h]
  void **v75; // [rsp+48h] [rbp-220h]
  void *v76; // [rsp+50h] [rbp-218h] BYREF
  size_t v77; // [rsp+58h] [rbp-210h]
  __m128i v78; // [rsp+60h] [rbp-208h] BYREF
  void *v79[2]; // [rsp+70h] [rbp-1F8h] BYREF
  __m128i v80; // [rsp+80h] [rbp-1E8h] BYREF
  char v81; // [rsp+90h] [rbp-1D8h] BYREF
  void *dest; // [rsp+98h] [rbp-1D0h]
  __m128 n; // [rsp+A0h] [rbp-1C8h] BYREF
  void *src; // [rsp+C0h] [rbp-1A8h] BYREF
  size_t v85; // [rsp+C8h] [rbp-1A0h]
  size_t v86; // [rsp+D0h] [rbp-198h]
  __int16 v87; // [rsp+E0h] [rbp-188h]
  void **v88; // [rsp+F0h] [rbp-178h] BYREF
  __int64 v89; // [rsp+F8h] [rbp-170h]
  _BYTE v90[256]; // [rsp+100h] [rbp-168h] BYREF
  __int64 v91; // [rsp+200h] [rbp-68h] BYREF
  __int64 v92; // [rsp+208h] [rbp-60h] BYREF
  void *v93; // [rsp+210h] [rbp-58h]
  __int64 *v94; // [rsp+218h] [rbp-50h]
  __int64 *v95; // [rsp+220h] [rbp-48h]
  __int64 v96; // [rsp+228h] [rbp-40h]

  v4 = a3;
  v73 = a1;
  v88 = (void **)v90;
  v89 = 0x800000000LL;
  LODWORD(v92) = 0;
  v93 = nullptr;
  v94 = &v92;
  v95 = &v92;
  v96 = 0;
  v5 = sub_21A2A40(a3);
  v68 = v5;
  if ( !v5 )
  {
    v8 = *(char **)(v4 + 8);
    v7 = *(char **)(v4 + 16);
    goto LABEL_102;
  }
  v6 = &v81;
  v7 = *(char **)(v4 + 16);
  n.m128_u64[0] = 0;
  n.m128_i8[8] = 0;
  dest = &n.m128_u16[4];
  v8 = *(char **)(v4 + 8);
  if ( v7 == v8 )
    goto LABEL_37;
  p_src = &src;
  v67 = 0;
  v75 = &src;
  while ( 2 )
  {
    *(_QWORD *)(v4 + 8) = v8 + 1;
    v10 = *v8;
    v81 = v10;
    if ( v10 != 43 && v10 != 45 )
    {
      sub_21A2C10((__int64 *)&src, "unknown feature policy prefix");
      *v73 = src;
LABEL_61:
      if ( dest != v6 + 24 )
        operator delete(dest);
      goto LABEL_63;
    }
    v11 = sub_21A29A0((char **)(v4 + 8), v7);
    v12 = *(_BYTE **)(v4 + 8);
    v13 = (unsigned __int64)&v12[v11];
    if ( v13 > *(_QWORD *)(v4 + 16) )
      sub_2221C70("EOF while reading string", 1);
    *(_QWORD *)(v4 + 8) = v13;
    src = p_src + 2;
    sub_21A31E0(p_src, v12, v13);
    v14 = dest;
    if ( src == p_src + 2 )
    {
      v49 = v85;
      if ( v85 )
      {
        if ( v85 == 1 )
          *(_BYTE *)dest = v86;
        else
          memcpy(dest, src, v85);
        v49 = v85;
        v14 = dest;
      }
      n.m128_u64[0] = v49;
      v14[v49] = 0;
      v14 = src;
    }
    else
    {
      if ( dest == v6 + 24 )
      {
        v69 = (void **)v86;
        dest = src;
        n = _mm_loadh_ps((const double *)&v69);
      }
      else
      {
        v69 = (void **)v86;
        v15 = n.m128_u64[1];
        dest = src;
        n = _mm_loadh_ps((const double *)&v69);
        if ( v14 )
        {
          src = v14;
          v86 = v15;
          goto LABEL_11;
        }
      }
      v14 = p_src + 2;
      src = p_src + 2;
    }
LABEL_11:
    v85 = 0;
    *v14 = 0;
    if ( src != p_src + 2 )
      operator delete(src);
    if ( v96 )
    {
      sub_110F6E0((__int64)&v91, (_QWORD *)v6 + 1);
      if ( v28 )
        goto LABEL_31;
      v31 = n.m128_u64[0];
LABEL_41:
      v32 = j__strlen("target features section contains repeated feature \"");
      v77 = 0;
      v33 = v32;
      v76 = &v78;
      v78.m128i_i8[0] = 0;
      sub_995C30((__int64)&v76, v31 + v32);
      if ( v33 > 0x7FFFFFFFFFFFFFFFLL - v77 )
        goto LABEL_131;
      v34 = v76;
      v35 = v33 + v77;
      v36 = v76 == &v78 ? 15LL : v78.m128i_i64[0];
      if ( v35 > v36 )
      {
        sub_998B30((__int64)&v76, v77, 0, "target features section contains repeated feature \"", v33);
        v34 = v76;
      }
      else if ( v33 )
      {
        v66 = (char *)v76 + v77;
        if ( v33 == 1 )
          *v66 = 116;
        else
          memcpy(v66, "target features section contains repeated feature \"", v33);
        v34 = v76;
      }
      v77 = v35;
      v34[v35] = 0;
      v37 = v76;
      v38 = n.m128_u64[0] + v77;
      v39 = v76 == &v78 ? 15LL : v78.m128i_i64[0];
      if ( v38 > v39 )
      {
        sub_998B30((__int64)&v76, v77, 0, dest, n.m128_u64[0]);
        v37 = v76;
      }
      else if ( n.m128_u64[0] )
      {
        v65 = (char *)v76 + v77;
        if ( n.m128_u64[0] == 1 )
          *v65 = *(_BYTE *)dest;
        else
          memcpy(v65, dest, n.m128_u64[0]);
        v37 = v76;
      }
      v77 = v38;
      v37[v38] = 0;
      v40 = j__strlen("\"");
      if ( v40 > 0x7FFFFFFFFFFFFFFFLL - v77 )
LABEL_131:
        std::__throw_length_error("basic_string::append");
      v41 = v76;
      v42 = v40 + v77;
      if ( v76 == &v78 )
        v43 = 15;
      else
        v43 = v78.m128i_i64[0];
      if ( v42 > v43 )
      {
        sub_998B30((__int64)&v76, v77, 0, "\"", v40);
        v41 = v76;
      }
      else if ( v40 )
      {
        v64 = (char *)v76 + v77;
        if ( v40 == 1 )
          *v64 = 34;
        else
          memcpy(v64, "\"", v40);
        v41 = v76;
      }
      v77 = v42;
      v41[v42] = 0;
      v79[0] = &v80;
      if ( v76 == &v78 )
      {
        v80 = _mm_load_si128(&v78);
      }
      else
      {
        v79[0] = v76;
        v80.m128i_i64[0] = v78.m128i_i64[0];
      }
      v78.m128i_i8[0] = 0;
      src = v79;
      v79[1] = (void *)v77;
      v76 = &v78;
      v77 = 0;
      v87 = 260;
      v44 = operator new(0x38u);
      sub_2195A00(v44, (__int64)v75, 3);
      v45 = (__m128i *)v79[0];
      *v73 = v44;
      if ( v45 != &v80 )
        operator delete(v45);
      if ( v76 != &v78 )
        operator delete(v76);
      goto LABEL_61;
    }
    v16 = (unsigned int)v89;
    v17 = (__m128i *)v88;
    v18 = (__m128i *)&v88[4 * (unsigned int)v89];
    if ( v88 == (void **)v18 )
    {
      if ( (unsigned int)v89 > 7uLL )
        goto LABEL_86;
      goto LABEL_89;
    }
    v69 = v88;
    v70 = (unsigned int)v89;
    s2 = dest;
    v71 = (char *)v4;
    v19 = &v88[4 * (unsigned int)v89];
    v20 = n.m128_u64[0];
    v21 = v88;
    while ( v21[1] != (void *)v20 || v20 && memcmp(*v21, s2, v20) )
    {
      v21 += 4;
      if ( v19 == v21 )
      {
        v18 = (__m128i *)v19;
        v17 = (__m128i *)v69;
        v16 = v70;
        v4 = (__int64)v71;
        goto LABEL_19;
      }
    }
    v30 = v21;
    v31 = v20;
    v18 = (__m128i *)v19;
    v17 = (__m128i *)v69;
    v16 = v70;
    v4 = (__int64)v71;
    if ( v30 != (void **)v18 )
      goto LABEL_41;
LABEL_19:
    if ( v16 <= 7 )
    {
LABEL_89:
      v59 = v16 + 1;
      v60 = (__m128i *)(v6 + 8);
      if ( v16 + 1 > HIDWORD(v89) )
      {
        v69 = (void **)v17;
        if ( v17 > v60 || v18 <= v60 )
        {
          sub_A8C1F0((__int64)&v88, v59);
          v60 = (__m128i *)(v6 + 8);
          v18 = (__m128i *)&v88[4 * (unsigned int)v89];
        }
        else
        {
          sub_A8C1F0((__int64)&v88, v59);
          v60 = (__m128i *)((char *)v88 + (char *)v60 - (char *)v69);
          v18 = (__m128i *)&v88[4 * (unsigned int)v89];
        }
      }
      v18->m128i_i64[0] = (__int64)v18[1].m128i_i64;
      sub_21A32A0(v18, v60->m128i_i64[0], v60->m128i_i64[0] + v60->m128i_i64[1]);
      LODWORD(v89) = v89 + 1;
      goto LABEL_31;
    }
    v70 = v4;
    v71 = v6;
    v22 = v17;
    v69 = a2;
    s2 = p_src;
    do
    {
      v23 = sub_1110010(&v91, &v92, (__int64)v22);
      v25 = v24;
      if ( !v24 )
        goto LABEL_23;
      if ( v23 || v24 == &v92 )
        goto LABEL_27;
      v50 = v22->m128i_u64[1];
      v52 = v24[5];
      v51 = v52;
      if ( v50 <= v52 )
        v52 = v22->m128i_u64[1];
      if ( v52 )
      {
        v53 = (const void *)v25[4];
        v54 = (const void *)v22->m128i_i64[0];
        v74 = v51;
        LODWORD(v55) = memcmp(v54, v53, v52);
        v51 = v74;
        if ( (_DWORD)v55 )
        {
LABEL_81:
          v26 = (unsigned int)v55 >> 31;
          goto LABEL_28;
        }
      }
      v56 = v50;
      v26 = 0;
      v55 = v56 - v51;
      if ( v55 <= 0x7FFFFFFF )
      {
        if ( v55 >= (__int64)0xFFFFFFFF80000000LL )
          goto LABEL_81;
LABEL_27:
        v26 = 1;
      }
LABEL_28:
      v27 = (__m128i *)operator new(0x40u);
      v27[2].m128i_i64[0] = (__int64)v27[3].m128i_i64;
      if ( (__m128i *)v22->m128i_i64[0] == &v22[1] )
      {
        v27[3] = _mm_loadu_si128(v22 + 1);
      }
      else
      {
        v27[2].m128i_i64[0] = v22->m128i_i64[0];
        v27[3].m128i_i64[0] = v22[1].m128i_i64[0];
      }
      v27[2].m128i_i64[1] = v22->m128i_i64[1];
      v22->m128i_i64[0] = (__int64)v22[1].m128i_i64;
      v22->m128i_i64[1] = 0;
      v22[1].m128i_i8[0] = 0;
      std::_Rb_tree_insert_and_rebalance(v26, v27, v25, &v92);
      ++v96;
LABEL_23:
      v22 += 2;
    }
    while ( v18 != v22 );
    v57 = v88;
    a2 = v69;
    v4 = v70;
    v6 = v71;
    p_src = s2;
    v58 = &v88[4 * (unsigned int)v89];
    while ( v57 != v58 )
    {
      while ( 1 )
      {
        v58 -= 4;
        if ( *v58 == v58 + 2 )
          break;
        operator delete(*v58);
        if ( v57 == v58 )
          goto LABEL_86;
      }
    }
LABEL_86:
    LODWORD(v89) = 0;
    sub_110F6E0((__int64)&v91, (_QWORD *)v6 + 1);
LABEL_31:
    v29 = (__int64)a2[36];
    if ( (void *)v29 == a2[37] )
    {
      sub_21A59C0((char **)a2 + 35, v29, (__int64)v6);
    }
    else
    {
      *(_BYTE *)v29 = v81;
      *(_QWORD *)(v29 + 8) = v29 + 24;
      sub_21A32A0((_QWORD *)(v29 + 8), dest, (__int64)dest + n.m128_u64[0]);
      a2[36] = (char *)a2[36] + 40;
    }
    if ( dest != v6 + 24 )
      operator delete(dest);
    ++v67;
    v7 = *(char **)(v4 + 16);
    v8 = *(char **)(v4 + 8);
    if ( v67 != v68 )
    {
      n.m128_i8[8] = 0;
      dest = v6 + 24;
      n.m128_u64[0] = 0;
      if ( v8 == v7 )
LABEL_37:
        sub_21A2960();
      continue;
    }
    break;
  }
LABEL_102:
  if ( v7 == v8 )
  {
    *v73 = 0;
  }
  else
  {
    sub_21A2C10((__int64 *)&src, "target features section ended prematurely");
    *v73 = src;
  }
LABEL_63:
  v46 = (char *)v93;
  if ( v93 )
  {
    while ( 1 )
    {
      sub_F7EAE0((__int64)&v91, *((_QWORD **)v46 + 3));
      v47 = *((char **)v46 + 4);
      v48 = *((char **)v46 + 2);
      if ( v47 == v46 + 48 )
      {
        operator delete(v46);
        if ( !v48 )
          break;
      }
      else
      {
        operator delete(v47);
        operator delete(v46);
        if ( !v48 )
          break;
      }
      v46 = v48;
    }
  }
  v61 = v88;
  v62 = &v88[4 * (unsigned int)v89];
  if ( v88 != v62 )
  {
    do
    {
      while ( 1 )
      {
        v62 -= 4;
        if ( *v62 == v62 + 2 )
          break;
        operator delete(*v62);
        if ( v61 == v62 )
          goto LABEL_95;
      }
    }
    while ( v61 != v62 );
LABEL_95:
    v62 = v88;
  }
  if ( v62 != (void **)v90 )
    free(v62);
  return v73;
}
