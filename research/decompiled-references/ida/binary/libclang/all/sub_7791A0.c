bool __fastcall sub_7791A0(__int64 a1, __int64 a2)
{
  bool result; // al
  int v3; // eax

  result = 0;
  if ( *(_DWORD *)a1 == 5 )
  {
    if ( *(_DWORD *)(a1 + 16) != *(_DWORD *)a2 || (v3 = 0, *(_BYTE *)(a1 + 20) != *(_BYTE *)(a2 + 4)) )
      v3 = 1;
    return v3 == 0;
  }
  return result;
}

