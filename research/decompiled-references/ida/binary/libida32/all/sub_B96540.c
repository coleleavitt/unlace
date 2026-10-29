void __fastcall sub_B96540(__int64 a1, __int64 a2, int a3, char a4)
{
  __int64 v6; // rax
  __m128i v7; // xmm0
  __int64 v8; // [rsp+0h] [rbp-58h] BYREF
  __m128i v9; // [rsp+8h] [rbp-50h]
  __int64 v10; // [rsp+18h] [rbp-40h]
  int v11; // [rsp+20h] [rbp-38h]
  char v12; // [rsp+24h] [rbp-34h]

  v6 = sub_B685F0(a1);
  v8 = a2;
  v7 = _mm_loadu_si128((const __m128i *)(v6 + 17464));
  v11 = a3;
  v12 = a4;
  v9 = v7;
  v10 = v6;
  sub_B91A70((__int64)&v8, a1);
}

