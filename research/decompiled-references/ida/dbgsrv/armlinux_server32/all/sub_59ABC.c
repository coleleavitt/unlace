/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_59ABC
// Address: 0x00059ABC

//----- (00059ABC) --------------------------------------------------------
int __fastcall sub_59ABC(int result, int a2)
{
  *(_DWORD *)(result + 244) = a2;
  *(_DWORD *)(a2 + 248) = result + 100;
  return result;
}
