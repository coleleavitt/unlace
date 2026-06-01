void __fastcall sub_B93BC0(__int64 a1, __int64 a2, const __m128i *a3, int a4, char a5)
{
  __int64 v8; // rax
  __m128i v9; // xmm0
  __int64 v10; // [rsp+0h] [rbp-58h] BYREF
  __m128i v11; // [rsp+8h] [rbp-50h]
  __int64 v12; // [rsp+18h] [rbp-40h]
  int v13; // [rsp+20h] [rbp-38h]
  char v14; // [rsp+24h] [rbp-34h]

  v8 = sub_B685F0(a1);
  v10 = a2;
  v9 = _mm_loadu_si128(a3);
  v13 = a4;
  v14 = a5;
  v11 = v9;
  v12 = v8;
  sub_B91A70((__int64)&v10, a1);
}

