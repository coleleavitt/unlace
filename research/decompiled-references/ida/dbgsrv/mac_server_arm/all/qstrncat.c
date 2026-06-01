/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qstrncat
// Address: 0x0000000100070478

//----- (0000000100070478) ----------------------------------------------------
const char *__fastcall qstrncat(const char *a1, unsigned __int8 *a2, __int64 a3)
{
  size_t v6; // x0
  char *v7; // x8
  size_t v8; // x10
  int v9; // w11
  int v11; // w0

  if ( a3 < 0 )
  {
    if ( under_debugger == 1 )
      goto LABEL_13;
    interr(1225);
LABEL_12:
    if ( under_debugger != 1 )
    {
LABEL_14:
      interr(520);
      return qstrerror(v11);
    }
LABEL_13:
    __break(1u);
    goto LABEL_14;
  }
  v6 = strlen(a1);
  v7 = (char *)&a1[v6];
  if ( &a1[v6] >= &a1[a3] )
    goto LABEL_12;
  if ( v7 == &a1[a3 - 1] )
  {
LABEL_8:
    *v7 = 0;
  }
  else
  {
    v8 = ~v6 + a3;
    while ( 1 )
    {
      v9 = *a2;
      *v7 = v9;
      if ( !v9 )
        break;
      ++a2;
      ++v7;
      if ( !--v8 )
      {
        v7 = (char *)&a1[a3 - 1];
        goto LABEL_8;
      }
    }
  }
  return a1;
}
// 100070531: variable 'v11' is possibly undefined
// 10009D90D: using guessed type char under_debugger;
