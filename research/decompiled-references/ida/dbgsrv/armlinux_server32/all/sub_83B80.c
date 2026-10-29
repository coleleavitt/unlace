/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_83B80
// Address: 0x00083B80

//----- (00083B80) --------------------------------------------------------
int __fastcall sub_83B80(int result, int a2, unsigned int a3, int a4, int a5)
{
  int v6; // r4
  double v8; // r6
  unsigned int v9; // r0
  unsigned int v10; // r1

  v6 = result;
  if ( (unsigned int)(a5 + a4) < *(_DWORD *)(a2 + 4) )
  {
    *(_BYTE *)result = 0;
    *(_DWORD *)(result + 4) = 0;
  }
  else
  {
    v8 = (double)(unsigned int)(a5 + a4) / *(float *)a2;
    if ( (double)a3 > v8 )
    {
      *(_DWORD *)(a2 + 4) = (unsigned int)floor(*(float *)a2 * (double)a3);
      *(_BYTE *)v6 = 0;
      *(_DWORD *)(v6 + 4) = 0;
      return v6;
    }
    else
    {
      v9 = (unsigned int)(floor(v8) + 1.0);
      v10 = 2 * a3;
      if ( 2 * a3 < v9 )
        v10 = v9;
      *(_DWORD *)(v6 + 4) = sub_83ADC(a2, v10);
      *(_BYTE *)v6 = 1;
      return v6;
    }
  }
  return result;
}
