__int64 __fastcall sub_8B7120(_QWORD *a1, const char *a2, const char *a3, _QWORD *a4, int a5, int a6)
{
  size_t v7; // rax
  size_t v8; // r12
  size_t v9; // rbp
  void *v10; // rax
  _QWORD *v11; // rbx
  size_t v12; // r12
  _QWORD *v13; // r14
  _QWORD *v14; // rbp
  const char *v15; // rsi
  const char *v16; // rdi
  _QWORD *v17; // r13
  int v18; // eax
  __int64 v19; // rax
  const char *v20; // rsi
  unsigned __int64 v21; // rax
  __int64 v22; // rbp
  int v24; // eax
  const char *v25; // rbp
  __int64 i; // r12
  size_t v27; // r13
  const char *v28; // rcx
  _QWORD *v29; // r12
  _QWORD *v30; // r14
  const char *v31; // rsi
  const char *v32; // rdi
  int v33; // eax
  _QWORD *v34; // rdx
  __int64 v35; // rax
  __int64 v36; // rdx
  const char *v37; // rsi
  const char *v38; // rdi
  __int64 v39; // rax
  size_t v40; // r13
  _QWORD *v41; // rbx
  _QWORD *v42; // rax
  __int64 v43; // rdx
  const char *v44; // rsi
  const char *v45; // rdi
  unsigned int v46; // eax
  __int64 v47; // rdi
  void *v48; // rdi
  void *v49; // rax
  void *v50; // rsi
  __int64 v51; // rax
  int v52; // ecx
  int v53; // r8d
  int v54; // r9d
  __int64 v55; // rax
  __int64 v56; // rsi
  __int64 v57; // rdx
  __int64 v58; // rax
  int v59; // r8d
  int v60; // r9d
  __int64 v61; // rax
  __int64 v62; // rsi
  __int64 v63; // rdx
  char *v64; // rax
  char *v65; // rdi
  char *v66; // rax
  unsigned int v67; // r12d
  unsigned int v68; // ebx
  unsigned int *v69; // r13
  unsigned int v70; // eax
  unsigned __int64 v71; // rax
  unsigned int v72; // r14d
  __int64 v73; // rcx
  __m128i v74; // xmm0
  __int64 v75; // rax
  __int64 v76; // rax
  const char *v77; // [rsp+0h] [rbp-C8h]
  const char *v78; // [rsp+0h] [rbp-C8h]
  __int64 v79; // [rsp+0h] [rbp-C8h]
  char *v80; // [rsp+0h] [rbp-C8h]
  _QWORD *v81; // [rsp+8h] [rbp-C0h]
  char *s2; // [rsp+10h] [rbp-B8h]
  char *s2a; // [rsp+10h] [rbp-B8h]
  char *v84; // [rsp+18h] [rbp-B0h]
  char *s1; // [rsp+20h] [rbp-A8h]
  __int64 s1a; // [rsp+20h] [rbp-A8h]
  const char *v87; // [rsp+28h] [rbp-A0h]
  __int64 v88[2]; // [rsp+30h] [rbp-98h] BYREF
  void *src; // [rsp+40h] [rbp-88h] BYREF
  size_t n[2]; // [rsp+48h] [rbp-80h]
  void *v91; // [rsp+58h] [rbp-70h]
  void *ptr; // [rsp+60h] [rbp-68h] BYREF
  int v93[4]; // [rsp+68h] [rbp-60h]
  int v94[2]; // [rsp+78h] [rbp-50h]
  __int64 v95; // [rsp+80h] [rbp-48h]
  unsigned __int64 v96; // [rsp+88h] [rbp-40h]

  v87 = a3;
  v96 = __readfsqword(0x28u);
  *(_OWORD *)n = 0;
  src = nullptr;
  if ( a2 )
  {
    v7 = strlen(a2);
    v8 = v7 + 1;
    v9 = v7;
    v10 = (void *)qvector_reserve(&src, 0, v7 + 1, 1);
    n[0] = v8;
    src = v10;
    memmove(v10, a2, v9);
    *((_BYTE *)src + v9) = 0;
    v11 = (_QWORD *)a1[36];
    v81 = a1 + 35;
    v12 = n[0];
    v13 = a1 + 35;
    if ( !v11 )
      goto LABEL_86;
  }
  else
  {
    v11 = (_QWORD *)a1[36];
    v12 = 0;
    v81 = a1 + 35;
    if ( !v11 )
    {
LABEL_38:
      v24 = 1;
      v25 = haystack;
      goto LABEL_28;
    }
  }
  a3 = (const char *)src;
  v13 = v81;
  v14 = v11;
  s2 = (char *)src;
  v84 = (char *)src;
  if ( !v12 )
    a3 = haystack;
  s1 = (char *)haystack;
  v77 = a3;
  while ( 1 )
  {
    v19 = v14[5];
    if ( !v12 )
      break;
    if ( v19 )
      goto LABEL_15;
    v15 = s2;
    v16 = haystack;
    v17 = v14;
LABEL_8:
    v18 = strcmp(v16, v15);
    a4 = (_QWORD *)v14[2];
    v14 = (_QWORD *)v14[3];
    if ( v18 >= 0 )
    {
      v13 = v17;
      v14 = a4;
    }
    if ( !v14 )
      goto LABEL_17;
  }
  if ( v19 )
  {
LABEL_15:
    v16 = (const char *)v14[4];
    v15 = v77;
    v17 = v14;
    goto LABEL_8;
  }
  while ( 1 )
  {
    a4 = (_QWORD *)v14[2];
    if ( !a4 )
      break;
    v13 = v14;
    v14 = (_QWORD *)v14[2];
    if ( a4[5] )
      goto LABEL_15;
  }
  v13 = v14;
LABEL_17:
  if ( v81 == v13 )
  {
LABEL_86:
    v81 = v13;
    if ( v12 )
    {
      s2 = (char *)src;
      goto LABEL_36;
    }
    goto LABEL_38;
  }
  if ( !v13[5] )
  {
    v20 = haystack;
    if ( !v12 )
      goto LABEL_20;
LABEL_35:
    if ( strcmp(s2, v20) < 0 )
    {
LABEL_36:
      v25 = s2;
      v24 = strcmp("Adlam", s2);
      goto LABEL_28;
    }
LABEL_20:
    v21 = v13[7];
    v22 = 0;
    if ( v21 != -1 )
    {
      if ( v21 >= a1[32] )
      {
        if ( !under_debugger )
          interr(1472);
        BUG();
      }
      v22 = *(_QWORD *)(a1[31] + 8 * v21);
    }
    goto LABEL_23;
  }
  v20 = (const char *)v13[4];
  if ( v12 )
    goto LABEL_35;
  v24 = 1;
  v25 = haystack;
  if ( !*v20 )
    goto LABEL_20;
LABEL_28:
  for ( i = 1; ; v24 = strcmp((const char *)*(&off_2B3D400 + i), v25) )
  {
    if ( !v24 )
    {
      ptr = nullptr;
      *(_QWORD *)v94 = 0;
      LODWORD(v95) = -1;
      *(_OWORD *)v93 = 0;
      if ( !(unsigned __int8)sub_8B6C70((int)&ptr, i, (int)a3, (int)a4, a5, a6) )
      {
        v22 = (__int64)ptr;
        if ( ptr )
        {
LABEL_34:
          *(_QWORD *)v93 = 0;
          v22 = 0;
          qfree(ptr);
          v11 = (_QWORD *)a1[36];
          s1a = -1;
          goto LABEL_40;
        }
        goto LABEL_39;
      }
      v58 = qalloc_or_throw(40);
      *(_QWORD *)v58 = 0;
      v22 = v58;
      *(_QWORD *)(v58 + 24) = 0;
      *(_DWORD *)(v58 + 32) = -1;
      *(_OWORD *)(v58 + 8) = 0;
      v61 = a1[32];
      v62 = a1[31];
      v63 = v61 + 1;
      if ( a1[33] < (unsigned __int64)(v61 + 1) )
      {
        v76 = qvector_reserve(a1 + 31, v62, v63, 8);
        a1[31] = v76;
        v62 = v76;
        v61 = a1[32];
      }
      *(_QWORD *)(v62 + 8 * v61) = v22;
      v64 = *(char **)v93;
      ++a1[32];
      v65 = (char *)ptr;
      s2a = v64;
      if ( v64 )
      {
        v80 = nullptr;
        do
        {
          v66 = &v65[16 * (int)v80];
          v67 = *(_QWORD *)v66;
          v68 = *((_QWORD *)v66 + 1);
          if ( v67 < v68 )
          {
            v69 = &dword_23CEB40[(unsigned int)*(_QWORD *)v66];
            while ( 1 )
            {
              if ( v67 <= 0x7F )
                v70 = *v69;
              else
                v70 = sub_8B6910(v67);
              v71 = HIWORD(v70);
              v72 = v67 + 1;
              if ( (unsigned __int8)v71 <= 0xBu )
              {
                v73 = 2688;
                if ( _bittest64(&v73, v71) )
                {
                  v74 = _mm_unpacklo_epi32(
                          _mm_unpacklo_epi32(_mm_cvtsi32_si128(v67), _mm_cvtsi32_si128(v72)),
                          (__m128i)0LL);
                  v88[1] = v74.m128i_i64[1];
                  rangeset_t_add(
                    v22,
                    (int)v88,
                    v63,
                    2688,
                    v59,
                    v60,
                    (int)v80,
                    v81,
                    (__int64)s2a,
                    (int)v84,
                    (int)s1,
                    (int)v87,
                    v74.m128i_i64[0]);
                }
              }
              ++v69;
              if ( v72 >= v68 )
                break;
              ++v67;
            }
            v65 = (char *)ptr;
          }
          ++v80;
        }
        while ( s2a != v80 );
      }
      if ( v65 )
      {
        *(_QWORD *)v93 = 0;
        qfree(v65);
      }
      goto LABEL_92;
    }
    if ( ++i == 328 )
      break;
  }
  if ( !v87 )
  {
    s1a = -1;
    v22 = 0;
    goto LABEL_40;
  }
  ptr = nullptr;
  *(_QWORD *)v94 = 0;
  LODWORD(v95) = -1;
  *(_OWORD *)v93 = 0;
  if ( ((unsigned int (__fastcall *)(void **, const char *, const char *, _QWORD *))v87)(&ptr, v25, a3, a4) )
  {
    v22 = (__int64)ptr;
    if ( ptr )
      goto LABEL_34;
LABEL_39:
    s1a = -1;
    v11 = (_QWORD *)a1[36];
    goto LABEL_40;
  }
  v51 = qalloc_or_throw(40);
  *(_QWORD *)v51 = 0;
  v22 = v51;
  *(_QWORD *)(v51 + 24) = 0;
  *(_DWORD *)(v51 + 32) = -1;
  *(_OWORD *)(v51 + 8) = 0;
  v55 = a1[32];
  v56 = a1[31];
  v57 = v55 + 1;
  if ( a1[33] < (unsigned __int64)(v55 + 1) )
  {
    v75 = qvector_reserve(a1 + 31, v56, v57, 8);
    a1[31] = v75;
    v56 = v75;
    v55 = a1[32];
  }
  *(_QWORD *)(v56 + 8 * v55) = v22;
  ++a1[32];
  rangeset_t_swap(
    v22,
    (int)&ptr,
    v57,
    v52,
    v53,
    v54,
    (int)v77,
    (int)v81,
    (int)s2,
    (int)v84,
    (int)s1,
    (int)v87,
    v88[0],
    v88[1],
    (int)src,
    n[0],
    n[1],
    v91,
    (__int64)ptr,
    v93[0],
    v93[2],
    v94[0],
    v95);
  if ( ptr )
  {
    *(_QWORD *)v93 = 0;
    qfree(ptr);
  }
LABEL_92:
  v11 = (_QWORD *)a1[36];
  if ( v22 )
    s1a = a1[32] - 1LL;
  else
    s1a = -1;
LABEL_40:
  if ( !v11 )
  {
    v29 = v81;
    goto LABEL_61;
  }
  v27 = n[0];
  v28 = (const char *)src;
  v29 = v81;
  v84 = (char *)src;
  if ( !n[0] )
    v28 = haystack;
  v78 = v28;
  while ( 2 )
  {
    v35 = v11[5];
    if ( v27 )
    {
      v30 = v11;
      if ( !v35 )
      {
        v31 = v84;
        v32 = haystack;
        goto LABEL_46;
      }
LABEL_54:
      v32 = (const char *)v11[4];
      v31 = v78;
LABEL_46:
      v33 = strcmp(v32, v31);
      v34 = (_QWORD *)v11[2];
      v11 = (_QWORD *)v11[3];
      if ( v33 >= 0 )
      {
        v29 = v30;
        v11 = v34;
      }
      if ( !v11 )
        goto LABEL_56;
      continue;
    }
    break;
  }
  if ( v35 )
  {
LABEL_53:
    v30 = v11;
    goto LABEL_54;
  }
  while ( 1 )
  {
    v36 = v11[2];
    if ( !v36 )
      break;
    v29 = v11;
    v11 = (_QWORD *)v11[2];
    if ( *(_QWORD *)(v36 + 40) )
      goto LABEL_53;
  }
  v29 = v11;
LABEL_56:
  if ( v81 == v29 )
    goto LABEL_61;
  if ( v29[5] )
  {
    v37 = (const char *)v29[4];
    v38 = haystack;
    if ( v27 )
      goto LABEL_59;
LABEL_60:
    if ( strcmp(v38, v37) < 0 )
    {
LABEL_61:
      v39 = operator new(0x40u);
      v40 = n[0];
      *(_QWORD *)(v39 + 32) = 0;
      v41 = (_QWORD *)v39;
      *(_OWORD *)(v39 + 40) = 0;
      if ( v40 )
      {
        v49 = (void *)qalloc_or_throw(v40);
        v41[4] = v49;
        v50 = src;
        v41[6] = v40;
        memcpy(v49, v50, v40);
        v41[5] = v40;
      }
      v41[7] = 0;
      v42 = sub_8B6F60(a1 + 34, v29, (__int64)(v41 + 4));
      v29 = v42;
      if ( v43 )
      {
        if ( v42 || v81 == (_QWORD *)v43 )
        {
          v47 = 1;
        }
        else
        {
          v44 = haystack;
          if ( *(_QWORD *)(v43 + 40) )
            v44 = *(const char **)(v43 + 32);
          v45 = haystack;
          if ( v41[5] )
            v45 = (const char *)v41[4];
          v79 = v43;
          v46 = strcmp(v45, v44);
          v43 = v79;
          v47 = v46 >> 31;
        }
        v29 = v41;
        std::_Rb_tree_insert_and_rebalance(v47, v41, v43, v81);
        ++a1[39];
      }
      else if ( v41 )
      {
        v48 = (void *)v41[4];
        if ( v48 )
        {
          v41[5] = 0;
          qfree(v48);
        }
        operator delete(v41, 0x40u);
      }
      v84 = (char *)src;
    }
  }
  else
  {
    v37 = haystack;
    if ( v27 )
    {
LABEL_59:
      v38 = v84;
      goto LABEL_60;
    }
  }
  v29[7] = s1a;
LABEL_23:
  if ( v84 )
  {
    n[0] = 0;
    qfree(v84);
  }
  return v22;
}
