/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10007AF30
// Address: 0x000000010007AF30

//----- (000000010007AF30) ----------------------------------------------------
FILE *__fastcall sub_10007AF30(const char *a1, char *a2, int a3)
{
  int v3; // eax
  FILE *v4; // rax
  FILE *v5; // rbx
  int v6; // eax
  FILE *v8; // rax
  char v9; // r12
  int v10; // eax

  if ( *a2 == 119 )
  {
    v3 = sub_10007C2B0(a1, 0x1B6u, a3);
    if ( v3 == -1 )
      return nullptr;
    v4 = fdopen(v3, a2);
    if ( !v4 )
      return nullptr;
    v5 = v4;
    if ( !(unsigned int)qfseek(v4, 0, 0) )
      goto LABEL_5;
    goto LABEL_9;
  }
  v8 = fopen(a1, a2);
  if ( !v8 )
    return nullptr;
  v5 = v8;
  v9 = 2 * (strpbrk(a2, "wa+") != nullptr);
  v10 = fileno(v5);
  if ( (unsigned int)sub_10007C170(v10, v9, a3) )
  {
LABEL_9:
    qfclose(v5);
    return nullptr;
  }
LABEL_5:
  if ( strchr(a2, 101) )
  {
    v6 = fileno(v5);
    fcntl(v6, 2, 1);
  }
  return v5;
}
