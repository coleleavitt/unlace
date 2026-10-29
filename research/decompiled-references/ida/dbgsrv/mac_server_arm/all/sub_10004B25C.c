/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10004B25C
// Address: 0x000000010004B25C

//----- (000000010004B25C) ----------------------------------------------------
__int64 __fastcall sub_10004B25C(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // w19
  unsigned int v5; // w8

  v4 = *(unsigned __int8 *)(a4 + 289);
  if ( v4 == 1 && (unsigned int)sub_10004D408(a4, 40) )
    v5 = 2;
  else
    v5 = 1;
  if ( v4 )
    return v5;
  else
    return 0;
}
