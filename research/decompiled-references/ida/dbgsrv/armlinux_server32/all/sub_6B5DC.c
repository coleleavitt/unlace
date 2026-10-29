/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6B5DC
// Address: 0x0006B5DC

//----- (0006B5DC) --------------------------------------------------------
int __fastcall sub_6B5DC(int a1, unsigned int a2)
{
  int v4; // r5
  int v5; // r3
  int v7; // r3
  int v8; // [sp+4h] [bp-10h] BYREF
  int v9; // [sp+8h] [bp-Ch]

  if ( a2 >= 0x148 || *(unsigned __int16 *)((char *)dword_B0F6C + 5 * a2) != 0xFFFF )
  {
    if ( under_debugger )
      __und(0xFFu);
    sub_78C64(1473);
  }
  v4 = 0;
  if ( !a2 )
    goto LABEL_11;
  while ( ++v4 != 328 )
  {
    v5 = *(unsigned __int16 *)((char *)dword_B0F6C + 5 * v4);
    if ( v5 == 0xFFFF )
      v5 = v4;
    if ( a2 == v5 )
    {
LABEL_11:
      v8 = 0;
      v9 = 0;
      if ( (unsigned int)(v4 - 1) > 0x146 )
        return 0;
      v7 = dword_B15D4[2 * v4 + 1];
      v8 = dword_B15D4[2 * v4];
      v9 = v7 + 1;
      sub_7C184(a1, (unsigned int *)&v8);
    }
  }
  return 1;
}
// B0F6C: using guessed type int dword_B0F6C[17];
// B15D4: using guessed type int dword_B15D4[2];
// D6C20: using guessed type char under_debugger;
