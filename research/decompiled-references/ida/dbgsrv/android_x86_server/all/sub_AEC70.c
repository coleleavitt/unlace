/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_AEC70
// Address: 0x000AEC70

//----- (000AEC70) --------------------------------------------------------
bool __cdecl sub_AEC70(char *a1, char *a2)
{
  return *a2 == 42 && !a2[1] || sub_AECB0(a1, a2);
}
