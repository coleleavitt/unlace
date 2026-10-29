_QWORD *__fastcall sub_E917C0(_QWORD *a1, __int64 a2)
{
  _QWORD *v2; // rbp
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // [rsp+8h] [rbp-C0h] BYREF
  void *ptr; // [rsp+10h] [rbp-B8h] BYREF
  __m128i si128; // [rsp+18h] [rbp-B0h] BYREF
  __int64 v11; // [rsp+28h] [rbp-A0h]

  v11 = a2;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8F30);
  ptr = &si128.m128i_u64[1];
  v8 = 0;
  v2 = (_QWORD *)sub_2223360(a1 + 131, &ptr, &v8, off_2B4BAF0);
  if ( !v2 )
  {
    v6 = a1[294];
    a1[304] += 24LL;
    v2 = (_QWORD *)((v6 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    if ( a1[295] >= (unsigned __int64)(v2 + 3) && v6 )
      a1[294] = v2 + 3;
    else
      v2 = (_QWORD *)sub_986170((__int64)(a1 + 294), 24, 24, 3, v3, v4);
    *v2 = 0;
    v7 = v8;
    v2[1] = 2;
    v2[2] = a2;
    sub_2223210(a1 + 131, v2, v7, off_2B4BAF0);
  }
  if ( ptr != &si128.m128i_u64[1] )
    free(ptr);
  return v2;
}
