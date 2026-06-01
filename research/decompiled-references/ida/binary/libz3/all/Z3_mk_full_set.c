__int64 __fastcall Z3_mk_full_set(__int64 a1, __int64 a2)
{
  char v2; // bp
  __int64 v3; // rax
  __int64 result; // rax
  __int64 v5; // [rsp+8h] [rbp-30h]

  v2 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v2 )
    sub_2973E0();
  *(_DWORD *)(a1 + 1520) = 0;
  v3 = Z3_mk_true(a1);
  result = sub_27C210(a1, a2, v3);
  if ( v2 )
  {
    v5 = result;
    sub_2BB620(result);
    byte_1C7EBA0 = 1;
    return v5;
  }
  return result;
}

