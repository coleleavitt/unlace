unsigned __int64 __fastcall sub_77D0B0(__int64 a1)
{
  unsigned __int64 result; // rax

  if ( (*(_BYTE *)(a1 + 28) & 0x7Fu) - 39 <= 1 )
    return *(unsigned int *)(a1 + 136);
  result = sub_77D020(a1);
  if ( result )
    return *(unsigned int *)(result + 8);
  return result;
}

