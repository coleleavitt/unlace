char __fastcall Z3_simplifier_inc_ref(__int64 a1, __int64 a2)
{
  char v2; // al
  char result; // al

  v2 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v2 )
  {
    sub_29CD20();
    *(_DWORD *)(a1 + 1520) = 0;
    sub_24E8F0(a2);
    result = byte_1C7EBA0;
    byte_1C7EBA0 = 1;
  }
  else
  {
    *(_DWORD *)(a1 + 1520) = 0;
    return sub_24E8F0(a2);
  }
  return result;
}

