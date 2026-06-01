bool __fastcall sub_7791E0(_DWORD *a1, _DWORD *a2)
{
  bool result; // al
  int v3; // eax

  result = 0;
  if ( *a1 == 7 )
  {
    if ( a1[4] != *a2 || (v3 = 0, *(_DWORD *)((char *)a1 + 19) != *(_DWORD *)((char *)a2 + 3)) )
      v3 = 1;
    return v3 == 0;
  }
  return result;
}

