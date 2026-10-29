void __fastcall sub_11D43E0(__int64 a1, __int64 a2, __int64 a3)
{
  size_t v4; // r12
  size_t *v5; // r14
  size_t v6; // r13
  __int64 *v7; // rax
  char *v8; // rdi
  char *v9; // rdi
  __int64 *v11; // [rsp+18h] [rbp-240h]
  const char *v12; // [rsp+20h] [rbp-238h] BYREF
  __int16 v13; // [rsp+40h] [rbp-218h]
  _QWORD v14[4]; // [rsp+50h] [rbp-208h] BYREF
  __int16 v15; // [rsp+70h] [rbp-1E8h]
  _BYTE v16[32]; // [rsp+80h] [rbp-1D8h] BYREF
  __int16 v17; // [rsp+A0h] [rbp-1B8h]
  void *src; // [rsp+B0h] [rbp-1A8h] BYREF
  size_t n; // [rsp+B8h] [rbp-1A0h]
  __int64 v20; // [rsp+C0h] [rbp-198h] BYREF
  __int16 v21; // [rsp+D0h] [rbp-188h]
  void *v22; // [rsp+E0h] [rbp-178h] BYREF
  __m128i si128; // [rsp+E8h] [rbp-170h]
  _BYTE v24[136]; // [rsp+F8h] [rbp-160h] BYREF
  void *ptr; // [rsp+180h] [rbp-D8h] BYREF
  size_t v26[2]; // [rsp+188h] [rbp-D0h] BYREF
  __int64 v27; // [rsp+198h] [rbp-C0h] BYREF
  __int16 v28; // [rsp+1A0h] [rbp-B8h]

  (*(void (__fastcall **)(void **, __int64))(*(_QWORD *)a1 + 552LL))(&ptr, a1);
  v4 = v26[0];
  v5 = (size_t *)ptr;
  v22 = v24;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
  if ( v26[0] > 0x80 )
  {
    sub_2236E10(&v22, v24, v26[0], 1);
    v9 = (char *)v22 + si128.m128i_i64[0];
  }
  else
  {
    if ( !v26[0] )
      goto LABEL_3;
    v9 = v24;
  }
  memcpy(v9, v5, v4);
  v5 = (size_t *)ptr;
  v4 += si128.m128i_i64[0];
LABEL_3:
  si128.m128i_i64[0] = v4;
  if ( v5 != &v26[1] )
    operator delete(v5);
  v28 = 257;
  v21 = 257;
  v17 = 257;
  v15 = 259;
  v14[0] = "include";
  sub_228A3B0(&v22, v14, v16, &src, &ptr);
  v28 = 261;
  ptr = v22;
  v26[0] = si128.m128i_i64[0];
  sub_112FA80(a2, a3, (__int64)&ptr);
  (*(void (__fastcall **)(void **, __int64))(*(_QWORD *)a1 + 552LL))(&src, a1);
  v6 = n;
  v7 = (__int64 *)src;
  ptr = &v27;
  *(__m128i *)v26 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
  if ( n > 0x80 )
  {
    v11 = (__int64 *)src;
    sub_2236E10(&ptr, &v27, n, 1);
    v7 = v11;
    v8 = (char *)ptr + v26[0];
  }
  else
  {
    if ( !n )
      goto LABEL_7;
    v8 = (char *)&v27;
  }
  memcpy(v8, v7, v6);
  v7 = (__int64 *)src;
  v6 += v26[0];
LABEL_7:
  v26[0] = v6;
  if ( v7 != &v20 )
    operator delete(v7);
  v21 = 257;
  v17 = 257;
  v15 = 257;
  v13 = 259;
  v12 = "sys-include";
  sub_228A3B0(&ptr, &v12, v14, v16, &src);
  v21 = 261;
  src = ptr;
  n = v26[0];
  sub_112FA80(a2, a3, (__int64)&src);
  if ( ptr != &v27 )
    free(ptr);
  if ( v22 != v24 )
    free(v22);
}
