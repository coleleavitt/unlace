void __fastcall sub_172C2C0(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // [rsp+0h] [rbp-48h] BYREF
  __int16 v7; // [rsp+8h] [rbp-40h]
  char v8; // [rsp+Ah] [rbp-3Eh]
  void *ptr; // [rsp+10h] [rbp-38h]
  __int64 v10; // [rsp+18h] [rbp-30h]
  _BYTE v11[40]; // [rsp+20h] [rbp-28h] BYREF

  v6 = a3;
  v7 = 0;
  v8 = a4;
  ptr = v11;
  v10 = 0x400000000LL;
  sub_172AF50(a1, a2, (__int64)&v6, a4, a5, a6);
  if ( ptr != v11 )
    free(ptr);
}
