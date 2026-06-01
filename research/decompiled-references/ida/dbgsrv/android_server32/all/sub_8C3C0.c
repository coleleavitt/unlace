/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8C3C0
// Address: 0x0008C3C0

//----- (0008C3C0) --------------------------------------------------------
int __fastcall sub_8C3C0(_DWORD *a1, int a2, int a3)
{
  int v3; // r4
  int v4; // r4
  int v5; // r4
  _DWORD *v6; // r2
  unsigned int v7; // r1
  _WORD *v8; // r1

  v3 = a1[1448];
  a1[1448] = v3 + 1;
  *(_BYTE *)(a1[1446] + v3) = a2;
  v4 = a1[1448];
  a1[1448] = v4 + 1;
  *(_BYTE *)(a1[1446] + v4) = BYTE1(a2);
  v5 = a1[1448];
  a1[1448] = v5 + 1;
  *(_BYTE *)(a1[1446] + v5) = a3;
  if ( a2 )
  {
    ++a1[1452];
    v6 = &a1[*((unsigned __int8 *)&word_C8A12 + a3) + 256];
    ++*((_WORD *)v6 + 76);
    v7 = a2 - 1;
    if ( v7 >> 8 )
      v7 = (v7 >> 7) + 256;
    v8 = &a1[(unsigned __int8)byte_C8812[v7] + 610];
  }
  else
  {
    v8 = &a1[a3 + 37];
  }
  ++*v8;
  return a1[1448] - a1[1449] + (a1[1448] == a1[1449]) + a1[1449] - a1[1448];
}
// C8A12: using guessed type __int16 word_C8A12;
