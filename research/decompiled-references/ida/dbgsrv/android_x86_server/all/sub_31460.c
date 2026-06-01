/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_31460
// Address: 0x00031460

//----- (00031460) --------------------------------------------------------
const char *__cdecl sub_31460(unsigned int a1)
{
  if ( a1 > 0x3E )
    return "Unknown";
  else
    return off_1349A0[a1];
}
// 1349A0: using guessed type char *off_1349A0[63];
