__int64 __fastcall sub_36A6B0(__int64 a1, __int64 a2)
{
  char *v3; // rsi

  v3 = (char *)haystack;
  if ( *(_QWORD *)(a1 + 48) )
    v3 = *(char **)(a1 + 40);
  *(_DWORD *)(a2 + 8) = (unsigned __int8)set_name(*(_DWORD *)(a1 + 8), v3);
  return 0;
}

