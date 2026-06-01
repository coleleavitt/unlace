/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6B46C
// Address: 0x0006B46C

//----- (0006B46C) --------------------------------------------------------
int __fastcall sub_6B46C(int a1, unsigned int a2)
{
  int v4; // r5
  int v5; // r3
  int v7; // r3
  int v8; // [sp+4h] [bp-10h] BYREF
  int v9; // [sp+8h] [bp-Ch]

  if ( a2 >= 0x148 || *(unsigned __int16 *)((char *)dword_B0E30 + 5 * a2) != 0xFFFF )
  {
    if ( under_debugger )
      __und(0xFFu);
    sub_78AFC(1473);
  }
  v4 = 0;
  if ( !a2 )
    goto LABEL_11;
  while ( ++v4 != 328 )
  {
    v5 = *(unsigned __int16 *)((char *)dword_B0E30 + 5 * v4);
    if ( v5 == 0xFFFF )
      v5 = v4;
    if ( a2 == v5 )
    {
LABEL_11:
      v8 = 0;
      v9 = 0;
      if ( (unsigned int)(v4 - 1) > 0x146 )
        return 0;
      v7 = dword_B1498[2 * v4 + 1];
      v8 = dword_B1498[2 * v4];
      v9 = v7 + 1;
      sub_7C01C(a1, (unsigned int *)&v8);
    }
  }
  return 1;
}
// B0E30: using guessed type int dword_B0E30[17];
// B1498: using guessed type int dword_B1498[2];
// D5C00: using guessed type char under_debugger;
