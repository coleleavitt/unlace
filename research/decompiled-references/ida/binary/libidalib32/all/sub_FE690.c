__int64 __fastcall sub_FE690(__int64 a1)
{
  int v1; // eax
  unsigned int v2; // edx

  v1 = nbits();
  v2 = *(_DWORD *)(a1 + 28);
  if ( (unsigned int)(v1 - 1) <= 7 )
    v2 *= *(_DWORD *)(a1 + 24);
  return v2;
}

