bool __fastcall sub_16713B0(__int64 a1)
{
  __int64 v1; // rdx
  bool result; // al
  int v3; // eax

  v1 = *(_QWORD *)(a1 + 16);
  result = 0;
  if ( *(_DWORD *)v1 == 5 )
  {
    if ( *(_DWORD *)(v1 + 16) != 1718187891 || (v3 = 0, *(_BYTE *)(v1 + 20) != 116) )
      v3 = 1;
    return v3 == 0;
  }
  return result;
}
