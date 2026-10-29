__int64 __fastcall sub_4D8D10(__int64 *a1, unsigned __int64 a2, const char *src, unsigned int a4)
{
  unsigned int v6; // r14d
  bool v8; // r13
  size_t v9; // r12
  __int64 v10; // rdi
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned int v13; // eax
  __int64 v14; // r8
  __int64 v15; // r9
  int v16; // ecx
  int v17; // r8d
  int v18; // r9d
  unsigned __int64 *v19; // r15
  __int64 v20; // rax
  const char *v21; // rsi
  const char *v22; // rdi
  __int64 v23; // rdx
  void **v24; // rbx
  char *v25; // rdi
  const char *v26; // rsi
  const char *v27; // rsi
  char v28; // al
  void *v29; // r14
  char v30; // r12
  void *v31; // rdi
  unsigned int v32; // ecx
  char v33; // al
  char *v35; // rbx
  __int64 v36; // rdx
  size_t v37; // r13
  __int64 v38; // r12
  __int64 v39; // rsi
  __int64 v40; // r14
  __int64 v41; // rax
  unsigned __int64 v42; // rdx
  size_t v43; // r13
  __int64 v44; // r12
  unsigned __int64 v45; // r14
  __int64 v46; // rsi
  unsigned __int64 v47; // r12
  __m128i v48; // xmm0
  void *v49; // r12
  __int64 v50; // rbx
  __m128i si128; // xmm0
  const char *v52; // rdx
  __int64 v53; // rbp
  __int64 v54; // rbx
  char *v55; // rdx
  char *v56; // rax
  void *v57; // rdi
  size_t v58; // r14
  __int64 v59; // r13
  __int64 v60; // r15
  __int64 v61; // rsi
  __int64 v62; // rax
  __int64 v63; // rax
  void *v64; // [rsp+0h] [rbp-128h]
  int v65; // [rsp+8h] [rbp-120h]
  __int64 v66[2]; // [rsp+10h] [rbp-118h] BYREF
  char *s1; // [rsp+20h] [rbp-108h]
  void *p_srca; // [rsp+28h] [rbp-100h]
  __int64 v69; // [rsp+30h] [rbp-F8h]
  void *p_dest; // [rsp+38h] [rbp-F0h]
  int v71; // [rsp+40h] [rbp-E8h]
  void *v72; // [rsp+48h] [rbp-E0h] BYREF
  void *srca; // [rsp+50h] [rbp-D8h] BYREF
  int v74[4]; // [rsp+58h] [rbp-D0h]
  int v75; // [rsp+68h] [rbp-C0h]
  void *v76; // [rsp+70h] [rbp-B8h] BYREF
  __int64 v77[2]; // [rsp+78h] [rbp-B0h]
  int v78; // [rsp+88h] [rbp-A0h]
  void *v79; // [rsp+90h] [rbp-98h] BYREF
  __m128i v80; // [rsp+98h] [rbp-90h]
  int v81; // [rsp+A8h] [rbp-80h]
  void *dest; // [rsp+B0h] [rbp-78h] BYREF
  __int128 v83; // [rsp+B8h] [rbp-70h]
  int v84; // [rsp+C8h] [rbp-60h]
  void *ptr; // [rsp+D0h] [rbp-58h] BYREF
  __m128i v86; // [rsp+D8h] [rbp-50h] BYREF
  unsigned __int64 v87; // [rsp+E8h] [rbp-40h]

  v64 = (void *)a2;
  v87 = __readfsqword(0x28u);
  if ( !*src )
  {
    LOBYTE(v65) = 0;
    return (unsigned __int8)v65;
  }
  v6 = a4 & 0xFFFF7FFF;
  LODWORD(v66[0]) = a4 & 0x800;
  LODWORD(s1) = a4 & 0x200;
  if ( (a4 & 0x200) != 0 )
  {
    srca = nullptr;
    *(_OWORD *)v74 = 0;
    if ( !src )
    {
      v76 = nullptr;
      v8 = 0;
      LOBYTE(p_srca) = 0;
      *(_OWORD *)v77 = 0;
      goto LABEL_10;
    }
    LOBYTE(p_srca) = 0;
    v8 = 0;
  }
  else
  {
    LOBYTE(p_srca) = 0;
    if ( (a4 & 0x20) == 0 )
    {
      LOBYTE(p_srca) = 1;
      if ( (a4 & 0x1000) == 0 )
        LOBYTE(p_srca) = sub_4CC1E0((__int64)src) == 0;
    }
    srca = nullptr;
    *(_OWORD *)v74 = 0;
    v8 = (sub_3BE900(a1, a2, 4) & 0xC000) == 0x4000;
    if ( !src )
      goto LABEL_8;
  }
  v9 = strlen(src);
  v65 = v9 + 1;
  srca = (void *)qvector_reserve(&srca, 0, v9 + 1, 1);
  *(_QWORD *)v74 = v9 + 1;
  memmove(srca, src, v9);
  *((_BYTE *)srca + v9) = 0;
LABEL_8:
  v76 = nullptr;
  *(_OWORD *)v77 = 0;
  if ( v8 )
    get_ea_name(&v76, a2, 0, 0);
LABEL_10:
  v10 = *a1;
  if ( LODWORD(v66[0]) )
    v6 |= 1u;
  LOBYTE(v65) = sub_4CC4A0(v10, (const void **)&srca, a2, v6);
  if ( !(_BYTE)v65 )
    goto LABEL_65;
  if ( *(_QWORD *)v74 <= 1u )
  {
    if ( !under_debugger )
      interr(3363);
LABEL_138:
    BUG();
  }
  if ( !v8 || (v12 = (unsigned int)s1, (_DWORD)s1) )
  {
    v32 = a4;
    BYTE1(v32) = BYTE1(a4) & 0x7B;
    v33 = sub_4D7EC0(
            a1,
            a2,
            srca,
            v32,
            v11,
            v12,
            a2,
            v65,
            v66[0],
            v66[1],
            (int)s1,
            p_srca,
            v69,
            (int)p_dest,
            v71,
            v72,
            (__int64)srca,
            v74[0],
            v74[2],
            v75,
            (int)v76,
            v77[0],
            v77[1],
            v78,
            (__int64)v79,
            v80.m128i_i32[0],
            v80.m128i_i32[2],
            v81,
            (int)dest,
            v83,
            SDWORD2(v83),
            v84,
            (int)ptr,
            v86.m128i_i32[0],
            v86.m128i_i64[1]);
    p_srca = &srca;
    v19 = nullptr;
    if ( v33 )
      goto LABEL_38;
LABEL_65:
    LOBYTE(v65) = 0;
    goto LABEL_66;
  }
  if ( v77[0] <= 1uLL )
  {
    if ( !under_debugger )
      interr(3364);
    goto LABEL_138;
  }
  v13 = (unsigned int)sub_3C5DC0((__int64)a1, a2);
  if ( (a4 & 0x8000) != 0
    || (v13 & 4) == 0 && (a4 & 2) != 0
    || ((unsigned __int8)(v13 >> 3) & (((unsigned __int8)(a4 & 8) >> 3) ^ 1)) != 0
    && ((v13 & 4) != 0) == ((a4 & 2) != 0) )
  {
    if ( (unsigned __int8)sub_4D7EC0(
                            a1,
                            a2,
                            srca,
                            a4 & 0xFFFF7BE1,
                            v14,
                            v15,
                            a2,
                            v65,
                            v66[0],
                            v66[1],
                            (int)s1,
                            p_srca,
                            v69,
                            (int)p_dest,
                            v71,
                            v72,
                            (__int64)srca,
                            v74[0],
                            v74[2],
                            v75,
                            (int)v76,
                            v77[0],
                            v77[1],
                            v78,
                            (__int64)v79,
                            v80.m128i_i32[0],
                            v80.m128i_i32[2],
                            v81,
                            (int)dest,
                            v83,
                            SDWORD2(v83),
                            v84,
                            (int)ptr,
                            v86.m128i_i32[0],
                            v86.m128i_i64[1]) )
    {
      if ( (a4 & 0x1E) != 0 )
      {
        if ( (a4 & 4) != 0 )
          clr_abits(v64, 4);
        if ( (a4 & 0x10) != 0 )
          clr_abits(v64, 8);
        if ( (a4 & 2) != 0 )
          set_abits(v64, 4);
        if ( (a4 & 8) != 0 )
          set_abits(v64, 8);
        if ( (unsigned __int8)sub_4CDF30(a1, (unsigned __int64)v64) )
        {
          sub_4CB2B0(a1, (__int64)v64);
        }
        else
        {
          sub_4E0050(*a1, v64);
          sub_52CCE0(2, 0, (_DWORD)v64, v16, v17, v18);
          mark_builtin_widgets(4, 0, 1);
        }
      }
      p_srca = &srca;
      v19 = (unsigned __int64 *)&v76;
LABEL_33:
      v20 = *((_QWORD *)p_srca + 1);
      if ( v19[1] )
      {
        v21 = (const char *)*v19;
        v22 = haystack;
        if ( !v20 )
        {
LABEL_35:
          if ( !strcmp(v22, v21) || LODWORD(v66[0]) && (unsigned __int8)sub_4C7800((__int64)p_srca, v19) )
            goto LABEL_66;
          goto LABEL_38;
        }
      }
      else
      {
        v21 = haystack;
        if ( !v20 )
          goto LABEL_66;
      }
      v22 = *(const char **)p_srca;
      goto LABEL_35;
    }
    goto LABEL_65;
  }
  if ( (_BYTE)p_srca )
  {
    v19 = (unsigned __int64 *)&srca;
    p_srca = &v76;
    goto LABEL_33;
  }
  v19 = nullptr;
  p_srca = &v76;
LABEL_38:
  v79 = nullptr;
  v80 = 0;
  v72 = nullptr;
  sub_3C3260(a1, (__int64)&v79, &v72, (unsigned __int64)v64, 0);
  v83 = 0;
  p_dest = &dest;
  dest = nullptr;
  sub_456FB0(&v79, (__int64 *)&dest, "\n", 0);
  v23 = v83;
  v24 = (void **)dest;
  v25 = (char *)dest;
  if ( !(24LL * (_QWORD)v83) )
  {
    if ( v19 )
      goto LABEL_83;
    goto LABEL_106;
  }
  HIWORD(v69) = (unsigned __int8)v65;
  do
  {
    ptr = nullptr;
    v86 = 0;
    v28 = sub_4C8450((__int64)&ptr, (__int64)v24);
    v29 = ptr;
    v30 = v28;
    if ( !v28 )
      goto LABEL_51;
    if ( *((_QWORD *)p_srca + 1) )
    {
      v26 = *(const char **)p_srca;
      s1 = (char *)haystack;
      if ( !v86.m128i_i64[0] )
        goto LABEL_42;
    }
    else
    {
      v26 = haystack;
      if ( !v86.m128i_i64[0] )
        goto LABEL_57;
    }
    s1 = (char *)ptr;
LABEL_42:
    if ( !strcmp(s1, v26) || LODWORD(v66[0]) && (unsigned __int8)sub_4C7800((__int64)&ptr, (unsigned __int64 *)p_srca) )
    {
LABEL_57:
      v31 = *v24;
      if ( *v24 )
        goto LABEL_58;
      goto LABEL_59;
    }
    if ( !v19 )
      goto LABEL_51;
    v27 = haystack;
    if ( v19[1] )
      v27 = (const char *)*v19;
    if ( strcmp(s1, v27) && (!LODWORD(v66[0]) || !(unsigned __int8)sub_4C7800((__int64)&ptr, v19)) )
      goto LABEL_51;
    if ( !BYTE6(v69) )
    {
      v31 = *v24;
      if ( *v24 )
      {
LABEL_58:
        v24[1] = nullptr;
        qfree(v31);
      }
LABEL_59:
      memmove(v24, v24 + 3, (_BYTE *)dest + 24 * v83 - (_BYTE *)v24 - 24);
      *(_QWORD *)&v83 = v83 - 1;
      if ( v29 )
        qfree(v29);
      HIBYTE(v69) = v30;
      goto LABEL_53;
    }
    BYTE6(v69) = 0;
LABEL_51:
    v24 += 3;
    if ( v29 )
      qfree(v29);
LABEL_53:
    v23 = v83;
    v25 = (char *)dest;
  }
  while ( v24 != (void **)((char *)dest + 24 * (_QWORD)v83) );
  if ( v19 && BYTE6(v69) )
  {
LABEL_83:
    if ( *((_QWORD *)&v83 + 1) < (unsigned __int64)(v23 + 1) )
    {
      dest = (void *)qvector_reserve(p_dest, v25, v23 + 1, 24);
      v23 = v83;
      v25 = (char *)dest;
    }
    v35 = &v25[24 * v23];
    *(_QWORD *)v35 = 0;
    *(_OWORD *)(v35 + 8) = 0;
    v36 = qword_2CCBE38;
    *(_QWORD *)&v83 = v83 + 1;
    if ( qword_2CCBE38 )
    {
      v37 = qword_2CCBE38 - 1;
      if ( qword_2CCBE38 != 1 )
      {
        v38 = *((_QWORD *)v35 + 1);
        v39 = *(_QWORD *)v35;
        v40 = qword_2CCBE38 - 1;
        if ( v38 && (--v38, v40 = v37 + v38, v36 = qword_2CCBE38 + v38, v37 + v38 == -1) )
        {
          v40 = -1;
        }
        else
        {
          v66[0] = v36;
          v41 = qvector_reserve(v35, v39, v36, 1);
          *(_QWORD *)v35 = v41;
          v36 = v66[0];
          v39 = v41;
        }
        *((_QWORD *)v35 + 1) = v36;
        *(_BYTE *)(v39 + v40) = 0;
        memcpy((void *)(v38 + *(_QWORD *)v35), qword_2CCBE30, v37);
      }
    }
    v42 = v19[1];
    if ( v42 )
    {
      v43 = v42 - 1;
      if ( v42 != 1 )
      {
        v44 = *((_QWORD *)v35 + 1);
        v45 = v42 - 1;
        if ( v44 )
        {
          --v44;
          v45 = v43 + v44;
          v42 += v44;
        }
        v46 = *(_QWORD *)v35;
        if ( *((_QWORD *)v35 + 2) < v42 )
        {
          v66[0] = v42;
          v62 = qvector_reserve(v35, v46, v42, 1);
          *(_QWORD *)v35 = v62;
          v42 = v66[0];
          v46 = v62;
        }
        *((_QWORD *)v35 + 1) = v42;
        *(_BYTE *)(v46 + v45) = 0;
        memcpy((void *)(v44 + *(_QWORD *)v35), (const void *)*v19, v43);
      }
    }
    v47 = qword_2CCBE18;
    if ( qword_2CCBE18 )
    {
      v58 = qword_2CCBE18 - 1;
      if ( qword_2CCBE18 != 1 )
      {
        v59 = *((_QWORD *)v35 + 1);
        v60 = qword_2CCBE18 - 1;
        if ( v59 )
        {
          --v59;
          v60 = v58 + v59;
          v47 = qword_2CCBE18 + v59;
        }
        v61 = *(_QWORD *)v35;
        if ( *((_QWORD *)v35 + 2) < v47 )
        {
          v63 = qvector_reserve(v35, v61, v47, 1);
          *(_QWORD *)v35 = v63;
          v61 = v63;
        }
        *((_QWORD *)v35 + 1) = v47;
        *(_BYTE *)(v61 + v60) = 0;
        memcpy((void *)(v59 + *(_QWORD *)v35), qword_2CCBE10, v58);
      }
    }
LABEL_98:
    sub_421D60((__int64 *)&ptr, (__int64 *)p_dest, "\n");
    v48 = _mm_loadu_si128(&v86);
    v49 = ptr;
    v86 = 0;
    ptr = nullptr;
    v50 = v48.m128i_i64[0];
    if ( v79 )
    {
      *(__m128i *)v66 = v48;
      v80.m128i_i64[0] = 0;
      qfree(v79);
      si128 = _mm_load_si128((const __m128i *)v66);
      v79 = v49;
      v80 = si128;
      if ( ptr )
      {
        v86.m128i_i64[0] = 0;
        qfree(ptr);
        v50 = v80.m128i_i64[0];
      }
    }
    else
    {
      v79 = v49;
      v80 = v48;
    }
    v52 = haystack;
    if ( v50 )
      v52 = (const char *)v79;
    if ( v72 )
      sub_5083D0(a1 + 213, v72, v52, 0);
    else
      sub_3D0F60(a1, v64, v52, 0);
    v25 = (char *)dest;
  }
  else if ( HIBYTE(v69) )
  {
    goto LABEL_98;
  }
LABEL_106:
  if ( v25 )
  {
    v53 = v83;
    if ( (_QWORD)v83 )
    {
      v54 = 0;
      v55 = v25;
      do
      {
        v56 = &v55[24 * v54];
        v57 = *(void **)v56;
        if ( *(_QWORD *)v56 )
        {
          *((_QWORD *)v56 + 1) = 0;
          qfree(v57);
          v55 = (char *)dest;
        }
        ++v54;
      }
      while ( v53 != v54 );
      v25 = v55;
    }
    *(_QWORD *)&v83 = 0;
    qfree(v25);
  }
  if ( v79 )
  {
    v80.m128i_i64[0] = 0;
    qfree(v79);
  }
LABEL_66:
  if ( v76 )
  {
    v77[0] = 0;
    qfree(v76);
  }
  if ( srca )
  {
    *(_QWORD *)v74 = 0;
    qfree(srca);
  }
  return (unsigned __int8)v65;
}
