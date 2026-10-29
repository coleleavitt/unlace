void __fastcall sub_127B240(__int64 a1, __int64 a2, __int64 a3)
{
  size_t v4; // rbp
  __int64 *v5; // r15
  char *v6; // rdi
  const char *v7; // [rsp+0h] [rbp-198h] BYREF
  __int16 v8; // [rsp+20h] [rbp-178h]
  char *v9; // [rsp+30h] [rbp-168h] BYREF
  __int16 v10; // [rsp+50h] [rbp-148h]
  _BYTE v11[32]; // [rsp+60h] [rbp-138h] BYREF
  __int16 v12; // [rsp+80h] [rbp-118h]
  void *src; // [rsp+90h] [rbp-108h] BYREF
  size_t n; // [rsp+98h] [rbp-100h]
  __int64 v15; // [rsp+A0h] [rbp-F8h] BYREF
  __int16 v16; // [rsp+B0h] [rbp-E8h]
  void *ptr; // [rsp+C0h] [rbp-D8h] BYREF
  __m128i si128; // [rsp+C8h] [rbp-D0h]
  _BYTE v19[192]; // [rsp+D8h] [rbp-C0h] BYREF

  (*(void (__fastcall **)(void **, __int64))(*(_QWORD *)a1 + 552LL))(&src, a1);
  v4 = n;
  v5 = (__int64 *)src;
  ptr = v19;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
  if ( n > 0x80 )
  {
    sub_2236E10(&ptr, v19, n, 1);
    v6 = (char *)ptr + si128.m128i_i64[0];
  }
  else
  {
    if ( !n )
      goto LABEL_3;
    v6 = v19;
  }
  memcpy(v6, v5, v4);
  v5 = (__int64 *)src;
  v4 += si128.m128i_i64[0];
LABEL_3:
  si128.m128i_i64[0] = v4;
  if ( v5 != &v15 )
    operator delete(v5);
  v16 = 257;
  v12 = 257;
  v9 = "include";
  v10 = 259;
  v8 = 259;
  v7 = "msp430-elf";
  sub_228A3B0(&ptr, &v7, &v9, v11, &src);
  v16 = 261;
  src = ptr;
  n = si128.m128i_i64[0];
  sub_112FA80(a2, a3, (__int64)&src);
  if ( ptr != v19 )
    free(ptr);
}
