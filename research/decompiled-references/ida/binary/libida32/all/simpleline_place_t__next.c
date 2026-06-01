__int64 __fastcall simpleline_place_t__next(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rcx
  unsigned int v3; // edx

  v2 = *(unsigned int *)(a1 + 12);
  v3 = 0;
  if ( v2 < *(_QWORD *)(a2 + 8) )
  {
    v3 = 1;
    *(_DWORD *)(a1 + 12) = v2 + 1;
  }
  return v3;
}

