__int64 __fastcall sub_4DE3F0(__int64 *a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rdx

  result = *a1;
  v3 = *a1 + 32 * a1[1];
  if ( *a1 == v3 )
    return 0;
  while ( a2 != *(_QWORD *)(result + 8) )
  {
    result += 32;
    if ( v3 == result )
      return 0;
  }
  return result;
}
