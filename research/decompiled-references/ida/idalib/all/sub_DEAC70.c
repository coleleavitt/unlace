__int64 __fastcall sub_DEAC70(_QWORD *a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rbx
  __m128i v5; // rax
  __m128i v7; // [rsp+0h] [rbp-88h] BYREF
  char v8; // [rsp+1Fh] [rbp-69h] BYREF
  __m128i v9; // [rsp+20h] [rbp-68h] BYREF
  __m128i v10; // [rsp+30h] [rbp-58h] BYREF
  _QWORD v11[9]; // [rsp+40h] [rbp-48h] BYREF

  v4 = a1[22];
  v7 = _mm_loadu_si128((const __m128i *)sub_E21760(v4, 16));
  sub_E21790(v4, 16);
  v9 = _mm_load_si128(&v7);
  v5.m128i_i64[0] = sub_D421E0(a1, a2);
  v10 = v5;
  sub_CFEAE0((__int64)v11, (__int64)&v9);
  sub_22028C0(v11, a2, a3, &v8);
  sub_CFED10((__int64)&v10, v11);
  sub_9955A0(v11);
  *(__m128i *)sub_E216C0(a1[22], 16) = _mm_load_si128(&v10);
  return 1;
}
