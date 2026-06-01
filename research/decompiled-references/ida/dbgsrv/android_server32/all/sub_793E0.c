/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_793E0
// Address: 0x000793E0

//----- (000793E0) --------------------------------------------------------
// positive sp value has been detected, the output may be wrong!
void __fastcall sub_793E0(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  _DWORD *v9; // r5
  int v10; // [sp-4h] [bp-4h]

  if ( *v9 == v10 )
    __asm { POP             {R4-R7,PC} }
  JUMPOUT(0x79400);
}
// 793EA: positive sp value 13C has been found
// 793E6: control flows out of bounds to 79400
// 793EA: unbalanced stack, ignored a potential tail call
// 793E0: variable 'v9' is possibly undefined
// 793E6: variable 'v10' is possibly undefined
