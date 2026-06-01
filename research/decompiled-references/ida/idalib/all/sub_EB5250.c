__int64 __fastcall sub_EB5250(__int64 a1)
{
  int v1; // edx
  __int64 result; // rax

  v1 = *(_DWORD *)(a1 + 8);
  if ( v1 <= 53 )
  {
    if ( v1 < 52 && v1 != 45 )
      return 0;
    return a1 + 24;
  }
  if ( v1 == 85 )
    return a1 + 24;
  result = 0;
  if ( v1 == 98 )
    return a1 + 24;
  return result;
}
