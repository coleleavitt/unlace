_BOOL8 __fastcall sub_5A7DE6(__int64 a1)
{
  bool v2; // [rsp+1Fh] [rbp-1h]

  v2 = 1;
  if ( *(_DWORD *)a1 != -1 )
  {
    if ( ftruncate(*(_DWORD *)a1, *(unsigned int *)(a1 + 8)) )
      return 0;
    v2 = (unsigned int)sub_5A7B64(*(_DWORD *)a1) == 0;
    *(_DWORD *)a1 = -1;
  }
  return v2;
}
