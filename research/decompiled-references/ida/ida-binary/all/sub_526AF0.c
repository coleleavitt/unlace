__int64 __fastcall sub_526AF0(__int64 *a1, const char *a2)
{
  const char *v2; // rbp
  char *v3; // rax
  char *v4; // r13
  __int64 v5; // rbx
  size_t v6; // r12
  __int64 v8; // rax

  v2 = a2;
  if ( !strncmp(a2, "qproperty-", 0xAu) )
    v2 = a2 + 10;
  v3 = strchr(v2, 45);
  if ( !v3 )
    return -1;
  v4 = v3;
  v5 = 0;
  v6 = v3 - v2;
  while ( strncmp(off_86DBE0[v5], v2, v6) )
  {
    if ( ++v5 == 11 )
      return -1;
  }
  if ( v4[1] != 102 || v4[2] != 103 || (v8 = 0, v4[3]) )
  {
    if ( !strcmp("weight", v4 + 1) )
      v8 = 1;
    else
      v8 = -(__int64)(strcmp("italic", v4 + 1) != 0) | 2;
  }
  *a1 = v8;
  return v5;
}
