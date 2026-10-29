void __fastcall sub_172D9B0(__int64 *a1, unsigned __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // [rsp+0h] [rbp-58h] BYREF
  __int16 v8; // [rsp+8h] [rbp-50h]
  char v9; // [rsp+Ah] [rbp-4Eh]
  void *ptr; // [rsp+10h] [rbp-48h]
  __int64 v11; // [rsp+18h] [rbp-40h]
  _BYTE v12[56]; // [rsp+20h] [rbp-38h] BYREF

  if ( a3 == 1 )
  {
    v7 = a4;
    v8 = 0;
    v9 = 0;
    ptr = v12;
    v11 = 0x400000000LL;
    sub_172AF50(a1, a2, (__int64)&v7, 0, a5, a6);
    if ( ptr != v12 )
      free(ptr);
  }
  else if ( (*(_BYTE *)(sub_168B6E0((__int64)a1) + 2) & 4) != 0 )
  {
    sub_172C560(a1, a2, a3 & 0xFFFFFFFFFFFFFFFELL, 0, 0, 0, 0);
  }
}
