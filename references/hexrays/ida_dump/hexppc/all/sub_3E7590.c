char __fastcall sub_3E7590(__int64 a1, int a2)
{
  __int64 v2; // rdx
  int v3; // r8d
  int v4; // ecx
  char result; // al

  v2 = *(_QWORD *)(a1 + 96);
  v3 = *(_DWORD *)(a1 + 416);
  v4 = *(_DWORD *)(a1 + 448);
  if ( *(_BYTE *)(v2 + 145) )
  {
    result = a2 <= v3 && a2 >= v4;
    if ( !result )
      return result;
    return *(_BYTE *)(v2 + 144);
  }
  result = a2 <= v4 && a2 >= v3;
  if ( result )
    return *(_BYTE *)(v2 + 144);
  return result;
}
