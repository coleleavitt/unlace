__int64 __fastcall sub_66C6E0(__int64 a1, __int64 a2)
{
  char *v2; // rax

  v2 = (char *)haystack;
  if ( *(_QWORD *)(a1 + 48) )
    v2 = *(char **)(a1 + 40);
  *(_DWORD *)(a2 + 8) = apply_idasgn_to(v2);
  return 0;
}

