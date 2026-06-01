/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_BFA30
// Address: 0x00000000000BFA30

//----- (00000000000BFA30) ----------------------------------------------------
FILE *__fastcall sub_BFA30(const char *a1, const char *a2, int a3)
{
  int v4; // eax
  FILE *v5; // rax
  FILE *v6; // rbx
  FILE *v7; // rax
  char v8; // bp
  int v9; // eax

  if ( *a2 == 119 )
  {
    v4 = sub_C1CE0(a1, 0x1B6u, a3);
    if ( v4 == -1 )
      return nullptr;
    v5 = fdopen(v4, a2);
    if ( !v5 )
      return nullptr;
    v6 = v5;
    if ( !(unsigned int)qfseek(v5, 0, 0) )
      return v6;
    goto LABEL_8;
  }
  v7 = fopen(a1, a2);
  if ( !v7 )
    return nullptr;
  v6 = v7;
  v8 = 2 * (strpbrk(a2, "wa+") != nullptr);
  v9 = fileno(v6);
  if ( (unsigned int)sub_C1BB0(v9, v8, a3) )
  {
LABEL_8:
    qfclose(v6);
    return nullptr;
  }
  return v6;
}
