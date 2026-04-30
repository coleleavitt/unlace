__int64 __fastcall sub_278470(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 v3; // rbp

  if ( !a2 )
    return 0;
  v2 = *(_DWORD *)(a2 + 64);
  if ( v2 != 2 )
  {
    if ( v2 != 1 )
      return 0;
    if ( !*(_BYTE *)(a1 + 104) )
    {
      v3 = *(_QWORD *)(a1 + 96);
      if ( v3 )
      {
        if ( (unsigned __int8)sub_273600(*(_QWORD *)(a1 + 96)) )
          return v3;
      }
    }
  }
  if ( *(_BYTE *)(a1 + 40) )
    return 0;
  return *(_QWORD *)(a1 + 32);
}
