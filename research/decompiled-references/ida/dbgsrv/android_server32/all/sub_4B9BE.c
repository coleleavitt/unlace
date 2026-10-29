/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4B9BE
// Address: 0x0004B9BE

//----- (0004B9BE) --------------------------------------------------------
// positive sp value has been detected, the output may be wrong!
void __fastcall sub_4B9BE(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  unsigned __int8 v9; // [sp-34h] [bp-34h] BYREF
  void *v10; // [sp-2Ch] [bp-2Ch]
  int v11; // [sp-28h] [bp-28h]
  int v12; // [sp-24h] [bp-24h]

  if ( v9 == 5 )
  {
    sub_448A0((int)v10, &v9);
  }
  else if ( v9 == 7 )
  {
    if ( v10 )
    {
      v11 = 0;
      qfree(v10);
      v12 = 0;
      v10 = nullptr;
    }
  }
  __asm { POP             {R4-R7,PC} }
}
// 4B9FC: positive sp value 7C has been found
// 4B9FC: unbalanced stack, ignored a potential tail call
