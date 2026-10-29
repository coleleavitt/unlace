__int64 __fastcall sub_CDB9A0(__int64 a1, int *a2)
{
  int v2; // eax

  v2 = *a2;
  if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
  {
    *(_DWORD *)(a1 + 1256) = v2;
    v2 = *a2;
  }
  *(_DWORD *)(a1 + 1252) = v2;
  return 1;
}

