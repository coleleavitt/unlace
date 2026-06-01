__int64 __fastcall Z3_is_algebraic_number(__int64 a1, __int64 a2)
{
  char v2; // al
  __int64 result; // rax

  v2 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( !v2 )
    return sub_1666670(a1 + 296, a2);
  sub_29A7C0();
  result = sub_1666670(a1 + 296, a2);
  byte_1C7EBA0 = 1;
  return result;
}

