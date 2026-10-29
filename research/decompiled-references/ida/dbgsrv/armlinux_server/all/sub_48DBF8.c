/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_48DBF8
// Address: 0x000000000048DBF8

//----- (000000000048DBF8) ----------------------------------------------------
FILE *__fastcall sub_48DBF8(const char *a1, const char *a2, int a3)
{
  FILE *v5; // x19
  bool v6; // w20
  int v7; // w0
  int v9; // w0
  FILE *v10; // x0
  FILE *v11; // x0

  if ( *a2 == 119 )
  {
    v9 = sub_490098(a1, 0x1B6u, a3);
    if ( v9 != -1 )
    {
      v10 = fdopen(v9, a2);
      v5 = v10;
      if ( v10 )
      {
        if ( !(unsigned int)sub_490650(v10, 0, 0) )
          return v5;
LABEL_8:
        v11 = v5;
        v5 = nullptr;
        sub_4906A0(v11);
        return v5;
      }
    }
    return nullptr;
  }
  v5 = fopen64(a1, a2);
  if ( !v5 )
    return nullptr;
  v6 = strpbrk(a2, "wa+") != nullptr;
  v7 = fileno(v5);
  if ( (unsigned int)sub_48FDA8(v7, 2 * v6, a3) )
    goto LABEL_8;
  return v5;
}
