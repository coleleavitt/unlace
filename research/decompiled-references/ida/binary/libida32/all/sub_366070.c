__int64 __fastcall sub_366070(__int64 a1, __int64 a2)
{
  const char *v2; // r8
  const char *v3; // rcx
  const char *v4; // rdx

  v2 = haystack;
  if ( *(_QWORD *)(a1 + 144) )
    v2 = *(const char **)(a1 + 136);
  v3 = haystack;
  if ( *(_QWORD *)(a1 + 112) )
    v3 = *(const char **)(a1 + 104);
  v4 = haystack;
  if ( *(_QWORD *)(a1 + 80) )
    v4 = *(const char **)(a1 + 72);
  *(_DWORD *)(a2 + 8) = (unsigned __int8)add_hidden_range(
                                           *(unsigned int *)(a1 + 8),
                                           *(unsigned int *)(a1 + 40),
                                           v4,
                                           v3,
                                           v2,
                                           *(unsigned int *)(a1 + 168));
  return 0;
}

