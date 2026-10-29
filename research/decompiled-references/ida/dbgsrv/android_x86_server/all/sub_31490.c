/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_31490
// Address: 0x00031490

//----- (00031490) --------------------------------------------------------
const char *__cdecl sub_31490(unsigned int a1)
{
  if ( a1 > 0xDD )
    return "Unknown";
  else
    return off_134AA0[a1];
}
// 134AA0: using guessed type char *off_134AA0[222];
