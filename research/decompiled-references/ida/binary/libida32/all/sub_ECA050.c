__int64 __fastcall sub_ECA050(__int64 a1)
{
  __int64 result; // rax

  result = **(unsigned __int8 **)(a1 + 8);
  if ( (byte_23ED5E0[2 * result] & 0x60) == 0 )
    return 0;
  return result;
}

