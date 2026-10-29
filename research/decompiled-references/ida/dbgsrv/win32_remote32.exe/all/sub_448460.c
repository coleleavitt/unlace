/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_448460
// Address: 0x00448460

//----- (00448460) --------------------------------------------------------
int __thiscall sub_448460(_DWORD *this)
{
  int result; // eax

  result = *(this + 36);
  *(_BYTE *)(result + 372) = 1;
  return result;
}
