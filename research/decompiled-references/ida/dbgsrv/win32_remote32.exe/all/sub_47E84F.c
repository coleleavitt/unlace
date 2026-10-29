/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47E84F
// Address: 0x0047E84F

//----- (0047E84F) --------------------------------------------------------
signed __int32 __cdecl sub_47E84F(int a1)
{
  if ( !a1 || (int *)a1 == off_4A67F8 )
    return 0x7FFFFFFF;
  else
    return _InterlockedIncrement((volatile signed __int32 *)(a1 + 176));
}
// 4A67F8: using guessed type int off_4A67F8[7];
