__int64 __fastcall sub_22014F0(__m128i *a1, __int64 a2, unsigned __int8 a3)
{
  unsigned int v3; // r15d
  char v4; // al
  char v5; // dl
  __m128i si128; // xmm0
  int v9; // [rsp+Ch] [rbp-8Ch]
  void *v10; // [rsp+10h] [rbp-88h] BYREF
  unsigned int v11; // [rsp+18h] [rbp-80h]
  _QWORD v12[2]; // [rsp+20h] [rbp-78h] BYREF
  char v13; // [rsp+34h] [rbp-64h]
  void *v14[2]; // [rsp+40h] [rbp-58h] BYREF
  char v15; // [rsp+54h] [rbp-44h]

  sub_22010F0((__int64)v14, (__int64)a1);
  sub_21FF1C0(v12, v14);
  if ( LODWORD(v14[1]) > 0x40 && v14[0] )
    operator delete[](v14[0]);
  sub_22010F0((__int64)&v10, a2);
  sub_21FF1C0(v14, &v10);
  if ( (_UNKNOWN *)v12[0] == &unk_26F7B20 )
  {
    v3 = sub_22014F0(v12, v14, a3);
  }
  else
  {
    v13 = (v13 ^ v15) & 8 | v13 & 0xF7;
    v3 = sub_21FD320((__int64)v12, (__int64)v14);
    v4 = v13;
    v5 = v13 & 7;
    if ( (v13 & 7) == 3 )
    {
      if ( *(_DWORD *)(v12[0] + 20LL) != 2 )
        goto LABEL_8;
      v4 = v13 & 0xF7;
      v13 = v4;
      v5 = v4 & 7;
    }
    if ( (v4 & 6) != 0 && v5 != 3 )
    {
      v9 = sub_21F9970((__int64)v12, (__int64)v14);
      v3 = sub_21FAF10((__int64)v12, a3, v9);
      if ( v9 )
        v3 |= 0x10u;
    }
  }
LABEL_8:
  if ( v14[0] == &unk_26F7B20 )
    sub_A4F010((__int64)v14);
  else
    sub_21F9170(v14);
  if ( v11 > 0x40 && v10 )
    operator delete[](v10);
  if ( (_UNKNOWN *)v12[0] == &unk_26F7B20 )
    sub_22010F0((__int64)&v10, (__int64)v12);
  else
    sub_21FEE00((__int64)&v10, (__int64)v12);
  sub_21FFDA0(v14, (__int64)&unk_26F7B20, &v10);
  sub_A4F010((__int64)a1);
  si128 = _mm_load_si128((const __m128i *)v14);
  v14[0] = &unk_26F7B40;
  *a1 = si128;
  v14[1] = nullptr;
  sub_A4F010((__int64)v14);
  if ( v11 > 0x40 && v10 )
    operator delete[](v10);
  if ( (_UNKNOWN *)v12[0] == &unk_26F7B20 )
    sub_A4F010((__int64)v12);
  else
    sub_21F9170(v12);
  return v3;
}
