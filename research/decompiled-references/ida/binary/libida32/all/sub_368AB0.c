__int64 __fastcall sub_368AB0(__int64 a1, __int64 a2)
{
  const char *v2; // rcx

  v2 = haystack;
  if ( *(_QWORD *)(a1 + 144) )
    v2 = *(const char **)(a1 + 136);
  *(_DWORD *)(a2 + 8) = find_text(
                          *(unsigned int *)(a1 + 8),
                          *(unsigned int *)(a1 + 72),
                          *(unsigned int *)(a1 + 104),
                          v2,
                          *(unsigned int *)(a1 + 40));
  return 0;
}

