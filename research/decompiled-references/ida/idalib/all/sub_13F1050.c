bool __fastcall sub_13F1050(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // al
  _BOOL4 v4; // eax

  v3 = *(_BYTE *)(a2 + 36);
  if ( (v3 & 4) != 0 || (v4 = (v3 & 8) != 0) )
    LOBYTE(v4) = *(_WORD *)(*sub_13F0E90(a1, *(_DWORD *)(a1 + 40) - 1, a3) + 16LL) != 1;
  return v4;
}
