__int64 __fastcall sub_16D9B0(__int64 a1)
{
  int v1; // eax
  unsigned int v2; // edx

  v1 = *(_DWORD *)(a1 + 12);
  v2 = 0;
  if ( v1 > 0 )
  {
    v2 = 1;
    *(_DWORD *)(a1 + 12) = v1 - 1;
  }
  return v2;
}

