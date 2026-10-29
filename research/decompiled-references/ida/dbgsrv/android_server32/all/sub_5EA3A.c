/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5EA3A
// Address: 0x0005EA3A

//----- (0005EA3A) --------------------------------------------------------
// positive sp value has been detected, the output may be wrong!
void __fastcall sub_5EA3A(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  _BYTE *v9; // [sp-3058h] [bp-3058h]
  int v10; // [sp-3054h] [bp-3054h]
  _DWORD *v11; // [sp-3050h] [bp-3050h]
  _DWORD *v12; // [sp-304Ch] [bp-304Ch]

  if ( v10 )
    *v9 = 1;
  if ( *v11 == *v12 )
    __asm { POP             {R4-R7,PC} }
  JUMPOUT(0x5EA8C);
}
// 5EA56: positive sp value 30A4 has been found
// 5EA50: control flows out of bounds to 5EA8C
// 5EA56: unbalanced stack, ignored a potential tail call
// 5EA3E: variable 'v10' is possibly undefined
// 5EA44: variable 'v9' is possibly undefined
// 5EA48: variable 'v11' is possibly undefined
// 5EA4C: variable 'v12' is possibly undefined
