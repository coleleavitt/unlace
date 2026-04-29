__int64 __fastcall sub_5E9B0(__int64 a1)
{
  char v1; // r12
  int v2; // eax
  unsigned int v4; // r14d

  if ( (unsigned __int8)get_tinfo_details() )
  {
    v1 = *(_BYTE *)(a1 + 60);
    *(_BYTE *)(a1 + 60) = 0;
    v2 = *(_DWORD *)(a1 + 36);
    *(_DWORD *)(a1 + 36) = v2 + 1;
    v4 = 0;
    *(_DWORD *)(a1 + 36) = v2;
    *(_BYTE *)(a1 + 60) = v1;
  }
  else
  {
    return 2;
  }
  return v4;
}
