__int64 __fastcall sub_4D5C60(__int64 a1, const char *a2, char a3, __m128 a4)
{
  const char *v4; // r13
  int v5; // ecx
  int *v6; // r8
  size_t v7; // r9
  __int64 v8; // rbx
  __int64 v9; // r15
  char v10; // al
  size_t v11; // rdx
  const char *v12; // r14
  size_t v13; // rax
  void *v14; // r14
  __m128i si128; // xmm0
  void *v16; // r14
  void *v17; // rdi
  const char *v18; // rdi
  void *v19; // rdi
  bool v20; // zf
  char *v21; // r14
  const char *v22; // rdi
  __int64 file_ext; // rax
  void **p_ptr; // rdi
  size_t v25; // r10
  size_t v26; // r10
  const char *v28; // rdi
  __int64 v29; // rax
  int v30; // ecx
  int v31; // r8d
  const char *v32; // rsi
  char *v33; // rcx
  __int64 v34; // r8
  _BYTE *v35; // rsi
  char *v36; // rax
  __int64 v37; // r9
  __int64 v38; // rdx
  const char *v39; // r11
  void *v40; // rdi
  const char *v41; // r8
  void *v42; // rax
  int v43; // [rsp-8h] [rbp-F8h]
  __int64 v44; // [rsp+8h] [rbp-E8h]
  const char *v45; // [rsp+8h] [rbp-E8h]
  __int64 v46; // [rsp+10h] [rbp-E0h]
  size_t v47; // [rsp+10h] [rbp-E0h]
  const char *v48; // [rsp+10h] [rbp-E0h]
  size_t n; // [rsp+18h] [rbp-D8h]
  size_t na; // [rsp+18h] [rbp-D8h]
  size_t nc; // [rsp+18h] [rbp-D8h]
  size_t nb; // [rsp+18h] [rbp-D8h]
  size_t nd; // [rsp+18h] [rbp-D8h]
  __int64 v55; // [rsp+28h] [rbp-C8h]
  size_t v56[2]; // [rsp+30h] [rbp-C0h] BYREF
  char v57; // [rsp+47h] [rbp-A9h]
  char *s2; // [rsp+48h] [rbp-A8h]
  void *dest; // [rsp+50h] [rbp-A0h] BYREF
  __m128i v60; // [rsp+58h] [rbp-98h]
  void *v61; // [rsp+68h] [rbp-88h] BYREF
  __m128 v62; // [rsp+70h] [rbp-80h]
  void *ptr; // [rsp+80h] [rbp-70h] BYREF
  __m128i v64; // [rsp+88h] [rbp-68h] BYREF
  void *v65; // [rsp+98h] [rbp-58h] BYREF
  __m128i v66; // [rsp+A0h] [rbp-50h] BYREF
  unsigned __int64 v67; // [rsp+B8h] [rbp-38h]

  v4 = a2;
  v57 = a3;
  v67 = __readfsqword(0x28u);
  sub_4CFF50(a1);
  v8 = *(_QWORD *)(a1 + 48);
  v55 = 0;
  v9 = v8 + 104LL * *(_QWORD *)(a1 + 56);
  while ( v9 != v8 )
  {
    v20 = *(_QWORD *)(v8 + 32) == 0;
    s2 = (char *)haystack;
    if ( !v20 )
      s2 = *(char **)(v8 + 24);
    if ( v4 )
    {
      v21 = s2;
      while ( 1 )
      {
        a2 = v21;
        if ( !strcasecmp(v4, v21) )
          break;
        v8 += 104;
        if ( v9 == v8 )
          return v55;
        v21 = (char *)haystack;
        if ( *(_QWORD *)(v8 + 32) )
          v21 = *(char **)(v8 + 24);
      }
      s2 = v21;
    }
    if ( (*(_BYTE *)(v8 + 96) & 0x40) != 0 )
      callui(53, (int)a2, (int)&callui, v5, (int)v6, v7);
    dest = nullptr;
    v61 = nullptr;
    v60 = 0;
    v62 = 0;
    v10 = qisabspath(s2);
    v11 = *(_QWORD *)(v8 + 32);
    if ( v10 )
    {
      if ( v11 )
      {
        v12 = *(const char **)(v8 + 24);
        ptr = nullptr;
        v65 = nullptr;
        v64 = 0;
        v66 = 0;
        if ( v12 )
        {
          v13 = strlen(v12);
          if ( v13 )
          {
            n = v13;
            v56[0] = v13 + 1;
            ptr = (void *)qvector_reserve(&ptr, 0, v13 + 1, 1);
            v64.m128i_i64[0] = v56[0];
            v56[0] = n;
            memmove(ptr, v12, n);
            *((_BYTE *)ptr + v56[0]) = 0;
          }
        }
      }
      else
      {
        ptr = nullptr;
        v12 = haystack;
        v65 = nullptr;
        v64 = 0;
        v66 = 0;
      }
      a2 = v12;
      plugin_name_from_path_or_name(&v65, v12);
      v14 = ptr;
      ptr = nullptr;
      si128 = _mm_loadu_si128(&v64);
      v64 = 0;
      if ( dest )
      {
        *(__m128i *)v56 = si128;
        v60.m128i_i64[0] = 0;
        qfree(dest);
        si128 = _mm_load_si128((const __m128i *)v56);
      }
      dest = v14;
      v60 = si128;
      v16 = v65;
      a4 = (__m128)_mm_load_si128(&v66);
      v65 = nullptr;
      v66 = 0;
      if ( v61 )
      {
        *(__m128 *)v56 = a4;
        v62.m128_u64[0] = 0;
        qfree(v61);
        a4 = (__m128)_mm_load_si128((const __m128i *)v56);
        v61 = v16;
        v62 = a4;
        if ( v65 )
        {
          v66.m128i_i64[0] = 0;
          qfree(v65);
        }
      }
      else
      {
        v61 = v16;
        v62 = a4;
      }
      v17 = ptr;
      if ( ptr )
        goto LABEL_17;
      goto LABEL_18;
    }
    ptr = nullptr;
    v22 = haystack;
    v64 = 0;
    if ( v11 )
    {
      v56[0] = v11;
      ptr = (void *)qalloc_or_throw(v11, a2);
      v64.m128i_i64[1] = v56[0];
      memcpy(ptr, *(const void **)(v8 + 24), v56[0]);
      v22 = (const char *)ptr;
      v64.m128i_i64[0] = v56[0];
    }
    file_ext = get_file_ext(v22);
    p_ptr = &ptr;
    if ( !file_ext )
    {
      v34 = v64.m128i_i64[0];
      v35 = ptr;
      if ( !v64.m128i_i64[0] )
      {
        v38 = 3;
        v37 = 2;
        p_ptr = &ptr;
        if ( v64.m128i_i64[1] >= 3uLL )
          goto LABEL_72;
        goto LABEL_75;
      }
      if ( (unsigned __int64)(v64.m128i_i64[0] - 1) <= 1
        || (v36 = (char *)ptr + v64.m128i_i64[0] - 3, *v36 != 51)
        || v36[1] != 50 )
      {
        v37 = v64.m128i_i64[0] + 1;
        v38 = v64.m128i_i64[0] + 2;
        v34 = v64.m128i_i64[0] - 1;
        p_ptr = &ptr;
        if ( v64.m128i_i64[1] >= (unsigned __int64)(v64.m128i_i64[0] + 2) )
        {
LABEL_72:
          v64.m128i_i64[0] = v38;
          v35[v37] = 0;
          *(_WORD *)((char *)ptr + v34) = 12851;
          goto LABEL_41;
        }
LABEL_75:
        v44 = v34;
        v46 = v37;
        na = v38;
        v56[0] = (size_t)&ptr;
        ptr = (void *)qvector_reserve(&ptr, ptr, v38, 1);
        v34 = v44;
        v35 = ptr;
        v37 = v46;
        v38 = na;
        p_ptr = (void **)v56[0];
        goto LABEL_72;
      }
    }
LABEL_41:
    a2 = (const char *)p_ptr;
    v6 = (int *)sub_4D3210((__int64)&unk_2CA1FE0, (__int64)p_ptr);
    if ( v6 != &dword_2CA1FE8 )
    {
      if ( &dest != (void **)(v6 + 14) )
      {
        v7 = *((_QWORD *)v6 + 8);
        if ( v7 && (v25 = v7 - 1, v7 != 1) )
        {
          v39 = *((const char **)v6 + 7);
          v40 = dest;
          if ( v60.m128i_i64[1] < v7 )
          {
            v45 = *((const char **)v6 + 7);
            v47 = v7 - 1;
            nb = (size_t)v6;
            v56[0] = *((_QWORD *)v6 + 8);
            dest = (void *)qvector_reserve(&dest, dest, v56[0], 1);
            v39 = v45;
            v40 = dest;
            v25 = v47;
            v6 = (int *)nb;
            v7 = v56[0];
          }
          a2 = v39;
          nc = (size_t)v6;
          v60.m128i_i64[0] = v7;
          v56[0] = v7;
          memmove(v40, v39, v25);
          LODWORD(v7) = v56[0];
          v6 = (int *)nc;
          *((char *)dest + v56[0] - 1) = 0;
        }
        else
        {
          v60.m128i_i64[0] = 0;
        }
      }
      if ( &v61 != (void **)(v6 + 20) )
      {
        v7 = *((_QWORD *)v6 + 11);
        if ( v7 && (v26 = v7 - 1, v7 != 1) )
        {
          v41 = *((const char **)v6 + 10);
          v42 = v61;
          if ( v62.m128_u64[1] < v7 )
          {
            v48 = v41;
            nd = v7 - 1;
            v56[0] = v7;
            v42 = (void *)qvector_reserve(&v61, v61, v7, 1);
            v61 = v42;
            v41 = v48;
            v26 = nd;
            v7 = v56[0];
          }
          a2 = v41;
          v62.m128_u64[0] = v7;
          v56[0] = v7;
          memmove(v42, v41, v26);
          LODWORD(v7) = v56[0];
          *((char *)v61 + v56[0] - 1) = 0;
        }
        else
        {
          v62.m128_u64[0] = 0;
        }
      }
    }
    v17 = ptr;
    if ( ptr )
    {
LABEL_17:
      v64.m128i_i64[0] = 0;
      qfree(v17);
    }
LABEL_18:
    if ( (*(_BYTE *)(v8 + 96) & 1) != v57 )
      goto LABEL_24;
    v18 = haystack;
    if ( v60.m128i_i64[0] )
      v18 = (const char *)dest;
    LODWORD(v56[0]) = *(_DWORD *)(v8 + 96);
    if ( !(unsigned __int8)qfileexist(v18, a2) )
    {
      if ( (v56[0] & 1) == 0 && (*(_BYTE *)(v8 + 96) & 4) == 0 )
        sub_365330();
LABEL_24:
      if ( v61 )
      {
        v62.m128_u64[0] = 0;
        qfree(v61);
      }
      v19 = dest;
      if ( !dest )
        goto LABEL_28;
LABEL_27:
      v60.m128i_i64[0] = 0;
      qfree(v19);
      goto LABEL_28;
    }
    v20 = *(_QWORD *)(v8 + 80) == 0;
    v28 = haystack;
    LODWORD(s2) = 32 * (v56[0] & 1);
    if ( !v20 )
      v28 = *(const char **)(v8 + 72);
    v29 = strtol(v28, nullptr, 10);
    if ( !*(_QWORD *)(v8 + 56) )
    {
      v32 = haystack;
LABEL_58:
      v56[0] = v29;
      callui(50, (int)v32, (int)&callui, v30, v31, v29);
    }
    v32 = *(const char **)(v8 + 48);
    if ( *v32 != 48 )
      goto LABEL_58;
    v31 = *((unsigned __int8 *)v32 + 1);
    if ( v32[1] )
      goto LABEL_58;
    v33 = (char *)haystack;
    if ( *(_QWORD *)(v8 + 8) )
      v33 = *(char **)v8;
    a2 = (const char *)a1;
    v55 = sub_4D4980(0, a1, (__int64)&dest, v33, v31, v29, *(double *)a4.m128_u64, (__m128)0LL, (int)s2);
    v5 = v43;
    if ( v61 )
    {
      v62.m128_u64[0] = 0;
      qfree(v61);
    }
    v19 = dest;
    if ( dest )
      goto LABEL_27;
LABEL_28:
    v8 += 104;
  }
  return v55;
}

