size_t __fastcall sub_647640(const char *a1)
{
  unsigned __int64 v1; // rbp
  const char *v2; // rbx
  const char *v3; // rbx
  const char *v4; // rbx
  const char *v5; // rbx

  v1 = *(unsigned int *)a1;
  if ( (_DWORD)v1 == 2147483646 )
    return (size_t)&a1[*((unsigned int *)a1 + 1)];
  v2 = &a1[((v1 >> 29) & 4) + 9 + strlen(a1 + 4)];
  v3 = &v2[strlen(v2) + 1];
  v4 = &v3[strlen(v3) + 1];
  v5 = &v4[strlen(v4) + 1];
  return (size_t)&v5[strlen(v5) + 2];
}
