__int64 __fastcall Z3_simplify(__int64 a1, __int64 a2)
{
  char v2; // al
  __int64 v4; // rbx

  v2 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( !v2 )
    return sub_25D4C0(a1, a2, 0);
  sub_29B080();
  v4 = sub_25D4C0(a1, a2, 0);
  sub_2BB620(v4);
  byte_1C7EBA0 = 1;
  return v4;
}

