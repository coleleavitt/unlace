/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8DF82
// Address: 0x0008DF82

//----- (0008DF82) --------------------------------------------------------
void __fastcall sub_8DF82(_DWORD *a1, int *a2)
{
  int v3; // r0
  int v4; // r0

  if ( a1 )
  {
    if ( a2 )
    {
      v3 = *a2;
      a1[20] = a2[1];
      a1[21] = 0;
      a1[22] = v3;
      a1[23] = 0;
      sub_8D2D0((int)a1, a1 + 32, a1 + 54, 0, 0, 0, 0, 0, 0);
      a1[25] = 0;
      a1[24] = v4 == 0;
    }
  }
}
// 8DFBE: variable 'v4' is possibly undefined
