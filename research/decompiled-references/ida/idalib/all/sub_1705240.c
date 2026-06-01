void __fastcall sub_1705240(__int64 *a1)
{
  __int64 v1; // rsi
  int v2; // [rsp+0h] [rbp-C8h] BYREF
  char v3; // [rsp+4h] [rbp-C4h]
  __int64 v4; // [rsp+8h] [rbp-C0h]
  __int64 v5; // [rsp+10h] [rbp-B8h]
  __int64 v6; // [rsp+18h] [rbp-B0h]
  __int64 v7; // [rsp+20h] [rbp-A8h]
  void *v8; // [rsp+38h] [rbp-90h]
  int v9; // [rsp+44h] [rbp-84h]
  char v10; // [rsp+58h] [rbp-70h]
  void *ptr; // [rsp+60h] [rbp-68h]
  __int64 v12; // [rsp+68h] [rbp-60h]
  int v13; // [rsp+70h] [rbp-58h]
  char v14; // [rsp+74h] [rbp-54h]
  __int64 v15; // [rsp+78h] [rbp-50h] BYREF

  v1 = a1[1];
  v2 = 26;
  v3 = 0;
  v4 = 0;
  v5 = 0;
  v6 = 0;
  v7 = 0;
  v10 = 0;
  ptr = &v15;
  v12 = 8;
  v13 = 0;
  v14 = 1;
  if ( v1 )
  {
    sub_1700D50(*a1, v1, &v2, 0, 0);
    if ( !v14 )
      free(ptr);
    if ( v10 )
    {
      if ( v9 )
        free(v8);
    }
  }
}
