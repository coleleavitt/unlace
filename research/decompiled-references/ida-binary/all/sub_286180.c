__int64 __fastcall sub_286180(__int64 a1, int a2)
{
  unsigned int v2; // edx
  __int64 result; // rax
  unsigned int v4; // ecx

  v2 = *(_DWORD *)(a1 + 436);
  result = (unsigned int)-a2;
  if ( a2 > 0 )
    result = (unsigned int)a2;
  v4 = result;
  if ( (unsigned int)result > v2 )
    result = v2;
  if ( !v2 )
    result = v4;
  if ( a2 < 0 )
    return (unsigned int)-(int)result;
  return result;
}
