__int64 __fastcall sub_3661B0(__int64 a1, __int64 a2)
{
  const char *v2; // rax

  v2 = haystack;
  if ( *(_QWORD *)(a1 + 16) )
    v2 = *(const char **)(a1 + 8);
  *(_DWORD *)(a2 + 8) = strtol(v2, nullptr, 10);
  return 0;
}

