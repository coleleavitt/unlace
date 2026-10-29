__int64 __fastcall sub_10C5C0(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = sub_10C2D0(a1, a2, (__int64)"Revert", 0);
  if ( (unsigned int)result <= 3 && !*(_BYTE *)(a2 + 600) )
    return 7;
  return result;
}

