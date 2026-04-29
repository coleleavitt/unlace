bool __fastcall sub_384C60(__int64 a1)
{
  bool result; // al
  int v2; // edx

  result = 0;
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 32) + 152LL) > *(_DWORD *)(a1 + 44) )
  {
    v2 = *(_DWORD *)(a1 + 56);
    result = 1;
    if ( v2 != 2 )
    {
      result = 0;
      if ( !v2 )
        return *(_DWORD *)(a1 + 80) == 0;
    }
  }
  return result;
}
