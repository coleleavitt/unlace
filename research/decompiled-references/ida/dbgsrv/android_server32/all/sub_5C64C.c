/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5C64C
// Address: 0x0005C64C

//----- (0005C64C) --------------------------------------------------------
void __fastcall sub_5C64C(int a1, int a2, int a3)
{
  unsigned int v4; // r0

  *(_BYTE *)(a2 + 153) = 0;
  sub_6DA58(a1, 0);
  v4 = *(unsigned __int8 *)(a3 + 4) - 5;
  if ( v4 > 0x2B )
    v4 = sub_5DCBE();
  __asm { ADD             PC, R0 }
}
// 5C6C6: unbalanced stack, ignored a potential tail call
// 5C6C8: using guessed type int[22];
// 5DCBE: using guessed type int sub_5DCBE(void);
