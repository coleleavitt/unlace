/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47BF0C
// Address: 0x0047BF0C

//----- (0047BF0C) --------------------------------------------------------
int __cdecl sub_47BF0C(unsigned __int16 *a1)
{
  int v1; // ecx

  v1 = *a1;
  if ( !(_WORD)v1 || a1[1] != 58 )
    return 0;
  if ( (unsigned int)(v1 - 97) <= 0x19 )
    v1 -= 32;
  return v1 - 64;
}
