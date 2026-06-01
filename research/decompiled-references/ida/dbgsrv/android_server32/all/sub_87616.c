/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_87616
// Address: 0x00087616

//----- (00087616) --------------------------------------------------------
// positive sp value has been detected, the output may be wrong!
void __fastcall sub_87616(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  int v9; // r4

  *(_DWORD *)(a4 + 40) = v9;
  __asm { POP             {R4-R7,PC} }
}
// 8761C: positive sp value 2C has been found
// 8761C: unbalanced stack, ignored a potential tail call
// 87616: variable 'v9' is possibly undefined
