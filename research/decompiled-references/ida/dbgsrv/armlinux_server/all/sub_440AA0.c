/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_440AA0
// Address: 0x0000000000440AA0

//----- (0000000000440AA0) ----------------------------------------------------
const char **__fastcall sub_440AA0(const char **a1, __int64 a2, const char **a3)
{
  const char **v3; // x19
  __int64 v4; // x0
  const char **v7; // x21
  const char *v8; // x20
  __int64 v10; // x0
  const char *v11; // x19

  v3 = a1;
  v4 = a2 - (_QWORD)a1;
  if ( v4 >> 5 <= 0 )
  {
    v10 = v4 >> 3;
    v7 = v3;
  }
  else
  {
    v7 = &v3[4 * (v4 >> 5)];
    v8 = *a3;
    do
    {
      if ( !strcmp(*v3, v8) )
        return v3;
      if ( !strcmp(v3[1], v8) )
        return v3 + 1;
      if ( !strcmp(v3[2], v8) )
        return v3 + 2;
      if ( !strcmp(v3[3], v8) )
        return v3 + 3;
      v3 += 4;
    }
    while ( v7 != v3 );
    v10 = (a2 - (__int64)v7) >> 3;
  }
  switch ( v10 )
  {
    case 2LL:
      v11 = *a3;
LABEL_19:
      if ( !strcmp(*v7, v11) )
        return v7;
      ++v7;
LABEL_22:
      if ( strcmp(*v7, v11) )
        return (const char **)a2;
      return v7;
    case 3LL:
      v11 = *a3;
      if ( !strcmp(*v7, *a3) )
        return v7;
      ++v7;
      goto LABEL_19;
    case 1LL:
      v11 = *a3;
      goto LABEL_22;
  }
  return (const char **)a2;
}
