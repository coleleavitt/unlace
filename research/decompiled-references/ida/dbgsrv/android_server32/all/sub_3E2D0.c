/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3E2D0
// Address: 0x0003E2D0

//----- (0003E2D0) --------------------------------------------------------
void __fastcall sub_3E2D0(int a1, int a2, int a3, int a4)
{
  int v4; // [sp+0h] [bp-474h]
  int v5; // [sp+4h] [bp-470h]
  int v6; // [sp+8h] [bp-46Ch]
  int v7; // [sp+Ch] [bp-468h]
  int v8; // [sp+10h] [bp-464h]

  if ( *(int *)(a4 + 8) <= 0 )
  {
    *(_DWORD *)(a4 + 8) = 0;
    sub_3EBDE(0, (int)&_stack_chk_guard, a3, a4, v4, v5, v6, v7, v8);
  }
  JUMPOUT(0x3E336);
}
// 3E330: control flows out of bounds to 3E336
// 3E30C: variable 'v4' is possibly undefined
// 3E30C: variable 'v5' is possibly undefined
// 3E30C: variable 'v6' is possibly undefined
// 3E30C: variable 'v7' is possibly undefined
// 3E30C: variable 'v8' is possibly undefined
