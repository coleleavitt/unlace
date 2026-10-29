/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7C4F4
// Address: 0x0007C4F4

//----- (0007C4F4) --------------------------------------------------------
FILE *__fastcall sub_7C4F4(const char *a1, char *modes, int a3)
{
  int v5; // r0
  int v6; // r7
  FILE *v7; // r0
  int v8; // r1
  FILE *v9; // r4
  FILE *v10; // r0
  FILE *v11; // r0
  FILE *v12; // r5
  char *v13; // r0
  char v14; // r6
  int v15; // r0

  if ( *modes == 119 )
  {
    v5 = sub_7DCC4(a1, 0x1B6u, a3);
    v6 = 0;
    if ( v5 != -1 )
    {
      v7 = fdopen(v5, modes);
      if ( v7 )
      {
        v9 = v7;
        if ( !qfseek(v7, v8, 0, 0, 0) )
          return v9;
        v10 = v9;
LABEL_11:
        qfclose(v10);
        return nullptr;
      }
    }
  }
  else
  {
    v11 = fopen(a1, modes);
    v6 = 0;
    if ( v11 )
    {
      v12 = v11;
      v13 = strpbrk(modes, "wa+");
      v14 = 2;
      if ( !v13 )
        v14 = 0;
      v15 = fileno(v12);
      if ( !sub_7DBE8(v15, v14, a3) )
        return v12;
      v10 = v12;
      goto LABEL_11;
    }
  }
  return (FILE *)v6;
}
// 7C528: variable 'v8' is possibly undefined
