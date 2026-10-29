/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45F620
// Address: 0x0045F620

//----- (0045F620) --------------------------------------------------------
int __stdcall sub_45F620(_WORD *a1, _WORD *a2)
{
  *a2 = (__int16)a1[7] >> 15;
  a2[1] = a1[7] & 0x7FFF;
  a2[2] = 0;
  a2[3] = a1[6];
  a2[4] = a1[5];
  a2[5] = a1[4];
  a2[6] = a1[3];
  a2[7] = a1[2];
  a2[8] = a1[1];
  a2[9] = *a1;
  a2[10] = 0;
  return 0;
}
