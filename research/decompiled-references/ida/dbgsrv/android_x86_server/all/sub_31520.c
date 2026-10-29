/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_31520
// Address: 0x00031520

//----- (00031520) --------------------------------------------------------
const char *__cdecl sub_31520(unsigned int a1)
{
  if ( a1 > 0x39 )
    return "Unknown";
  else
    return off_1352A0[a1];
}
// 1352A0: using guessed type char *off_1352A0[58];
