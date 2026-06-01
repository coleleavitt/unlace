/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: bitcountr_zero
// Address: 0x00000000000B1980

//----- (00000000000B1980) ----------------------------------------------------
__int64 __fastcall bitcountr_zero(__int64 a1)
{
  if ( a1 )
    return *((unsigned int *)qword_115FE0 + ((0x3F79D71B4CB0A89LL * (a1 ^ (unsigned __int64)(a1 - 1))) >> 58));
  else
    return 64;
}
// 115FE0: using guessed type __int64 qword_115FE0[32];
