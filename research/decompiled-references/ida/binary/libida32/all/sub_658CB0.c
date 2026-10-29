__int64 __fastcall sub_658CB0(__int64 a1, int a2, __int64 a3, int a4, int a5, int a6)
{
  int v6; // eax

  if ( (*(_BYTE *)(a1 + 28) & 2) == 0 )
  {
    v6 = *(_DWORD *)(a1 + 24) - a2;
    if ( v6 < 0 )
      v6 = a2 - *(_DWORD *)(a1 + 24);
    if ( v6 > 0x800000 )
    {
      *(_DWORD *)(a1 + 24) = a2;
      callui(27, a2, (int)&callui, a4, a5, a6);
    }
  }
  return *(unsigned __int8 *)(a1 + 32);
}

