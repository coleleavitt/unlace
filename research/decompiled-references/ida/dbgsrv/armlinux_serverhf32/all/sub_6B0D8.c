/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6B0D8
// Address: 0x0006B0D8

//----- (0006B0D8) --------------------------------------------------------
int __fastcall sub_6B0D8(unsigned int a1)
{
  int v1; // r4
  int v2; // r3
  unsigned int v3; // r5
  int i; // r1
  int v5; // r3
  unsigned int v6; // r6
  _BOOL4 v7; // r9
  bool v8; // cc
  int v10; // r2
  unsigned int v11; // r3
  int v12; // [sp+4h] [bp-8h]

  if ( a1 >= 0x110000 )
  {
LABEL_18:
    v12 = 0;
  }
  else
  {
    v1 = 3200;
    v2 = 3200;
    v3 = 13312;
    for ( i = 0; ; v3 = dword_A7830[3 * ((i + v1) >> 1)] )
    {
      v5 = v2 >> 1;
      if ( v5 == 3199 )
        v6 = 1114112;
      else
        v6 = 3 * (v5 + 1);
      if ( v5 != 3199 )
        v6 = dword_A7830[v6];
      v7 = a1 >= v3;
      if ( a1 >= v6 )
        v7 = 0;
      if ( v7 )
        break;
      if ( a1 > v3 )
        i = v5 + 1;
      else
        v1 = v5 - 1;
      v8 = i <= 3199;
      if ( i <= 3199 )
        v8 = i <= v1;
      if ( !v8 )
        goto LABEL_18;
      v2 = i + v1;
    }
    v10 = dword_A7830[3 * v5 + 2];
    v11 = dword_A7830[3 * v5 + 1];
    if ( !v10 )
      v11 = v11 - v3 + a1;
    if ( v11 > 0x1D51 )
    {
      if ( under_debugger )
        __und(0xFFu);
      sub_78AFC(1519);
    }
    v12 = dword_A02E8[v11];
  }
  return (unsigned __int16)v12 | (HIWORD(v12) << 16);
}
// A02E8: using guessed type int dword_A02E8[157];
// A7830: using guessed type int dword_A7830[3];
// D5C00: using guessed type char under_debugger;
