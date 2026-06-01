/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_56C98
// Address: 0x00056C98

//----- (00056C98) --------------------------------------------------------
// positive sp value has been detected, the output may be wrong!
void __fastcall sub_56C98(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  _DWORD *v9; // r5
  _DWORD *v10; // r7
  int v11; // [sp-10h] [bp-10h]
  int v12; // [sp-Ch] [bp-Ch]

  *(_DWORD *)(a2 + a1) = v10;
  *v10 = *v9;
  *v9 = 0;
  --*(_DWORD *)(a3 + 12);
  *(_DWORD *)v12 = v9;
  *(_DWORD *)(v12 + 4) = v11;
  *(_BYTE *)(v12 + 8) = 1;
  __asm { POP             {R4-R7,PC} }
}
// 56CB6: positive sp value 1C has been found
// 56CB6: unbalanced stack, ignored a potential tail call
// 56C98: variable 'v10' is possibly undefined
// 56C9A: variable 'v9' is possibly undefined
// 56CAA: variable 'v12' is possibly undefined
// 56CAE: variable 'v11' is possibly undefined
