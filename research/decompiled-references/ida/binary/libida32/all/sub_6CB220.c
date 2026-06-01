__int64 __fastcall sub_6CB220(
        _QWORD *a1,
        __int64 *a2,
        char *a3,
        double a4,
        __m128i a5,
        double a6,
        __m128 a7,
        double a8,
        double a9,
        double a10,
        __m128 a11)
{
  const char *v14; // rdx
  unsigned int v15; // r13d
  unsigned __int8 v17; // al
  void *v18; // rdi
  void *v19; // r13
  unsigned __int8 v20; // r13
  char *v21; // r8
  const char *v22; // rcx
  __int64 v23; // rdx
  char *v24; // rdi
  __int64 v25; // r12
  __int64 v26; // rbp
  char *v27; // rbx
  void *v28; // rdi
  void *v29; // rdi
  const char *v30; // rdx
  bool v31; // sf
  __int64 v32; // r14
  double v33; // xmm4_8
  double v34; // xmm5_8
  __int64 v35; // rsi
  __int64 v36; // rax
  char *v37; // r8
  const char *v38; // rcx
  __int64 v39; // rdx
  void **v40; // rbx
  __int64 v41; // rbp
  void *v42; // rdi
  char *v43; // r13
  char *v44; // r15
  const char *v45; // rdx
  void *idati; // rax
  const char *v47; // rcx
  char *v48; // rdx
  double v49; // xmm4_8
  double v50; // xmm5_8
  void **v51; // r8
  __int64 v52; // rdi
  unsigned __int64 v53; // rdx
  void **v54; // r9
  _BYTE *v55; // rsi
  const char *v56; // r8
  const char *v57; // rcx
  char *v58; // rcx
  void **v59; // rax
  char *v60; // rdx
  void *v61; // rdi
  void *v62; // rax
  __m128i v63; // [rsp+0h] [rbp-198h] BYREF
  void *v64; // [rsp+10h] [rbp-188h]
  __int64 v65; // [rsp+18h] [rbp-180h]
  void **p_ptr; // [rsp+20h] [rbp-178h]
  void **v67; // [rsp+28h] [rbp-170h]
  __int64 v68; // [rsp+30h] [rbp-168h] BYREF
  __int64 v69; // [rsp+38h] [rbp-160h] BYREF
  void *v70; // [rsp+40h] [rbp-158h] BYREF
  unsigned __int64 v71; // [rsp+48h] [rbp-150h]
  void *v72; // [rsp+60h] [rbp-138h] BYREF
  __m128i v73; // [rsp+68h] [rbp-130h]
  void *v74; // [rsp+80h] [rbp-118h] BYREF
  __int128 v75; // [rsp+88h] [rbp-110h]
  void *v76; // [rsp+A0h] [rbp-F8h] BYREF
  __int64 v77; // [rsp+A8h] [rbp-F0h]
  char *v78; // [rsp+C0h] [rbp-D8h] BYREF
  __int64 v79; // [rsp+C8h] [rbp-D0h]
  __int64 v80; // [rsp+D0h] [rbp-C8h]
  void *v81; // [rsp+E0h] [rbp-B8h] BYREF
  void **v82; // [rsp+E8h] [rbp-B0h]
  unsigned __int64 v83; // [rsp+F0h] [rbp-A8h]
  void *v84; // [rsp+100h] [rbp-98h] BYREF
  __m128i v85; // [rsp+108h] [rbp-90h] BYREF
  void *ptr; // [rsp+120h] [rbp-78h] BYREF
  __int128 v87; // [rsp+128h] [rbp-70h]
  __int128 v88; // [rsp+138h] [rbp-60h]
  __int64 v89; // [rsp+148h] [rbp-50h]
  __int16 v90; // [rsp+150h] [rbp-48h]
  char v91; // [rsp+152h] [rbp-46h]
  bool v92; // [rsp+153h] [rbp-45h]
  unsigned __int64 v93; // [rsp+158h] [rbp-40h]

  v93 = __readfsqword(0x28u);
  sub_6B7750((__int64)&v70, (__int64)a1, (__int64)a3, 1);
  v72 = nullptr;
  v74 = nullptr;
  v73 = 0;
  v75 = 0;
  if ( v71 <= 1 && (unsigned __int8)sub_6B86A0(a1, (__int64 *)&v74, (unsigned __int64)a3) )
  {
    if ( a2 )
    {
      v30 = haystack;
      if ( (_QWORD)v75 )
        v30 = (const char *)v74;
      sub_6BC100((__int64)a1, a2, v30);
    }
LABEL_8:
    v15 = 1;
    goto LABEL_9;
  }
  if ( (unsigned __int8)sub_6D3B90(a1, a3) )
  {
    if ( a2 )
    {
      sub_6B7B10((__int64)&ptr, (__int64)a1, (__int64)a3, 1);
      v14 = haystack;
      if ( (_QWORD)v87 )
        v14 = (const char *)ptr;
      sub_6BC100((__int64)a1, a2, v14);
      if ( ptr )
      {
        *(_QWORD *)&v87 = 0;
        qfree(ptr);
      }
    }
    goto LABEL_8;
  }
  sub_6B7070((__int64)&v76, (__int64)a1, (__int64)a3);
  v17 = a3[73];
  ptr = nullptr;
  v90 = 1;
  v89 = 0;
  v92 = v17 >> 5 == 2;
  v91 = 0;
  v68 = 0;
  v87 = 0;
  v88 = 0;
  if ( v71 > 1 )
  {
    sub_6B7B10((__int64)&v84, (__int64)a1, (__int64)a3, 1);
    v18 = v72;
    v19 = v84;
    a5 = _mm_loadu_si128(&v85);
    v84 = nullptr;
    v85 = 0;
    if ( v72 )
    {
      v63 = a5;
      v73.m128i_i64[0] = 0;
      qfree(v72);
      a5 = _mm_load_si128(&v63);
      v72 = v19;
      v18 = v84;
      v73 = a5;
      if ( v84 )
      {
        v85.m128i_i64[0] = 0;
        qfree(v84);
      }
    }
    else
    {
      v72 = v19;
      v73 = a5;
    }
    v20 = 13;
    if ( v92 )
      v20 = 29;
    if ( a3[28] < 0 )
    {
      v63.m128i_i64[0] = (__int64)&v68;
      if ( a2 )
      {
        v45 = haystack;
        if ( v73.m128i_i64[0] )
          v45 = (const char *)v72;
        if ( v45 )
        {
          idati = (void *)a1[2];
          v85.m128i_i64[0] = (__int64)v45;
          v85.m128i_i16[4] = 0;
          if ( !idati )
            idati = (void *)get_idati(v18, a1);
          v84 = idati;
          create_tinfo(a2, v20, 189, &v84);
        }
        v63.m128i_i64[0] = (__int64)&v68;
      }
      goto LABEL_31;
    }
    v21 = (char *)haystack;
    if ( v77 )
      v21 = (char *)v76;
    v22 = haystack;
    if ( v73.m128i_i64[0] )
      v22 = (const char *)v72;
    v63.m128i_i64[0] = (__int64)&v68;
    v15 = sub_6BD0A0((__int64)a1, &v68, (__int64)a3, v22, v21, v20);
    if ( !(_BYTE)v15 )
      goto LABEL_32;
    if ( (a3[74] & 1) == 0 )
      goto LABEL_29;
    goto LABEL_51;
  }
  v31 = a3[28] < 0;
  v63.m128i_i64[0] = (__int64)&v68;
  if ( !v31 )
  {
    if ( (a3[74] & 1) == 0 )
    {
LABEL_29:
      if ( a2 )
      {
        v23 = v68;
        v68 = *a2;
        *a2 = v23;
      }
      goto LABEL_31;
    }
LABEL_51:
    v32 = 0;
    v65 = sub_A56C90(a1[6], a3);
    p_ptr = &ptr;
    sub_6BA380((__int64)a1, (__int64)&ptr, (__int64)a3);
    v80 = 0;
    v64 = nullptr;
    if ( (a3[29] & 1) != 0 )
    {
      v78 = nullptr;
      v79 = 0;
      sub_6B47A0((__int64)a1, (__int64)&v78, (__int64)a3);
      v32 = v79;
      v64 = v78;
      v43 = &v78[24 * v79];
      if ( v78 != v43 )
      {
        v44 = v78;
        do
        {
          if ( *((_QWORD *)v44 + 1) && !strcmp(*(const char **)v44, "__unaligned") )
            HIDWORD(v89) |= 0x40u;
          v44 += 24;
        }
        while ( v43 != v44 );
      }
    }
    if ( sub_B5ABC0(a3) )
    {
      v15 = sub_6CA7C0(a1, (__int64)p_ptr, (__int64)a3, 0.0, a5, a6, a7, v33, v34, a10, a11);
      if ( !(_BYTE)v15 )
        goto LABEL_73;
    }
    v35 = 13;
    v69 = 0;
    if ( v92 )
      v35 = 29;
    v15 = create_tinfo(&v69, v35, 13, p_ptr);
    if ( !(_BYTE)v15 )
    {
      v47 = haystack;
      if ( v71 )
        v47 = (const char *)v70;
      sub_6BB730(a1, (__int64)a3, (__int64)"Could not create tinfo for %s", v47);
      goto LABEL_101;
    }
    if ( (a3[29] & 1) != 0 )
      sub_6B3FA0((__int64)&v69, (__int64)a3);
    if ( (v65 & 1) != 0 || (byte_8[v65 & 0xFFFFFFFFFFFFFFF0LL] & 1) != 0 )
    {
      if ( !(_BYTE)v69 )
      {
        if ( (v65 & 4) != 0 )
          goto LABEL_65;
        goto LABEL_62;
      }
      v69 |= 0x40uLL;
    }
    if ( (v65 & 4) != 0 )
      goto LABEL_63;
LABEL_62:
    if ( (byte_8[v65 & 0xFFFFFFFFFFFFFFF0LL] & 4) != 0 )
    {
LABEL_63:
      v36 = v69;
      if ( (_BYTE)v69 )
      {
        LOBYTE(v36) = v69 | 0x80;
        v69 = v36;
      }
    }
LABEL_65:
    if ( v71 > 1 )
    {
LABEL_66:
      v37 = (char *)haystack;
      if ( v77 )
        v37 = (char *)v76;
      v38 = haystack;
      if ( v73.m128i_i64[0] )
        v38 = (const char *)v72;
      sub_6BED00((__int64)a1, &v69, 1, v38, v37, (__int64)a3, 0);
      if ( a2 )
      {
        v39 = v69;
        v69 = *a2;
        *a2 = v39;
      }
      goto LABEL_72;
    }
    if ( (unsigned __int8)sub_6BE860(a1, &v72, (__int64)&v69, 1, nullptr, (__int64)a3) )
    {
      v48 = (char *)haystack;
      if ( v73.m128i_i64[0] )
        v48 = (char *)v72;
      sub_6B80F0(a1, (unsigned __int64)a3, v48);
      v65 = (__int64)&v81;
      sub_6B75D0((__int64 *)&v81, (__int64)a1, (__int64)a3);
      v51 = v82;
      v52 = v65;
      if ( v82 )
      {
        v53 = (unsigned __int64)v82 + 1;
        v54 = v82;
        v51 = (void **)((char *)v82 - 1);
      }
      else
      {
        v54 = (void **)(&dword_0 + 1);
        v53 = 2;
      }
      v55 = v81;
      if ( v83 < v53 )
      {
        v67 = v51;
        p_ptr = v54;
        v65 = v53;
        v62 = (void *)qvector_reserve(v52, v81, v53, 1);
        v51 = v67;
        v54 = p_ptr;
        v81 = v62;
        v53 = v65;
        v55 = v62;
      }
      v82 = (void **)v53;
      *((_BYTE *)v51 + (_QWORD)v55) = 36;
      v56 = haystack;
      *((_BYTE *)v54 + (_QWORD)v81) = 0;
      v84 = nullptr;
      v85 = 0;
      if ( v73.m128i_i64[0] )
        v56 = (const char *)v72;
      v57 = haystack;
      if ( v82 )
        v57 = (const char *)v81;
      sub_6BC380(
        (__int64)a1,
        &v69,
        (__int64 *)&v84,
        v57,
        v56,
        0.0,
        *(double *)a5.m128i_i64,
        a6,
        *(double *)a7.m128_u64,
        v49,
        v50,
        a10,
        a11);
      v58 = (char *)v84;
      if ( v84 )
      {
        v59 = nullptr;
        v65 = v85.m128i_i64[0];
        if ( v85.m128i_i64[0] )
        {
          do
          {
            v60 = &v58[24 * (_QWORD)v59];
            v61 = *(void **)v60;
            if ( *(_QWORD *)v60 )
            {
              *((_QWORD *)v60 + 1) = 0;
              p_ptr = v59;
              qfree(v61);
              v58 = (char *)v84;
              v59 = p_ptr;
            }
            v59 = (void **)((char *)v59 + 1);
          }
          while ( (void **)v65 != v59 );
        }
        v85.m128i_i64[0] = 0;
        qfree(v58);
      }
      if ( v81 )
      {
        v82 = nullptr;
        qfree(v81);
      }
      goto LABEL_66;
    }
LABEL_101:
    v15 = 0;
LABEL_72:
    clear_tinfo_t(&v69);
LABEL_73:
    v40 = (void **)v64;
    if ( v64 )
    {
      v41 = 0;
      if ( v32 )
      {
        do
        {
          v42 = *v40;
          if ( *v40 )
          {
            v40[1] = nullptr;
            qfree(v42);
          }
          ++v41;
          v40 += 3;
        }
        while ( v32 != v41 );
      }
      qfree(v64);
    }
    goto LABEL_32;
  }
LABEL_31:
  v15 = 1;
LABEL_32:
  clear_tinfo_t(v63.m128i_i64[0]);
  v24 = (char *)ptr;
  if ( ptr )
  {
    v25 = v87;
    if ( (_QWORD)v87 )
    {
      v26 = 0;
      do
      {
        v27 = &v24[128 * v26];
        clear_tinfo_t(v27 + 64);
        v28 = *((void **)v27 + 5);
        if ( v28 )
        {
          *((_QWORD *)v27 + 6) = 0;
          qfree(v28);
        }
        v29 = *((void **)v27 + 2);
        if ( v29 )
        {
          *((_QWORD *)v27 + 3) = 0;
          qfree(v29);
        }
        ++v26;
        v24 = (char *)ptr;
      }
      while ( v25 != v26 );
    }
    *(_QWORD *)&v87 = 0;
    qfree(v24);
  }
  if ( v76 )
  {
    v77 = 0;
    qfree(v76);
  }
LABEL_9:
  if ( v74 )
  {
    *(_QWORD *)&v75 = 0;
    qfree(v74);
  }
  if ( v72 )
  {
    v73.m128i_i64[0] = 0;
    qfree(v72);
  }
  if ( v70 )
  {
    v71 = 0;
    qfree(v70);
  }
  return v15;
}

