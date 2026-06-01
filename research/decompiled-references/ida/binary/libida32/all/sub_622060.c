int __fastcall sub_622060(__int64 a1, __int64 a2)
{
  if ( *(_DWORD *)a1 < *(_DWORD *)a2 )
    return -1;
  if ( *(_DWORD *)a2 < *(_DWORD *)a1 )
    return 1;
  return strcmp(*(const char **)(a1 + 8), *(const char **)(a2 + 8));
}

