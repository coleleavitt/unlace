/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_407B8
// Address: 0x000407B8

//----- (000407B8) --------------------------------------------------------
int __fastcall sub_407B8(int a1, int a2, int a3)
{
  int v3; // r3
  int **v4; // r0
  int v5; // r3
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v3 = *(_DWORD *)(a1 + 60);
  v4 = (int **)(a1 + 56);
  if ( v3 && (v5 = 2 * (v3 - 1), (*v4)[v5] == a2) )
  {
    (*v4)[v5 + 1] = a3;
  }
  else
  {
    v7[1] = a3;
    v7[0] = a2;
    sub_40800(v4, v7);
  }
  return _stack_chk_guard - v7[2];
}
