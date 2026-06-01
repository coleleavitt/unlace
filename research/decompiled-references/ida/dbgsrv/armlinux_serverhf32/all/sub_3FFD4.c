/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3FFD4
// Address: 0x0003FFD4

//----- (0003FFD4) --------------------------------------------------------
const char **__fastcall sub_3FFD4(const char **a1, int a2, const char **a3)
{
  int v3; // r6
  const char **v4; // r4
  const char *v7; // r5
  const char **v8; // r6
  int v10; // r3
  const char *v11; // r4

  v3 = (a2 - (int)a1) >> 4;
  v4 = a1;
  if ( v3 <= 0 )
  {
    v10 = (a2 - (int)a1) >> 2;
    v8 = a1;
  }
  else
  {
    v7 = *a3;
    v8 = &a1[4 * v3];
    do
    {
      if ( !strcmp(*v4, v7) )
        return v4;
      if ( !strcmp(v4[1], v7) )
        return v4 + 1;
      if ( !strcmp(v4[2], v7) )
        return v4 + 2;
      if ( !strcmp(v4[3], v7) )
        return v4 + 3;
      v4 += 4;
    }
    while ( v8 != v4 );
    v10 = (a2 - (int)v8) >> 2;
  }
  switch ( v10 )
  {
    case 2:
      v11 = *a3;
LABEL_25:
      if ( !strcmp(*v8, v11) )
        return v8;
      ++v8;
LABEL_19:
      if ( strcmp(*v8, v11) )
        return (const char **)a2;
      return v8;
    case 3:
      v11 = *a3;
      if ( !strcmp(*v8, *a3) )
        return v8;
      ++v8;
      goto LABEL_25;
    case 1:
      v11 = *a3;
      goto LABEL_19;
  }
  return (const char **)a2;
}
