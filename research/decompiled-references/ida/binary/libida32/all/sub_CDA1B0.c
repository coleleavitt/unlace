bool __fastcall sub_CDA1B0(__int64 a1, __int64 a2)
{
  int v2; // edx
  bool result; // al
  __int64 v4; // rcx
  __int64 v5; // r8

  v2 = *(_DWORD *)(a1 + 24);
  result = 0;
  if ( *(_DWORD *)(a2 + 24) == v2 )
  {
    if ( v2 != 1 )
    {
      v4 = *(_QWORD *)(a2 + 32);
      v5 = *(_QWORD *)(a1 + 32);
      if ( v2 == 2 )
      {
        if ( v5 != v4 )
          return result;
      }
      else if ( v5 != v4 || *(_DWORD *)(a2 + 40) != *(_DWORD *)(a1 + 40) )
      {
        return result;
      }
      return *(_QWORD *)a2 == *(_QWORD *)a1;
    }
    if ( *(_QWORD *)(a2 + 40) == *(_QWORD *)(a1 + 40) && *(_QWORD *)(a2 + 32) == *(_QWORD *)(a1 + 32) )
      return *(_QWORD *)a2 == *(_QWORD *)a1;
  }
  return result;
}

