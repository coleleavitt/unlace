FILE *__fastcall sub_83B280(const char *a1, const char *a2)
{
  FILE *v2; // rbx
  int v3; // eax
  int v5; // edi
  FILE *v6; // rax

  if ( *a2 == 119 )
  {
    v5 = sub_83E9D0(a1, 438);
    if ( v5 == -1 )
      return nullptr;
    v6 = fdopen(v5, a2);
    v2 = v6;
    if ( !v6 )
      return nullptr;
    if ( !(unsigned int)qfseek(v6, 0, 0) )
      return v2;
    goto LABEL_8;
  }
  v2 = fopen64(a1, a2);
  if ( v2 )
  {
    strpbrk(a2, "wa+");
    v3 = fileno(v2);
    if ( !(unsigned int)sub_83E730(v3) )
      return v2;
LABEL_8:
    qfclose(v2);
  }
  return nullptr;
}
