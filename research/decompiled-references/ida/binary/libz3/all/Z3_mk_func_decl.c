__int64 __fastcall Z3_mk_func_decl(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, __int64 a5)
{
  char v8; // r12
  __int64 v9; // rdi
  __int64 v10; // rbp
  __int64 v12; // [rsp+8h] [rbp-50h]
  _QWORD v13[8]; // [rsp+18h] [rbp-40h] BYREF

  v8 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v8 )
  {
    v12 = a5;
    sub_295970();
    a5 = v12;
  }
  v9 = *(_QWORD *)(a1 + 232);
  *(_DWORD *)(a1 + 1520) = 0;
  v13[0] = a2;
  v10 = sub_15E3510(v9, v13, a3, a4, a5, 0);
  sub_251FD0(a1, v10);
  if ( v8 )
  {
    sub_2BB620(v10);
    byte_1C7EBA0 = 1;
  }
  return v10;
}

