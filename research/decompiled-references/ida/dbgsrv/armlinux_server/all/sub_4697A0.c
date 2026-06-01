/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4697A0
// Address: 0x00000000004697A0

//----- (00000000004697A0) ----------------------------------------------------
__int64 __fastcall sub_4697A0(__int64 a1, const char *a2, int a3)
{
  void **v5; // x0
  void **v6; // x19
  unsigned int v7; // w20

  v5 = (void **)sub_48BF60(a2, 0);
  if ( !v5 )
    return 0;
  v6 = v5;
  if ( a3 == 11 )
    v7 = (unsigned __int8)sub_468D70(a1, (__int64)v5);
  else
    v7 = 0;
  sub_48C0F8(v6);
  return v7;
}
