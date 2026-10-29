/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_481941
// Address: 0x00481941

//----- (00481941) --------------------------------------------------------
BOOL __cdecl sub_481941(unsigned int *a1)
{
  unsigned int v2; // [esp+4h] [ebp-8h] BYREF
  int v3; // [esp+8h] [ebp-4h]

  sub_480C65(*a1);
  sub_480CCD(a1[1]);
  v2 = 0;
  v3 = 0;
  return sub_481924(&v2) || *a1 != v2 || a1[1] != v3;
}
