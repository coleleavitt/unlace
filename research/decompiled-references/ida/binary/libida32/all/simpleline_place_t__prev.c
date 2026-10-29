__int64 __fastcall simpleline_place_t__prev(__int64 a1)
{
  int v1; // eax
  unsigned int v2; // edx

  v1 = *(_DWORD *)(a1 + 12);
  v2 = 0;
  if ( v1 )
  {
    v2 = 1;
    *(_DWORD *)(a1 + 12) = v1 - 1;
  }
  return v2;
}

