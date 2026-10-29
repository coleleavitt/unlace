__int64 __fastcall sub_7EEE90(__int64 a1, __int64 *a2)
{
  unsigned __int64 v3; // rbp
  __int64 *v4; // r12
  unsigned __int64 v5; // rbp
  __int64 *v6; // r13
  void *v7; // rdi
  __m128i *v8; // rsi
  __m128i si128; // xmm0
  unsigned int v10; // r12d
  const char *v11; // r14
  const char *v12; // rbp
  size_t v13; // rax
  size_t v14; // r15
  size_t v15; // r13
  size_t v16; // rax
  size_t v17; // r13
  size_t v18; // rbp
  int v19; // eax
  size_t v20; // rbp
  size_t v21; // rbp
  __int64 v22; // rbp
  void *v24; // rax
  __int64 v25; // rsi
  __m128i v26; // xmm0
  __int64 v27; // rax
  __int64 v28; // rax
  void *v29; // [rsp+0h] [rbp-F8h] BYREF
  __int128 v30; // [rsp+8h] [rbp-F0h]
  void *dest; // [rsp+20h] [rbp-D8h] BYREF
  __int128 v32; // [rsp+28h] [rbp-D0h]
  void *ptr; // [rsp+40h] [rbp-B8h] BYREF
  size_t v34[2]; // [rsp+48h] [rbp-B0h]
  void *src; // [rsp+58h] [rbp-A0h] BYREF
  size_t n[2]; // [rsp+60h] [rbp-98h]
  __int64 (__fastcall **v37)(); // [rsp+70h] [rbp-88h] BYREF
  char v38; // [rsp+78h] [rbp-80h]
  int v39; // [rsp+7Ch] [rbp-7Ch]
  void *v40; // [rsp+80h] [rbp-78h]
  __int128 v41; // [rsp+88h] [rbp-70h]
  void *v42; // [rsp+98h] [rbp-60h]
  __int128 v43; // [rsp+A0h] [rbp-58h]
  unsigned __int64 v44; // [rsp+B8h] [rbp-40h]

  v3 = *(_QWORD *)(a1 + 152);
  v44 = __readfsqword(0x28u);
  v4 = a2;
  v29 = nullptr;
  dest = nullptr;
  v30 = 0;
  v32 = 0;
  if ( v3 <= 1 )
  {
    if ( !(unsigned __int8)j__qgethostname(&v29) )
    {
      v8 = (__m128i *)*a2;
      if ( (unsigned __int64)v4[2] <= 0x20 )
      {
        v27 = qvector_reserve(v4, v8, 33, 1);
        *v4 = v27;
        v8 = (__m128i *)v27;
      }
      si128 = _mm_load_si128((const __m128i *)&xmmword_2384720);
      v4[1] = 33;
      *v8 = si128;
      v8[1] = _mm_load_si128((const __m128i *)&xmmword_2384730);
      *(_BYTE *)(*v4 + 32) = 0;
      goto LABEL_11;
    }
  }
  else
  {
    a2 = *(__int64 **)(a1 + 144);
    v29 = (void *)qvector_reserve(&v29, 0, v3, 1);
    *(_QWORD *)&v30 = v3;
    memmove(v29, a2, v3 - 1);
    *((char *)v29 + v3 - 1) = 0;
  }
  v5 = *(_QWORD *)(a1 + 128);
  if ( v5 > 1 )
  {
    v6 = *(__int64 **)(a1 + 120);
    v7 = dest;
    if ( *((_QWORD *)&v32 + 1) < v5 )
    {
      dest = (void *)qvector_reserve(&dest, dest, *(_QWORD *)(a1 + 128), 1);
      v7 = dest;
    }
    a2 = v6;
    *(_QWORD *)&v32 = v5;
    memmove(v7, v6, v5 - 1);
    *((char *)dest + v5 - 1) = 0;
    goto LABEL_13;
  }
  if ( !(unsigned __int8)get_login_name(&dest) )
  {
    v25 = *v4;
    if ( (unsigned __int64)v4[2] <= 0x16 )
    {
      v28 = qvector_reserve(v4, v25, 23, 1);
      *v4 = v28;
      v25 = v28;
    }
    v26 = _mm_load_si128((const __m128i *)&xmmword_2384740);
    v4[1] = 23;
    *(__m128i *)v25 = v26;
    *(_QWORD *)(v25 + 14) = 0x656D616E72657375LL;
    *(_BYTE *)(*v4 + 22) = 0;
LABEL_11:
    v10 = 2;
    goto LABEL_32;
  }
LABEL_13:
  v11 = haystack;
  if ( (_QWORD)v30 )
    v11 = (const char *)v29;
  v12 = haystack;
  if ( (_QWORD)v32 )
    v12 = (const char *)dest;
  ptr = nullptr;
  *(_OWORD *)v34 = 0;
  if ( v12 )
  {
    v13 = strlen(v12);
    v14 = v13 + 1;
    v15 = v13;
    a2 = (__int64 *)v12;
    ptr = (void *)qvector_reserve(&ptr, 0, v13 + 1, 1);
    v34[0] = v14;
    memmove(ptr, v12, v15);
    *((_BYTE *)ptr + v15) = 0;
  }
  src = nullptr;
  *(_OWORD *)n = 0;
  if ( v11 )
  {
    v16 = strlen(v11);
    v17 = v16 + 1;
    v18 = v16;
    a2 = (__int64 *)v11;
    src = (void *)qvector_reserve(&src, 0, v16 + 1, 1);
    n[0] = v17;
    memmove(src, v11, v18);
    *((_BYTE *)src + v18) = 0;
  }
  v19 = *(_DWORD *)(a1 + 108);
  v38 = 15;
  v20 = v34[0];
  v41 = 0;
  v39 = v19;
  v37 = &off_2B12500;
  v40 = nullptr;
  if ( v34[0] )
  {
    v24 = (void *)qalloc_or_throw(v34[0], (const char *)a2);
    a2 = (__int64 *)ptr;
    v40 = v24;
    *((_QWORD *)&v41 + 1) = v20;
    memcpy(v24, ptr, v20);
    *(_QWORD *)&v41 = v20;
  }
  v21 = n[0];
  v42 = nullptr;
  v43 = 0;
  if ( n[0] )
  {
    v42 = (void *)qalloc_or_throw(n[0], (const char *)a2);
    *((_QWORD *)&v43 + 1) = v21;
    memcpy(v42, src, v21);
    *(_QWORD *)&v43 = v21;
  }
  if ( src )
  {
    n[0] = 0;
    qfree(src);
  }
  if ( ptr )
  {
    v34[0] = 0;
    qfree(ptr);
  }
  v22 = (*(__int64 (__fastcall **)(__int64, __int64 (__fastcall ***)()))(*(_QWORD *)a1 + 80LL))(a1, &v37);
  v10 = sub_7EFA30(a1, v22, 10, v4, 0);
  if ( v22 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 8LL))(v22);
  *(_BYTE *)(a1 + 69) = 1;
  sub_7E8460(&v37);
LABEL_32:
  if ( dest )
  {
    *(_QWORD *)&v32 = 0;
    qfree(dest);
  }
  if ( v29 )
  {
    *(_QWORD *)&v30 = 0;
    qfree(v29);
  }
  return v10;
}

