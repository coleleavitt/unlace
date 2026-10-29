/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_479F08
// Address: 0x0000000000479F08

//----- (0000000000479F08) ----------------------------------------------------
__int64 __fastcall sub_479F08(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a1 + 88) = a2;
  if ( (debug & 0x100000) != 0 )
    return sub_479EC0(a1);
  return a1;
}
// 524514: using guessed type int debug;
