/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47E2B8
// Address: 0x000000000047E2B8

//----- (000000000047E2B8) ----------------------------------------------------
__int64 __fastcall sub_47E2B8(unsigned int a1)
{
  if ( a1 <= 0x7F )
    return *((unsigned int *)qword_4CA1E8 + a1);
  else
    return sub_47E110(a1);
}
// 4CA1E8: using guessed type __int64 qword_4CA1E8[512];
