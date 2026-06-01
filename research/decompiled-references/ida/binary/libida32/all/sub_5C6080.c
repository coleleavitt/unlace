__int64 __fastcall sub_5C6080(__int64 a1, _BYTE *a2)
{
  const char *v2; // rax
  const char *v3; // rbx
  size_t v4; // rax
  unsigned int v5; // edx

  v2 = sub_5C5F70(a1, a2, 0);
  if ( !v2 )
    return 0;
  v3 = v2;
  v4 = strlen(v2);
  v5 = 0;
  if ( v4 > 5 )
    LOBYTE(v5) = strcmp(&v3[v4 - 5], "_vtbl") == 0;
  return v5;
}

