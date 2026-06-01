/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_428F20
// Address: 0x0000000000428F20

//----- (0000000000428F20) ----------------------------------------------------
__int64 __fastcall sub_428F20(__int64 *a1, __int64 a2, unsigned int *a3)
{
  if ( a3 && a1[22] > 0 && a1[24] )
    return sub_428E80(a1[20], a2, a1 + 22, *a3);
  else
    return 0;
}
