__int64 __fastcall sub_15C4C0(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax
  __int64 v3; // rcx

  v1 = a1[1];
  if ( !v1 )
    return 0;
  result = *a1;
  v3 = *a1 + 80 * v1;
  if ( v3 == *a1 )
    return 0;
  while ( (*(_BYTE *)(result + 72) & 4) != 0 )
  {
    result += 80;
    if ( v3 == result )
      return 0;
  }
  return result;
}

