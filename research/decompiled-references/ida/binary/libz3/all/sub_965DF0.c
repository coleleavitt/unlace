bool __fastcall sub_965DF0(__int64 a1, unsigned int *a2)
{
  unsigned int v2; // edx
  unsigned int v3; // eax
  unsigned int v4; // ecx

  v2 = *(_DWORD *)(a1 + 48);
  v3 = *a2;
  v4 = 0;
  if ( v2 < *a2 )
  {
    v4 = v3 - v2;
    v3 = *(_DWORD *)(a1 + 48);
  }
  *a2 = v4;
  *(_DWORD *)(a1 + 48) -= v3;
  return *a2 == 0;
}

