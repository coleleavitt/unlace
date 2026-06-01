/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_59938
// Address: 0x00059938

//----- (00059938) --------------------------------------------------------
int __fastcall sub_59938(int result, int a2)
{
  *(_DWORD *)(result + 244) = a2;
  *(_DWORD *)(a2 + 248) = result + 100;
  return result;
}
