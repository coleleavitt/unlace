/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_ACE00
// Address: 0x000ACE00

//----- (000ACE00) --------------------------------------------------------
FILE *__fastcall sub_ACE00(char *a1, const char *a2, int a3)
{
  int v4; // eax
  FILE *v5; // edi
  FILE *v6; // eax
  FILE *v7; // esi
  FILE *v8; // eax
  char v9; // si
  int v10; // eax

  if ( *a2 != 119 )
  {
    v8 = fopen(a1, a2);
    if ( v8 )
    {
      v5 = v8;
      v9 = 2 * (strpbrk(a2, "wa+") != nullptr);
      v10 = fileno(v5);
      if ( !sub_AF2B0(v10, v9, a3) )
        return v5;
      qfclose(v5);
    }
    return nullptr;
  }
  v4 = sub_AF430(a1, 0x1B6u, a3);
  v5 = nullptr;
  if ( v4 != -1 )
  {
    v6 = fdopen(v4, a2);
    if ( v6 )
    {
      v7 = v6;
      if ( qfseek(v6, 0, 0, 0) )
        qfclose(v7);
      else
        return v7;
    }
  }
  return v5;
}
