__int64 __fastcall sub_366110(__int64 a1, __int64 a2)
{
  const char *v2; // rax

  v2 = haystack;
  if ( *(_QWORD *)(a1 + 16) )
    v2 = *(const char **)(a1 + 8);
  *(_DWORD *)(a2 + 8) = plan_to_apply_idasgn(v2);
  return 0;
}

