__int64 __fastcall sub_22CAAC0(int a1, __int64 a2, unsigned int a3, __int64 a4, __int64 a5, __int64 a6)
{
  size_t v7; // rbp
  __int64 *v8; // r14
  __int64 (__fastcall *v9)(__int64, void **); // rax
  unsigned int v10; // ebp
  char *v12; // rdi
  const char *v13; // [rsp+0h] [rbp-188h] BYREF
  __int16 v14; // [rsp+20h] [rbp-168h]
  _BYTE v15[32]; // [rsp+30h] [rbp-158h] BYREF
  __int16 v16; // [rsp+50h] [rbp-138h]
  _BYTE v17[32]; // [rsp+60h] [rbp-128h] BYREF
  __int16 v18; // [rsp+80h] [rbp-108h]
  void *src; // [rsp+90h] [rbp-F8h] BYREF
  size_t n; // [rsp+98h] [rbp-F0h]
  __int64 v21; // [rsp+A0h] [rbp-E8h] BYREF
  __int16 v22; // [rsp+B0h] [rbp-D8h]
  void *ptr; // [rsp+C0h] [rbp-C8h] BYREF
  __m128i si128; // [rsp+C8h] [rbp-C0h]
  _BYTE v25[176]; // [rsp+D8h] [rbp-B0h] BYREF

  sub_22CA5A0(&src, 1, a1, a2, a3, a6, (__int64)&byte_22F0C30, 0);
  v7 = n;
  v8 = (__int64 *)src;
  ptr = v25;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
  if ( n > 0x80 )
  {
    sub_2236E10((__int64)&ptr, v25, n, 1);
    v12 = (char *)ptr + si128.m128i_i64[0];
  }
  else
  {
    if ( !n )
      goto LABEL_3;
    v12 = v25;
  }
  memcpy(v12, v8, v7);
  v8 = (__int64 *)src;
  v7 += si128.m128i_i64[0];
LABEL_3:
  si128.m128i_i64[0] = v7;
  if ( v8 != &v21 )
    operator delete(v8);
  v22 = 257;
  v18 = 257;
  v16 = 257;
  v14 = 259;
  v13 = "stdlib.h";
  sub_228A3B0(&ptr, &v13, v15, v17, &src);
  v9 = *(__int64 (__fastcall **)(__int64, void **))(*(_QWORD *)a4 + 96LL);
  src = ptr;
  v22 = 261;
  n = si128.m128i_i64[0];
  v10 = v9(a4, &src) ^ 1;
  if ( ptr != v25 )
    free(ptr);
  return v10;
}
