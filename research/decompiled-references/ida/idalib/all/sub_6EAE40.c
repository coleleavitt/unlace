__int64 __fastcall sub_6EAE40(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        double a4,
        __m128i a5,
        double a6,
        __m128 a7,
        double a8,
        double a9,
        double a10,
        __m128 a11)
{
  __int64 v12; // rax
  unsigned __int64 v13; // r12
  __int64 v14; // rcx
  double v15; // xmm4_8
  double v16; // xmm5_8
  unsigned __int64 v17; // rax
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rsi
  __int64 v22; // rbx
  __int64 v23; // rbp
  size_t v24; // rbp
  _DWORD *v25; // rax
  const void *v26; // r13
  void *v27; // rax
  void *v28; // r14
  __int64 v29; // r13
  __int64 v30; // r12
  void **v31; // r15
  __int64 v32; // rbx
  const char *v33; // rcx
  void **v34; // rbp
  __int64 v35; // r12
  void *v36; // rdi
  void *v37; // rdi
  void *v38; // rdi
  __int64 v39; // rsi
  __int64 v40; // rax
  __int64 tinfo_size; // rax
  __int64 v42; // rdi
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r14
  void **v46; // rbp
  __int64 v47; // r12
  const char *v48; // rcx
  __int64 tinfo_property; // rax
  char *v50; // r13
  char *v51; // r15
  __int64 v52; // r14
  __int64 v53; // r12
  const char *v54; // rbp
  int v55; // eax
  void *v56; // r15
  void *v57; // rdi
  void *v58; // rdi
  void **v59; // rbx
  __int64 v60; // r15
  void *v61; // rdi
  __int64 v62; // rax
  unsigned int v63; // eax
  __int64 tinfo_pdata; // rax
  void *v65; // rbp
  __int64 v66; // r12
  const char *v67; // rcx
  unsigned __int8 v68; // dl
  __int64 v69; // r12
  const char *v70; // rcx
  __int64 v71; // r12
  const char *v72; // rcx
  __int64 v73; // r12
  const char *v74; // rcx
  __int64 v75; // r12
  const char *v76; // rcx
  __m128i v79; // [rsp+10h] [rbp-C8h] BYREF
  __int64 v80; // [rsp+20h] [rbp-B8h]
  __int64 *v81; // [rsp+28h] [rbp-B0h]
  __int64 v82; // [rsp+30h] [rbp-A8h]
  __int64 v83; // [rsp+38h] [rbp-A0h]
  void *ptr; // [rsp+40h] [rbp-98h]
  __int64 v85; // [rsp+48h] [rbp-90h]
  __int64 v86; // [rsp+50h] [rbp-88h] BYREF
  __int64 v87; // [rsp+58h] [rbp-80h] BYREF
  char *v88; // [rsp+60h] [rbp-78h] BYREF
  __int64 v89; // [rsp+68h] [rbp-70h]
  __int64 v90; // [rsp+70h] [rbp-68h]
  void *v91; // [rsp+80h] [rbp-58h] BYREF
  __m128i v92; // [rsp+88h] [rbp-50h] BYREF
  unsigned __int64 v93; // [rsp+98h] [rbp-40h]

  v93 = __readfsqword(0x28u);
  v12 = sub_B7E900(a3);
  if ( !v12 )
    return 1;
  v82 = a3;
  v13 = v12;
LABEL_3:
  if ( (unsigned __int8)sub_B7EB50(v13, a1[6]) && (*(_BYTE *)(v13 + 68) & 1) == 0 )
    goto LABEL_7;
  v19 = *(_QWORD *)(v13 + 48);
  v81 = &v86;
  v85 = v19;
  sub_6E4130(&v86, (__int64)a1, v19, v14, a4, a5, a6, a7, v15, v16, a10, a11);
  if ( !(_BYTE)v86 )
    goto LABEL_27;
  v20 = *(_QWORD *)(a2 + 8);
  v21 = *(_QWORD *)a2;
  if ( *(_QWORD *)(a2 + 16) < (unsigned __int64)(v20 + 1) )
  {
    v62 = qvector_reserve(a2, v21, v20 + 1, 144);
    v20 = *(_QWORD *)(a2 + 8);
    *(_QWORD *)a2 = v62;
    v21 = v62;
  }
  v22 = v21 + 144 * v20;
  *(_QWORD *)(v22 + 112) = (char *)&dword_0 + 1;
  *(_QWORD *)(v22 + 16) = 0;
  *(_QWORD *)(v22 + 40) = 0;
  *(_DWORD *)(v22 + 120) = -1;
  *(_QWORD *)(v22 + 128) = 0;
  *(_BYTE *)(v22 + 136) = 0;
  *(_OWORD *)v22 = 0;
  *(_OWORD *)(v22 + 24) = 0;
  *(_OWORD *)(v22 + 48) = 0;
  *(_OWORD *)(v22 + 64) = 0;
  ++*(_QWORD *)(a2 + 8);
  v23 = *(_QWORD *)(v13 + 40);
  if ( (v23 & 7) != 0 )
  {
    v29 = 0;
    v24 = 0;
    v28 = nullptr;
  }
  else
  {
    v24 = v23 & 0xFFFFFFFFFFFFFFF8LL;
    if ( v24 && (v25 = *(_DWORD **)(v24 + 16), v24 = (unsigned int)*v25, v26 = v25 + 4, *v25) )
    {
      v92 = 0;
      v91 = nullptr;
      v27 = (void *)qvector_reserve(&v91, 0, v24 + 1, 1);
      v92.m128i_i64[0] = v24 + 1;
      v91 = v27;
      memmove(v27, v26, v24);
      *((_BYTE *)v91 + v24) = 0;
      v28 = v91;
      v29 = v92.m128i_i64[1];
      v24 = v92.m128i_i64[0];
    }
    else
    {
      v29 = 0;
      v28 = nullptr;
    }
  }
  v91 = nullptr;
  v92 = 0;
  v37 = *(void **)(v22 + 16);
  if ( v37 )
  {
    *(_QWORD *)(v22 + 24) = 0;
    qfree(v37);
    v38 = v91;
    *(_QWORD *)(v22 + 16) = v28;
    *(_QWORD *)(v22 + 24) = v24;
    *(_QWORD *)(v22 + 32) = v29;
    if ( v38 )
    {
      v92.m128i_i64[0] = 0;
      qfree(v38);
    }
  }
  else
  {
    *(_QWORD *)(v22 + 16) = v28;
    *(_QWORD *)(v22 + 24) = v24;
    *(_QWORD *)(v22 + 32) = v29;
  }
  v39 = v86;
  v40 = *(_QWORD *)(v22 + 64);
  *(_QWORD *)(v22 + 64) = v86;
  v86 = v40;
  tinfo_size = get_tinfo_size(0, v39, 0);
  v42 = *(_QWORD *)(v22 + 64);
  *(_QWORD *)(v22 + 8) = 8 * tinfo_size;
  if ( (get_tinfo_property(v42, 2) & 0xF) == 0xA
    && *(_QWORD *)(v22 + 24)
    && !strcmp(*(const char **)(v22 + 16), "__vftable") )
  {
    v88 = nullptr;
    tinfo_property = get_tinfo_property(*(_QWORD *)(v22 + 64), 9);
    v88 = (char *)tinfo_property;
    if ( (_BYTE)tinfo_property )
    {
      v91 = nullptr;
      v92 = 0;
      if ( (tinfo_property & 0x100) != 0 )
      {
        tinfo_pdata = get_tinfo_pdata(&v91, tinfo_property, 0);
        v65 = v91;
        if ( tinfo_pdata && v92.m128i_i64[0] > 5uLL && !strncmp((char *)v91 + v92.m128i_i64[0] - 6, "_vtbl", 5u) )
          *(_DWORD *)(v22 + 132) |= 0x100u;
        if ( v65 )
        {
          v92.m128i_i64[0] = 0;
          qfree(v65);
        }
      }
    }
    clear_tinfo_t(&v88);
  }
  v90 = 0;
  v45 = 0;
  v46 = nullptr;
  if ( (*(_BYTE *)(v13 + 29) & 1) == 0
    || (v88 = nullptr,
        v89 = 0,
        sub_6D4D40((__int64)a1, (__int64)&v88, v13),
        v45 = v89,
        v46 = (void **)v88,
        v50 = &v88[24 * v89],
        v50 == v88) )
  {
    if ( (*(_BYTE *)(a2 + 45) & 4) == 0 )
    {
LABEL_60:
      *(_QWORD *)v22 = sub_EE5E00(a1[6], v13, v43, v44);
      if ( (*(_BYTE *)(a2 + 45) & 4) == 0 )
        goto LABEL_78;
      goto LABEL_61;
    }
LABEL_36:
    v47 = v22;
    v31 = v46;
    v32 = v45;
    v48 = haystack;
    if ( *(_QWORD *)(v47 + 24) )
      v48 = *(const char **)(v47 + 16);
    sub_6DBD10(a1, v82, (__int64)"Offset was not specified for '%s'", v48);
LABEL_21:
    if ( v31 )
    {
      v34 = v31;
      v35 = 0;
      if ( v32 )
      {
        do
        {
          v36 = *v34;
          if ( *v34 )
          {
            v34[1] = nullptr;
            qfree(v36);
          }
          ++v35;
          v34 += 3;
        }
        while ( v32 != v35 );
      }
      qfree(v31);
    }
LABEL_27:
    clear_tinfo_t(v81);
    return 0;
  }
  v83 = v89;
  v51 = v88;
  v80 = v22 + 72;
  v52 = -1;
  v79.m128i_i64[0] = v13;
  ptr = v88;
  do
  {
    while ( 1 )
    {
      v53 = *((_QWORD *)v51 + 1);
      if ( v53 )
      {
        v54 = *(const char **)v51;
        if ( !strcmp(*(const char **)v51, "__unaligned") )
        {
          *(_DWORD *)(v22 + 132) |= 0x40u;
          goto LABEL_47;
        }
        if ( (unsigned __int64)(v53 - 1) > 4 && !strncmp(v54, "__at(", 5u) )
          break;
      }
      sub_6D90F0((__int64)a1, v80, (const char **)v51, 13);
LABEL_47:
      v51 += 24;
      if ( v50 == v51 )
        goto LABEL_59;
    }
    if ( (*(_BYTE *)(a2 + 45) & 4) == 0 )
    {
      v66 = v22;
      v31 = (void **)ptr;
      v32 = v83;
      v67 = haystack;
      if ( *(_QWORD *)(v66 + 24) )
        v67 = *(const char **)(v66 + 16);
      sub_6DBD10(a1, v82, (__int64)"__at can be used only for fixed structs, field %s", v67);
      goto LABEL_21;
    }
    v87 = -1;
    v91 = nullptr;
    v55 = sub_6D4FD0((__int64)&v87, (__int64)&v91, (__int64)v54);
    if ( !v55 )
    {
      v69 = v22;
      v31 = (void **)ptr;
      v32 = v83;
      v70 = haystack;
      if ( *(_QWORD *)(v69 + 24) )
        v70 = *(const char **)(v69 + 16);
      sub_6DBD10(a1, v82, (__int64)"Wrong format of __at, must be __at(BYTEOFF[,BITOFF]), for '%s'", v70);
      goto LABEL_21;
    }
    v43 = v87;
    if ( v87 < 0 )
    {
      v71 = v22;
      v31 = (void **)ptr;
      v32 = v83;
      v72 = haystack;
      if ( *(_QWORD *)(v71 + 24) )
        v72 = *(const char **)(v71 + 16);
      sub_6DBD10(a1, v82, (__int64)"Offset can not be negative for '%s'", v72);
      goto LABEL_21;
    }
    if ( v55 == 2 )
    {
      if ( (unsigned __int64)v91 > 7 )
      {
        v75 = v22;
        v31 = (void **)ptr;
        v32 = v83;
        v76 = haystack;
        if ( *(_QWORD *)(v75 + 24) )
          v76 = *(const char **)(v75 + 16);
        sub_6DBD10(a1, v82, (__int64)"Bad bit number, must be 0..7, for '%s'", v76);
        goto LABEL_21;
      }
      if ( (*(_BYTE *)(v79.m128i_i64[0] + 68) & 1) == 0 )
        goto LABEL_18;
    }
    else if ( (*(_BYTE *)(v79.m128i_i64[0] + 68) & 1) != 0 )
    {
LABEL_18:
      v30 = v22;
      v31 = (void **)ptr;
      v32 = v83;
      v33 = haystack;
      if ( *(_QWORD *)(v30 + 24) )
        v33 = *(const char **)(v30 + 16);
      sub_6DBD10(a1, v82, (__int64)"Bad usage of bit offset for '%s'", v33);
      goto LABEL_21;
    }
    if ( v52 != -1 )
    {
      v73 = v22;
      v31 = (void **)ptr;
      v32 = v83;
      v74 = haystack;
      if ( *(_QWORD *)(v73 + 24) )
        v74 = *(const char **)(v73 + 16);
      sub_6DBD10(a1, v82, (__int64)"Offset was specified already for '%s'", v74);
      goto LABEL_21;
    }
    v51 += 24;
    v52 = (__int64)v91 + 8 * v87;
  }
  while ( v50 != v51 );
LABEL_59:
  v44 = v52;
  v13 = v79.m128i_i64[0];
  v45 = v83;
  v46 = (void **)ptr;
  if ( (*(_BYTE *)(a2 + 45) & 4) == 0 )
    goto LABEL_60;
  if ( v44 == -1 )
    goto LABEL_36;
  *(_QWORD *)v22 = v44;
  if ( (*(_BYTE *)(a2 + 45) & 4) != 0 )
    goto LABEL_61;
LABEL_78:
  v63 = sub_B8C970(v13);
  if ( v63 > 7 )
    *(_BYTE *)(v22 + 136) = log2floor(v63 >> 3) + 1;
LABEL_61:
  sub_6D7650((__int64)&v91, (__int64)a1, v13);
  a4 = 0.0;
  v56 = v91;
  a5 = _mm_loadu_si128(&v92);
  v91 = nullptr;
  v92 = 0;
  v57 = *(void **)(v22 + 40);
  if ( v57 )
  {
    *(_QWORD *)(v22 + 48) = 0;
    v79 = a5;
    qfree(v57);
    v58 = v91;
    *(_QWORD *)(v22 + 40) = v56;
    a5 = _mm_load_si128(&v79);
    *(__m128i *)(v22 + 48) = a5;
    if ( v58 )
    {
      v92.m128i_i64[0] = 0;
      qfree(v58);
    }
  }
  else
  {
    *(_QWORD *)(v22 + 40) = v56;
    *(__m128i *)(v22 + 48) = a5;
  }
  if ( (*((_BYTE *)a1 + 122) & 4) != 0 )
    sub_6DAE20((__int64)a1, v22 + 40, (__int64 *)v13);
  if ( (*(_BYTE *)(v13 + 68) & 1) != 0 )
  {
    BYTE2(v91) = 0;
    LOWORD(v91) = 0;
    LOBYTE(v91) = get_tinfo_size(0, *(_QWORD *)(v22 + 64), 0);
    BYTE2(v91) = (unsigned int)get_tinfo_property(*(_QWORD *)(v22 + 64), 3) == 2;
    BYTE1(v91) = sub_B78170(v13);
    v68 = BYTE1(v91);
    if ( BYTE1(v91) > 8 * (unsigned __int8)v91 )
    {
      v68 = 8 * (_BYTE)v91;
      BYTE1(v91) = 8 * (_BYTE)v91;
    }
    *(_QWORD *)(v22 + 8) = v68;
    if ( !(unsigned __int8)create_tinfo(v22 + 64, 14, 14, &v91) )
    {
      v32 = v45;
      v31 = v46;
      sub_6DB090(a1, (_BYTE *)v13, v85);
      goto LABEL_21;
    }
  }
  if ( (*(_BYTE *)(a2 + 45) & 4) == 0 && (unsigned __int8)sub_6DA8E0((__int64)a1, v13, 325) )
    *(_DWORD *)(v22 + 132) |= 0x40u;
  if ( v46 )
  {
    v59 = v46;
    v60 = 0;
    if ( v45 )
    {
      do
      {
        v61 = *v59;
        if ( *v59 )
        {
          v59[1] = nullptr;
          qfree(v61);
        }
        ++v60;
        v59 += 3;
      }
      while ( v45 != v60 );
    }
    qfree(v46);
  }
  clear_tinfo_t(v81);
LABEL_7:
  while ( 1 )
  {
    v17 = *(_QWORD *)(v13 + 8);
    v13 = v17 & 0xFFFFFFFFFFFFFFF8LL;
    if ( v17 <= 7 )
      return 1;
    if ( (*(_BYTE *)(v13 + 28) & 0x7Fu) - 49 <= 2 )
      goto LABEL_3;
  }
}
