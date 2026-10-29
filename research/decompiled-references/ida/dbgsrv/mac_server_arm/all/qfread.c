/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qfread
// Address: 0x000000010006ECD4

//----- (000000010006ECD4) ----------------------------------------------------
size_t __fastcall qfread(FILE *__stream, void *__ptr, size_t __nitems)
{
  size_t v4; // x19
  size_t v5; // x0
  size_t v6; // x21
  FILE *v8; // x0
  void *v9; // x1
  size_t v10; // x2

  if ( (__nitems & 0x8000000000000000LL) == 0 )
  {
    if ( __stream )
    {
      v4 = __nitems;
      if ( !__nitems )
        return v4;
      v5 = fread(__ptr, 1u, __nitems, __stream);
      if ( v5 == v4 )
        return v4;
      v6 = v5;
      feof(__stream);
      v4 = v6;
    }
    else
    {
      set_qerrno();
      *__error() = 9;
      v4 = -1;
    }
    set_qerrno();
    return v4;
  }
  if ( under_debugger == 1 )
    __break(1u);
  interr(1225);
  return qfwrite(v8, v9, v10);
}
// 10006ED89: variable 'v8' is possibly undefined
// 10006ED89: variable 'v9' is possibly undefined
// 10006ED89: variable 'v10' is possibly undefined
// 10009D90D: using guessed type char under_debugger;
