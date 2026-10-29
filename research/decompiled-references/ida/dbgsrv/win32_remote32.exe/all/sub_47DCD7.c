/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47DCD7
// Address: 0x0047DCD7

//----- (0047DCD7) --------------------------------------------------------
int __cdecl sub_47DCD7(_DWORD *a1, unsigned __int8 a2, int a3, unsigned __int8 a4)
{
  int v4; // edx
  int v5; // eax
  _DWORD v7[3]; // [esp+4h] [ebp-10h] BYREF
  char v8; // [esp+10h] [ebp-4h]

  sub_467FF8((int)v7, a1);
  if ( (a4 & *(_BYTE *)(v7[2] + a2 + 25)) != 0
    || ((v4 = 0, !a3) ? (v5 = 0) : (v5 = (unsigned __int16)(a3 & *(_WORD *)(*(_DWORD *)v7[1] + 2 * a2))), v5) )
  {
    v4 = 1;
  }
  if ( v8 )
    *(_DWORD *)(v7[0] + 848) &= ~2u;
  return v4;
}
