__int64 __fastcall sub_2201370(__m128i *a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  unsigned int v4; // r15d
  __m128i si128; // xmm0
  void *v7; // [rsp+0h] [rbp-88h] BYREF
  unsigned int v8; // [rsp+8h] [rbp-80h]
  _QWORD v9[4]; // [rsp+10h] [rbp-78h] BYREF
  void *v10[2]; // [rsp+30h] [rbp-58h] BYREF

  sub_22010F0((__int64)v10, (__int64)a1);
  sub_21FF1C0(v9, v10);
  if ( LODWORD(v10[1]) > 0x40 && v10[0] )
    operator delete[](v10[0]);
  sub_22010F0((__int64)&v7, a2);
  sub_21FF1C0(v10, &v7);
  if ( (_UNKNOWN *)v9[0] == &unk_26F7B20 )
    v4 = sub_2201370(v9, v10, v2, v3);
  else
    v4 = sub_21FF980((__int64)v9, (__int64)v10);
  if ( v10[0] == &unk_26F7B20 )
    sub_A4F010((__int64)v10);
  else
    sub_21F9170(v10);
  if ( v8 > 0x40 && v7 )
    operator delete[](v7);
  if ( (_UNKNOWN *)v9[0] == &unk_26F7B20 )
    sub_22010F0((__int64)&v7, (__int64)v9);
  else
    sub_21FEE00((__int64)&v7, (__int64)v9);
  sub_21FFDA0(v10, (__int64)&unk_26F7B20, &v7);
  sub_A4F010((__int64)a1);
  si128 = _mm_load_si128((const __m128i *)v10);
  v10[0] = &unk_26F7B40;
  *a1 = si128;
  v10[1] = nullptr;
  sub_A4F010((__int64)v10);
  if ( v8 > 0x40 && v7 )
    operator delete[](v7);
  if ( (_UNKNOWN *)v9[0] == &unk_26F7B20 )
    sub_A4F010((__int64)v9);
  else
    sub_21F9170(v9);
  return v4;
}
