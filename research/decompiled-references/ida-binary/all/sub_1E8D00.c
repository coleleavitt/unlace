__int64 __fastcall sub_1E8D00(__int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax
  __int64 v3; // rcx

  v1 = *(_QWORD *)(a1 + 24);
  if ( !v1 )
    return 0;
  result = *(_QWORD *)(a1 + 16);
  v3 = result + 80 * v1;
  if ( v3 == result )
    return 0;
  while ( (*(_BYTE *)(result + 72) & 4) != 0 )
  {
    result += 80;
    if ( v3 == result )
      return 0;
  }
  return result;
}
