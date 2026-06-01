void __fastcall Z3_params_set_bool(__int64 a1, __int64 a2, void *a3, unsigned __int8 a4)
{
  char v6; // r12
  void *v7; // [rsp+8h] [rbp-60h] BYREF
  void *v8; // [rsp+10h] [rbp-58h] BYREF
  __int64 v9; // [rsp+20h] [rbp-48h] BYREF

  v6 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v6 )
    sub_294D40(a1, a2, a3, a4);
  *(_DWORD *)(a1 + 1520) = 0;
  v7 = a3;
  sub_185B3A0(&v8, &v7);
  sub_1862300(a2 + 24, v8, a4);
  if ( v8 != &v9 )
    operator delete(v8, v9 + 1);
  if ( v6 )
    byte_1C7EBA0 = 1;
}

