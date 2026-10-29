__int64 __fastcall sub_2201720(__m128i *a1, __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned int v6; // r15d
  __m128i si128; // xmm0
  void *v9; // [rsp+10h] [rbp-B8h] BYREF
  unsigned int v10; // [rsp+18h] [rbp-B0h]
  void *v11; // [rsp+20h] [rbp-A8h] BYREF
  unsigned int v12; // [rsp+28h] [rbp-A0h]
  _QWORD v13[4]; // [rsp+30h] [rbp-98h] BYREF
  void *v14; // [rsp+50h] [rbp-78h] BYREF
  unsigned int v15; // [rsp+58h] [rbp-70h]
  void *v16[2]; // [rsp+70h] [rbp-58h] BYREF

  sub_22010F0((__int64)v16, (__int64)a1);
  sub_21FF1C0(v13, v16);
  if ( LODWORD(v16[1]) > 0x40 && v16[0] )
    operator delete[](v16[0]);
  sub_22010F0((__int64)&v11, a3);
  sub_21FF1C0(v16, &v11);
  sub_22010F0((__int64)&v9, a2);
  sub_21FF1C0(&v14, &v9);
  if ( (_UNKNOWN *)v13[0] == &unk_26F7B20 )
    v6 = sub_2201720(v13, &v14, v16, a4);
  else
    v6 = sub_21FE3E0(v13, (__int64)&v14, (__int64)v16, a4);
  sub_9955A0(&v14);
  if ( v10 > 0x40 && v9 )
    operator delete[](v9);
  sub_9955A0(v16);
  if ( v12 > 0x40 && v11 )
    operator delete[](v11);
  if ( (_UNKNOWN *)v13[0] == &unk_26F7B20 )
    sub_22010F0((__int64)&v14, (__int64)v13);
  else
    sub_21FEE00((__int64)&v14, (__int64)v13);
  sub_21FFDA0(v16, (__int64)&unk_26F7B20, &v14);
  sub_A4F010((__int64)a1);
  si128 = _mm_load_si128((const __m128i *)v16);
  v16[0] = &unk_26F7B40;
  *a1 = si128;
  v16[1] = nullptr;
  sub_A4F010((__int64)v16);
  if ( v15 > 0x40 && v14 )
    operator delete[](v14);
  sub_9955A0(v13);
  return v6;
}
