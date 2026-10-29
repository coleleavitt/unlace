/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100072558
// Address: 0x0000000100072558

//----- (0000000100072558) ----------------------------------------------------
FILE *__fastcall sub_100072558(const char *a1, char *__mode, int a3)
{
  int v4; // w0
  FILE *v5; // x0
  FILE *v6; // x19
  int v7; // w0
  char v9; // w22
  int v10; // w0

  if ( *__mode != 119 )
  {
    v6 = fopen(a1, __mode);
    if ( !v6 )
      return v6;
    v9 = 2 * (strpbrk(__mode, "wa+") != nullptr);
    v10 = fileno(v6);
    if ( !(unsigned int)sub_1000737E8(v10, v9, a3) )
      goto LABEL_5;
    goto LABEL_9;
  }
  v4 = sub_100073938(a1, 438, a3);
  if ( v4 == -1 )
    return nullptr;
  v5 = fdopen(v4, __mode);
  v6 = v5;
  if ( !v5 )
    return v6;
  if ( (unsigned int)qfseek(v5, 0, 0) )
  {
LABEL_9:
    qfclose(v6);
    return nullptr;
  }
LABEL_5:
  if ( strchr(__mode, 101) )
  {
    v7 = fileno(v6);
    fcntl(v7, 2, 1);
  }
  return v6;
}
