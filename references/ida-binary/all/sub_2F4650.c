__int64 __fastcall sub_2F4650(const char *a1, __int64 a2, double a3)
{
  __int64 result; // rax

  result = sub_2F44B0(a1, a2, "Revert", 0, a3);
  if ( (unsigned int)result <= 3 && !*(_BYTE *)(a2 + 704) )
    return 7;
  return result;
}
