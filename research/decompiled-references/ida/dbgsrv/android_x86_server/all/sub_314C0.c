/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_314C0
// Address: 0x000314C0

//----- (000314C0) --------------------------------------------------------
const char *__cdecl sub_314C0(unsigned int a1)
{
  if ( a1 > 0xE9 )
    return "Unknown";
  else
    return off_134E20[a1];
}
// 134E20: using guessed type char *off_134E20[234];
