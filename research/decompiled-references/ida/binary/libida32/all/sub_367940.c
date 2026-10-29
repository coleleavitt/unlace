__int64 __fastcall sub_367940(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  const char *v3; // rdx

  v2 = *(_QWORD *)(a1 + 80);
  if ( v2 )
  {
    v3 = *(const char **)(a1 + 72);
  }
  else
  {
    v2 = 1;
    v3 = haystack;
  }
  *(_DWORD *)(a2 + 8) = (unsigned __int8)netnode_supset(
                                           *(unsigned int *)(a1 + 8),
                                           *(unsigned int *)(a1 + 40),
                                           v3,
                                           v2,
                                           83);
  return 0;
}

