bool __fastcall sub_186640(__int64 a1)
{
  const char *v1; // rax

  v1 = &s1;
  if ( *(_QWORD *)(a1 + 40) )
    v1 = *(const char **)(a1 + 32);
  return strncmp(v1, "Actins", 6u) == 0;
}
