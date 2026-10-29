/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_448310
// Address: 0x0000000000448310

//----- (0000000000448310) ----------------------------------------------------
__int64 __fastcall sub_448310(__int64 *a1)
{
  int v2; // w0
  void *v3; // x0

  if ( !a1 )
  {
    if ( under_debugger )
      __break(0x3E8u);
    sub_492270(2656);
  }
  v2 = *(unsigned __int8 *)a1;
  if ( v2 == 5 )
  {
    sub_4481E0(a1[1], a1);
  }
  else if ( v2 == 7 )
  {
    v3 = (void *)a1[1];
    if ( v3 )
    {
      a1[2] = 0;
      j__free(v3);
      a1[1] = 0;
      *(_BYTE *)a1 = 2;
      return 2;
    }
  }
  *(_BYTE *)a1 = 2;
  a1[1] = 0;
  return 2;
}
// 52451C: using guessed type char under_debugger;
