bool __fastcall sub_468ED0(__int64 a1, __int64 a2, __int64 a3)
{
  const char *v3; // rax
  const char *v4; // rdi

  v3 = &s1;
  if ( *(_QWORD *)(a3 + 8) )
    v3 = *(const char **)a3;
  v4 = &s1;
  if ( *(_QWORD *)(a2 + 8) )
    v4 = *(const char **)a2;
  return strcmp(v4, v3) == 0;
}
