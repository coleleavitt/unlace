unsigned __int64 *__fastcall sub_636810(__m128 *a1)
{
  unsigned __int64 v2; // rcx
  size_t v3; // r8
  void *v4; // r9
  size_t *v5; // rax
  size_t *v6; // rdi
  size_t v7; // rdx
  size_t v8; // rsi
  size_t v9; // rax
  __int64 v10; // rdx
  void *v11; // rax
  size_t v12; // rdx
  size_t *v13; // rdi
  size_t v14; // rdx
  size_t v15; // rcx
  const char *dli_fname; // r13
  unsigned __int64 v18; // r15
  size_t v19; // rax
  size_t v20; // rbp
  unsigned __int64 v21; // rax
  __m128i v22; // xmm0
  int v23; // eax
  char *v24; // rdi
  unsigned int v25; // eax
  unsigned int v26; // eax
  unsigned int v27; // edx
  __int64 v28; // rsi
  size_t v29; // [rsp+0h] [rbp-148h]
  size_t v30; // [rsp+0h] [rbp-148h]
  __int64 v31; // [rsp+0h] [rbp-148h]
  void *v32; // [rsp+0h] [rbp-148h]
  size_t v33; // [rsp+8h] [rbp-140h]
  Dl_info info; // [rsp+10h] [rbp-138h] BYREF
  void *src; // [rsp+30h] [rbp-118h]
  __m128 n; // [rsp+38h] [rbp-110h] BYREF
  void *v37; // [rsp+50h] [rbp-F8h] BYREF
  __m128i v38; // [rsp+58h] [rbp-F0h] BYREF
  void *ptr; // [rsp+70h] [rbp-D8h] BYREF
  __m128i si128; // [rsp+78h] [rbp-D0h]
  _BYTE v41[192]; // [rsp+88h] [rbp-C0h] BYREF

  ptr = v41;
  si128 = _mm_load_si128((const __m128i *)&xmmword_3C7E280);
  if ( !dladdr(clang_createTranslationUnit, &info) )
  {
    src = &n.m128_u16[4];
    n.m128_u64[0] = 0;
    n.m128_i8[8] = 0;
    sub_26378B0(&v37, 0, 0);
    v5 = (size_t *)src;
    v6 = (size_t *)src;
    if ( src == &n.m128_u16[4] )
    {
      v7 = (size_t)v37;
      if ( v37 != &v38.m128i_u64[1] )
      {
        v22 = _mm_loadu_si128(&v38);
        src = v37;
        n = (__m128)v22;
        goto LABEL_38;
      }
      v7 = v38.m128i_i64[0];
      v8 = v38.m128i_i64[0];
    }
    else
    {
      v7 = v38.m128i_i64[0];
      v2 = (unsigned __int64)v37;
      v8 = v38.m128i_i64[0];
      if ( v37 != &v38.m128i_u64[1] )
      {
        src = v37;
        v7 = n.m128_u64[1];
        n = _mm_loadh_ps((const double *)&v38.m128i_i64[1]);
        if ( v5 )
        {
          v37 = v5;
          v38.m128i_i64[1] = v7;
LABEL_6:
          v38.m128i_i64[0] = 0;
          *(_BYTE *)v5 = 0;
          v9 = n.m128_u64[0];
          if ( v37 != &v38.m128i_u64[1] )
          {
            v29 = n.m128_u64[0];
            operator delete(v37, v38.m128i_i64[1] + 1);
            v9 = v29;
          }
          if ( !v9 )
            sub_25AA9C0("could not locate Clang resource path", 1, v7, v2);
          v3 = n.m128_u64[0];
          v10 = si128.m128i_i64[0];
          v4 = src;
          if ( si128.m128i_i64[1] < n.m128_u64[0] + si128.m128i_i64[0] )
          {
            v33 = n.m128_u64[0];
            v32 = src;
            sub_25D6230(&ptr, v41, n.m128_u64[0] + si128.m128i_i64[0], 1);
            v10 = si128.m128i_i64[0];
            v3 = v33;
            v4 = v32;
          }
          v11 = ptr;
          if ( v3 )
          {
            v30 = v3;
            memcpy((char *)ptr + v10, v4, v3);
            v10 = si128.m128i_i64[0];
            v11 = ptr;
            v3 = v30;
          }
          v12 = v3 + v10;
          si128.m128i_i64[0] = v12;
          goto LABEL_14;
        }
LABEL_38:
        v37 = &v38.m128i_u64[1];
        v5 = &v38.m128i_u64[1];
        goto LABEL_6;
      }
    }
    if ( !v7 )
    {
LABEL_53:
      n.m128_u64[0] = v8;
      *((_BYTE *)v5 + v8) = 0;
      v5 = (size_t *)v37;
      goto LABEL_6;
    }
    if ( v7 == 1 )
    {
      *(_BYTE *)src = v38.m128i_i8[8];
      v8 = v38.m128i_i64[0];
      v5 = (size_t *)src;
      goto LABEL_53;
    }
    if ( (unsigned int)v7 >= 8 )
    {
      *(_QWORD *)src = v38.m128i_i64[1];
      *(size_t *)((char *)v6 + (unsigned int)v7 - 8) = *(unsigned __int64 *)((char *)v38.m128i_u64 + (unsigned int)v7);
      v2 = (unsigned __int64)(v6 + 1) & 0xFFFFFFFFFFFFFFF8LL;
      v23 = (_DWORD)v6 - v2;
      v24 = (char *)((char *)&v38.m128i_u64[1] - ((char *)v6 - v2));
      v25 = (v7 + v23) & 0xFFFFFFF8;
      if ( v25 >= 8 )
      {
        v26 = v25 & 0xFFFFFFF8;
        v27 = 0;
        do
        {
          v28 = v27;
          v27 += 8;
          *(_QWORD *)(v2 + v28) = *(_QWORD *)&v24[v28];
        }
        while ( v27 < v26 );
      }
    }
    else
    {
      if ( (v7 & 4) != 0 )
      {
        *(_DWORD *)src = v38.m128i_i32[2];
        *(_DWORD *)((char *)v6 + (unsigned int)v7 - 4) = *(__int32 *)((char *)&v38.m128i_i32[1] + (unsigned int)v7);
        v6 = (size_t *)src;
        v7 = v38.m128i_i64[0];
        goto LABEL_52;
      }
      if ( !(_DWORD)v7 )
      {
LABEL_52:
        v8 = v7;
        v5 = v6;
        goto LABEL_53;
      }
      v2 = v38.m128i_u8[8];
      *(_BYTE *)src = v38.m128i_i8[8];
      if ( (v7 & 2) != 0 )
      {
        *(_WORD *)((char *)v6 + (unsigned int)v7 - 2) = *(__int16 *)((char *)&v38.m128i_i16[3] + (unsigned int)v7);
        v6 = (size_t *)src;
        v7 = v38.m128i_i64[0];
        goto LABEL_52;
      }
    }
    v6 = (size_t *)src;
    v7 = v38.m128i_i64[0];
    goto LABEL_52;
  }
  dli_fname = info.dli_fname;
  v18 = si128.m128i_u64[1];
  v12 = si128.m128i_i64[0];
  if ( info.dli_fname )
  {
    v31 = si128.m128i_i64[0];
    v19 = strlen(info.dli_fname);
    v12 = v31;
    v20 = v19;
    v21 = v19 + v31;
    if ( v18 < v21 )
    {
      sub_25D6230(&ptr, v41, v21, 1);
      v12 = si128.m128i_i64[0];
    }
    v11 = ptr;
    if ( v20 )
    {
      memcpy((char *)ptr + v12, dli_fname, v20);
      v11 = ptr;
      v12 = v20 + si128.m128i_i64[0];
    }
  }
  else
  {
    v11 = ptr;
    if ( si128.m128i_i64[1] < (unsigned __int64)si128.m128i_i64[0] )
    {
      sub_25D6230(&ptr, v41, si128.m128i_i64[0], 1);
      v12 = si128.m128i_i64[0];
      v11 = ptr;
    }
  }
  si128.m128i_i64[0] = v12;
  src = &n.m128_u16[4];
  n.m128_u64[0] = 0;
  n.m128_i8[8] = 0;
LABEL_14:
  sub_D72800(&v37, v11, v12, v2, v3, v4);
  v13 = (size_t *)a1->m128_u64[1];
  v14 = v38.m128i_i64[0];
  if ( v13 == (size_t *)&a1[1].m128_u16[4] )
  {
    if ( v37 != &v38.m128i_u64[1] )
    {
      a1->m128_u64[1] = (unsigned __int64)v37;
      a1[1] = _mm_loadh_ps((const double *)&v38.m128i_i64[1]);
LABEL_33:
      v37 = &v38.m128i_u64[1];
      v13 = &v38.m128i_u64[1];
      goto LABEL_18;
    }
  }
  else if ( v37 != &v38.m128i_u64[1] )
  {
    v15 = a1[1].m128_u64[1];
    a1->m128_u64[1] = (unsigned __int64)v37;
    a1[1] = _mm_loadh_ps((const double *)&v38.m128i_i64[1]);
    if ( v13 )
    {
      v37 = v13;
      v38.m128i_i64[1] = v15;
      goto LABEL_18;
    }
    goto LABEL_33;
  }
  if ( v38.m128i_i64[0] )
  {
    if ( v38.m128i_i64[0] == 1 )
      *(_BYTE *)v13 = v38.m128i_i8[8];
    else
      memcpy(v13, &v38.m128i_u64[1], v38.m128i_u64[0]);
    v14 = v38.m128i_i64[0];
    v13 = (size_t *)a1->m128_u64[1];
  }
  a1[1].m128_u64[0] = v14;
  *((_BYTE *)v13 + v14) = 0;
  v13 = (size_t *)v37;
LABEL_18:
  v38.m128i_i64[0] = 0;
  *(_BYTE *)v13 = 0;
  if ( v37 != &v38.m128i_u64[1] )
    operator delete(v37, v38.m128i_i64[1] + 1);
  if ( src != &n.m128_u16[4] )
    operator delete(src, n.m128_u64[1] + 1);
  if ( ptr != v41 )
    free(ptr);
  return &a1->m128_u64[1];
}

