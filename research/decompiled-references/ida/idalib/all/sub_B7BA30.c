bool __fastcall sub_B7BA30(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  bool result; // al
  int v4; // eax

  v2 = *(_QWORD *)(a1 + 16);
  result = 0;
  if ( *(_DWORD *)v2 == 7 )
  {
    if ( *(_DWORD *)(v2 + 16) != *(_DWORD *)a2
      || *(_WORD *)(v2 + 20) != *(_WORD *)(a2 + 4)
      || (v4 = 0, *(_BYTE *)(v2 + 22) != *(_BYTE *)(a2 + 6)) )
    {
      v4 = 1;
    }
    return v4 == 0;
  }
  return result;
}
