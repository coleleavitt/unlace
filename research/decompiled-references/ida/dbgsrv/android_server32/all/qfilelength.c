/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qfilelength
// Address: 0x0007E0B0

//----- (0007E0B0) --------------------------------------------------------
int __fastcall qfilelength(int a1)
{
  __int64 v2; // r0
  int v3; // r5
  __int64 v4; // kr00_8
  int v6; // [sp+0h] [bp-Ch] BYREF
  __int64 v7; // [sp+4h] [bp-8h]

  v2 = qtell(a1);
  v3 = -1;
  if ( ((unsigned int)v2 & HIDWORD(v2)) != 0xFFFFFFFF )
  {
    v7 = v2;
    v4 = qseek(a1, (int)&v6, 0, 0, 2);
    v3 = v4;
    qseek(a1, SHIDWORD(v4), v7, SHIDWORD(v7), 0);
  }
  return v3;
}
