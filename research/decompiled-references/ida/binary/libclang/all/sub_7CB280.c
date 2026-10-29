unsigned __int64 __fastcall sub_7CB280(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __m128i v4; // xmm0
  __int64 v6; // [rsp+0h] [rbp-38h] BYREF
  __m128i v7; // [rsp+8h] [rbp-30h]
  __int64 v8; // [rsp+18h] [rbp-20h]
  int v9; // [rsp+20h] [rbp-18h]
  char v10; // [rsp+24h] [rbp-14h]

  v4 = _mm_loadu_si128((const __m128i *)(a3 + 17304));
  v6 = a2;
  v8 = a3;
  v9 = 0;
  v10 = 0;
  v7 = v4;
  return sub_7C8480(&v6, a1, a4);
}

