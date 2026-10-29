/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47A0D0
// Address: 0x000000000047A0D0

//----- (000000000047A0D0) ----------------------------------------------------
__int64 __fastcall sub_47A0D0(unsigned int a1)
{
  if ( a1 > 3 )
  {
    if ( !byte_4C94E1 )
      sub_481AC0(482);
    BUG();
  }
  return *(_QWORD *)(__readfsqword(0) + 8LL * (int)a1 - 256);
}
// 4C94E1: using guessed type char byte_4C94E1;
