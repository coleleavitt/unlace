/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000312E4
// Address: 0x00000001000312E4

//----- (00000001000312E4) ----------------------------------------------------
void __fastcall sub_1000312E4(unsigned __int8 *a1)
{
  int v2; // w8
  void *v3; // x0
  void *v4; // x0

  if ( !a1 )
  {
    if ( under_debugger == 1 )
      __break(1u);
    interr(2656);
    sub_1000013F4(v4);
  }
  v2 = *a1;
  if ( v2 == 5 )
  {
    sub_100031978(*((_QWORD *)a1 + 1), a1);
  }
  else if ( v2 == 7 )
  {
    v3 = *((void **)a1 + 1);
    if ( v3 )
    {
      *((_QWORD *)a1 + 2) = 0;
      qfree(v3);
      *((_QWORD *)a1 + 3) = 0;
    }
  }
  *a1 = 2;
  *((_QWORD *)a1 + 1) = 0;
}
// 100031368: variable 'v4' is possibly undefined
// 10009D90D: using guessed type char under_debugger;
