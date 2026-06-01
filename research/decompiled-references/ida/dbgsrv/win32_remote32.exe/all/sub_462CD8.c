/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_462CD8
// Address: 0x00462CD8

//----- (00462CD8) --------------------------------------------------------
unsigned __int64 __usercall sub_462CD8@<edx:eax>(unsigned __int64 a1@<edx:eax>)
{
  int v1; // ecx
  bool v2; // cc
  char v3; // cl

  v1 = HIDWORD(a1) >> 20;
  HIDWORD(a1) = HIDWORD(a1) & 0xFFFFF | 0x100000;
  v2 = v1 < 1075;
  v3 = v1 - 51;
  if ( v2 )
    return a1 >> (-v3 & 0x1F);
  else
    return a1 << (v3 & 0x1F);
}
