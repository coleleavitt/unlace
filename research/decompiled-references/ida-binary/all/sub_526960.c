bool __fastcall sub_526960(__int64 a1, __int64 a2)
{
  const char *v2; // rdi

  v2 = &s1;
  if ( *(_QWORD *)(a2 + 40) )
    v2 = *(const char **)(a2 + 32);
  return strncmp(v2, "Chooser", 7u) == 0;
}
