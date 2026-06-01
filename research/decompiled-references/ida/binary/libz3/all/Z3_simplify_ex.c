__int64 __fastcall Z3_simplify_ex(__int64 a1, __int64 a2, __int64 a3)
{
  char v4; // al
  __int64 v6; // rbx

  v4 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( !v4 )
    return sub_25D4C0(a1, a2, a3);
  sub_29B0C0();
  v6 = sub_25D4C0(a1, a2, a3);
  sub_2BB620(v6);
  byte_1C7EBA0 = 1;
  return v6;
}

