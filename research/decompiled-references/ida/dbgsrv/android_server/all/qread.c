/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qread
// Address: 0x00000000000BD13C

//----- (00000000000BD13C) ----------------------------------------------------
__int64 __fastcall qread(int a1, void *a2, size_t a3)
{
  unsigned int v4; // w0
  unsigned int v5; // w20
  unsigned int v6; // w0

  if ( (a3 & 0x8000000000000000LL) != 0 )
  {
    if ( !under_debugger )
      a1 = (unsigned int)interr(1225);
    __break(1u);
    return qwrite(a1, a2, a3);
  }
  else
  {
    v4 = read(a1, a2, a3);
    v5 = v4;
    if ( v4 != a3 )
    {
      if ( v4 == -1 )
        v6 = 1;
      else
        v6 = 3;
      set_qerrno(v6);
    }
    return v5;
  }
}
// BD199: variable 'a2' is possibly undefined
// BD199: variable 'a3' is possibly undefined
// 168DF0: using guessed type char under_debugger;
