/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_BAD80
// Address: 0x00000000000BAD80

//----- (00000000000BAD80) ----------------------------------------------------
FILE *__fastcall sub_BAD80(const char *a1, char *modes, int a3)
{
  int v5; // w0
  FILE *v6; // x0
  FILE *v7; // x19
  char v8; // w21
  int v9; // w0

  if ( *modes == 119 )
  {
    v5 = sub_BD084(a1, 0x1B6u, a3);
    if ( v5 == -1 )
      return nullptr;
    v6 = fdopen(v5, modes);
    v7 = v6;
    if ( !v6 || !(unsigned int)qfseek(v6, 0, 0) )
      return v7;
LABEL_11:
    qfclose(v7);
    return nullptr;
  }
  v7 = fopen(a1, modes);
  if ( v7 )
  {
    v8 = strpbrk(modes, "wa+") ? 2 : 0;
    v9 = fileno(v7);
    if ( (unsigned int)sub_BCF40(v9, v8, a3) )
      goto LABEL_11;
  }
  return v7;
}
