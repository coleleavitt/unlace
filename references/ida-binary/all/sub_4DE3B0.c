__int64 __fastcall sub_4DE3B0(__int64 *a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rdx

  result = *a1;
  v3 = *a1 + 32 * a1[1];
  if ( v3 == *a1 )
    return 0;
  while ( *(_QWORD *)(result + 8) != a2 )
  {
    result += 32;
    if ( v3 == result )
      return 0;
  }
  return result;
}
