__int64 __fastcall sub_1850C0(__int64 a1, __int64 a2)
{
  const char *v2; // rdx
  const char *v3; // rax

  v2 = &s1;
  if ( *(_QWORD *)(a2 + 40) )
    v2 = *(const char **)(a2 + 32);
  v3 = &s1;
  if ( *(_QWORD *)(a1 + 40) )
    v3 = *(const char **)(a1 + 32);
  return (unsigned int)strcmp(v3, v2) >> 31;
}
