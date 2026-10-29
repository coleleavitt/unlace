__int64 __fastcall sub_22010F0(__int64 a1, __int64 a2)
{
  void **v3; // rsi
  void **v4; // rsi
  void *v6; // [rsp+0h] [rbp-48h] BYREF
  void *v7; // [rsp+8h] [rbp-40h]
  void *v8; // [rsp+10h] [rbp-38h] BYREF
  unsigned int v9; // [rsp+18h] [rbp-30h]

  v3 = *(void ***)(a2 + 8);
  if ( *v3 == &unk_26F7B20 )
    sub_22010F0(&v8, v3);
  else
    sub_21FEE00((__int64)&v8, (__int64)v3);
  if ( v9 <= 0x40 )
  {
    v6 = v8;
  }
  else
  {
    v6 = *(void **)v8;
    operator delete[](v8);
  }
  v4 = (void **)(*(_QWORD *)(a2 + 8) + 24LL);
  if ( *v4 == &unk_26F7B20 )
    sub_22010F0(&v8, v4);
  else
    sub_21FEE00((__int64)&v8, (__int64)v4);
  if ( v9 <= 0x40 )
  {
    v7 = v8;
  }
  else
  {
    v7 = *(void **)v8;
    operator delete[](v8);
  }
  sub_2205610(a1, 128, 2, &v6);
  return a1;
}
