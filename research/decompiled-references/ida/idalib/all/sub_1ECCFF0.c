_DWORD *__fastcall sub_1ECCFF0(__int64 a1)
{
  _DWORD *result; // rax
  _DWORD *v2; // rdx
  __int64 v3; // rcx

  result = *(_DWORD **)a1;
  v2 = *(_DWORD **)(a1 + 8);
  if ( *(_DWORD **)a1 != v2 && *result == -1 )
  {
    result += 18;
    while ( 1 )
    {
      v3 = *((_QWORD *)result - 8);
      if ( v3 == 1 )
      {
        if ( *(result - 14) != -1 )
          return result;
      }
      else if ( v3 != 2 || *(result - 14) != -2 )
      {
        return result;
      }
      *(_QWORD *)a1 = result;
      if ( result != v2 )
      {
        result += 18;
        if ( *(result - 18) == -1 )
          continue;
      }
      return result;
    }
  }
  return result;
}
