__int64 __fastcall sub_206D500(__int64 a1)
{
  __int64 result; // rax

  result = 0;
  if ( *(_WORD *)(a1 + 2) == 17152 )
    return *(unsigned int *)(a1 + 4) | 0x100000000LL;
  return result;
}
