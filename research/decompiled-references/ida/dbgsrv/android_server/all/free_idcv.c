/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: free_idcv
// Address: 0x000000000006F38C

//----- (000000000006F38C) ----------------------------------------------------
void __fastcall free_idcv(__int64 *a1)
{
  int v1; // w8
  __int64 *v2; // x19
  void *v3; // x0

  if ( !a1 )
  {
    if ( !under_debugger )
      a1 = (__int64 *)interr(2656);
    __break(1u);
    sub_39134(a1);
  }
  v1 = *(unsigned __int8 *)a1;
  v2 = a1;
  if ( v1 == 5 )
  {
    sub_6F17C(a1[1], (unsigned __int8 *)a1);
  }
  else if ( v1 == 7 )
  {
    v3 = (void *)a1[1];
    if ( v3 )
    {
      v2[2] = 0;
      qfree(v3);
      v2[1] = 0;
      v2[3] = 0;
    }
  }
  *(_BYTE *)v2 = 2;
  v2[1] = 0;
}
// 168DF0: using guessed type char under_debugger;
