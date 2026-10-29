__int64 __fastcall sub_4ED4F0(_QWORD *a1, void **a2, char a3, __m128 a4)
{
  const char *v4; // r13
  int v5; // ecx
  int *v6; // r8
  unsigned __int64 v7; // r9
  __int64 v8; // rbx
  __int64 v9; // r15
  char v10; // al
  __int64 v11; // rdx
  const char *v12; // r14
  size_t v13; // rax
  void *v14; // r14
  __m128i si128; // xmm0
  void *v16; // r14
  const char *v17; // rdi
  void *v18; // rdi
  bool v19; // zf
  char *v20; // r14
  size_t v21; // r10
  const char *v23; // rdi
  void *v24; // rax
  int v25; // ecx
  int v26; // r8d
  const char *v27; // rsi
  char *v28; // rcx
  void *v29; // r14
  size_t v30; // r10
  void **v31; // r11
  void *v32; // rdi
  void **v33; // r8
  void *v34; // rax
  int *v35; // [rsp+0h] [rbp-F0h]
  void **v36; // [rsp+8h] [rbp-E8h]
  void **v37; // [rsp+8h] [rbp-E8h]
  int *v38; // [rsp+10h] [rbp-E0h]
  size_t v39; // [rsp+10h] [rbp-E0h]
  size_t v40; // [rsp+10h] [rbp-E0h]
  void *n; // [rsp+18h] [rbp-D8h]
  __int64 na; // [rsp+18h] [rbp-D8h]
  size_t nc; // [rsp+18h] [rbp-D8h]
  size_t ne; // [rsp+18h] [rbp-D8h]
  size_t nb; // [rsp+18h] [rbp-D8h]
  size_t nd; // [rsp+18h] [rbp-D8h]
  __int64 v48; // [rsp+28h] [rbp-C8h]
  void *ptr[2]; // [rsp+30h] [rbp-C0h] BYREF
  char v50; // [rsp+47h] [rbp-A9h]
  char *s2; // [rsp+48h] [rbp-A8h]
  void *dest; // [rsp+50h] [rbp-A0h] BYREF
  __m128i v53; // [rsp+58h] [rbp-98h]
  void *v54; // [rsp+68h] [rbp-88h] BYREF
  __m128 v55; // [rsp+70h] [rbp-80h]
  void *v56; // [rsp+80h] [rbp-70h] BYREF
  __m128i v57; // [rsp+88h] [rbp-68h] BYREF
  void *v58; // [rsp+98h] [rbp-58h] BYREF
  __m128i v59; // [rsp+A0h] [rbp-50h] BYREF
  unsigned __int64 v60; // [rsp+B8h] [rbp-38h]

  v4 = (const char *)a2;
  v50 = a3;
  v60 = __readfsqword(0x28u);
  sub_4E77D0(a1);
  v8 = a1[6];
  v48 = 0;
  v9 = v8 + 104LL * a1[7];
  if ( v8 != v9 )
  {
    while ( 1 )
    {
      v19 = *(_QWORD *)(v8 + 32) == 0;
      s2 = (char *)haystack;
      if ( !v19 )
        s2 = *(char **)(v8 + 24);
      if ( v4 )
      {
        v20 = s2;
        while ( 1 )
        {
          LODWORD(a2) = (_DWORD)v20;
          if ( !strcasecmp(v4, v20) )
            break;
          v8 += 104;
          if ( v9 == v8 )
            return v48;
          v20 = (char *)haystack;
          if ( *(_QWORD *)(v8 + 32) )
            v20 = *(char **)(v8 + 24);
        }
        s2 = v20;
      }
      if ( (*(_BYTE *)(v8 + 96) & 0x40) != 0 )
        callui(53, (int)a2, (int)&callui, v5, (int)v6, v7);
      dest = nullptr;
      v54 = nullptr;
      v53 = 0;
      v55 = 0;
      v10 = qisabspath(s2);
      v11 = *(_QWORD *)(v8 + 32);
      if ( v10 )
      {
        if ( v11 )
        {
          v12 = *(const char **)(v8 + 24);
          v56 = nullptr;
          v58 = nullptr;
          v57 = 0;
          v59 = 0;
          if ( v12 )
          {
            v13 = strlen(v12);
            if ( v13 )
            {
              n = (void *)v13;
              ptr[0] = (void *)(v13 + 1);
              v56 = (void *)qvector_reserve(&v56, 0, v13 + 1, 1);
              v57.m128i_i64[0] = (__int64)ptr[0];
              ptr[0] = n;
              memmove(v56, v12, (size_t)n);
              *((_BYTE *)v56 + (unsigned __int64)ptr[0]) = 0;
            }
          }
        }
        else
        {
          v56 = nullptr;
          v12 = haystack;
          v58 = nullptr;
          v57 = 0;
          v59 = 0;
        }
        a2 = (void **)v12;
        plugin_name_from_path_or_name(&v58, v12);
        v14 = v56;
        v56 = nullptr;
        si128 = _mm_loadu_si128(&v57);
        v57 = 0;
        if ( dest )
        {
          *(__m128i *)ptr = si128;
          v53.m128i_i64[0] = 0;
          qfree(dest);
          si128 = _mm_load_si128((const __m128i *)ptr);
        }
        dest = v14;
        v53 = si128;
        v16 = v58;
        a4 = (__m128)_mm_load_si128(&v59);
        v58 = nullptr;
        v59 = 0;
        if ( v54 )
        {
          *(__m128 *)ptr = a4;
          v55.m128_u64[0] = 0;
          qfree(v54);
          a4 = (__m128)_mm_load_si128((const __m128i *)ptr);
          v54 = v16;
          v55 = a4;
          if ( v58 )
          {
            v59.m128i_i64[0] = 0;
            qfree(v58);
          }
        }
        else
        {
          v54 = v16;
          v55 = a4;
        }
        if ( v56 )
        {
          v57.m128i_i64[0] = 0;
          qfree(v56);
        }
        goto LABEL_18;
      }
      v57 = 0;
      if ( !v11 )
        break;
      na = v11;
      v29 = (void *)qalloc_or_throw(v11);
      ptr[0] = v29;
      v57.m128i_i64[1] = na;
      memcpy(v29, *(const void **)(v8 + 24), na);
      a2 = &v56;
      v56 = v29;
      v57.m128i_i64[0] = na;
      v6 = (int *)sub_4EAAA0((__int64)&unk_2CCBEE0, (__int64)&v56);
      if ( v6 != &dword_2CCBEE8 )
      {
        if ( &dest != (void **)(v6 + 14) )
        {
          v7 = *((_QWORD *)v6 + 8);
          if ( v7 )
            goto LABEL_69;
LABEL_42:
          v53.m128i_i64[0] = 0;
        }
LABEL_43:
        if ( &v54 != (void **)(v6 + 20) )
        {
          v7 = *((_QWORD *)v6 + 11);
          if ( v7 && (v21 = v7 - 1, v7 != 1) )
          {
            v33 = *((void ***)v6 + 10);
            v34 = v54;
            if ( v55.m128_u64[1] < v7 )
            {
              v37 = v33;
              v40 = v7 - 1;
              nd = v7;
              v34 = (void *)qvector_reserve(&v54, v54, v7, 1);
              v54 = v34;
              v33 = v37;
              v21 = v40;
              v7 = nd;
            }
            a2 = v33;
            v55.m128_u64[0] = v7;
            ne = v7;
            memmove(v34, v33, v21);
            LODWORD(v7) = ne;
            *((char *)v54 + ne - 1) = 0;
          }
          else
          {
            v55.m128_u64[0] = 0;
          }
        }
      }
      if ( ptr[0] )
        qfree(ptr[0]);
LABEL_18:
      if ( (*(_BYTE *)(v8 + 96) & 1) != v50 )
        goto LABEL_24;
      v17 = haystack;
      if ( v53.m128i_i64[0] )
        v17 = (const char *)dest;
      LODWORD(ptr[0]) = *(_DWORD *)(v8 + 96);
      if ( !(unsigned __int8)qfileexist(v17, a2) )
      {
        if ( ((__int64)ptr[0] & 1) == 0 && (*(_BYTE *)(v8 + 96) & 4) == 0 )
          sub_368890();
LABEL_24:
        if ( v54 )
        {
          v55.m128_u64[0] = 0;
          qfree(v54);
        }
        v18 = dest;
        if ( !dest )
          goto LABEL_28;
LABEL_27:
        v53.m128i_i64[0] = 0;
        qfree(v18);
        goto LABEL_28;
      }
      v19 = *(_QWORD *)(v8 + 80) == 0;
      v23 = haystack;
      LODWORD(s2) = 32 * ((__int64)ptr[0] & 1);
      if ( !v19 )
        v23 = *(const char **)(v8 + 72);
      v24 = (void *)strtol(v23, nullptr, 10);
      if ( !*(_QWORD *)(v8 + 56) )
      {
        v27 = haystack;
LABEL_55:
        ptr[0] = v24;
        callui(50, (int)v27, (int)&callui, v25, v26, (int)v24);
      }
      v27 = *(const char **)(v8 + 48);
      if ( *v27 != 48 )
        goto LABEL_55;
      v26 = *((unsigned __int8 *)v27 + 1);
      if ( v27[1] )
        goto LABEL_55;
      v28 = (char *)haystack;
      if ( *(_QWORD *)(v8 + 8) )
        v28 = *(char **)v8;
      LODWORD(a2) = (_DWORD)a1;
      v48 = sub_4EC210(0, (__int64)a1, (__int64)&dest, v28, v26, (int)v24, *(double *)a4.m128_u64, (__m128)0LL, (int)s2);
      if ( v54 )
      {
        v55.m128_u64[0] = 0;
        qfree(v54);
      }
      v18 = dest;
      if ( dest )
        goto LABEL_27;
LABEL_28:
      v8 += 104;
      if ( v9 == v8 )
        return v48;
    }
    a2 = &v56;
    v56 = nullptr;
    v6 = (int *)sub_4EAAA0((__int64)&unk_2CCBEE0, (__int64)&v56);
    if ( v6 == &dword_2CCBEE8 )
      goto LABEL_18;
    ptr[0] = nullptr;
    if ( &dest == (void **)(v6 + 14) )
      goto LABEL_18;
    v7 = *((_QWORD *)v6 + 8);
    if ( !v7 )
      goto LABEL_42;
LABEL_69:
    v30 = v7 - 1;
    if ( v7 == 1 )
      goto LABEL_42;
    v31 = *((void ***)v6 + 7);
    v32 = dest;
    if ( v53.m128i_i64[1] < v7 )
    {
      v35 = v6;
      v36 = *((void ***)v6 + 7);
      v39 = v7 - 1;
      nb = v7;
      dest = (void *)qvector_reserve(&dest, dest, v7, 1);
      v6 = v35;
      v32 = dest;
      v31 = v36;
      v30 = v39;
      v7 = nb;
    }
    a2 = v31;
    v38 = v6;
    v53.m128i_i64[0] = v7;
    nc = v7;
    memmove(v32, v31, v30);
    LODWORD(v7) = nc;
    v6 = v38;
    *((char *)dest + nc - 1) = 0;
    goto LABEL_43;
  }
  return v48;
}
