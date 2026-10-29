__int64 __fastcall sub_13F0060(__int64 a1)
{
  __int64 result; // rax

  for ( result = 0; *(_WORD *)(a1 + 16) != 1; result = (unsigned int)(result + 1) )
    a1 += 24;
  return result;
}
