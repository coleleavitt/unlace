/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_468228
// Address: 0x00468228

//----- (00468228) --------------------------------------------------------
int __cdecl sub_468228(unsigned __int8 *a1, unsigned __int8 *a2)
{
  int v4; // ecx
  int v5; // edx
  int result; // eax

  do
  {
    v4 = *a1;
    if ( (unsigned int)(v4 - 65) <= 0x19 )
      v4 += 32;
    v5 = *a2;
    ++a1;
    if ( (unsigned int)(v5 - 65) <= 0x19 )
      v5 += 32;
    ++a2;
    result = v4 - v5;
  }
  while ( v4 == v5 && v4 );
  return result;
}
