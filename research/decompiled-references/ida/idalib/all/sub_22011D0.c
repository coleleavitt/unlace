__int64 __fastcall sub_22011D0(__m128i *a1, unsigned int a2)
{
  char v2; // al
  unsigned int v3; // r15d
  __m128i si128; // xmm0
  void *v6; // [rsp+0h] [rbp-78h] BYREF
  unsigned int v7; // [rsp+8h] [rbp-70h]
  void *v8[2]; // [rsp+10h] [rbp-68h] BYREF
  __int64 v9[2]; // [rsp+20h] [rbp-58h] BYREF
  char v10; // [rsp+34h] [rbp-44h]

  sub_22010F0((__int64)v8, (__int64)a1);
  sub_21FF1C0(v9, v8);
  if ( LODWORD(v8[1]) > 0x40 && v8[0] )
    operator delete[](v8[0]);
  if ( (_UNKNOWN *)v9[0] == &unk_26F7B20 )
  {
    v3 = sub_22011D0(v9, a2);
  }
  else
  {
    v2 = v10 & 7;
    if ( (v10 & 7) == 0 )
      goto LABEL_17;
    if ( v2 != 1 )
    {
      if ( v2 != 3 )
      {
        v3 = sub_21FD870(v9, a2);
        goto LABEL_9;
      }
LABEL_17:
      v3 = 0;
      goto LABEL_10;
    }
    v3 = 0;
    if ( sub_21F8C40(v9) )
    {
      v3 = 1;
      sub_21FD230(v9);
    }
  }
LABEL_9:
  if ( (_UNKNOWN *)v9[0] == &unk_26F7B20 )
  {
    sub_22010F0((__int64)&v6, (__int64)v9);
    goto LABEL_11;
  }
LABEL_10:
  sub_21FEE00((__int64)&v6, (__int64)v9);
LABEL_11:
  sub_21FFDA0(v8, (__int64)&unk_26F7B20, &v6);
  sub_A4F010((__int64)a1);
  si128 = _mm_load_si128((const __m128i *)v8);
  v8[0] = &unk_26F7B40;
  *a1 = si128;
  v8[1] = nullptr;
  sub_A4F010((__int64)v8);
  if ( v7 > 0x40 && v6 )
    operator delete[](v6);
  if ( (_UNKNOWN *)v9[0] == &unk_26F7B20 )
    sub_A4F010((__int64)v9);
  else
    sub_21F9170(v9);
  return v3;
}
