__int64 __fastcall sub_812050(__int64 a1, __int64 *a2)
{
  unsigned __int64 v3; // rbp
  const void *v5; // rsi
  unsigned __int64 v6; // rbp
  const void *v7; // r13
  void *v8; // rdi
  __m128i *v9; // rsi
  __m128i si128; // xmm0
  unsigned int v11; // r12d
  const char *v12; // r14
  const char *v13; // rbp
  size_t v14; // rax
  size_t v15; // r15
  size_t v16; // r13
  size_t v17; // rax
  size_t v18; // r13
  size_t v19; // rbp
  int v20; // eax
  size_t v21; // rbp
  size_t v22; // rbp
  __int64 v23; // rbp
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
  v29 = nullptr;
  dest = nullptr;
  v30 = 0;
  v32 = 0;
  if ( v3 <= 1 )
  {
    if ( !(unsigned __int8)j__qgethostname(&v29) )
    {
      v9 = (__m128i *)*a2;
      if ( (unsigned __int64)a2[2] <= 0x20 )
      {
        v27 = qvector_reserve(a2, v9, 33, 1);
        *a2 = v27;
        v9 = (__m128i *)v27;
      }
      si128 = _mm_load_si128((const __m128i *)&xmmword_23A8750);
      a2[1] = 33;
      *v9 = si128;
      v9[1] = _mm_load_si128((const __m128i *)&xmmword_23A8760);
      *(_BYTE *)(*a2 + 32) = 0;
      goto LABEL_11;
    }
  }
  else
  {
    v5 = *(const void **)(a1 + 144);
    v29 = (void *)qvector_reserve(&v29, 0, v3, 1);
    *(_QWORD *)&v30 = v3;
    memmove(v29, v5, v3 - 1);
    *((char *)v29 + v3 - 1) = 0;
  }
  v6 = *(_QWORD *)(a1 + 128);
  if ( v6 > 1 )
  {
    v7 = *(const void **)(a1 + 120);
    v8 = dest;
    if ( *((_QWORD *)&v32 + 1) < v6 )
    {
      dest = (void *)qvector_reserve(&dest, dest, *(_QWORD *)(a1 + 128), 1);
      v8 = dest;
    }
    *(_QWORD *)&v32 = v6;
    memmove(v8, v7, v6 - 1);
    *((char *)dest + v6 - 1) = 0;
    goto LABEL_13;
  }
  if ( !(unsigned __int8)get_login_name(&dest) )
  {
    v25 = *a2;
    if ( (unsigned __int64)a2[2] <= 0x16 )
    {
      v28 = qvector_reserve(a2, v25, 23, 1);
      *a2 = v28;
      v25 = v28;
    }
    v26 = _mm_load_si128((const __m128i *)&xmmword_23A8770);
    a2[1] = 23;
    *(__m128i *)v25 = v26;
    *(_QWORD *)(v25 + 14) = 0x656D616E72657375LL;
    *(_BYTE *)(*a2 + 22) = 0;
LABEL_11:
    v11 = 2;
    goto LABEL_32;
  }
LABEL_13:
  v12 = haystack;
  if ( (_QWORD)v30 )
    v12 = (const char *)v29;
  v13 = haystack;
  if ( (_QWORD)v32 )
    v13 = (const char *)dest;
  ptr = nullptr;
  *(_OWORD *)v34 = 0;
  if ( v13 )
  {
    v14 = strlen(v13);
    v15 = v14 + 1;
    v16 = v14;
    ptr = (void *)qvector_reserve(&ptr, 0, v14 + 1, 1);
    v34[0] = v15;
    memmove(ptr, v13, v16);
    *((_BYTE *)ptr + v16) = 0;
  }
  src = nullptr;
  *(_OWORD *)n = 0;
  if ( v12 )
  {
    v17 = strlen(v12);
    v18 = v17 + 1;
    v19 = v17;
    src = (void *)qvector_reserve(&src, 0, v17 + 1, 1);
    n[0] = v18;
    memmove(src, v12, v19);
    *((_BYTE *)src + v19) = 0;
  }
  v20 = *(_DWORD *)(a1 + 108);
  v38 = 15;
  v21 = v34[0];
  v41 = 0;
  v39 = v20;
  v37 = &off_2B3C4A0;
  v40 = nullptr;
  if ( v34[0] )
  {
    v40 = (void *)qalloc_or_throw(v34[0]);
    *((_QWORD *)&v41 + 1) = v21;
    memcpy(v40, ptr, v21);
    *(_QWORD *)&v41 = v21;
  }
  v22 = n[0];
  v42 = nullptr;
  v43 = 0;
  if ( n[0] )
  {
    v42 = (void *)qalloc_or_throw(n[0]);
    *((_QWORD *)&v43 + 1) = v22;
    memcpy(v42, src, v22);
    *(_QWORD *)&v43 = v22;
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
  v23 = (*(__int64 (__fastcall **)(__int64, __int64 (__fastcall ***)()))(*(_QWORD *)a1 + 80LL))(a1, &v37);
  v11 = sub_812BF0(a1, v23, 10, a2, 0);
  if ( v23 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 8LL))(v23);
  *(_BYTE *)(a1 + 69) = 1;
  sub_80B600(&v37);
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
  return v11;
}
