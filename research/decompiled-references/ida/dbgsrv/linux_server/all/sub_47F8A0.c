/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47F8A0
// Address: 0x000000000047F8A0

//----- (000000000047F8A0) ----------------------------------------------------
FILE *__fastcall sub_47F8A0(const char *a1, const char *a2, int a3)
{
  FILE *v4; // rbx
  char *v5; // rbp
  unsigned int v6; // eax
  int v8; // edi
  FILE *v9; // rax

  if ( *a2 == 119 )
  {
    v8 = sub_480910(a1, 0x1B6u, a3);
    if ( v8 == -1 )
      return nullptr;
    v9 = fdopen(v8, a2);
    v4 = v9;
    if ( !v9 )
      return nullptr;
    if ( !(unsigned int)sub_480D20(v9, 0, 0) )
      return v4;
    goto LABEL_8;
  }
  v4 = fopen64(a1, a2);
  if ( v4 )
  {
    v5 = strpbrk(a2, "wa+");
    v6 = fileno(v4);
    if ( !(unsigned int)sub_480810(v6, 2 * (v5 != nullptr), a3) )
      return v4;
LABEL_8:
    sub_480D70(v4);
  }
  return nullptr;
}
