/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_83DAC
// Address: 0x00083DAC

//----- (00083DAC) --------------------------------------------------------
int __fastcall sub_83DAC(double x, unsigned int a2, int a3, int a4)
{
  int v4; // r5
  unsigned int v5; // r3
  int v6; // r6
  double v8; // d5
  double v9; // d6
  double v10; // d0
  unsigned int v11; // r8
  double v12; // r0

  v4 = LODWORD(x);
  v5 = a3 + a4;
  if ( v5 < *(_DWORD *)(HIDWORD(x) + 4) )
  {
    *(_BYTE *)LODWORD(x) = 0;
    *(_DWORD *)(LODWORD(x) + 4) = 0;
  }
  else
  {
    v6 = HIDWORD(x);
    v8 = (double)a2;
    v9 = *(float *)HIDWORD(x);
    v10 = (double)v5 / v9;
    if ( (double)a2 > v10 )
    {
      floor(x);
      *(_BYTE *)v4 = 0;
      *(_DWORD *)(v4 + 4) = 0;
      *(_DWORD *)(v6 + 4) = (unsigned int)(v9 * v8);
      LODWORD(x) = v4;
    }
    else
    {
      floor(x);
      v11 = 2 * a2;
      LODWORD(v12) = v6;
      HIDWORD(v12) = (unsigned int)(v10 + 1.0);
      if ( HIDWORD(v12) < v11 )
        HIDWORD(v12) = v11;
      *(_DWORD *)(v4 + 4) = sub_83CF0(v12);
      *(_BYTE *)v4 = 1;
      LODWORD(x) = v4;
    }
  }
  return LODWORD(x);
}
