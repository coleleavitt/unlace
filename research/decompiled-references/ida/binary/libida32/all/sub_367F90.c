__int64 __fastcall sub_367F90(__int64 a1, __int64 a2)
{
  const char *v2; // rdx

  v2 = haystack;
  if ( *(_QWORD *)(a1 + 80) )
    v2 = *(const char **)(a1 + 72);
  *(_DWORD *)(a2 + 8) = (unsigned __int8)add_entry(
                                           *(unsigned int *)(a1 + 8),
                                           *(unsigned int *)(a1 + 40),
                                           v2,
                                           *(_DWORD *)(a1 + 104) != 0,
                                           0);
  return 0;
}

