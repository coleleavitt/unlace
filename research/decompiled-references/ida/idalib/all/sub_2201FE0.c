__int64 __fastcall sub_2201FE0(__m128i *a1, __int64 a2, unsigned __int8 a3, unsigned int a4)
{
  unsigned int v6; // r15d
  __m128i v7; // xmm0
  void *v9; // [rsp+0h] [rbp-78h] BYREF
  unsigned int v10; // [rsp+8h] [rbp-70h]
  __m128i v11; // [rsp+10h] [rbp-68h] BYREF
  __int64 v12[11]; // [rsp+20h] [rbp-58h] BYREF

  sub_21F9140(v12, (__int64)dword_26F7B00);
  sub_21FB9A0(v12, 0);
  if ( (_UNKNOWN *)v12[0] == &unk_26F7B20 )
    v6 = sub_2201FE0(v12, a2, a3, a4);
  else
    v6 = sub_21FB140((__int64)v12, a2, a3, a4);
  if ( (_UNKNOWN *)v12[0] == &unk_26F7B20 )
    sub_22010F0((__int64)&v9, (__int64)v12);
  else
    sub_21FEE00((__int64)&v9, (__int64)v12);
  sub_21FFDA0(&v11, (__int64)&unk_26F7B20, &v9);
  sub_A4F010((__int64)a1);
  v7 = _mm_load_si128(&v11);
  v11.m128i_i64[0] = (__int64)&unk_26F7B40;
  *a1 = v7;
  v11.m128i_i64[1] = 0;
  sub_A4F010((__int64)&v11);
  if ( v10 > 0x40 && v9 )
    operator delete[](v9);
  if ( (_UNKNOWN *)v12[0] == &unk_26F7B20 )
    sub_A4F010((__int64)v12);
  else
    sub_21F9170(v12);
  return v6;
}
