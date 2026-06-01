unsigned __int64 __fastcall sub_8280C0(__int64 a1, const char *a2, __int64 (__fastcall **a3)(_QWORD, _QWORD))
{
  char v5; // r13
  char *v6; // rax
  int v7; // r12d
  __int64 v8; // rbp
  const char *v9; // r15
  __int64 (__fastcall *v10)(__int64, __int64 *, __int64); // rax
  const char *v11; // rax
  const char *v12; // r15
  size_t v13; // rax
  size_t v14; // r8
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rax
  void *v17; // rdi
  __int64 v18; // rbp
  __int64 v19; // rbx
  char *v20; // rdx
  char *v21; // rax
  void *v22; // rdi
  const char *v24; // rsi
  const char *v25; // rax
  const char *v26; // rbp
  size_t v27; // rax
  size_t v28; // r15
  unsigned __int64 v29; // rax
  __int64 v30; // rdx
  char *v31; // rax
  unsigned __int64 v32; // rax
  size_t v33; // r13
  void *v34; // rbp
  __int64 v35; // rbp
  char *v36; // r15
  _BOOL8 v37; // r13
  size_t v38; // rbp
  const void **v39; // r15
  __int64 v40; // rdx
  char *v41; // rax
  size_t v42; // r13
  void *v43; // rbp
  __int64 v44; // rax
  __int64 v45; // r13
  __int64 v46; // rbp
  const void **v47; // rax
  void *v48; // rdi
  __int64 v49; // rax
  char *v50; // rdi
  size_t v51; // rdx
  char *v52; // r15
  char *v53; // r13
  size_t v54; // r10
  char *v55; // rax
  char *v56; // rbp
  __int64 v57; // rdx
  char *v58; // rsi
  size_t v59; // r11
  char *v60; // rdi
  __int64 v61; // r9
  __int64 v62; // rsi
  size_t v63; // rdx
  __int64 v64; // rax
  void *v65; // rdi
  size_t v66; // rdx
  unsigned __int64 v67; // rax
  __int64 v68; // rsi
  __int64 v69; // rax
  void *v70; // rdi
  __int64 v71; // rbp
  __int64 v72; // rbx
  char *v73; // rdx
  char *v74; // rax
  void *v75; // rdi
  void *v76; // rdi
  void *v77; // rdx
  __int64 v78; // rax
  __int64 v79; // rax
  char *v80; // rax
  unsigned __int64 v81; // rax
  size_t v82; // rbp
  void *v83; // r12
  __int64 v84; // rax
  __int64 v85; // [rsp+8h] [rbp-130h]
  const void **v86; // [rsp+10h] [rbp-128h]
  _BYTE *v87; // [rsp+10h] [rbp-128h]
  void *v88; // [rsp+10h] [rbp-128h]
  void *v89; // [rsp+10h] [rbp-128h]
  unsigned __int64 v90; // [rsp+18h] [rbp-120h]
  size_t v91; // [rsp+20h] [rbp-118h]
  size_t v92; // [rsp+20h] [rbp-118h]
  size_t v93; // [rsp+28h] [rbp-110h]
  size_t v94; // [rsp+30h] [rbp-108h]
  size_t v95; // [rsp+38h] [rbp-100h]
  __int64 v96; // [rsp+40h] [rbp-F8h]
  const char *v97; // [rsp+48h] [rbp-F0h]
  char v98; // [rsp+57h] [rbp-E1h]
  void *v99; // [rsp+60h] [rbp-D8h] BYREF
  __int128 v100; // [rsp+68h] [rbp-D0h]
  void *src; // [rsp+80h] [rbp-B8h] BYREF
  size_t n[3]; // [rsp+88h] [rbp-B0h]
  void *ptr; // [rsp+A0h] [rbp-98h] BYREF
  __int128 v104; // [rsp+A8h] [rbp-90h]
  void *v105; // [rsp+C0h] [rbp-78h] BYREF
  __int128 v106; // [rsp+C8h] [rbp-70h]
  char *s; // [rsp+E0h] [rbp-58h] BYREF
  __int128 v108; // [rsp+E8h] [rbp-50h]
  unsigned __int64 v109; // [rsp+F8h] [rbp-40h]

  v109 = __readfsqword(0x28u);
  v100 = 0;
  v99 = nullptr;
  v98 = sub_811EA0((__int64 *)&v99, (int)a2);
  if ( !v98 )
  {
LABEL_110:
    v17 = v99;
    if ( !v99 )
      return v109 - __readfsqword(0x28u);
    v71 = v100;
    if ( (_QWORD)v100 )
    {
      v72 = 0;
      v73 = (char *)v99;
      do
      {
        v74 = &v73[24 * v72];
        v75 = *(void **)v74;
        if ( *(_QWORD *)v74 )
        {
          *((_QWORD *)v74 + 1) = 0;
          qfree(v75);
          v73 = (char *)v99;
        }
        ++v72;
      }
      while ( v71 != v72 );
      v17 = v73;
    }
    goto LABEL_36;
  }
  src = nullptr;
  *(_OWORD *)n = 0;
  if ( (_QWORD)v100 )
  {
    v90 = 0;
    v5 = 0;
    do
    {
      v97 = haystack;
      v6 = (char *)v99 + 24 * v90;
      if ( *((_QWORD *)v6 + 1) )
        v97 = *(const char **)v6;
      v85 = fopenRT(v97);
      if ( !v85 )
      {
        if ( src )
        {
          n[0] = 0;
          qfree(src);
        }
        goto LABEL_110;
      }
      v7 = 0;
      n[0] = 0;
      ptr = nullptr;
      v104 = 0;
LABEL_8:
      a2 = (const char *)v85;
      while ( qgetline() >= 0 )
      {
        ++v7;
        if ( qcleanline(&ptr, 0, 7) <= 0 )
          goto LABEL_8;
        v8 = v104;
        if ( (_QWORD)v104 )
        {
          v9 = (const char *)ptr;
          if ( *(_BYTE *)ptr == 46 )
            goto LABEL_44;
          if ( !a3 )
            goto LABEL_8;
          v10 = *((__int64 (__fastcall **)(__int64, __int64 *, __int64))*a3 + 2);
          if ( v10 != sub_826860 )
            goto LABEL_41;
        }
        else
        {
          v9 = (const char *)ptr;
          if ( byte_2CA12E1 == 46 )
          {
LABEL_44:
            v24 = "default";
            if ( !strncasecmp(v9 + 1, "default", 7u) )
            {
              if ( *(_QWORD *)(a1 + 216) <= 1u )
              {
                v25 = (const char *)skip_spaces(v9 + 8);
                v26 = v25;
                if ( v25 && (v27 = strlen(v25), (v28 = v27) != 0) )
                {
                  v76 = *(void **)(a1 + 208);
                  v77 = (void *)(v27 + 1);
                  if ( *(_QWORD *)(a1 + 224) < v27 + 1 )
                  {
                    v89 = (void *)(v27 + 1);
                    v78 = qvector_reserve(a1 + 208, *(_QWORD *)(a1 + 208), v77, 1);
                    *(_QWORD *)(a1 + 208) = v78;
                    v77 = v89;
                    v76 = (void *)v78;
                  }
                  *(_QWORD *)(a1 + 216) = v77;
                  memmove(v76, v26, v28);
                  *(_BYTE *)(*(_QWORD *)(a1 + 208) + v28) = 0;
                }
                else
                {
                  *(_QWORD *)(a1 + 216) = 0;
                }
              }
            }
            else
            {
              if ( *(_BYTE *)(a1 + 264) )
              {
                v29 = *(_QWORD *)(a1 + 192);
                if ( v29 )
                {
                  if ( !v5 && *(_QWORD *)(a1 + 240) < v29 )
                  {
                    do
                    {
                      v33 = n[0];
                      v34 = nullptr;
                      if ( n[0] )
                      {
                        v34 = (void *)qalloc_or_throw(n[0], v24);
                        memcpy(v34, src, v33);
                      }
                      v30 = *(_QWORD *)(a1 + 240);
                      v24 = *(const char **)(a1 + 232);
                      if ( *(_QWORD *)(a1 + 248) < (unsigned __int64)(v30 + 1) )
                      {
                        v49 = qvector_reserve(a1 + 232, v24, v30 + 1, 24);
                        *(_QWORD *)(a1 + 232) = v49;
                        v30 = *(_QWORD *)(a1 + 240);
                        v24 = (const char *)v49;
                      }
                      v31 = (char *)&v24[24 * v30];
                      *(_QWORD *)v31 = v34;
                      *(__m128i *)(v31 + 8) = _mm_unpacklo_epi64((__m128i)v33, (__m128i)v33);
                      v32 = *(_QWORD *)(a1 + 240) + 1LL;
                      *(_QWORD *)(a1 + 240) = v32;
                    }
                    while ( v32 < *(_QWORD *)(a1 + 192) );
                    v8 = v104;
                  }
                }
              }
              v105 = nullptr;
              v106 = 0;
              if ( v8 )
              {
                v35 = v8 - 1;
                s = nullptr;
                v36 = (char *)ptr;
                v108 = 0;
                v37 = v35 != 0;
                v38 = v35 - v37;
                if ( v38 )
                {
                  v50 = nullptr;
                  v51 = v38 + 1;
                  if ( v38 != -1 )
                  {
                    s = (char *)qvector_reserve(&s, 0, v51, 1);
                    v51 = v38 + 1;
                    v50 = s;
                  }
                  *(_QWORD *)&v108 = v51;
                  v24 = &v36[v37];
                  memmove(v50, &v36[v37], v38);
                  s[v38] = 0;
                  v52 = s;
                  if ( (_QWORD)v108 )
                  {
                    v53 = &s[v108 - 1];
                    if ( s < v53 )
                    {
                      do
                      {
                        v24 = (_BYTE *)(&qword_28 + 4);
                        v55 = strchr(v52, 44);
                        v56 = v55;
                        v54 = v53 - v52;
                        if ( !v55 || (v54 = v55 - v52, v55 != v52) )
                        {
                          v57 = v106;
                          v58 = (char *)v105;
                          if ( *((_QWORD *)&v106 + 1) < (unsigned __int64)(v106 + 1) )
                          {
                            v91 = v54;
                            v105 = (void *)qvector_reserve(&v105, v105, v106 + 1, 24);
                            v57 = v106;
                            v58 = (char *)v105;
                            v54 = v91;
                          }
                          v59 = v54;
                          v60 = &v58[24 * v57];
                          *(_OWORD *)(v60 + 8) = 0;
                          *(_QWORD *)v60 = 0;
                          *(_QWORD *)&v106 = v106 + 1;
                          v61 = *((_QWORD *)v60 + 1);
                          if ( v61 )
                          {
                            --v61;
                            v59 = v54 + v61;
                          }
                          v62 = *(_QWORD *)v60;
                          v63 = v59 + 1;
                          if ( v59 != -1 )
                          {
                            v96 = v61;
                            v95 = v59;
                            v94 = v54;
                            v93 = v59 + 1;
                            v64 = qvector_reserve(v60, v62, v63, 1);
                            v61 = v96;
                            v62 = v64;
                            v59 = v95;
                            v54 = v94;
                            *(_QWORD *)v60 = v64;
                            v63 = v93;
                          }
                          *((_QWORD *)v60 + 1) = v63;
                          *(_BYTE *)(v62 + v59) = 0;
                          v24 = v52;
                          memmove((void *)(*(_QWORD *)v60 + v61), v52, v54);
                          if ( !v56 )
                            break;
                        }
                        v52 = v56 + 1;
                      }
                      while ( v56 + 1 < v53 );
                      v52 = s;
                    }
                  }
                  if ( v52 )
                  {
                    *(_QWORD *)&v108 = 0;
                    qfree(v52);
                  }
                }
              }
              v39 = (const void **)v105;
              v86 = (const void **)((char *)v105 + 24 * v106);
              if ( v86 != v105 )
              {
                do
                {
                  v42 = (size_t)v39[1];
                  v43 = nullptr;
                  if ( v42 )
                  {
                    v43 = (void *)qalloc_or_throw(v39[1], v24);
                    memcpy(v43, *v39, v42);
                  }
                  v40 = *(_QWORD *)(a1 + 192);
                  v24 = *(const char **)(a1 + 184);
                  if ( *(_QWORD *)(a1 + 200) < (unsigned __int64)(v40 + 1) )
                  {
                    v44 = qvector_reserve(a1 + 184, v24, v40 + 1, 24);
                    *(_QWORD *)(a1 + 184) = v44;
                    v40 = *(_QWORD *)(a1 + 192);
                    v24 = (const char *)v44;
                  }
                  v39 += 3;
                  v41 = (char *)&v24[24 * v40];
                  *(_QWORD *)v41 = v43;
                  *(__m128i *)(v41 + 8) = _mm_unpacklo_epi64((__m128i)v42, (__m128i)v42);
                  ++*(_QWORD *)(a1 + 192);
                }
                while ( v86 != v39 );
                v39 = (const void **)v105;
              }
              n[0] = 0;
              if ( v39 )
              {
                v45 = v106;
                if ( (_QWORD)v106 )
                {
                  v46 = 0;
                  do
                  {
                    v47 = &v39[3 * v46];
                    v48 = (void *)*v47;
                    if ( *v47 )
                    {
                      v47[1] = nullptr;
                      qfree(v48);
                      v39 = (const void **)v105;
                    }
                    ++v46;
                  }
                  while ( v45 != v46 );
                }
                *(_QWORD *)&v106 = 0;
                qfree(v39);
              }
              v5 = 0;
            }
            goto LABEL_8;
          }
          if ( !a3 )
            goto LABEL_8;
          v9 = haystack;
          v10 = *((__int64 (__fastcall **)(__int64, __int64 *, __int64))*a3 + 2);
          if ( v10 != sub_826860 )
          {
LABEL_41:
            if ( (unsigned __int8)v10((__int64)a3, (__int64 *)&src, (__int64)v9) )
              goto LABEL_8;
            goto LABEL_42;
          }
        }
        v11 = (const char *)((__int64 (__fastcall **)(void **, const char *))a3)[1](&src, v9);
        v12 = v11;
        if ( !v11 )
          goto LABEL_8;
        if ( v11 != (const char *)-1LL )
        {
          v13 = strlen(v11);
          v14 = v13;
          if ( v13 )
          {
            v65 = src;
            v66 = v13 + 1;
            if ( n[1] < v13 + 1 )
            {
              v92 = v13;
              v88 = (void *)(v13 + 1);
              src = (void *)qvector_reserve(&src, src, v66, 1);
              v14 = v92;
              v65 = src;
              v66 = (size_t)v88;
            }
            n[0] = v66;
            v87 = (_BYTE *)v14;
            memmove(v65, v12, v14);
            v87[(_QWORD)src] = 0;
            if ( n[0] > 1 )
LABEL_43:
              sub_375400();
          }
          else
          {
            n[0] = 0;
          }
          goto LABEL_18;
        }
        if ( src )
        {
          n[0] = 0;
          qfree(src);
          src = nullptr;
          n[1] = 0;
          if ( n[0] > 1 )
            goto LABEL_43;
          goto LABEL_18;
        }
LABEL_42:
        if ( n[0] > 1 )
          goto LABEL_43;
LABEL_18:
        v15 = *(_QWORD *)(a1 + 192);
        if ( !v15 )
          goto LABEL_8;
        if ( !v5 )
        {
          for ( *(_BYTE *)(a1 + 265) = 1; *(_QWORD *)(a1 + 240) < v15; v15 = *(_QWORD *)(a1 + 192) )
          {
            v67 = v15 - 1;
            v68 = *(_QWORD *)(a1 + 184);
            *(_QWORD *)(a1 + 192) = v67;
            v69 = v68 + 24 * v67;
            v70 = *(void **)v69;
            if ( *(_QWORD *)v69 )
            {
              *(_QWORD *)(v69 + 8) = 0;
              qfree(v70);
            }
          }
        }
        a2 = (const char *)v85;
        v5 = v98;
      }
      qfclose(v85);
      if ( ptr )
      {
        *(_QWORD *)&v104 = 0;
        qfree(ptr);
      }
      ++v90;
    }
    while ( v90 < (unsigned __int64)v100 );
    if ( *(_BYTE *)(a1 + 264) )
    {
      v16 = *(_QWORD *)(a1 + 192);
      if ( v16 )
      {
        if ( !v5 )
          goto LABEL_123;
      }
    }
  }
  else
  {
    if ( !*(_BYTE *)(a1 + 264) )
      goto LABEL_29;
    v16 = *(_QWORD *)(a1 + 192);
    if ( !v16 )
      goto LABEL_29;
LABEL_123:
    if ( *(_QWORD *)(a1 + 240) < v16 )
    {
      do
      {
        v82 = n[0];
        v83 = nullptr;
        if ( n[0] )
        {
          v83 = (void *)qalloc_or_throw(n[0], a2);
          memcpy(v83, src, v82);
        }
        v79 = *(_QWORD *)(a1 + 240);
        a2 = *(const char **)(a1 + 232);
        if ( *(_QWORD *)(a1 + 248) < (unsigned __int64)(v79 + 1) )
        {
          v84 = qvector_reserve(a1 + 232, a2, v79 + 1, 24);
          *(_QWORD *)(a1 + 232) = v84;
          a2 = (const char *)v84;
          v79 = *(_QWORD *)(a1 + 240);
        }
        v80 = (char *)&a2[24 * v79];
        *(_QWORD *)v80 = v83;
        *(__m128i *)(v80 + 8) = _mm_unpacklo_epi64((__m128i)v82, (__m128i)v82);
        v81 = *(_QWORD *)(a1 + 240) + 1LL;
        *(_QWORD *)(a1 + 240) = v81;
      }
      while ( v81 < *(_QWORD *)(a1 + 192) );
    }
  }
  if ( src )
  {
    n[0] = 0;
    qfree(src);
  }
LABEL_29:
  v17 = v99;
  if ( v99 )
  {
    v18 = v100;
    if ( (_QWORD)v100 )
    {
      v19 = 0;
      v20 = (char *)v99;
      do
      {
        v21 = &v20[24 * v19];
        v22 = *(void **)v21;
        if ( *(_QWORD *)v21 )
        {
          *((_QWORD *)v21 + 1) = 0;
          qfree(v22);
          v20 = (char *)v99;
        }
        ++v19;
      }
      while ( v18 != v19 );
      v17 = v20;
    }
LABEL_36:
    *(_QWORD *)&v100 = 0;
    qfree(v17);
  }
  return v109 - __readfsqword(0x28u);
}

