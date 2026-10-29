char *__fastcall sub_11250(char *a1, __int64 a2, FILE *a3)
{
  char *v3; // rax
  char *v4; // rbx
  char v5; // bp
  size_t v6; // rax
  char *v7; // rdx

  if ( a2 < 0 )
  {
    if ( !byte_1D3C0 )
      sub_11780(1225);
    BUG();
  }
  if ( !a3 )
  {
    sub_F2F0(1u);
    *__errno_location() = 9;
    sub_F2F0(1u);
    return nullptr;
  }
  v3 = fgets(a1, a2, a3);
  v4 = v3;
  if ( !v3 )
    return nullptr;
  v5 = *v3;
  if ( *v3 )
  {
    v6 = strlen(v3);
    if ( v6 > 1 )
    {
      v7 = &v4[v6 - 2];
      if ( *v7 == 13 && v4[v6 - 1] == 10 )
      {
        *(_WORD *)v7 = 10;
        v5 = *v4;
      }
    }
    if ( v5 == 26 )
      return nullptr;
  }
  return v4;
}

