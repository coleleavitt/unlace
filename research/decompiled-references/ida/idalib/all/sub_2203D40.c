__int64 __fastcall sub_2203D40(__int64 a1, __m128i *a2, char *a3, size_t a4, unsigned int a5)
{
  __m128i v6; // xmm0
  void *v10; // [rsp+10h] [rbp-78h] BYREF
  unsigned int v11; // [rsp+18h] [rbp-70h]
  __m128i v12; // [rsp+20h] [rbp-68h] BYREF
  __int64 v13[11]; // [rsp+30h] [rbp-58h] BYREF

  sub_21F9140(v13, (__int64)dword_26F7B00);
  sub_21FB9A0(v13, 0);
  if ( (_UNKNOWN *)v13[0] == &unk_26F7B20 )
    sub_2203D40(a1, v13, a3, a4, a5);
  else
    sub_2203BB0(a1, (__int64)v13, a3, a4, a5);
  if ( (_UNKNOWN *)v13[0] == &unk_26F7B20 )
    sub_22010F0((__int64)&v10, (__int64)v13);
  else
    sub_21FEE00((__int64)&v10, (__int64)v13);
  sub_21FFDA0(&v12, (__int64)&unk_26F7B20, &v10);
  sub_A4F010((__int64)a2);
  v6 = _mm_load_si128(&v12);
  v12.m128i_i64[0] = (__int64)&unk_26F7B40;
  *a2 = v6;
  v12.m128i_i64[1] = 0;
  sub_A4F010((__int64)&v12);
  if ( v11 > 0x40 && v10 )
    operator delete[](v10);
  if ( (_UNKNOWN *)v13[0] == &unk_26F7B20 )
    sub_A4F010((__int64)v13);
  else
    sub_21F9170(v13);
  return a1;
}
