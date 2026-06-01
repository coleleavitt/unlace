double __fastcall sub_2202D40(_QWORD *a1)
{
  void **v1; // rsi
  void *v3; // [rsp+8h] [rbp-60h]
  double v4; // [rsp+8h] [rbp-60h]
  bool v5; // [rsp+1Fh] [rbp-49h] BYREF
  void *v6; // [rsp+20h] [rbp-48h] BYREF
  unsigned int v7; // [rsp+28h] [rbp-40h]
  void *v8; // [rsp+30h] [rbp-38h] BYREF
  void **v9; // [rsp+38h] [rbp-30h]

  if ( (_DWORD *)*a1 == dword_26F7D20 )
  {
    sub_21FEE00((__int64)&v8, (__int64)a1);
    if ( (unsigned int)v9 > 0x40 )
    {
      v4 = *(double *)v8;
      operator delete[](v8);
      return v4;
    }
    else
    {
      return *(double *)&v8;
    }
  }
  else
  {
    sub_995620((__int64)&v8, a1);
    sub_22028C0((__int64 *)&v8, dword_26F7D20, 1, &v5);
    v1 = &v8;
    if ( v8 == &unk_26F7B20 )
      v1 = v9;
    sub_21FEE00((__int64)&v6, (__int64)v1);
    if ( v7 <= 0x40 )
    {
      v3 = v6;
      if ( v8 != &unk_26F7B20 )
        goto LABEL_6;
    }
    else
    {
      v3 = *(void **)v6;
      operator delete[](v6);
      if ( v8 != &unk_26F7B20 )
      {
LABEL_6:
        sub_21F9170(&v8);
        return *(double *)&v3;
      }
    }
    sub_A4F010((__int64)&v8);
    return *(double *)&v3;
  }
}
