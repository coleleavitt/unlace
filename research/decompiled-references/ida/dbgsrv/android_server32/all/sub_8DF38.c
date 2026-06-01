/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8DF38
// Address: 0x0008DF38

//----- (0008DF38) --------------------------------------------------------
void __fastcall sub_8DF38(_DWORD *a1, int *a2)
{
  int v3; // r0
  int *v4; // r1
  int v5; // r2
  int v6; // r0
  int v7; // r0

  if ( a1 )
  {
    if ( a2 )
    {
      v3 = *a2;
      v5 = a2[1];
      v4 = a2 + 2;
      a1[23] = v5;
      a1[22] = v3;
      v6 = *v4;
      a1[21] = v4[1];
      a1[20] = v6;
      sub_8D2D0((int)a1, a1 + 32, a1 + 54, 0, 0, 0, 0, 0, 0);
      a1[25] = 0;
      a1[24] = v7 == 0;
    }
  }
}
// 8DF78: variable 'v7' is possibly undefined
