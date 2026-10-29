/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_75CD8
// Address: 0x00075CD8

//----- (00075CD8) --------------------------------------------------------
FILE *__fastcall sub_75CD8(int a1, const char *a2, int a3)
{
  FILE *v5; // r4
  int v6; // r5
  int v7; // r0
  int v9; // r0
  FILE *v10; // r0
  FILE *v11; // r0

  if ( *a2 == 119 )
  {
    v9 = sub_773DC(a1, 438, a3);
    if ( v9 != -1 )
    {
      v10 = fdopen(v9, a2);
      v5 = v10;
      if ( v10 )
      {
        if ( !sub_77884((int)v10) )
          return v5;
LABEL_11:
        v11 = v5;
        v5 = nullptr;
        sub_778BC(v11);
        return v5;
      }
    }
    return nullptr;
  }
  v5 = (FILE *)fopen64();
  if ( !v5 )
    return nullptr;
  if ( strpbrk(a2, "wa+") )
    v6 = 2;
  else
    v6 = 0;
  v7 = fileno(v5);
  if ( sub_77214(v7, v6, a3) )
    goto LABEL_11;
  return v5;
}
// 14350: using guessed type int fopen64(void);
