__int64 __fastcall sub_1238E0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 result; // rax
  char v8; // dl
  char v9; // dl
  char v10; // dl

  if ( !*(_BYTE *)a3 )
    return 0;
  if ( *(_DWORD *)(a3 + 4) == -1 )
    return 0;
  result = sub_11B610(a2, a1, a3, a4, a5, a6);
  if ( !(_DWORD)result )
  {
    v8 = sub_11EF10((unsigned __int8 *)a1, a2, a3, 0);
    result = 1;
    if ( !v8 )
    {
      if ( *(_DWORD *)(a3 + 4) >= *(_DWORD *)(a1 + 4) )
        return 0;
      v9 = sub_120D60(a3, a2, (unsigned __int8 *)a1);
      result = 2;
      if ( !v9 )
      {
        v10 = sub_123840(a3, a2, (unsigned __int8 *)a1);
        result = 3;
        if ( !v10 )
          return 0;
      }
    }
  }
  return result;
}
