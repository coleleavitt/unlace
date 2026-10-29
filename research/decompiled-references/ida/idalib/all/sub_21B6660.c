const char *__fastcall sub_21B6660(
        __int64 (__fastcall ***a1)(_QWORD),
        __int64 a2,
        const void *a3,
        size_t a4,
        const void *a5,
        size_t a6)
{
  size_t v8; // r13
  const char *v10; // rax
  const char *v11; // rbp
  __int64 (__fastcall **v13)(_QWORD); // rax
  __int64 (__fastcall *v14)(_QWORD); // rbp
  _QWORD v16[4]; // [rsp+10h] [rbp-188h] BYREF
  __int16 v17; // [rsp+30h] [rbp-168h]
  void *ptr; // [rsp+40h] [rbp-158h] BYREF
  __m128i si128; // [rsp+48h] [rbp-150h]
  _BYTE v20[320]; // [rsp+58h] [rbp-140h] BYREF

  v8 = 0;
  v10 = (const char *)(**a1)(a1);
  v11 = v10;
  if ( v10 )
    v8 = strlen(v10);
  if ( a4 + a6 != v8 || v8 < a4 || a4 && memcmp(v11, a3, a4) || v8 < a6 || a6 && memcmp(&v11[v8 - a6], a5, a6) )
  {
    v16[1] = a4;
    v16[0] = a3;
    v16[2] = a5;
    v17 = 1285;
    v13 = *a1;
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A8DE0);
    v14 = v13[2];
    v16[3] = a6;
    ptr = v20;
    sub_22538C0(v16, &ptr);
    v11 = (const char *)((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD), void *, __int64))v14)(
                          a1,
                          ptr,
                          si128.m128i_i64[0]);
    if ( ptr != v20 )
      free(ptr);
  }
  return v11;
}
