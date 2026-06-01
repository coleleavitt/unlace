unsigned __int64 __fastcall sub_5D3FD0(__int64 a1, int a2, const char *a3)
{
  size_t v6; // rax
  __int64 v7; // r15
  size_t v8; // r14
  char *v9; // r13
  char *v10; // rax
  signed __int64 v11; // rax
  int v12; // eax
  char *v13; // r13
  __m128i v14; // xmm0
  char *v15; // rax
  __m128i v16; // xmm1
  char *v17; // r13
  char v18; // r14
  char v19; // r13
  char *v20; // r15
  char *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  char *v24; // rdi
  int v26; // esi
  unsigned __int64 v27; // r14
  char *v28; // r13
  char *v29; // r12
  unsigned int v30; // edi
  signed __int64 v31; // r8
  unsigned __int64 v32; // r15
  __int64 v33; // rdx
  char *v34; // rsi
  char *v35; // rax
  char *v36; // rcx
  char *v37; // rdx
  __m128i v38; // xmm0
  signed __int64 v39; // rdx
  unsigned __int64 v40; // rcx
  unsigned __int64 v41; // rax
  unsigned __int64 v42; // rdx
  unsigned __int64 v43; // r13
  int v44; // r15d
  char *v45; // rax
  signed __int64 v46; // rax
  char v47; // al
  char *v48; // rdi
  __m128i v49; // xmm0
  int v50; // edx
  __m128 v51; // xmm0
  unsigned __int64 v52; // r14
  _BYTE *v53; // r13
  _BYTE *v54; // rbp
  unsigned int v55; // edi
  __int64 v56; // r8
  unsigned __int64 v57; // r15
  __int64 v58; // rdx
  char *v59; // rsi
  char *v60; // rax
  void *v61; // rcx
  void *v62; // rdx
  __m128i v63; // xmm0
  bool v64; // zf
  void *v65; // r8
  void *v66; // rdi
  _BYTE *v67; // r15
  _BYTE *v68; // r13
  unsigned int v69; // edi
  __int64 v70; // r9
  unsigned __int64 v71; // r8
  __int64 v72; // rdx
  char *v73; // rsi
  char *v74; // rax
  void *v75; // rcx
  void *v76; // rdx
  __m128i v77; // xmm0
  __int64 v78; // rax
  __int64 v79; // rax
  __int64 v80; // rax
  char *v81; // rax
  signed __int64 v82; // rax
  char *v83; // rdi
  __m128i v84; // xmm0
  char *v85; // [rsp+0h] [rbp-D0h]
  unsigned __int64 v86; // [rsp+0h] [rbp-D0h]
  void *v87; // [rsp+0h] [rbp-D0h]
  signed __int64 v88; // [rsp+0h] [rbp-D0h]
  __int64 v89; // [rsp+0h] [rbp-D0h]
  signed __int64 v90; // [rsp+0h] [rbp-D0h]
  __int64 v91; // [rsp+0h] [rbp-D0h]
  unsigned __int64 v92; // [rsp+8h] [rbp-C8h]
  unsigned __int64 v93; // [rsp+8h] [rbp-C8h]
  __int64 v94; // [rsp+10h] [rbp-C0h]
  __int64 v95; // [rsp+10h] [rbp-C0h]
  char *haystack; // [rsp+18h] [rbp-B8h] BYREF
  __m128i v97; // [rsp+20h] [rbp-B0h] BYREF
  void *dest; // [rsp+38h] [rbp-98h] BYREF
  __int128 v99; // [rsp+40h] [rbp-90h]
  void *src; // [rsp+58h] [rbp-78h] BYREF
  __m128 v101; // [rsp+60h] [rbp-70h]
  void *ptr; // [rsp+78h] [rbp-58h] BYREF
  __m128i v103; // [rsp+80h] [rbp-50h] BYREF
  unsigned __int64 v104; // [rsp+90h] [rbp-40h]

  v104 = __readfsqword(0x28u);
  v97 = 0;
  haystack = nullptr;
  if ( a3 )
  {
    v6 = strlen(a3);
    v7 = v6 + 1;
    v8 = v6;
    haystack = (char *)qvector_reserve(&haystack, 0, v6 + 1, 1);
    v97.m128i_i64[0] = v7;
    memmove(haystack, a3, v8);
    haystack[v8] = 0;
  }
  if ( !*(_BYTE *)(a1 + 88) )
  {
    sub_5C78B0(&haystack);
LABEL_14:
    dest = nullptr;
    v99 = 0;
    while ( 1 )
    {
      if ( !v97.m128i_i64[0] )
        goto LABEL_19;
      if ( (unsigned __int64)(v97.m128i_i64[0] - 1) <= 2 )
        break;
      v17 = haystack;
      if ( *haystack != 47 )
        goto LABEL_18;
      if ( (haystack[1] != 42 || haystack[2] != 42) && (haystack[1] != 42 || haystack[2] != 33) )
      {
        if ( haystack[1] == 47 && haystack[2] == 47 || haystack[1] == 47 && haystack[2] == 33 )
        {
          if ( v97.m128i_i64[0] == 4 || (v26 = 2, haystack[3] != 60) )
            v26 = 1;
          sub_5D38A0((char **)a1, v26, a2, (char **)&dest);
          if ( *(_DWORD *)(a1 + 56) )
          {
            v27 = v97.m128i_i64[0];
            if ( v97.m128i_i64[0] > 1uLL )
            {
              v28 = haystack;
              v29 = &haystack[v97.m128i_i64[0] - 1];
              if ( haystack < v29 )
              {
                while ( 1 )
                {
                  v30 = *(v29 - 1);
                  if ( v30 > 0x7F || !isspace(v30) )
                    break;
                  if ( v28 == --v29 )
                    goto LABEL_141;
                }
              }
              v31 = v29 - v28;
              if ( v29 == v28 )
              {
LABEL_141:
                if ( v28 )
                {
                  v97.m128i_i64[0] = 0;
                  qfree(v28);
                  haystack = nullptr;
                  v97.m128i_i64[1] = 0;
                }
              }
              else
              {
                v32 = v31 + 1;
                if ( v27 < v31 + 1 )
                {
                  if ( v97.m128i_i64[1] < v32 )
                  {
                    v90 = v29 - v28;
                    haystack = (char *)qvector_reserve(&haystack, v28, v31 + 1, 1);
                    v27 = v97.m128i_i64[0];
                    v28 = haystack;
                    v31 = v90;
                  }
                  v88 = v31;
                  memset(&v28[v27], 0, v32 - v27);
                  v97.m128i_i64[0] = v32;
                  v29 = &haystack[v88];
                }
                else if ( v27 != v31 + 1 )
                {
                  v97.m128i_i64[0] = v31 + 1;
                }
                *v29 = 0;
              }
            }
            v33 = *(_QWORD *)(a1 + 8);
            v34 = *(char **)a1;
            if ( *(_QWORD *)(a1 + 16) < (unsigned __int64)(v33 + 1) )
            {
              v80 = qvector_reserve(a1, v34, v33 + 1, 24);
              *(_QWORD *)a1 = v80;
              v33 = *(_QWORD *)(a1 + 8);
              v34 = (char *)v80;
            }
            v35 = &v34[24 * v33];
            *(_QWORD *)v35 = 0;
            v36 = haystack;
            *(_OWORD *)(v35 + 8) = 0;
            ++*(_QWORD *)(a1 + 8);
            v37 = *(char **)v35;
            *(_QWORD *)v35 = v36;
            v38 = _mm_loadu_si128((const __m128i *)(v35 + 8));
            haystack = v37;
            *(__m128i *)(v35 + 8) = v97;
            v97 = v38;
          }
LABEL_54:
          if ( dest )
          {
            *(_QWORD *)&v99 = 0;
            qfree(dest);
          }
          goto LABEL_56;
        }
LABEL_18:
        if ( *v17 == 47 )
        {
          if ( v17[1] == 47 )
          {
            v97.m128i_i64[0] = 0;
            goto LABEL_19;
          }
          if ( v17[1] == 42 )
          {
            src = nullptr;
            ptr = nullptr;
            v101 = 0;
            v103 = 0;
            v81 = strstr(v17, "*/");
            if ( !v81 || (v82 = v81 - v17, v82 == -1) )
            {
              src = v17;
              v18 = 1;
              haystack = nullptr;
              v101.m128_u64[1] = v97.m128i_u64[1];
              v97 = 0;
            }
            else
            {
              sub_5C9820((__int64 *)&src, (__int64)&ptr, &haystack, v82 + 2);
              v83 = haystack;
              v84 = _mm_loadu_si128(&v103);
              haystack = (char *)ptr;
              ptr = v83;
              v97 = v84;
              if ( v83 )
                qfree(v83);
              v17 = (char *)src;
              v18 = 0;
            }
            if ( v17 )
            {
              v101.m128_u64[0] = 0;
              qfree(v17);
            }
            goto LABEL_20;
          }
        }
LABEL_19:
        v18 = 0;
LABEL_20:
        *(_BYTE *)(a1 + 88) = v18;
        sub_5D38A0((char **)a1, 0, a2, (char **)&dest);
        goto LABEL_21;
      }
      if ( v97.m128i_i64[0] == 4 )
      {
        v44 = 1;
        src = nullptr;
        ptr = nullptr;
        v101 = 0;
        v103 = 0;
      }
      else
      {
        v44 = 2;
        if ( haystack[3] != 60 )
          v44 = 1;
        src = nullptr;
        ptr = nullptr;
        v101 = 0;
        v103 = 0;
      }
      v45 = strstr(haystack, "*/");
      if ( !v45 || (v46 = v45 - v17, v46 == -1) )
      {
        src = v17;
        v47 = 1;
        haystack = nullptr;
        v101 = _mm_loadh_ps((const double *)&v97.m128i_i64[1]);
        v97 = 0;
      }
      else
      {
        sub_5C9820((__int64 *)&src, (__int64)&ptr, &haystack, v46 + 2);
        v47 = 0;
      }
      *(_BYTE *)(a1 + 88) = v47;
      sub_5D38A0((char **)a1, v44, a2, (char **)&dest);
      if ( *(_DWORD *)(a1 + 56) )
      {
        v86 = v101.m128_u64[0];
        if ( v101.m128_u64[0] > 1 )
        {
          v67 = src;
          v68 = (char *)src + v101.m128_u64[0] - 1;
          if ( src < v68 )
          {
            while ( 1 )
            {
              v69 = (char)*(v68 - 1);
              if ( v69 > 0x7F || !isspace(v69) )
                break;
              if ( v67 == --v68 )
                goto LABEL_128;
            }
          }
          v70 = v68 - v67;
          if ( v68 == v67 )
          {
LABEL_128:
            if ( v67 )
            {
              v101.m128_u64[0] = 0;
              qfree(v67);
              src = nullptr;
              v101.m128_u64[1] = 0;
            }
          }
          else
          {
            v71 = v70 + 1;
            if ( v86 < v70 + 1 )
            {
              if ( v101.m128_u64[1] < v71 )
              {
                v95 = v68 - v67;
                v93 = v70 + 1;
                src = (void *)qvector_reserve(&src, v67, v70 + 1, 1);
                v67 = src;
                v70 = v95;
                v71 = v93;
                v86 = v101.m128_u64[0];
              }
              v94 = v70;
              v92 = v71;
              memset(&v67[v86], 0, v71 - v86);
              v101.m128_u64[0] = v92;
              v68 = (char *)src + v94;
            }
            else if ( v86 != v70 + 1 )
            {
              v101.m128_u64[0] = v70 + 1;
            }
            *v68 = 0;
          }
        }
        v72 = *(_QWORD *)(a1 + 8);
        v73 = *(char **)a1;
        if ( *(_QWORD *)(a1 + 16) < (unsigned __int64)(v72 + 1) )
        {
          v78 = qvector_reserve(a1, v73, v72 + 1, 24);
          *(_QWORD *)a1 = v78;
          v72 = *(_QWORD *)(a1 + 8);
          v73 = (char *)v78;
        }
        v74 = &v73[24 * v72];
        *(_OWORD *)(v74 + 8) = 0;
        *(_QWORD *)v74 = 0;
        v75 = src;
        ++*(_QWORD *)(a1 + 8);
        v76 = *(void **)v74;
        *(_QWORD *)v74 = v75;
        v77 = _mm_loadu_si128((const __m128i *)(v74 + 8));
        *(__m128 *)(v74 + 8) = v101;
        src = v76;
        v101 = (__m128)v77;
      }
      v48 = haystack;
      v49 = _mm_loadu_si128(&v103);
      haystack = (char *)ptr;
      v97 = v49;
      if ( v48 )
        qfree(v48);
      if ( src )
      {
        v101.m128_u64[0] = 0;
        qfree(src);
      }
LABEL_21:
      v19 = *(_BYTE *)(a1 + 88);
      if ( v19 )
        goto LABEL_54;
      sub_5C78B0(&haystack);
      src = nullptr;
      ptr = nullptr;
      v101 = 0;
      v103 = 0;
      if ( v97.m128i_i64[0] )
      {
        v20 = haystack;
        v85 = strstr(haystack, "//");
        v21 = strstr(v20, "/*");
        v22 = (__int64)v85;
        if ( v85 )
        {
          v39 = v85 - v20;
          v40 = v85 - v20;
          if ( v21 )
          {
            v41 = v21 - v20;
            if ( (v41 & v39) == 0xFFFFFFFFFFFFFFFFLL )
            {
              v22 = 0;
              v23 = 0;
              v21 = nullptr;
              goto LABEL_24;
            }
            if ( v40 == -1 )
            {
              v40 = v41;
            }
            else
            {
              v42 = v41;
              if ( v40 <= v41 )
                v42 = v85 - v20;
              if ( v41 != -1 )
                v40 = v42;
            }
          }
          else if ( v39 == -1 )
          {
            v22 = 0;
            goto LABEL_107;
          }
        }
        else
        {
          if ( !v21 )
            goto LABEL_107;
          v40 = v21 - v20;
          if ( v21 - v20 == -1 )
          {
            v21 = nullptr;
            v22 = 0;
LABEL_107:
            v23 = 0;
            goto LABEL_24;
          }
        }
        sub_5C9820((__int64 *)&src, (__int64)&ptr, &haystack, v40);
        if ( v101.m128_u64[0] > 1 )
        {
          sub_5D38A0((char **)a1, 0, a2, (char **)&dest);
          v43 = v101.m128_u64[0];
          if ( v101.m128_u64[0] > 1 )
          {
            v65 = src;
            v66 = dest;
            if ( *((_QWORD *)&v99 + 1) < v101.m128_u64[0] )
            {
              v87 = src;
              dest = (void *)qvector_reserve(&dest, dest, v101.m128_u64[0], 1);
              v65 = v87;
              v66 = dest;
            }
            *(_QWORD *)&v99 = v43;
            memmove(v66, v65, v43 - 1);
            *((char *)dest + v43 - 1) = 0;
          }
          else
          {
            *(_QWORD *)&v99 = 0;
          }
          v20 = haystack;
          v21 = (char *)ptr;
          v19 = 1;
          v22 = v103.m128i_i64[1];
          v23 = v103.m128i_i64[0];
          goto LABEL_24;
        }
        v19 = 1;
      }
      v20 = haystack;
      v21 = (char *)ptr;
      v22 = v103.m128i_i64[1];
      v23 = v103.m128i_i64[0];
LABEL_24:
      haystack = v21;
      v97.m128i_i64[0] = v23;
      v97.m128i_i64[1] = v22;
      if ( v20 )
        qfree(v20);
      if ( src )
      {
        v101.m128_u64[0] = 0;
        qfree(src);
      }
      if ( !v19 )
      {
        if ( dest )
        {
          *(_QWORD *)&v99 = 0;
          qfree(dest);
        }
        v24 = haystack;
        if ( !haystack )
          return v104 - __readfsqword(0x28u);
LABEL_32:
        v97.m128i_i64[0] = 0;
        qfree(v24);
        return v104 - __readfsqword(0x28u);
      }
    }
    if ( v97.m128i_i64[0] == 3 )
    {
      v17 = haystack;
      goto LABEL_18;
    }
    goto LABEL_19;
  }
  src = nullptr;
  v9 = haystack;
  v101 = 0;
  ptr = nullptr;
  v103 = 0;
  if ( v97.m128i_i64[0] && (v10 = strstr(haystack, "*/")) != nullptr && (v11 = v10 - v9, v11 != -1) )
  {
    sub_5C9820((__int64 *)&src, (__int64)&ptr, &haystack, v11 + 2);
    v12 = *(_DWORD *)(a1 + 56);
    *(_BYTE *)(a1 + 88) = 0;
    if ( !v12 )
      goto LABEL_8;
  }
  else
  {
    v50 = *(_DWORD *)(a1 + 56);
    src = v9;
    v51 = _mm_loadh_ps((const double *)&v97.m128i_i64[1]);
    *(_BYTE *)(a1 + 88) = 1;
    v101 = v51;
    haystack = nullptr;
    v97 = 0;
    if ( !v50 )
      goto LABEL_95;
  }
  v52 = v101.m128_u64[0];
  if ( v101.m128_u64[0] > 1 )
  {
    v53 = src;
    v54 = (char *)src + v101.m128_u64[0] - 1;
    if ( src < v54 )
    {
      while ( 1 )
      {
        v55 = (char)*(v54 - 1);
        if ( v55 > 0x7F || !isspace(v55) )
          break;
        if ( v53 == --v54 )
          goto LABEL_113;
      }
    }
    v56 = v54 - v53;
    if ( v54 == v53 )
    {
LABEL_113:
      if ( v53 )
      {
        v101.m128_u64[0] = 0;
        qfree(v53);
        src = nullptr;
        v101.m128_u64[1] = 0;
      }
    }
    else
    {
      v57 = v56 + 1;
      if ( v52 < v56 + 1 )
      {
        if ( v101.m128_u64[1] < v57 )
        {
          v91 = v54 - v53;
          src = (void *)qvector_reserve(&src, v53, v56 + 1, 1);
          v52 = v101.m128_u64[0];
          v53 = src;
          v56 = v91;
        }
        v89 = v56;
        memset(&v53[v52], 0, v57 - v52);
        v101.m128_u64[0] = v57;
        v54 = (char *)src + v89;
      }
      else if ( v52 != v56 + 1 )
      {
        v101.m128_u64[0] = v56 + 1;
      }
      *v54 = 0;
    }
  }
  v58 = *(_QWORD *)(a1 + 8);
  v59 = *(char **)a1;
  if ( *(_QWORD *)(a1 + 16) < (unsigned __int64)(v58 + 1) )
  {
    v79 = qvector_reserve(a1, v59, v58 + 1, 24);
    *(_QWORD *)a1 = v79;
    v58 = *(_QWORD *)(a1 + 8);
    v59 = (char *)v79;
  }
  v60 = &v59[24 * v58];
  *(_OWORD *)(v60 + 8) = 0;
  *(_QWORD *)v60 = 0;
  v61 = src;
  ++*(_QWORD *)(a1 + 8);
  v62 = *(void **)v60;
  *(_QWORD *)v60 = v61;
  v63 = _mm_loadu_si128((const __m128i *)(v60 + 8));
  *(__m128 *)(v60 + 8) = v101;
  v64 = *(_BYTE *)(a1 + 88) == 0;
  src = v62;
  v101 = (__m128)v63;
  if ( v64 )
  {
LABEL_8:
    v13 = haystack;
    v14 = _mm_loadu_si128(&v97);
    v15 = (char *)ptr;
    v16 = _mm_loadu_si128(&v103);
    ptr = haystack;
    haystack = v15;
    v97 = v16;
    v103 = v14;
    sub_5C78B0(&haystack);
    if ( v97.m128i_i64[0] > 1uLL )
    {
      if ( v13 )
        qfree(v13);
      if ( src )
      {
        v101.m128_u64[0] = 0;
        qfree(src);
      }
      goto LABEL_14;
    }
  }
  if ( ptr )
    qfree(ptr);
LABEL_95:
  if ( src )
  {
    v101.m128_u64[0] = 0;
    qfree(src);
    v24 = haystack;
    if ( haystack )
      goto LABEL_32;
  }
  else
  {
LABEL_56:
    v24 = haystack;
    if ( haystack )
      goto LABEL_32;
  }
  return v104 - __readfsqword(0x28u);
}

