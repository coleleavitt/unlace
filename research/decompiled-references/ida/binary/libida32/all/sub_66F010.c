__int64 __fastcall sub_66F010(__int64 a1, __int64 a2)
{
  const char *v3; // rsi

  v3 = haystack;
  if ( *(_QWORD *)(a1 + 48) )
    v3 = *(const char **)(a1 + 40);
  *(_DWORD *)(a2 + 8) = (unsigned __int8)apply_startup_sig(*(unsigned int *)(a1 + 8), v3);
  return 0;
}

