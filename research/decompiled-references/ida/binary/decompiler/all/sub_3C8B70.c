char __fastcall sub_3C8B70(__int64 a1, __int64 a2)
{
  int v2; // edx
  char result; // al
  __int64 v4; // rdi
  __int64 v5; // rsi
  __int64 v6; // rcx
  __int64 v7; // rdx

  v2 = *(_DWORD *)(a1 + 8);
  result = 1;
  if ( v2 >= *(_DWORD *)(a2 + 8) )
  {
    result = 0;
    if ( v2 <= *(_DWORD *)(a2 + 8) )
    {
      if ( v2 )
      {
        return *(_QWORD *)a1 < *(_QWORD *)a2;
      }
      else
      {
        v4 = *(_QWORD *)a1;
        v5 = *(_QWORD *)a2;
        result = 1;
        v6 = -v4;
        if ( v4 > 0 )
          v6 = v4;
        v7 = -v5;
        if ( v5 > 0 )
          v7 = v5;
        if ( v6 <= v7 )
          return v6 == v7 && v4 > v5;
      }
    }
  }
  return result;
}
