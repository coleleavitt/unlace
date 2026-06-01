__int64 __fastcall Z3_mk_type_variable(__int64 a1, __int64 a2, int a3, int a4, int a5, int a6)
{
  char v7; // r12
  __int64 v8; // rdi
  __int64 v9; // rbp
  __int64 v11; // [rsp+8h] [rbp-30h] BYREF

  v7 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v7 )
    sub_295180();
  *(_DWORD *)(a1 + 1520) = 0;
  v8 = *(_QWORD *)(a1 + 232);
  v11 = a2;
  v9 = sub_15E2AC0(v8, (unsigned int)&v11, a3, a4, a5, a6);
  sub_251FD0(a1, v9);
  if ( v7 )
  {
    sub_2BB620(v9);
    byte_1C7EBA0 = 1;
  }
  return v9;
}

