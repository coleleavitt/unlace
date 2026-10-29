/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80CE7D0
// Address: 0x080CE7D0

//----- (080CE7D0) --------------------------------------------------------
int __cdecl sub_80CE7D0(_BYTE *a1)
{
  unsigned int v1; // eax

  v1 = (unsigned int)a1;
  LOBYTE(v1) = *a1 == 92;
  return (*a1 == 47) | v1;
}
