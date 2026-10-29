__int64 __fastcall sub_1436660(_QWORD *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax
  char v3; // dl
  __int64 v4; // rsi
  __int64 i; // rdx
  __int64 v6; // rcx

  v1 = a1[139];
  result = a1[140];
  if ( v1 )
    v3 = *(_BYTE *)(v1 + 145) ^ 1;
  else
    v3 = result != 0;
  if ( !v3 )
  {
    v4 = a1[146];
    for ( i = a1[147]; v4 != i; i -= 56 )
    {
      v6 = *(_QWORD *)(i - 40);
      result = *(_QWORD *)(i - 32);
      if ( v6 )
      {
        if ( *(_BYTE *)(v6 + 145) != 1 )
          return result;
      }
      else if ( result )
      {
        return result;
      }
    }
    return 0;
  }
  return result;
}
