/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47A110
// Address: 0x000000000047A110

//----- (000000000047A110) ----------------------------------------------------
__int64 __fastcall sub_47A110(unsigned int a1)
{
  if ( a1 > 3 )
  {
    if ( !byte_4C94E1 )
      sub_481AC0(483);
    BUG();
  }
  return *(_QWORD *)(24LL * (int)a1 + __readfsqword(0) - 224);
}
// 4C94E1: using guessed type char byte_4C94E1;
