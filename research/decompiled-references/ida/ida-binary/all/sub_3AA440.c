__int64 __fastcall add_type_form_data_t__::vfunc_2(
        __int64 a1,
        __int64 *a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  __int64 idati; // rbp
  int v13; // eax
  __int64 v14; // r12
  __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned int ordinal_limit; // r13d
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  unsigned int v22; // r14d
  __m128 v23; // xmm4
  __m128 v24; // xmm5
  __int64 v25; // rsi
  unsigned int v26; // ebp
  __int64 v27; // rdx
  __int64 v28; // rcx
  unsigned int v29; // eax
  unsigned int v30; // r14d
  unsigned __int64 v31; // rcx
  const char *v32; // rsi
  __int64 v33; // rdx
  const char *v34; // r13
  int type_ordinal; // eax
  unsigned int v36; // eax
  unsigned int v37; // r15d
  unsigned int v38; // eax
  __int64 v39; // rax
  __int64 v40; // rsi
  __int16 v41; // dx
  __int64 v43; // rsi
  __m128i si128; // xmm0
  const char *v45; // rsi
  char *v46; // rdx
  __int64 v47; // rdi
  const char *v48; // rsi
  unsigned int v49; // r12d
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  __m128 v54; // xmm4
  __m128 v55; // xmm5
  int v56; // r13d
  unsigned int v57; // r12d
  __int16 v58; // dx
  __int64 v59; // rsi
  __int64 v60; // rax
  __int64 v61; // rsi
  __int64 v62; // rax
  __int64 v63; // r15
  _QWORD *v64; // r14
  __int64 v65; // rdi
  __int64 v66; // rdi
  __int16 v67; // r15
  __int64 v68; // rdx
  unsigned int v69; // eax
  const char *v70; // rax
  const char *v71; // rax
  __int64 v72; // rdi
  __int64 v73; // rax
  bool v74; // r15
  unsigned int v75; // eax
  const char *v76; // rax
  __int64 v77; // rax
  __int64 v78; // rax
  __int64 v79; // rsi
  __m128i v80; // xmm0
  __int64 v81; // rax
  char v82; // [rsp+0h] [rbp-A8h]
  __int64 v83; // [rsp+10h] [rbp-98h]
  unsigned __int8 v84; // [rsp+10h] [rbp-98h]
  char v85; // [rsp+1Fh] [rbp-89h]
  __int64 v86; // [rsp+28h] [rbp-80h] BYREF
  __int64 v87; // [rsp+30h] [rbp-78h] BYREF
  __int128 v88; // [rsp+38h] [rbp-70h]
  __int128 v89; // [rsp+48h] [rbp-60h]
  __int64 v90; // [rsp+58h] [rbp-50h]
  __int16 v91; // [rsp+60h] [rbp-48h]
  char v92; // [rsp+62h] [rbp-46h]
  char v93; // [rsp+63h] [rbp-45h]
  unsigned __int64 v94; // [rsp+68h] [rbp-40h]

  v94 = __readfsqword(0x28u);
  idati = get_idati(a1);
  v13 = *(_DWORD *)(a1 + 292);
  if ( v13 <= 1 )
  {
    if ( v13 < 0 )
      return 1;
    if ( v13 == 1 )
    {
      v34 = &s1;
      if ( *(_QWORD *)(a1 + 72) )
        v34 = *(const char **)(a1 + 64);
      type_ordinal = get_type_ordinal(idati, v34);
      if ( !type_ordinal )
      {
        v86 = 0;
        if ( !(unsigned __int8)sub_3A8180((__int64)&v86, a1 + 64, a2, nullptr) )
        {
LABEL_27:
          clear_tinfo_t(&v86);
          return 0;
        }
LABEL_18:
        v36 = alloc_type_ordinals(idati, 1);
        v37 = v36;
        if ( v36 )
        {
          v38 = save_tinfo(&v86, idati, v36, v34, 1);
          if ( !v38 )
          {
            v39 = *(_QWORD *)(a1 + 272);
            v40 = *(_QWORD *)(a1 + 264);
            if ( *(_QWORD *)(a1 + 280) < (unsigned __int64)(v39 + 1) )
            {
              v78 = qvector_reserve(a1 + 264, v40, v39 + 1, 4);
              *(_QWORD *)(a1 + 264) = v78;
              v40 = v78;
              v39 = *(_QWORD *)(a1 + 272);
            }
            *(_DWORD *)(v40 + 4 * v39) = v37;
            v41 = *(_WORD *)(a1 + 56);
            ++*(_QWORD *)(a1 + 272);
            *(_DWORD *)(a1 + 288) = v37;
            set_type_choosable(idati, v37, v41 & 1);
            clear_tinfo_t(&v86);
            return 1;
          }
          v71 = (const char *)tinfo_errstr(v38);
          sub_169A50(a2, (__int64)"Could not save type: %s", v71);
        }
        else
        {
          v43 = *a2;
          if ( (unsigned __int64)a2[2] <= 0x20 )
          {
            v77 = qvector_reserve(a2, v43, 33, 1);
            *a2 = v77;
            v43 = v77;
          }
          si128 = _mm_load_si128((const __m128i *)&xmmword_5DD5A0);
          a2[1] = 33;
          *(__m128i *)v43 = si128;
          *(__m128i *)(v43 + 16) = _mm_load_si128((const __m128i *)&xmmword_5DD5B0);
          *(_BYTE *)(*a2 + 32) = 0;
        }
        goto LABEL_27;
      }
    }
    else
    {
      v34 = &s1;
      if ( *(_QWORD *)(a1 + 16) )
        v34 = *(const char **)(a1 + 8);
      type_ordinal = get_type_ordinal(idati, v34);
      if ( !type_ordinal )
      {
        v86 = 0;
        v87 = 0;
        v90 = 0;
        v91 = 1;
        v92 = 0;
        v88 = 0;
        v89 = 0;
        sub_3A5BB0(a1 + 8, (__int64)&v87);
        v45 = byte_9 + 4;
        if ( v93 )
          v45 = (_BYTE *)(&off_18 + 5);
        v85 = create_tinfo(&v86, v45, 13, &v87);
        if ( v85 )
        {
          v47 = v87;
          if ( !v87 )
            goto LABEL_63;
          v83 = v88;
          if ( !(_QWORD)v88 )
          {
            qfree(v87, v45);
            goto LABEL_63;
          }
        }
        else
        {
          v46 = (char *)"structure";
          v45 = "Could not create %s";
          if ( (*(_BYTE *)(a1 + 56) & 8) != 0 )
            v46 = "union";
          sub_169A50(a2, (__int64)"Could not create %s", v46);
          v47 = v87;
          if ( !v87 )
            goto LABEL_27;
          v83 = v88;
          if ( !(_QWORD)v88 )
          {
            qfree(v87, "Could not create %s");
            goto LABEL_27;
          }
        }
        v63 = 0;
        do
        {
          v64 = (_QWORD *)(v47 + 144 * v63);
          clear_tinfo_t(v64 + 8);
          v65 = v64[5];
          if ( v65 )
          {
            v64[6] = 0;
            qfree(v65, v45);
          }
          v66 = v64[2];
          if ( v66 )
          {
            v64[3] = 0;
            qfree(v66, v45);
          }
          v47 = v87;
          ++v63;
        }
        while ( v83 != v63 );
        *(_QWORD *)&v88 = 0;
        qfree(v87, v45);
        if ( !v85 )
          goto LABEL_27;
LABEL_63:
        if ( (*(_BYTE *)(a1 + 56) & 8) == 0 )
        {
          v67 = *(_WORD *)(a1 + 32) & 1;
          v84 = *(_WORD *)(a1 + 32) & 1;
          if ( v84 != ((get_tinfo_property(v86, 306) & 0x400) != 0) )
            set_tinfo_property4(&v86, 28, v84, 0, 0, 0);
          if ( v67 )
          {
            v68 = *(_QWORD *)(a1 + 40);
            if ( v68 < 0 )
            {
              v79 = *a2;
              if ( (unsigned __int64)a2[2] <= 0x21 )
              {
                v81 = qvector_reserve(a2, v79, 34, 1);
                *a2 = v81;
                v79 = v81;
              }
              v80 = _mm_load_si128((const __m128i *)&xmmword_5DD560);
              a2[1] = 34;
              *(_BYTE *)(v79 + 32) = 101;
              *(__m128i *)v79 = v80;
              *(__m128i *)(v79 + 16) = _mm_load_si128((const __m128i *)&xmmword_5DD570);
              *(_BYTE *)(*a2 + 33) = 0;
              goto LABEL_27;
            }
            v69 = set_tinfo_property4(&v86, 29, v68, 0, 0, 0);
            if ( v69 )
            {
              v70 = (const char *)tinfo_errstr(v69);
              sub_169A50(a2, (__int64)"Cannot set struct size: %s", v70);
              goto LABEL_27;
            }
          }
          v74 = (*(_BYTE *)(a1 + 56) & 4) != 0;
          if ( v74 != ((get_tinfo_property(v86, 306) & 0x800) != 0) )
          {
            v75 = set_tinfo_property4(&v86, 39, v74, 0, 0, 0);
            if ( v75 )
            {
              v76 = (const char *)tinfo_errstr(v75);
              sub_169A50(a2, (__int64)"Cannot set tuple: %s", v76);
              goto LABEL_27;
            }
          }
        }
        goto LABEL_18;
      }
    }
    sub_169A50(a2, (__int64)"Type '%s' already exists (with ordinal %u)", v34, type_ordinal);
    return 0;
  }
  if ( v13 != 2 )
    return 1;
  if ( *(_QWORD *)(a1 + 200) <= 1u )
    return 0;
  v14 = get_idati(a1);
  ordinal_limit = get_ordinal_limit(v14, a2, v15, v16);
  v22 = copy_named_type(v14, 0, *(_QWORD *)(a1 + 192));
  if ( v22 )
  {
    v25 = *(_QWORD *)(a1 + 192);
    v26 = 1;
    sub_169700(
      (int)"Successfully imported type \"%s\"\n",
      v25,
      v18,
      v19,
      v20,
      v21,
      a3,
      a4,
      a5,
      a6,
      v23,
      v24,
      a9,
      a10,
      v82);
    *(_DWORD *)(a1 + 288) = v22;
    if ( ordinal_limit )
      v26 = ordinal_limit;
    v29 = get_ordinal_limit(v14, v25, v27, v28);
    v30 = v29;
    if ( v26 < v29 )
    {
      v31 = 0;
      v32 = nullptr;
      v33 = v29 - ordinal_limit;
      v88 = 0;
      v87 = 0;
      if ( v29 != ordinal_limit )
      {
        v87 = qvector_reserve(&v87, 0, v33, 4);
        v33 = v88;
        v32 = (const char *)v87;
        v31 = *((_QWORD *)&v88 + 1);
      }
      do
      {
        if ( v31 < v33 + 1 )
        {
          v87 = qvector_reserve(&v87, v32, v33 + 1, 4);
          v33 = v88;
          v32 = (const char *)v87;
        }
        *(_DWORD *)&v32[4 * v33] = v26++;
        v32 = (const char *)v87;
        v31 = *((_QWORD *)&v88 + 1);
        v33 = v88 + 1;
        *(_QWORD *)&v88 = v88 + 1;
      }
      while ( v30 != v26 );
      v72 = *(_QWORD *)(a1 + 264);
      v73 = *(_QWORD *)(a1 + 280);
      *(_QWORD *)(a1 + 264) = v87;
      *(_QWORD *)(a1 + 272) = v33;
      *(_QWORD *)(a1 + 280) = v31;
      v87 = v72;
      *((_QWORD *)&v88 + 1) = v73;
      if ( v72 )
      {
        *(_QWORD *)&v88 = 0;
        qfree(v72, v32);
      }
    }
    return 1;
  }
  v48 = &s1;
  v49 = get_ordinal_limit(idati, 0, v18, v19) - 1;
  if ( v49 > 0xFFFFFFFD )
    v49 = v22;
  if ( *(_QWORD *)(a1 + 200) )
    v48 = *(const char **)(a1 + 192);
  if ( !(unsigned int)parse_decls(0, v48, sub_169700, &unk_610000) )
  {
    v56 = get_ordinal_limit(idati, v48, v50, v51);
    if ( (unsigned int)(v56 - 1) <= 0xFFFFFFFD )
    {
      v57 = v49 + 1;
      if ( v56 - 1 >= v57 )
      {
        do
        {
          v60 = *(_QWORD *)(a1 + 272);
          v61 = *(_QWORD *)(a1 + 264);
          if ( *(_QWORD *)(a1 + 280) < (unsigned __int64)(v60 + 1) )
          {
            v62 = qvector_reserve(a1 + 264, v61, v60 + 1, 4);
            *(_QWORD *)(a1 + 264) = v62;
            v61 = v62;
            v60 = *(_QWORD *)(a1 + 272);
          }
          *(_DWORD *)(v61 + 4 * v60) = v57;
          v58 = *(_WORD *)(a1 + 56);
          v59 = v57;
          ++*(_QWORD *)(a1 + 272);
          *(_DWORD *)(a1 + 288) = v57++;
          set_type_choosable(idati, v59, v58 & 1);
        }
        while ( v57 != v56 );
      }
    }
    return 1;
  }
  sub_169630(
    (int)"Bad declaration. See the message window for details.",
    (__int64)v48,
    v50,
    v51,
    v52,
    v53,
    a3,
    a4,
    a5,
    a6,
    v54,
    v55,
    a9,
    a10,
    v82);
  return 0;
}
