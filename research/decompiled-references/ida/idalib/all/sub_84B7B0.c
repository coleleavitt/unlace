unsigned __int64 __fastcall sub_84B7B0(__int64 a1, int a2, __int64 (__fastcall **a3)(_QWORD, _QWORD))
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
  const char *v24; // rax
  const char *v25; // rbp
  size_t v26; // rax
  size_t v27; // r15
  unsigned __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rsi
  __int64 v31; // rax
  unsigned __int64 v32; // rax
  size_t v33; // r13
  void *v34; // rbp
  __int64 v35; // rbp
  char *v36; // r15
  _BOOL8 v37; // r13
  size_t v38; // rbp
  const void **v39; // r15
  __int64 v40; // rdx
  __int64 v41; // rsi
  __int64 v42; // rax
  size_t v43; // r13
  void *v44; // rbp
  __int64 v45; // rax
  __int64 v46; // r13
  __int64 v47; // rbp
  const void **v48; // rax
  void *v49; // rdi
  __int64 v50; // rax
  char *v51; // rdi
  size_t v52; // rdx
  char *v53; // r15
  char *v54; // r13
  size_t v55; // r10
  char *v56; // rax
  char *v57; // rbp
  __int64 v58; // rdx
  char *v59; // rsi
  size_t v60; // r11
  char *v61; // rdi
  __int64 v62; // r9
  __int64 v63; // rsi
  size_t v64; // rdx
  __int64 v65; // rax
  void *v66; // rdi
  size_t v67; // rdx
  unsigned __int64 v68; // rax
  __int64 v69; // rsi
  __int64 v70; // rax
  void *v71; // rdi
  __int64 v72; // rbp
  __int64 v73; // rbx
  char *v74; // rdx
  char *v75; // rax
  void *v76; // rdi
  void *v77; // rdi
  void *v78; // rdx
  __int64 v79; // rax
  __int64 v80; // rax
  __int64 v81; // rsi
  __int64 v82; // rax
  unsigned __int64 v83; // rax
  size_t v84; // rbp
  void *v85; // r12
  __int64 v86; // rax
  __int64 v87; // [rsp+8h] [rbp-130h]
  const void **v88; // [rsp+10h] [rbp-128h]
  _BYTE *v89; // [rsp+10h] [rbp-128h]
  void *v90; // [rsp+10h] [rbp-128h]
  void *v91; // [rsp+10h] [rbp-128h]
  unsigned __int64 v92; // [rsp+18h] [rbp-120h]
  size_t v93; // [rsp+20h] [rbp-118h]
  size_t v94; // [rsp+20h] [rbp-118h]
  size_t v95; // [rsp+28h] [rbp-110h]
  size_t v96; // [rsp+30h] [rbp-108h]
  size_t v97; // [rsp+38h] [rbp-100h]
  __int64 v98; // [rsp+40h] [rbp-F8h]
  const char *v99; // [rsp+48h] [rbp-F0h]
  char v100; // [rsp+57h] [rbp-E1h]
  void *v101; // [rsp+60h] [rbp-D8h] BYREF
  __int128 v102; // [rsp+68h] [rbp-D0h]
  void *src; // [rsp+80h] [rbp-B8h] BYREF
  size_t n[3]; // [rsp+88h] [rbp-B0h]
  void *ptr; // [rsp+A0h] [rbp-98h] BYREF
  __int128 v106; // [rsp+A8h] [rbp-90h]
  void *v107; // [rsp+C0h] [rbp-78h] BYREF
  __int128 v108; // [rsp+C8h] [rbp-70h]
  char *s; // [rsp+E0h] [rbp-58h] BYREF
  __int128 v110; // [rsp+E8h] [rbp-50h]
  unsigned __int64 v111; // [rsp+F8h] [rbp-40h]

  v111 = __readfsqword(0x28u);
  v102 = 0;
  v101 = nullptr;
  v100 = sub_835260((__int64 *)&v101, a2);
  if ( !v100 )
  {
LABEL_110:
    v17 = v101;
    if ( !v101 )
      return v111 - __readfsqword(0x28u);
    v72 = v102;
    if ( (_QWORD)v102 )
    {
      v73 = 0;
      v74 = (char *)v101;
      do
      {
        v75 = &v74[24 * v73];
        v76 = *(void **)v75;
        if ( *(_QWORD *)v75 )
        {
          *((_QWORD *)v75 + 1) = 0;
          qfree(v76);
          v74 = (char *)v101;
        }
        ++v73;
      }
      while ( v72 != v73 );
      v17 = v74;
    }
    goto LABEL_36;
  }
  src = nullptr;
  *(_OWORD *)n = 0;
  if ( (_QWORD)v102 )
  {
    v92 = 0;
    v5 = 0;
    do
    {
      v99 = haystack;
      v6 = (char *)v101 + 24 * v92;
      if ( *((_QWORD *)v6 + 1) )
        v99 = *(const char **)v6;
      v87 = fopenRT(v99);
      if ( !v87 )
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
      v106 = 0;
      while ( qgetline(&ptr) >= 0 )
      {
        ++v7;
        if ( qcleanline(&ptr, 0, 7) <= 0 )
          continue;
        v8 = v106;
        if ( (_QWORD)v106 )
        {
          v9 = (const char *)ptr;
          if ( *(_BYTE *)ptr == 46 )
            goto LABEL_44;
          if ( !a3 )
            continue;
          v10 = *((__int64 (__fastcall **)(__int64, __int64 *, __int64))*a3 + 2);
          if ( v10 != sub_849FA0 )
            goto LABEL_41;
        }
        else
        {
          v9 = (const char *)ptr;
          if ( byte_2CCB1E1 == 46 )
          {
LABEL_44:
            if ( !strncasecmp(v9 + 1, "default", 7u) )
            {
              if ( *(_QWORD *)(a1 + 216) <= 1u )
              {
                v24 = (const char *)skip_spaces(v9 + 8);
                v25 = v24;
                if ( v24 && (v26 = strlen(v24), (v27 = v26) != 0) )
                {
                  v77 = *(void **)(a1 + 208);
                  v78 = (void *)(v26 + 1);
                  if ( *(_QWORD *)(a1 + 224) < v26 + 1 )
                  {
                    v91 = (void *)(v26 + 1);
                    v79 = qvector_reserve(a1 + 208, *(_QWORD *)(a1 + 208), v78, 1);
                    *(_QWORD *)(a1 + 208) = v79;
                    v78 = v91;
                    v77 = (void *)v79;
                  }
                  *(_QWORD *)(a1 + 216) = v78;
                  memmove(v77, v25, v27);
                  *(_BYTE *)(*(_QWORD *)(a1 + 208) + v27) = 0;
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
                v28 = *(_QWORD *)(a1 + 192);
                if ( v28 )
                {
                  if ( !v5 && *(_QWORD *)(a1 + 240) < v28 )
                  {
                    do
                    {
                      v33 = n[0];
                      v34 = nullptr;
                      if ( n[0] )
                      {
                        v34 = (void *)qalloc_or_throw(n[0]);
                        memcpy(v34, src, v33);
                      }
                      v29 = *(_QWORD *)(a1 + 240);
                      v30 = *(_QWORD *)(a1 + 232);
                      if ( *(_QWORD *)(a1 + 248) < (unsigned __int64)(v29 + 1) )
                      {
                        v50 = qvector_reserve(a1 + 232, v30, v29 + 1, 24);
                        *(_QWORD *)(a1 + 232) = v50;
                        v29 = *(_QWORD *)(a1 + 240);
                        v30 = v50;
                      }
                      v31 = v30 + 24 * v29;
                      *(_QWORD *)v31 = v34;
                      *(__m128i *)(v31 + 8) = _mm_unpacklo_epi64((__m128i)v33, (__m128i)v33);
                      v32 = *(_QWORD *)(a1 + 240) + 1LL;
                      *(_QWORD *)(a1 + 240) = v32;
                    }
                    while ( v32 < *(_QWORD *)(a1 + 192) );
                    v8 = v106;
                  }
                }
              }
              v107 = nullptr;
              v108 = 0;
              if ( v8 )
              {
                v35 = v8 - 1;
                s = nullptr;
                v36 = (char *)ptr;
                v110 = 0;
                v37 = v35 != 0;
                v38 = v35 - v37;
                if ( v38 )
                {
                  v51 = nullptr;
                  v52 = v38 + 1;
                  if ( v38 != -1 )
                  {
                    s = (char *)qvector_reserve(&s, 0, v52, 1);
                    v52 = v38 + 1;
                    v51 = s;
                  }
                  *(_QWORD *)&v110 = v52;
                  memmove(v51, &v36[v37], v38);
                  s[v38] = 0;
                  v53 = s;
                  if ( (_QWORD)v110 )
                  {
                    v54 = &s[v110 - 1];
                    if ( s < v54 )
                    {
                      do
                      {
                        v56 = strchr(v53, 44);
                        v57 = v56;
                        v55 = v54 - v53;
                        if ( !v56 || (v55 = v56 - v53, v56 != v53) )
                        {
                          v58 = v108;
                          v59 = (char *)v107;
                          if ( *((_QWORD *)&v108 + 1) < (unsigned __int64)(v108 + 1) )
                          {
                            v93 = v55;
                            v107 = (void *)qvector_reserve(&v107, v107, v108 + 1, 24);
                            v58 = v108;
                            v59 = (char *)v107;
                            v55 = v93;
                          }
                          v60 = v55;
                          v61 = &v59[24 * v58];
                          *(_OWORD *)(v61 + 8) = 0;
                          *(_QWORD *)v61 = 0;
                          *(_QWORD *)&v108 = v108 + 1;
                          v62 = *((_QWORD *)v61 + 1);
                          if ( v62 )
                          {
                            --v62;
                            v60 = v55 + v62;
                          }
                          v63 = *(_QWORD *)v61;
                          v64 = v60 + 1;
                          if ( v60 != -1 )
                          {
                            v98 = v62;
                            v97 = v60;
                            v96 = v55;
                            v95 = v60 + 1;
                            v65 = qvector_reserve(v61, v63, v64, 1);
                            v62 = v98;
                            v63 = v65;
                            v60 = v97;
                            v55 = v96;
                            *(_QWORD *)v61 = v65;
                            v64 = v95;
                          }
                          *((_QWORD *)v61 + 1) = v64;
                          *(_BYTE *)(v63 + v60) = 0;
                          memmove((void *)(*(_QWORD *)v61 + v62), v53, v55);
                          if ( !v57 )
                            break;
                        }
                        v53 = v57 + 1;
                      }
                      while ( v57 + 1 < v54 );
                      v53 = s;
                    }
                  }
                  if ( v53 )
                  {
                    *(_QWORD *)&v110 = 0;
                    qfree(v53);
                  }
                }
              }
              v39 = (const void **)v107;
              v88 = (const void **)((char *)v107 + 24 * v108);
              if ( v88 != v107 )
              {
                do
                {
                  v43 = (size_t)v39[1];
                  v44 = nullptr;
                  if ( v43 )
                  {
                    v44 = (void *)qalloc_or_throw(v39[1]);
                    memcpy(v44, *v39, v43);
                  }
                  v40 = *(_QWORD *)(a1 + 192);
                  v41 = *(_QWORD *)(a1 + 184);
                  if ( *(_QWORD *)(a1 + 200) < (unsigned __int64)(v40 + 1) )
                  {
                    v45 = qvector_reserve(a1 + 184, v41, v40 + 1, 24);
                    *(_QWORD *)(a1 + 184) = v45;
                    v40 = *(_QWORD *)(a1 + 192);
                    v41 = v45;
                  }
                  v39 += 3;
                  v42 = v41 + 24 * v40;
                  *(_QWORD *)v42 = v44;
                  *(__m128i *)(v42 + 8) = _mm_unpacklo_epi64((__m128i)v43, (__m128i)v43);
                  ++*(_QWORD *)(a1 + 192);
                }
                while ( v88 != v39 );
                v39 = (const void **)v107;
              }
              n[0] = 0;
              if ( v39 )
              {
                v46 = v108;
                if ( (_QWORD)v108 )
                {
                  v47 = 0;
                  do
                  {
                    v48 = &v39[3 * v47];
                    v49 = (void *)*v48;
                    if ( *v48 )
                    {
                      v48[1] = nullptr;
                      qfree(v49);
                      v39 = (const void **)v107;
                    }
                    ++v47;
                  }
                  while ( v46 != v47 );
                }
                *(_QWORD *)&v108 = 0;
                qfree(v39);
              }
              v5 = 0;
            }
            continue;
          }
          if ( !a3 )
            continue;
          v9 = haystack;
          v10 = *((__int64 (__fastcall **)(__int64, __int64 *, __int64))*a3 + 2);
          if ( v10 != sub_849FA0 )
          {
LABEL_41:
            if ( (unsigned __int8)v10((__int64)a3, (__int64 *)&src, (__int64)v9) )
              continue;
            goto LABEL_42;
          }
        }
        v11 = (const char *)((__int64 (__fastcall **)(void **, const char *))a3)[1](&src, v9);
        v12 = v11;
        if ( !v11 )
          continue;
        if ( v11 != (const char *)-1LL )
        {
          v13 = strlen(v11);
          v14 = v13;
          if ( v13 )
          {
            v66 = src;
            v67 = v13 + 1;
            if ( n[1] < v13 + 1 )
            {
              v94 = v13;
              v90 = (void *)(v13 + 1);
              src = (void *)qvector_reserve(&src, src, v67, 1);
              v14 = v94;
              v66 = src;
              v67 = (size_t)v90;
            }
            n[0] = v67;
            v89 = (_BYTE *)v14;
            memmove(v66, v12, v14);
            v89[(_QWORD)src] = 0;
            if ( n[0] > 1 )
LABEL_43:
              sub_378D50();
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
          continue;
        if ( !v5 )
        {
          for ( *(_BYTE *)(a1 + 265) = 1; *(_QWORD *)(a1 + 240) < v15; v15 = *(_QWORD *)(a1 + 192) )
          {
            v68 = v15 - 1;
            v69 = *(_QWORD *)(a1 + 184);
            *(_QWORD *)(a1 + 192) = v68;
            v70 = v69 + 24 * v68;
            v71 = *(void **)v70;
            if ( *(_QWORD *)v70 )
            {
              *(_QWORD *)(v70 + 8) = 0;
              qfree(v71);
            }
          }
        }
        v5 = v100;
      }
      qfclose(v87);
      if ( ptr )
      {
        *(_QWORD *)&v106 = 0;
        qfree(ptr);
      }
      ++v92;
    }
    while ( v92 < (unsigned __int64)v102 );
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
        v84 = n[0];
        v85 = nullptr;
        if ( n[0] )
        {
          v85 = (void *)qalloc_or_throw(n[0]);
          memcpy(v85, src, v84);
        }
        v80 = *(_QWORD *)(a1 + 240);
        v81 = *(_QWORD *)(a1 + 232);
        if ( *(_QWORD *)(a1 + 248) < (unsigned __int64)(v80 + 1) )
        {
          v86 = qvector_reserve(a1 + 232, v81, v80 + 1, 24);
          *(_QWORD *)(a1 + 232) = v86;
          v81 = v86;
          v80 = *(_QWORD *)(a1 + 240);
        }
        v82 = v81 + 24 * v80;
        *(_QWORD *)v82 = v85;
        *(__m128i *)(v82 + 8) = _mm_unpacklo_epi64((__m128i)v84, (__m128i)v84);
        v83 = *(_QWORD *)(a1 + 240) + 1LL;
        *(_QWORD *)(a1 + 240) = v83;
      }
      while ( v83 < *(_QWORD *)(a1 + 192) );
    }
  }
  if ( src )
  {
    n[0] = 0;
    qfree(src);
  }
LABEL_29:
  v17 = v101;
  if ( v101 )
  {
    v18 = v102;
    if ( (_QWORD)v102 )
    {
      v19 = 0;
      v20 = (char *)v101;
      do
      {
        v21 = &v20[24 * v19];
        v22 = *(void **)v21;
        if ( *(_QWORD *)v21 )
        {
          *((_QWORD *)v21 + 1) = 0;
          qfree(v22);
          v20 = (char *)v101;
        }
        ++v19;
      }
      while ( v18 != v19 );
      v17 = v20;
    }
LABEL_36:
    *(_QWORD *)&v102 = 0;
    qfree(v17);
  }
  return v111 - __readfsqword(0x28u);
}
