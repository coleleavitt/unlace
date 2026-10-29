/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_27920
// Address: 0x00027920

//----- (00027920) --------------------------------------------------------
int __fastcall sub_27920(int result, bool (__fastcall *a2)(int a1, int a2))
{
  if ( !a2 )
    a2 = sub_2BF00;
  *(_DWORD *)(result + 384) = a2;
  return result;
}
