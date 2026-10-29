/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_481070
// Address: 0x0000000000481070

//----- (0000000000481070) ----------------------------------------------------
char *__fastcall sub_481070(char *a1, __int64 a2, FILE *a3)
{
  char *v3; // rax
  char *v4; // rbx
  char v5; // bp
  size_t v6; // rax
  char *v7; // rdx

  if ( a2 < 0 )
  {
    if ( !byte_4C94E1 )
      sub_481AC0(1225);
    BUG();
  }
  if ( !a3 )
  {
    sub_479EB0(1u);
    *__errno_location() = 9;
    sub_479EB0(1u);
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
// 4C94E1: using guessed type char byte_4C94E1;
