__int64 __fastcall sub_6BC380(
        __int64 a1,
        __int64 *a2,
        __int64 *a3,
        const char *a4,
        const char *a5,
        double a6,
        double a7,
        double a8,
        double a9,
        double a10,
        double a11,
        double a12,
        __m128 a13)
{
  __int64 v14; // rdi
  unsigned __int8 v15; // al
  __int64 v16; // rdi
  unsigned int tinfo_details; // r15d
  char *v18; // r14
  size_t v20; // rax
  double v21; // xmm4_8
  double v22; // xmm5_8
  size_t v23; // rbx
  size_t v24; // r14
  char *v25; // r12
  char *v26; // r12
  char v27; // al
  size_t v28; // rax
  void *v29; // r15
  size_t v30; // r12
  void *v31; // rax
  const char *v32; // r14
  char *v33; // rcx
  char *v34; // rdx
  _BYTE *v35; // r14
  const char *v36; // rsi
  size_t v37; // rbx
  __int64 v38; // rbp
  __int64 v39; // r12
  const char *v40; // rdi
  void *v41; // r12
  __int64 v42; // rax
  __int64 v43; // rdi
  char v44; // al
  char *v45; // r14
  char *v46; // rbp
  unsigned int v47; // r12d
  char *v48; // rsi
  void *v49; // rbp
  void *v50; // r12
  char *v51; // rbx
  void *v52; // rdi
  void *v53; // rdi
  __int64 v54; // rdi
  char *v55; // rdi
  void *v56; // r12
  void *v57; // rbp
  char *v58; // rbx
  void *v59; // rdi
  void *v60; // rdi
  unsigned int v61; // eax
  char *v62; // r14
  char *v63; // rbp
  char *v64; // rsi
  __int64 v65; // rsi
  size_t v66; // rax
  size_t v67; // r15
  size_t v68; // r8
  _BYTE *v69; // rsi
  void *v70; // rdx
  void *v71; // rax
  const void *v72; // r12
  char *v73; // rdi
  __int64 v78; // [rsp+20h] [rbp-E8h]
  void *v79; // [rsp+20h] [rbp-E8h]
  __int64 v80; // [rsp+28h] [rbp-E0h]
  size_t v81; // [rsp+28h] [rbp-E0h]
  __int64 v82; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v83; // [rsp+38h] [rbp-D0h] BYREF
  char *s1; // [rsp+40h] [rbp-C8h] BYREF
  size_t n[3]; // [rsp+48h] [rbp-C0h]
  void *src[3]; // [rsp+60h] [rbp-A8h] BYREF
  __int128 v87; // [rsp+78h] [rbp-90h] BYREF
  __int64 v88; // [rsp+88h] [rbp-80h] BYREF
  __int64 v89; // [rsp+90h] [rbp-78h]
  int v90; // [rsp+98h] [rbp-70h]
  void *ptr; // [rsp+A0h] [rbp-68h]
  __int128 v92; // [rsp+A8h] [rbp-60h]
  char v93; // [rsp+B8h] [rbp-50h]
  unsigned __int64 v94; // [rsp+C8h] [rbp-40h]

  v14 = *a2;
  v94 = __readfsqword(0x28u);
  *(_OWORD *)n = 0;
  s1 = nullptr;
  if ( (v14 & 0x100) == 0 )
  {
LABEL_2:
    v15 = get_tinfo_property(v14, 2) & 0xF;
    if ( v15 == 12 )
    {
      v54 = *a2;
      memset(src, 0, sizeof(src));
      v87 = 0u;
      v88 = 0;
      v89 = 0;
      v90 = 0;
      ptr = nullptr;
      v93 = 16;
      v92 = 0;
      if ( !(unsigned __int8)get_tinfo_details(v54, 12, src) )
        goto LABEL_65;
      v61 = sub_6BC380(a1, (char *)&v87 + 8, a3, a4, a5);
      v62 = (char *)src[0];
      tinfo_details = v61;
      v63 = (char *)src[0] + 80 * (__int64)src[1];
      if ( v63 != src[0] )
      {
        do
        {
          v64 = v62 + 64;
          v62 += 80;
          tinfo_details |= sub_6BC380(a1, v64, a3, a4, a5);
        }
        while ( v62 != v63 );
      }
      if ( (_BYTE)tinfo_details )
        create_tinfo(a2, 12, 12, src);
      else
LABEL_65:
        tinfo_details = 0;
      if ( ptr )
      {
        *(_QWORD *)&v92 = 0;
        qfree(ptr);
      }
      cleanup_argloc(&v88);
      clear_tinfo_t((char *)&v87 + 8);
      v55 = (char *)src[0];
      if ( src[0] )
      {
        v56 = src[1];
        if ( src[1] )
        {
          v57 = nullptr;
          do
          {
            v58 = &v55[80 * (_QWORD)v57];
            clear_tinfo_t(v58 + 64);
            v59 = *((void **)v58 + 5);
            if ( v59 )
            {
              *((_QWORD *)v58 + 6) = 0;
              qfree(v59);
            }
            v60 = *((void **)v58 + 2);
            if ( v60 )
            {
              *((_QWORD *)v58 + 3) = 0;
              qfree(v60);
            }
            v57 = (char *)v57 + 1;
            cleanup_argloc(v58);
            v55 = (char *)src[0];
          }
          while ( v56 != v57 );
        }
        src[1] = nullptr;
        qfree(v55);
      }
LABEL_77:
      if ( !(_BYTE)tinfo_details )
      {
LABEL_80:
        v18 = s1;
        goto LABEL_8;
      }
LABEL_78:
      v18 = s1;
      tinfo_details = 1;
      if ( n[0] <= 1 )
        goto LABEL_8;
      save_tinfo(a2, *(_QWORD *)(a1 + 16), 0, s1, 5);
      goto LABEL_80;
    }
    if ( v15 <= 0xCu )
    {
      if ( v15 == 10 )
      {
        v83 = 0;
        *(_OWORD *)src = 0;
        v82 = 0;
        copy_tinfo_t(&src[1]);
        src[2] = nullptr;
        copy_tinfo_t(&src[2]);
        LODWORD(v87) = 0;
        WORD2(v87) = 0;
        clear_tinfo_t(&v82);
        clear_tinfo_t(&v83);
        tinfo_details = get_tinfo_details(*a2, 10, src);
        if ( !(_BYTE)tinfo_details
          || ((tinfo_details = sub_6BC380(a1, src, a3, a4, a5), !LOBYTE(src[2]))
           || !(unsigned __int8)sub_6BC380(a1, &src[2], a3, a4, a5))
          && !(_BYTE)tinfo_details )
        {
          clear_tinfo_t(&src[2]);
          clear_tinfo_t(&src[1]);
          clear_tinfo_t(src);
          v18 = s1;
          goto LABEL_8;
        }
        create_tinfo(a2, 10, 10, src);
        clear_tinfo_t(&src[2]);
        clear_tinfo_t(&src[1]);
        clear_tinfo_t(src);
        goto LABEL_78;
      }
      if ( v15 == 11 )
      {
        v16 = *a2;
        src[0] = nullptr;
        src[1] = nullptr;
        tinfo_details = get_tinfo_details(v16, 11, src);
        if ( !(_BYTE)tinfo_details || (tinfo_details = sub_6BC380(a1, src, a3, a4, a5), !(_BYTE)tinfo_details) )
        {
          clear_tinfo_t(src);
          v18 = s1;
          goto LABEL_8;
        }
        create_tinfo(a2, 11, 11, src);
        clear_tinfo_t(src);
        goto LABEL_78;
      }
LABEL_45:
      v18 = s1;
      tinfo_details = 0;
      goto LABEL_8;
    }
    if ( v15 != 13 )
      goto LABEL_45;
    v20 = strlen(a4);
    v23 = n[0];
    v24 = v20;
    v25 = (char *)n[0];
    if ( a4 )
    {
      if ( v20 )
      {
        if ( !n[0] )
          goto LABEL_46;
        if ( n[0] - 1 < v20 )
          goto LABEL_46;
        v26 = s1;
        if ( strncmp(s1, a4, v20) )
          goto LABEL_46;
        goto LABEL_17;
      }
      if ( n[0] )
      {
LABEL_107:
        v26 = s1;
LABEL_17:
        v27 = v26[v24];
        if ( v27 == 58 )
          goto LABEL_19;
LABEL_18:
        if ( !v27 )
        {
LABEL_19:
          memset(src, 0, sizeof(src));
          if ( !a5 )
          {
            v25 = (char *)v23;
            if ( !v23 )
            {
              if ( !v24 )
              {
                v32 = &byte_2CA12E1;
                if ( !&byte_2CA12E1 )
                  goto LABEL_123;
                goto LABEL_109;
              }
              goto LABEL_108;
            }
            v34 = s1;
            v32 = &s1[v24];
            if ( !v32 )
            {
LABEL_126:
              v33 = (char *)haystack;
              goto LABEL_24;
            }
            v25 = nullptr;
LABEL_109:
            v66 = strlen(v32);
            v67 = v66;
            v68 = v66;
            if ( v25 )
            {
              --v25;
              v68 = (size_t)&v25[v66];
            }
            goto LABEL_111;
          }
LABEL_20:
          v28 = strlen(a5);
          v29 = (void *)(v28 + 1);
          v30 = v28;
          v31 = (void *)qvector_reserve(src, 0, v28 + 1, 1);
          src[1] = v29;
          src[0] = v31;
          memmove(v31, a5, v30);
          *((_BYTE *)src[0] + v30) = 0;
          v25 = (char *)src[1];
          if ( !n[0] )
          {
            if ( !v24 )
              goto LABEL_22;
LABEL_108:
            v32 = &s1[v24];
            goto LABEL_109;
          }
          v34 = s1;
          v32 = &s1[v24];
          if ( !v32 )
          {
            v33 = (char *)src[0];
            if ( src[1] )
              goto LABEL_24;
            goto LABEL_126;
          }
          goto LABEL_109;
        }
LABEL_46:
        tinfo_details = 0;
        goto LABEL_47;
      }
    }
    else
    {
      if ( n[0] )
        goto LABEL_107;
      if ( v20 )
      {
        v27 = s1[v20];
        if ( v27 == 58 )
        {
          memset(src, 0, sizeof(src));
          if ( !a5 )
          {
            v32 = &s1[v24];
            v68 = strlen(v32);
            v67 = v68;
LABEL_111:
            v69 = src[0];
            v70 = (void *)(v68 + 1);
            if ( src[2] < (void *)(v68 + 1) )
            {
              v81 = v68;
              v79 = (void *)(v68 + 1);
              v71 = (void *)qvector_reserve(src, src[0], v70, 1);
              v68 = v81;
              v70 = v79;
              src[0] = v71;
              v69 = v71;
            }
            src[1] = v70;
            v69[v68] = 0;
            memmove(&v25[(unsigned __int64)src[0]], v32, v67);
            v33 = (char *)haystack;
            if ( src[1] )
              v33 = (char *)src[0];
            v34 = (char *)haystack;
            if ( n[0] )
              v34 = s1;
            goto LABEL_24;
          }
          goto LABEL_20;
        }
        goto LABEL_18;
      }
    }
    v27 = byte_2CA12E1;
    if ( byte_2CA12E1 == 58 )
    {
      memset(src, 0, sizeof(src));
      if ( !a5 )
      {
        v25 = nullptr;
LABEL_22:
        v32 = &byte_2CA12E1;
        if ( !&byte_2CA12E1 )
        {
          v33 = (char *)src[0];
          v34 = (char *)haystack;
          if ( v25 )
          {
LABEL_24:
            sub_6BC240(a1, a2, v34, v33, 0.0, a7, a8, a9, v21, v22, a12, a13);
            v35 = src[1];
            if ( src[1] > (char *)&dword_0 + 1 )
            {
              v72 = src[0];
              v73 = s1;
              if ( (void *)n[1] < src[1] )
              {
                s1 = (char *)qvector_reserve(&s1, s1, src[1], 1);
                v73 = s1;
              }
              n[0] = (size_t)v35;
              memmove(v73, v72, (size_t)(v35 - 1));
              v35[(_QWORD)s1 - 1] = 0;
            }
            else
            {
              n[0] = 0;
            }
            if ( src[0] )
            {
              src[1] = nullptr;
              qfree(src[0]);
            }
            tinfo_details = 1;
LABEL_47:
            v43 = *a2;
            memset(src, 0, sizeof(src));
            v88 = 0;
            LODWORD(v89) = 1;
            v87 = 0;
            v44 = get_tinfo_details(v43, 13, src);
            v45 = (char *)src[0];
            if ( v44 )
            {
              v46 = (char *)src[0] + 128 * (__int64)src[1];
              if ( v46 != src[0] )
              {
                v47 = 0;
                do
                {
                  v48 = v45 + 64;
                  v45 += 128;
                  v47 |= sub_6BC380(a1, v48, a3, a4, a5);
                }
                while ( v45 != v46 );
                if ( (_BYTE)v47 )
                {
                  v65 = 13;
                  if ( BYTE3(v89) )
                    v65 = 29;
                  create_tinfo(a2, v65, 13, src);
                  v45 = (char *)src[0];
                  if ( !src[0] )
                    goto LABEL_78;
                  v49 = src[1];
                  tinfo_details = v47;
                  if ( !src[1] )
                  {
                    qfree(src[0]);
                    goto LABEL_78;
                  }
LABEL_55:
                  v50 = nullptr;
                  do
                  {
                    v51 = &v45[128 * (_QWORD)v50];
                    clear_tinfo_t(v51 + 64);
                    v52 = *((void **)v51 + 5);
                    if ( v52 )
                    {
                      *((_QWORD *)v51 + 6) = 0;
                      qfree(v52);
                    }
                    v53 = *((void **)v51 + 2);
                    if ( v53 )
                    {
                      *((_QWORD *)v51 + 3) = 0;
                      qfree(v53);
                    }
                    v50 = (char *)v50 + 1;
                    v45 = (char *)src[0];
                  }
                  while ( v49 != v50 );
LABEL_61:
                  src[1] = nullptr;
                  qfree(v45);
                  goto LABEL_77;
                }
                v45 = (char *)src[0];
              }
            }
            if ( !v45 )
              goto LABEL_77;
            v49 = src[1];
            if ( !src[1] )
              goto LABEL_61;
            goto LABEL_55;
          }
LABEL_123:
          v33 = (char *)haystack;
          v34 = (char *)haystack;
          goto LABEL_24;
        }
        goto LABEL_109;
      }
      goto LABEL_20;
    }
    goto LABEL_18;
  }
  v36 = (const char *)v14;
  if ( !get_tinfo_pdata(&s1, v14, 0) )
  {
LABEL_44:
    v14 = *a2;
    goto LABEL_2;
  }
  v37 = n[0];
  v78 = a3[1];
  v38 = *a3;
  v39 = *a3 + 24 * v78;
  v80 = *a3;
  if ( *a3 == v39 )
  {
LABEL_81:
    if ( v37 )
    {
      v41 = (void *)qalloc_or_throw(v37, v36);
      memcpy(v41, s1, v37);
      v78 = a3[1];
      v80 = *a3;
    }
    else
    {
LABEL_40:
      v41 = nullptr;
    }
    if ( a3[2] < (unsigned __int64)(v78 + 1) )
    {
      v80 = qvector_reserve(a3, v80, v78 + 1, 24);
      *a3 = v80;
      v78 = a3[1];
    }
    v42 = v80 + 24 * v78;
    *(__m128i *)(v42 + 8) = _mm_unpacklo_epi64((__m128i)v37, (__m128i)v37);
    *(_QWORD *)v42 = v41;
    ++a3[1];
    goto LABEL_44;
  }
  v18 = s1;
  while ( 1 )
  {
    if ( *(_QWORD *)(v38 + 8) )
    {
      v36 = *(const char **)v38;
      v40 = haystack;
      if ( !v37 )
        goto LABEL_33;
    }
    else
    {
      if ( !v37 )
      {
        tinfo_details = 0;
        if ( v39 != v38 )
          goto LABEL_8;
        goto LABEL_40;
      }
      v36 = haystack;
    }
    v40 = v18;
LABEL_33:
    if ( !strcmp(v40, v36) )
      break;
    v38 += 24;
    if ( v39 == v38 )
      goto LABEL_81;
  }
  if ( v39 == v38 )
    goto LABEL_81;
  tinfo_details = 0;
LABEL_8:
  if ( v18 )
  {
    n[0] = 0;
    qfree(v18);
  }
  return tinfo_details;
}

