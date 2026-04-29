__int64 __fastcall sub_129FA0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 result; // rax
  char v8; // dl
  __int64 v9; // rcx
  char v10; // dl
  __int64 v11; // rcx
  char v12; // dl

  if ( !*(_BYTE *)a3 )
    return 0;
  if ( *(_DWORD *)(a3 + 4) == -1 )
    return 0;
  result = sub_121CD0(a2, a1, a3, a4, a5, a6);
  if ( !(_DWORD)result )
  {
    v8 = sub_1255D0((unsigned __int8 *)a1, a2, a3, 0);
    result = 1;
    if ( !v8 )
    {
      if ( *(_DWORD *)(a3 + 4) >= *(_DWORD *)(a1 + 4) )
        return 0;
      v10 = sub_127420(a3, a2, (unsigned __int8 *)a1, v9);
      result = 2;
      if ( !v10 )
      {
        v12 = sub_129F00(a3, a2, (unsigned __int8 *)a1, v11);
        result = 3;
        if ( !v12 )
          return 0;
      }
    }
  }
  return result;
}
