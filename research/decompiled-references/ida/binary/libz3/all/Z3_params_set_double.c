void __fastcall Z3_params_set_double(__int64 a1, __int64 a2, void *a3, double a4)
{
  char v5; // bp
  void *v6; // [rsp+0h] [rbp-60h] BYREF
  void *v7; // [rsp+8h] [rbp-58h] BYREF
  __int64 v8; // [rsp+18h] [rbp-48h] BYREF

  v5 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v5 )
    sub_294DE0(a1, a2, a3, a4);
  v6 = a3;
  *(_DWORD *)(a1 + 1520) = 0;
  sub_185B3A0(&v7, &v6);
  sub_18623E0(a2 + 24, v7, a4);
  if ( v7 != &v8 )
    operator delete(v7, v8 + 1);
  if ( v5 )
    byte_1C7EBA0 = 1;
}

