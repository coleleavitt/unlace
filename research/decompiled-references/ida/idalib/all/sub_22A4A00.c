__m128i *__fastcall sub_22A4A00(__m128i *a1)
{
  __int64 v1; // rax
  __m128i si128; // xmm0
  __m128i vars0; // [rsp+0h] [rbp+0h] BYREF
  _QWORD vars10[5]; // [rsp+10h] [rbp+10h] BYREF

  vars0.m128i_i64[0] = (__int64)vars10;
  v1 = operator new(0x19u);
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A9BB0);
  strcpy((char *)(v1 + 16), "inux-gnu");
  *(__m128i *)v1 = si128;
  vars0.m128i_i64[0] = v1;
  vars10[0] = 24;
  vars0.m128i_i64[1] = 24;
  sub_22A4240(a1, &vars0);
  if ( (_QWORD *)vars0.m128i_i64[0] != vars10 )
    operator delete((void *)vars0.m128i_i64[0]);
  return a1;
}
