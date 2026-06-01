void __fastcall sub_21FF1C0(_BYTE *a1, _DWORD *a2)
{
  void *v2; // rax
  void *v3; // r13
  char v4; // al
  bool v5; // [rsp+Fh] [rbp-59h] BYREF
  void *v6; // [rsp+10h] [rbp-58h] BYREF
  unsigned int v7; // [rsp+18h] [rbp-50h]
  void *v8; // [rsp+20h] [rbp-48h] BYREF
  unsigned int v9; // [rsp+28h] [rbp-40h]

  if ( a2[2] > 0x40u )
    a2 = *(_DWORD **)a2;
  v2 = *(void **)a2;
  v3 = *((void **)a2 + 1);
  v9 = 64;
  v8 = v2;
  sub_21FBE00((__int64)a1, (__int64 *)&v8);
  if ( v9 > 0x40 && v8 )
    operator delete[](v8);
  sub_21FDAB0((__int64)a1, dword_26F7B00, 1, &v5);
  v4 = a1[20];
  if ( (v4 & 6) != 0 && (v4 & 7) != 3 )
  {
    v6 = v3;
    v7 = 64;
    sub_21FBE00((__int64)&v8, (__int64 *)&v6);
    if ( v7 > 0x40 )
    {
      if ( v6 )
        operator delete[](v6);
    }
    sub_21FDAB0((__int64)&v8, dword_26F7B00, 1, &v5);
    sub_21FD790(a1, (__int64)&v8, 1, 0);
    sub_21F9170(&v8);
  }
}
