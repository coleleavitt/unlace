__int64 __fastcall sub_3676C0(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  const char *v4; // rdx
  const char *v5; // rsi

  v2 = *(_QWORD *)(a1 + 80);
  if ( v2 )
  {
    v4 = *(const char **)(a1 + 72);
  }
  else
  {
    v2 = 1;
    v4 = haystack;
  }
  v5 = haystack;
  if ( *(_QWORD *)(a1 + 48) )
    v5 = *(const char **)(a1 + 40);
  *(_DWORD *)(a2 + 8) = (unsigned __int8)netnode_hashset(*(unsigned int *)(a1 + 8), v5, v4, v2, 72);
  return 0;
}

