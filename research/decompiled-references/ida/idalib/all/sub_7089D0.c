char __fastcall sub_7089D0(__int64 a1, __int64 a2, __int64 a3)
{
  char result; // al
  unsigned int v6; // edx
  char *v7; // rbp
  size_t v8; // rax
  size_t v9; // r15
  size_t v10; // r14
  void *v11; // rax
  __int64 v12; // rsi
  unsigned __int64 v13; // r14
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  char *v17; // rdx
  __int64 v18; // rbp
  __int64 v19; // rsi
  _QWORD *v20; // rax
  __int64 v21; // rsi
  unsigned __int64 v22; // rbx
  _QWORD *v23; // rax
  __int64 v24; // rax
  size_t v25; // r15
  char *v26; // rbx
  void *v27; // rsi
  char *v28; // r9
  unsigned __int64 v29; // rdx
  __m128i v30; // xmm1
  void *v31; // rax
  __m128 v32; // xmm0
  unsigned __int64 v33; // rsi
  int v34; // eax
  char *v35; // r12
  size_t v36; // r14
  size_t v37; // r12
  __int64 v38; // r15
  __int64 v39; // r14
  const char *v40; // rsi
  const char *v41; // rdi
  __int64 v42; // rsi
  __int64 v43; // rax
  char *v44; // rdi
  size_t v45; // r8
  unsigned __int64 v46; // r14
  size_t v47; // r9
  size_t v48; // rdx
  char *v49; // rcx
  __m128 v50; // xmm1
  __m128 v51; // xmm0
  void *v52; // r14
  __int64 v53; // rax
  bool v54; // zf
  __int64 v55; // r14
  char *v56; // r12
  __int64 *v57; // rax
  _QWORD *v58; // rdi
  unsigned __int64 v59; // r12
  char *v60; // rsi
  __int64 *v61; // rax
  __int64 v62; // r15
  void **v63; // r14
  void **v64; // rbx
  size_t v65; // r12
  const char *v66; // rsi
  const char *v67; // rdi
  int v68; // eax
  void **v69; // rsi
  char *v70; // rax
  const char **v71; // r15
  const char **v72; // r14
  const char *v73; // rsi
  int v74; // eax
  const char **v75; // rsi
  char *v76; // rdi
  void *v77; // rdi
  void *v78; // rdi
  __int64 v79; // rbx
  int v80; // eax
  char *v81; // rdx
  void *v82; // rax
  char *v83; // rsi
  __int64 v84; // rax
  void *v85; // rax
  char *v86; // rdx
  char v87; // [rsp+8h] [rbp-130h]
  char v88; // [rsp+8h] [rbp-130h]
  char *v89; // [rsp+8h] [rbp-130h]
  char *v90; // [rsp+8h] [rbp-130h]
  void *v91; // [rsp+8h] [rbp-130h]
  __int64 v92; // [rsp+10h] [rbp-128h]
  unsigned __int64 v93; // [rsp+10h] [rbp-128h]
  size_t v94; // [rsp+10h] [rbp-128h]
  __int64 v95; // [rsp+18h] [rbp-120h]
  char *v96; // [rsp+18h] [rbp-120h]
  size_t v97; // [rsp+18h] [rbp-120h]
  __int64 v98; // [rsp+28h] [rbp-110h] BYREF
  __int64 v99; // [rsp+30h] [rbp-108h] BYREF
  __int64 v100; // [rsp+38h] [rbp-100h] BYREF
  void *src; // [rsp+40h] [rbp-F8h] BYREF
  __m128i v102; // [rsp+48h] [rbp-F0h] BYREF
  void *ptr; // [rsp+60h] [rbp-D8h] BYREF
  __m128i v104; // [rsp+68h] [rbp-D0h] BYREF
  char *haystack; // [rsp+80h] [rbp-B8h] BYREF
  __m128 n; // [rsp+88h] [rbp-B0h] BYREF
  void *v107; // [rsp+A0h] [rbp-98h] BYREF
  __m128 v108; // [rsp+A8h] [rbp-90h] BYREF
  char *s[2]; // [rsp+C0h] [rbp-78h] BYREF
  _QWORD v110[13]; // [rsp+D0h] [rbp-68h] BYREF

  v110[5] = __readfsqword(0x28u);
  result = *(_BYTE *)(a2 + 161);
  if ( result )
    return 0;
  if ( !(*(_BYTE *)(a2 + 160) | (a3 == 0)) )
  {
    v6 = *(_DWORD *)(a2 + 152);
    if ( v6 > 5 )
    {
      if ( v6 - 11 <= 3 )
        return result;
    }
    else if ( v6 > 1 )
    {
      return result;
    }
    v98 = *(_QWORD *)(a2 + 120);
    sub_B86A00(s, &v98);
    v7 = s[0];
    src = nullptr;
    v102 = 0;
    if ( !s[0]
      || (v8 = strlen(s[0]),
          v9 = v8 + 1,
          v10 = v8,
          v11 = (void *)qvector_reserve(&src, 0, v8 + 1, 1),
          v102.m128i_i64[0] = v9,
          src = v11,
          memmove(v11, v7, v10),
          *((_BYTE *)src + v10) = 0,
          v7 = s[0],
          (_QWORD *)s[0] != v110) )
    {
      operator delete(v7, v110[0] + 1LL);
    }
    v12 = *(_QWORD *)(a1 + 16);
    if ( *(char *)(a3 + 8) < 0 )
    {
      sub_6D8230((__int64 *)&ptr, v12, 0);
      v17 = (char *)v104.m128i_i64[0];
      if ( v104.m128i_i64[0] <= 1uLL )
      {
LABEL_49:
        v42 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 48LL) + 2264LL) + 80LL);
        sub_704780((__int64 *)(v42 + 72), v42, (__int64)v17, v14, v15, v16);
LABEL_12:
        v18 = *(_QWORD *)(a1 + 24);
        v19 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 48LL) + 2264LL) + 80LL);
        v20 = sub_704780((__int64 *)(v19 + 72), v19, (__int64)v17, v14, v15, v16);
        v21 = v98;
        v22 = (unsigned __int64)v20;
        v23 = v20 + 5;
        v99 = v98;
        if ( v22 )
          v22 = (unsigned __int64)v23;
        if ( (v98 & 7) != 0 )
          goto LABEL_15;
        v33 = v98 & 0xFFFFFFFFFFFFFFF8LL;
        if ( (v98 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
        {
          v34 = *(_DWORD *)v33 >> 9;
          if ( (_WORD)v34 == 0xFFFE || (unsigned __int16)v34 <= 0x24u )
          {
            if ( *(_BYTE *)(v18 + 48) )
            {
              sub_B86A00(s, &v99);
              v35 = s[0];
              haystack = nullptr;
              n = 0;
              if ( !s[0]
                || (v36 = strlen(s[0]),
                    haystack = (char *)qvector_reserve(&haystack, 0, v36 + 1, 1),
                    n.m128_u64[0] = v36 + 1,
                    memmove(haystack, v35, v36),
                    haystack[v36] = 0,
                    v35 = s[0],
                    (_QWORD *)s[0] != v110) )
              {
                operator delete(v35, v110[0] + 1LL);
              }
              sub_6D8230((__int64 *)&v107, *(_QWORD *)(v18 + 16), v22);
              if ( v108.m128_u64[0] > 1 )
              {
                if ( n.m128_u64[0] )
                {
                  v45 = n.m128_u64[0] - 1;
                  if ( n.m128_u64[0] != 1 )
                  {
                    v46 = v108.m128_u64[0] - 1;
                    v47 = v45 + v108.m128_u64[0] - 1;
                    v48 = v45 + v108.m128_u64[0];
                    if ( v108.m128_u64[1] < v45 + v108.m128_u64[0] )
                    {
                      v97 = v45 + v108.m128_u64[0] - 1;
                      v94 = n.m128_u64[0] - 1;
                      v91 = (void *)(v45 + v108.m128_u64[0]);
                      v85 = (void *)qvector_reserve(&v107, v107, v48, 1);
                      v47 = v97;
                      v45 = v94;
                      v107 = v85;
                      v48 = (size_t)v91;
                    }
                    v108.m128_u64[0] = v48;
                    *((_BYTE *)v107 + v47) = 0;
                    memcpy((char *)v107 + v46, haystack, v45);
                  }
                }
                v49 = haystack;
                v50 = _mm_loadh_ps((const double *)&n.m128_u64[1]);
                v51 = _mm_loadh_ps((const double *)&v108.m128_u64[1]);
                haystack = (char *)v107;
                v107 = v49;
                n = v51;
                v108 = v50;
              }
              sub_6DA080(*(_QWORD *)(v18 + 16), (__int64)&haystack);
              v37 = n.m128_u64[0];
              v92 = *(_QWORD *)(v18 + 32);
              v38 = *(_QWORD *)(v18 + 24);
              v39 = v38 + 24 * v92;
              v95 = v38;
              if ( v38 == v39 )
                goto LABEL_68;
              v89 = haystack;
              while ( 1 )
              {
                if ( *(_QWORD *)(v38 + 8) )
                {
                  v40 = *(const char **)v38;
                  v41 = ::haystack;
                  if ( !v37 )
                    goto LABEL_42;
                }
                else
                {
                  if ( !v37 )
                  {
                    if ( v39 != v38 )
                      goto LABEL_56;
LABEL_116:
                    v52 = nullptr;
LABEL_70:
                    if ( *(_QWORD *)(v18 + 40) < (unsigned __int64)(v92 + 1) )
                    {
                      v95 = qvector_reserve(v18 + 24, v95, v92 + 1, 24);
                      *(_QWORD *)(v18 + 24) = v95;
                      v92 = *(_QWORD *)(v18 + 32);
                    }
                    v53 = v95 + 24 * v92;
                    *(_QWORD *)v53 = v52;
                    *(__m128i *)(v53 + 8) = _mm_unpacklo_epi64((__m128i)v37, (__m128i)v37);
                    v54 = n.m128_u64[0] == 0;
                    v55 = *(_QWORD *)(v18 + 32) + 1LL;
                    *(_QWORD *)(v18 + 32) = v55;
                    if ( v54 )
                    {
                      v56 = (char *)::haystack;
                      goto LABEL_74;
                    }
                    v56 = haystack;
                    v70 = strstr(haystack, "::");
                    if ( v70 && v70 - v56 != -1 )
                    {
                      v71 = *(const char ***)(v18 + 24);
                      v72 = &v71[3 * v55];
                      if ( v71 == v72 )
                      {
LABEL_122:
                        v75 = v71 + 3;
                      }
                      else
                      {
                        while ( 1 )
                        {
                          v73 = ::haystack;
                          if ( v71[1] )
                            v73 = *v71;
                          v74 = strcmp(v56, v73);
                          v75 = v71 + 3;
                          if ( !v74 )
                            break;
                          v71 += 3;
                          if ( v72 == v75 )
                            goto LABEL_122;
                        }
                      }
                      v76 = (char *)*v71;
                      if ( *v71 )
                      {
                        v71[1] = nullptr;
                        qfree(v76);
                      }
                      memmove(v71, v75, *(_QWORD *)(v18 + 24) + 24LL * *(_QWORD *)(v18 + 32) - (_QWORD)v71 - 24);
                      --*(_QWORD *)(v18 + 32);
LABEL_56:
                      sub_B93610(v22, v99);
                      if ( v107 )
                      {
                        v108.m128_u64[0] = 0;
                        qfree(v107);
                        v44 = haystack;
                        if ( haystack )
                          goto LABEL_58;
LABEL_16:
                        LODWORD(v24) = *(_DWORD *)(a2 + 16);
                      }
                      else
                      {
                        v44 = haystack;
                        if ( !haystack )
                          goto LABEL_16;
LABEL_58:
                        n.m128_u64[0] = 0;
                        qfree(v44);
                        LODWORD(v24) = *(_DWORD *)(a2 + 16);
                      }
LABEL_17:
                      result = (_DWORD)v24 != 0;
                      if ( ptr )
                      {
                        v87 = result;
                        v104.m128i_i64[0] = 0;
                        qfree(ptr);
                        result = v87;
                      }
                      if ( src )
                      {
                        v88 = result;
                        v102.m128i_i64[0] = 0;
                        qfree(src);
                        return v88;
                      }
                      return result;
                    }
LABEL_74:
                    v57 = sub_6F3F60(*(_QWORD **)(v18 + 16), v56);
                    v58 = *(_QWORD **)(v18 + 16);
                    if ( v57 )
                    {
                      v59 = sub_6F4270((__int64)v58, v57);
                      goto LABEL_76;
                    }
                    v83 = (char *)::haystack;
                    if ( n.m128_u64[0] )
                      v83 = haystack;
                    v84 = sub_704920(v58, v83);
                    v100 = 0;
                    if ( (v84 & 0xFFFFFFFFFFFFFFF8LL) > 0xF )
                    {
                      clear_tinfo_t(&v100);
                      goto LABEL_77;
                    }
                    v81 = (char *)::haystack;
                    if ( n.m128_u64[0] )
                      v81 = haystack;
                    if ( !(unsigned __int8)sub_6DC6D0(*(_QWORD *)(v18 + 16), &v100, v81) )
                    {
                      clear_tinfo_t(&v100);
                      goto LABEL_121;
                    }
                    v86 = (char *)::haystack;
                    if ( n.m128_u64[0] )
                      v86 = haystack;
                    v59 = sub_7072E0(*(_QWORD **)(v18 + 16), &v100, (__int64)v86, 1u);
                    clear_tinfo_t(&v100);
LABEL_76:
                    if ( (v59 & 0xFFFFFFFFFFFFFFF8LL) > 0xF )
                    {
LABEL_77:
                      v60 = (char *)::haystack;
                      if ( n.m128_u64[0] )
                        v60 = haystack;
                      v61 = sub_6F3F60(*(_QWORD **)(v18 + 16), v60);
                      if ( !v61 )
                      {
                        if ( !under_debugger )
                          interr(3374);
                        BUG();
                      }
                      v62 = *v61;
                      if ( *v61 )
                      {
                        v110[0] = *v61;
                        s[0] = (char *)v110;
                        s[1] = (char *)0x400000001LL;
                        sub_B92CE0(v22, v99, v110, 1);
                        if ( (_QWORD *)s[0] != v110 )
                          free(s[0]);
LABEL_83:
                        v63 = *(void ***)(v18 + 24);
                        v64 = &v63[3 * *(_QWORD *)(v18 + 32)];
                        if ( v63 == v64 )
                        {
LABEL_105:
                          v69 = v63 + 3;
LABEL_106:
                          v77 = *v63;
                          if ( *v63 )
                          {
                            v63[1] = nullptr;
                            qfree(v77);
                          }
                          memmove(v63, v69, *(_QWORD *)(v18 + 24) + 24LL * *(_QWORD *)(v18 + 32) - (_QWORD)v63 - 24);
                          v78 = v107;
                          --*(_QWORD *)(v18 + 32);
                          if ( v78 )
                          {
                            v108.m128_u64[0] = 0;
                            qfree(v78);
                          }
                          if ( haystack )
                          {
                            n.m128_u64[0] = 0;
                            qfree(haystack);
                          }
                          v24 = *(unsigned int *)(a2 + 16);
                          if ( v62 )
                          {
                            v79 = v62 | (*(_BYTE *)(v62 + 29) >> 5) & 3;
                            if ( *(unsigned int *)(a2 + 20) < (unsigned __int64)(v24 + 1) )
                            {
                              sub_2237220(a2 + 8, a2 + 24, v24 + 1, 8);
                              v24 = *(unsigned int *)(a2 + 16);
                            }
                            *(_QWORD *)(*(_QWORD *)(a2 + 8) + 8 * v24) = v79;
                            v80 = *(_DWORD *)(a2 + 16);
                            *(_DWORD *)a2 = 2;
                            LODWORD(v24) = v80 + 1;
                            *(_DWORD *)(a2 + 16) = v24;
                          }
                          goto LABEL_17;
                        }
                        v65 = n.m128_u64[0];
                        v90 = haystack;
                        while ( 2 )
                        {
                          if ( v63[1] )
                          {
                            v66 = (const char *)*v63;
                            v67 = ::haystack;
                            if ( v65 )
                              goto LABEL_92;
                          }
                          else
                          {
                            if ( !v65 )
                              goto LABEL_105;
                            v66 = ::haystack;
LABEL_92:
                            v67 = v90;
                          }
                          v68 = strcmp(v67, v66);
                          v69 = v63 + 3;
                          if ( !v68 )
                            goto LABEL_106;
                          if ( v69 == v64 )
                          {
                            v63 = v64;
                            goto LABEL_105;
                          }
                          v63 += 3;
                          continue;
                        }
                      }
                    }
LABEL_121:
                    v62 = 0;
                    sub_B93610(v22, v99);
                    goto LABEL_83;
                  }
                  v40 = ::haystack;
                }
                v41 = v89;
LABEL_42:
                if ( !strcmp(v41, v40) )
                {
                  if ( v39 != v38 )
                    goto LABEL_56;
LABEL_68:
                  if ( !v37 )
                    goto LABEL_116;
                  v52 = (void *)qalloc_or_throw(v37);
                  memcpy(v52, haystack, v37);
                  v92 = *(_QWORD *)(v18 + 32);
                  v95 = *(_QWORD *)(v18 + 24);
                  goto LABEL_70;
                }
                v38 += 24;
                if ( v39 == v38 )
                  goto LABEL_68;
              }
            }
            v43 = *(_QWORD *)(v33 + 16);
            if ( *(_DWORD *)v43 == 17
              && !(*(_QWORD *)(v43 + 24) ^ 0x73696C5F61765F6ELL | *(_QWORD *)(v43 + 16) ^ 0x69746C6975625F5FLL)
              && *(_BYTE *)(v43 + 32) == 116 )
            {
              *(_BYTE *)(v18 + 48) = 1;
            }
          }
        }
        v21 = v99;
LABEL_15:
        sub_B93610(v22, v21);
        goto LABEL_16;
      }
      v13 = 0;
    }
    else
    {
      v13 = *(_QWORD *)(a3 + 360);
      sub_6D8230((__int64 *)&ptr, v12, v13);
      v17 = (char *)v104.m128i_i64[0];
      if ( v104.m128i_i64[0] <= 1uLL )
        goto LABEL_11;
    }
    if ( v102.m128i_i64[0] )
    {
      v25 = v102.m128i_i64[0] - 1;
      if ( v102.m128i_i64[0] != 1 )
      {
        v26 = v17 - 1;
        v27 = ptr;
        v28 = &v17[v25 - 1];
        v29 = (unsigned __int64)&v17[v25];
        if ( v104.m128i_i64[1] < v29 )
        {
          v96 = v28;
          v93 = v29;
          v82 = (void *)qvector_reserve(&ptr, ptr, v29, 1);
          v28 = v96;
          v29 = v93;
          ptr = v82;
          v27 = v82;
        }
        v104.m128i_i64[0] = v29;
        v28[(_QWORD)v27] = 0;
        memcpy(&v26[(_QWORD)ptr], src, v25);
      }
    }
    v17 = (char *)src;
    v30 = _mm_loadu_si128(&v104);
    v31 = ptr;
    v32 = _mm_loadh_ps((const double *)&v102.m128i_i64[1]);
    ptr = src;
    src = v31;
    v102 = v30;
    v104 = (__m128i)v32;
LABEL_11:
    if ( v13 )
      goto LABEL_12;
    goto LABEL_49;
  }
  return result;
}
