__int64 __fastcall Z3_param_descrs_get_documentation(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  char v5; // bp
  __int64 result; // rax
  _QWORD v7[6]; // [rsp+18h] [rbp-30h] BYREF

  v4 = a2;
  v5 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v5 )
    sub_295050();
  *(_DWORD *)(a1 + 1520) = 0;
  if ( a2 )
    v4 = a2 + 24;
  v7[0] = a3;
  result = sub_1857830(v4, v7);
  if ( !result )
  {
    sub_24EA30(a1, 2u, nullptr);
    if ( !v5 )
      return 0;
    sub_2BB620(0);
    result = 0;
    goto LABEL_11;
  }
  if ( v5 )
LABEL_11:
    byte_1C7EBA0 = 1;
  return result;
}

