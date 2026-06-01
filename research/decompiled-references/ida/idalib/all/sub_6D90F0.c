__int64 __fastcall sub_6D90F0(__int64 a1, __int64 a2, const char **a3, char a4)
{
  unsigned __int64 v7; // r13
  const char *v9; // rbp
  const char *v11; // rbp
  __int64 v12; // r14
  __int64 v13; // r13
  const char *v14; // rdi
  _BYTE *v15; // rax
  char *v16; // rax
  __int64 v17; // rbp
  unsigned __int64 v18; // r13
  __int64 v19; // r14
  _BYTE *v20; // rsi
  unsigned int v21; // ebp
  _BYTE *v22; // r9
  char *v23; // rbp
  __int64 v24; // r14
  __int64 v25; // r13
  const char *v26; // rdi
  __int64 *v27; // r14
  void *v28; // rax
  __int64 v29; // r13
  char *v30; // rsi
  unsigned __int64 v31; // rbp
  _BYTE *v32; // rax
  char *v33; // rax
  char *v34; // rax
  char *v35; // rsi
  unsigned __int64 v36; // rbp
  char *v37; // rax
  char *v38; // r10
  char *v39; // rdx
  __int64 v40; // r9
  size_t v41; // rbp
  __int64 v42; // rax
  __int64 v43; // r11
  size_t v44; // r8
  __m128i v45; // xmm0
  void *v46; // rax
  __m128i v47; // xmm0
  char *v48; // rbp
  __m128i v49; // xmm0
  signed __int64 v50; // r13
  char *v51; // rcx
  char *v52; // rax
  unsigned __int64 v53; // rbp
  char *v54; // rsi
  signed __int64 v55; // r13
  char *v56; // r10
  size_t v57; // r11
  __int64 v58; // r9
  void *v59; // rax
  char *v60; // rax
  void *v61; // rdi
  __int64 v62; // r13
  __m128i v63; // xmm1
  _BYTE *v64; // rax
  char *v65; // rax
  void *v66; // rax
  char *v67; // rax
  size_t n; // [rsp+8h] [rbp-C0h]
  size_t na; // [rsp+8h] [rbp-C0h]
  char *nb; // [rsp+8h] [rbp-C0h]
  size_t ne; // [rsp+8h] [rbp-C0h]
  unsigned __int64 nc; // [rsp+8h] [rbp-C0h]
  char *nf; // [rsp+8h] [rbp-C0h]
  size_t nd; // [rsp+8h] [rbp-C0h]
  size_t nh; // [rsp+8h] [rbp-C0h]
  void *ni; // [rsp+8h] [rbp-C0h]
  size_t ng; // [rsp+8h] [rbp-C0h]
  size_t nj; // [rsp+8h] [rbp-C0h]
  __m128i v79; // [rsp+10h] [rbp-B8h] BYREF
  void *src; // [rsp+20h] [rbp-A8h]
  char *v81; // [rsp+28h] [rbp-A0h]
  char *s; // [rsp+30h] [rbp-98h] BYREF
  __m128i v83; // [rsp+38h] [rbp-90h]
  void *v84; // [rsp+50h] [rbp-78h] BYREF
  __m128i v85; // [rsp+58h] [rbp-70h]
  void *ptr; // [rsp+70h] [rbp-58h] BYREF
  __m128i v87; // [rsp+78h] [rbp-50h] BYREF
  unsigned __int64 v88; // [rsp+88h] [rbp-40h]

  v88 = __readfsqword(0x28u);
  if ( a4 != 13 )
    return value_repr_t__parse_value_repr(a2, (__int64)a3, a4);
  v7 = (unsigned __int64)a3[1];
  if ( v7 <= 1 )
    return value_repr_t__parse_value_repr(a2, (__int64)a3, a4);
  v9 = *a3;
  if ( (*a3)[v7 - 2] != 41 || v7 - 1 <= 6 )
    return value_repr_t__parse_value_repr(a2, (__int64)a3, a4);
  if ( !strncmp(v9, "__enum(", 7u) )
  {
    v84 = nullptr;
    src = (void *)(v9 + 7);
    v85 = 0;
    if ( v7 != 8 )
    {
      v79.m128i_i64[0] = (__int64)&v84;
      v28 = (void *)qvector_reserve(&v84, 0, v7 - 7, 1);
      v85.m128i_i64[0] = v7 - 7;
      v84 = v28;
      memmove(v28, src, v7 - 8);
      *((char *)v84 + v7 - 8) = 0;
      v29 = v85.m128i_i64[0];
      v30 = (char *)v84;
      v31 = v85.m128i_i64[0] - 1;
      if ( v85.m128i_i64[0] - 1 <= 1 )
      {
        if ( v84 )
        {
          v85.m128i_i64[0] = 0;
          qfree(v84);
          v84 = nullptr;
          v85.m128i_i64[1] = 0;
        }
      }
      else
      {
        if ( v85.m128i_i64[1] < v31 )
        {
          v84 = (void *)qvector_reserve(v79.m128i_i64[0], v84, v85.m128i_i64[0] - 1, 1);
          v30 = (char *)v84;
        }
        v85.m128i_i64[0] = v31;
        v30[v29 - 2] = 0;
      }
    }
    v11 = haystack;
    if ( v85.m128i_i64[0] )
      v11 = (const char *)v84;
    if ( v11 )
    {
      n = *(_QWORD *)(a1 + 568);
      if ( n )
      {
        v12 = *(_QWORD *)(a1 + 560);
        v13 = 0;
        while ( 1 )
        {
          v14 = haystack;
          if ( *(_QWORD *)(v12 + 32) )
            v14 = *(const char **)(v12 + 24);
          if ( !strcmp(v14, v11) )
            break;
          ++v13;
          v12 += 56;
          if ( v13 == n )
            goto LABEL_52;
        }
        v11 = *(const char **)v12;
        src = &ptr;
        ptr = nullptr;
        v87 = 0;
        v15 = (_BYTE *)qvector_reserve(&ptr, 0, 8, 1);
        v87.m128i_i64[0] = 8;
        ptr = v15;
        v15[7] = 0;
        v16 = (char *)ptr;
        *(_DWORD *)ptr = 1852137311;
        *(_DWORD *)(v16 + 3) = 678262126;
        if ( !v11 )
          goto LABEL_18;
      }
      else
      {
LABEL_52:
        src = &ptr;
        ptr = nullptr;
        v87 = 0;
        v32 = (_BYTE *)qvector_reserve(&ptr, 0, 8, 1);
        v87.m128i_i64[0] = 8;
        ptr = v32;
        v32[7] = 0;
        v33 = (char *)ptr;
        *(_DWORD *)ptr = 1852137311;
        *(_DWORD *)(v33 + 3) = 678262126;
      }
      sub_6D45E0((__int64 *)src, v11);
    }
    else
    {
      src = &ptr;
      ptr = nullptr;
      v87 = 0;
      v64 = (_BYTE *)qvector_reserve(&ptr, 0, 8, 1);
      v87.m128i_i64[0] = 8;
      ptr = v64;
      v64[7] = 0;
      v65 = (char *)ptr;
      *(_DWORD *)ptr = 1852137311;
      *(_DWORD *)(v65 + 3) = 678262126;
    }
LABEL_18:
    v17 = v87.m128i_i64[0];
    if ( v87.m128i_i64[0] )
    {
      v18 = v87.m128i_i64[0] + 1;
      v19 = v87.m128i_i64[0];
      v17 = v87.m128i_i64[0] - 1;
    }
    else
    {
      v18 = 2;
      v19 = 1;
    }
    v20 = ptr;
    if ( v87.m128i_i64[1] < v18 )
    {
      ptr = (void *)qvector_reserve(src, ptr, v18, 1);
      v20 = ptr;
    }
    v87.m128i_i64[0] = v18;
    v20[v19] = 0;
    *((_BYTE *)ptr + v17) = 41;
    v21 = value_repr_t__parse_value_repr(a2, (__int64)src, 13);
    if ( ptr )
    {
      v87.m128i_i64[0] = 0;
      qfree(ptr);
    }
    if ( v84 )
    {
      v85.m128i_i64[0] = 0;
      qfree(v84);
    }
    goto LABEL_26;
  }
  if ( v7 - 1 <= 8 || strncmp(v9, "__stroff(", 9u) )
    return value_repr_t__parse_value_repr(a2, (__int64)a3, a4);
  v22 = nullptr;
  s = nullptr;
  src = (void *)(v9 + 9);
  v83 = 0;
  if ( v7 != 10 )
  {
    v79.m128i_i64[0] = (__int64)&s;
    v34 = (char *)qvector_reserve(&s, 0, v7 - 9, 1);
    v83.m128i_i64[0] = v7 - 9;
    s = v34;
    memmove(v34, src, v7 - 10);
    s[v7 - 10] = 0;
    v22 = (_BYTE *)v83.m128i_i64[0];
    v35 = s;
    v36 = v83.m128i_i64[0] - 1;
    if ( v83.m128i_i64[0] - 1 <= 1 )
    {
      if ( s )
      {
        v83.m128i_i64[0] = 0;
        qfree(s);
        v22 = (_BYTE *)v83.m128i_i64[0];
        s = nullptr;
        v83.m128i_i64[1] = 0;
      }
    }
    else
    {
      if ( v83.m128i_i64[1] < v36 )
      {
        nd = v83.m128i_i64[0];
        v60 = (char *)qvector_reserve(v79.m128i_i64[0], s, v83.m128i_i64[0] - 1, 1);
        v22 = (_BYTE *)nd;
        s = v60;
        v35 = v60;
      }
      v83.m128i_i64[0] = v36;
      v22[(_QWORD)v35 - 2] = 0;
      v22 = (_BYTE *)v83.m128i_i64[0];
    }
  }
  v84 = nullptr;
  v85 = 0;
  if ( !v22 )
  {
    src = &ptr;
LABEL_33:
    v23 = (char *)haystack;
    goto LABEL_34;
  }
  v79.m128i_i64[0] = (__int64)v22;
  src = v22;
  nb = s;
  v37 = strchr(s, 44);
  v38 = nb;
  v39 = (char *)src;
  v40 = v79.m128i_i64[0];
  if ( v37 )
  {
    v41 = v37 - nb;
    if ( v37 - nb != -1 )
    {
      v42 = v79.m128i_i64[0] - 1;
      ptr = nullptr;
      v43 = v79.m128i_i64[0] - 1;
      v87 = 0;
      if ( v41 <= v79.m128i_i64[0] - 1 )
        v43 = v41;
      v44 = v42 - v43;
      if ( v42 == v43 )
      {
        v45 = 0;
        v46 = nullptr;
        src = &ptr;
      }
      else
      {
        v61 = nullptr;
        src = &ptr;
        v62 = v44 + 1;
        if ( v44 != -1 )
        {
          v81 = nb;
          v79.m128i_i64[0] = v42 - v43;
          ng = v43;
          v66 = (void *)qvector_reserve(&ptr, 0, v44 + 1, 1);
          v38 = v81;
          v44 = v79.m128i_i64[0];
          ptr = v66;
          v43 = ng;
          v61 = v66;
        }
        nh = v44;
        v87.m128i_i64[0] = v62;
        memmove(v61, &v38[v43], v44);
        *((_BYTE *)ptr + nh) = 0;
        v46 = ptr;
        v45 = _mm_loadu_si128(&v87);
        v87 = 0;
        ptr = nullptr;
        if ( v84 )
        {
          ni = v46;
          v85.m128i_i64[0] = 0;
          v79 = v45;
          qfree(v84);
          v63 = _mm_load_si128(&v79);
          v84 = ni;
          v85 = v63;
          if ( ptr )
          {
            v87.m128i_i64[0] = 0;
            qfree(ptr);
          }
          v38 = s;
          v40 = v83.m128i_i64[0];
          goto LABEL_66;
        }
        v38 = s;
        v40 = v83.m128i_i64[0];
      }
      v84 = v46;
      v85 = v45;
LABEL_66:
      if ( !v40 )
        goto LABEL_67;
      ptr = nullptr;
      v87 = 0;
      if ( v40 - 1 <= v41 )
        v41 = v40 - 1;
      if ( v41 )
      {
        nf = v38;
        v59 = (void *)qvector_reserve(src, 0, v41 + 1, 1);
        v87.m128i_i64[0] = v41 + 1;
        ptr = v59;
        memmove(v59, nf, v41);
        *((_BYTE *)ptr + v41) = 0;
        v48 = (char *)ptr;
        v47 = _mm_loadu_si128(&v87);
        v38 = s;
      }
      else
      {
LABEL_67:
        v47 = 0;
        v48 = nullptr;
      }
      v39 = (char *)v47.m128i_i64[0];
      ptr = nullptr;
      v87 = 0;
      if ( v38 )
      {
        v79 = v47;
        ne = v47.m128i_i64[0];
        v83.m128i_i64[0] = 0;
        qfree(v38);
        v49 = _mm_load_si128(&v79);
        s = v48;
        v39 = (char *)ne;
        v83 = v49;
        if ( ptr )
        {
          v87.m128i_i64[0] = 0;
          qfree(ptr);
          v39 = (char *)v83.m128i_i64[0];
        }
      }
      else
      {
        s = v48;
        v83 = v47;
      }
      if ( (unsigned __int64)v39 <= 1 )
        goto LABEL_94;
      v38 = s;
LABEL_73:
      v50 = (signed __int64)(v39 - 1);
      v23 = v38;
      v51 = &v39[(_QWORD)v38 - 1];
      v52 = v51;
      if ( v38 >= v51 )
        goto LABEL_78;
      while ( *(v52 - 1) == 32 )
      {
        if ( v38 == --v52 )
          goto LABEL_106;
      }
      v50 = v52 - v38;
      if ( v52 == v38 )
      {
LABEL_106:
        if ( !v38 )
        {
LABEL_84:
          v54 = v23;
          while ( *v54 == 32 )
          {
            if ( v51 == ++v54 )
            {
              if ( v23 < v51 )
              {
                *v23 = *v51;
                v56 = s;
                goto LABEL_104;
              }
LABEL_35:
              na = *(_QWORD *)(a1 + 568);
              if ( na )
              {
                v24 = *(_QWORD *)(a1 + 560);
                v25 = 0;
                while ( 1 )
                {
                  v26 = haystack;
                  if ( *(_QWORD *)(v24 + 32) )
                    v26 = *(const char **)(v24 + 24);
                  if ( !strcmp(v26, v23) )
                    break;
                  ++v25;
                  v24 += 56;
                  if ( v25 == na )
                    goto LABEL_96;
                }
                v23 = *(char **)v24;
                ptr = nullptr;
                v87 = 0;
                sub_6D45E0((__int64 *)src, "__stroff(");
                if ( !v23 )
                  goto LABEL_42;
              }
              else
              {
LABEL_96:
                ptr = nullptr;
                v87 = 0;
                sub_6D45E0((__int64 *)src, "__stroff(");
              }
              sub_6D45E0((__int64 *)src, v23);
              goto LABEL_42;
            }
          }
          if ( v23 >= v54 )
            goto LABEL_34;
          v55 = v51 - v54;
          nc = v51 - v54 + 1;
          memmove(v23, v54, nc);
          v56 = s;
          v57 = nc;
          if ( v55 )
          {
            v58 = v83.m128i_i64[0];
            if ( v83.m128i_i64[0] < nc )
            {
              if ( v83.m128i_i64[1] < nc )
              {
                v67 = (char *)qvector_reserve(&s, s, nc, 1);
                v58 = v83.m128i_i64[0];
                v57 = nc;
                s = v67;
                v56 = v67;
              }
              nj = v57;
              memset(&v56[v58], 0, v57 - v58);
              v56 = s;
              v83.m128i_i64[0] = nj;
            }
            else if ( nc != v83.m128i_i64[0] )
            {
              v83.m128i_i64[0] = nc;
            }
            v56[v55] = 0;
            goto LABEL_93;
          }
LABEL_104:
          if ( !v56 )
          {
LABEL_93:
            v39 = (char *)v83.m128i_i64[0];
            goto LABEL_94;
          }
          v83.m128i_i64[0] = 0;
          qfree(v56);
          v39 = (char *)v83.m128i_i64[0];
          s = nullptr;
          v83.m128i_i64[1] = 0;
          goto LABEL_94;
        }
        v83.m128i_i64[0] = 0;
        qfree(v38);
        s = nullptr;
        v83.m128i_i64[1] = 0;
      }
      else
      {
LABEL_78:
        v53 = v50 + 1;
        if ( (unsigned __int64)v39 < v50 + 1 )
        {
          if ( v83.m128i_i64[1] < v53 )
          {
            sub_6D43D0((__int64 *)&s, v50 + 1);
            v38 = s;
          }
          memset(&v38[v83.m128i_i64[0]], 0, v53 - v83.m128i_i64[0]);
          v83.m128i_i64[0] = v50 + 1;
          v52 = &s[v50];
        }
        else if ( v39 != (char *)(v50 + 1) )
        {
          v83.m128i_i64[0] = v50 + 1;
        }
        *v52 = 0;
      }
      v39 = (char *)v83.m128i_i64[0];
      if ( v83.m128i_i64[0] > 1uLL )
      {
        v23 = s;
        v51 = &s[v83.m128i_i64[0] - 1];
        if ( s >= v51 )
          goto LABEL_34;
        goto LABEL_84;
      }
LABEL_94:
      v38 = s;
      if ( !v39 )
        goto LABEL_33;
      goto LABEL_95;
    }
  }
  src = &ptr;
  if ( v79.m128i_i64[0] != 1 )
    goto LABEL_73;
LABEL_95:
  v23 = v38;
LABEL_34:
  if ( v23 )
    goto LABEL_35;
  ptr = nullptr;
  v87 = 0;
  sub_6D45E0((__int64 *)src, "__stroff(");
LABEL_42:
  v27 = (__int64 *)src;
  sub_6D4710((__int64 *)src, (__int64)&v84);
  sub_6D45E0(v27, ")");
  v21 = value_repr_t__parse_value_repr(a2, (__int64)v27, 13);
  if ( ptr )
  {
    v87.m128i_i64[0] = 0;
    qfree(ptr);
  }
  if ( v84 )
    qfree(v84);
  if ( s )
  {
    v83.m128i_i64[0] = 0;
    qfree(s);
  }
LABEL_26:
  if ( !(_BYTE)v21 )
    return value_repr_t__parse_value_repr(a2, (__int64)a3, a4);
  return v21;
}
