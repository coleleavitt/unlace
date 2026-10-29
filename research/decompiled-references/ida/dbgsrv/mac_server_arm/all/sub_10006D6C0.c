/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10006D6C0
// Address: 0x000000010006D6C0

//----- (000000010006D6C0) ----------------------------------------------------
FILE *__fastcall sub_10006D6C0(const char *a1, char *__mode, int a3)
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
    if ( !(unsigned int)sub_10006E8EC(v10, v9, a3) )
      goto LABEL_5;
    goto LABEL_9;
  }
  v4 = sub_10006EA38(a1, 438, a3);
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
