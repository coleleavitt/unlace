bool __fastcall sub_185AE0(__int64 a1, __int64 a2)
{
  const char *v2; // rdi

  v2 = &s1;
  if ( *(_QWORD *)(a2 + 40) )
    v2 = *(const char **)(a2 + 32);
  return strncmp(v2, "Actins", 6u) == 0;
}
