/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8E968
// Address: 0x0008E968

//----- (0008E968) --------------------------------------------------------
void __fastcall sub_8E968(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r1
  int v6; // r0

  if ( a1 )
  {
    v5 = a1[15];
    a1[20] = a1[14];
    a1[21] = v5;
    a1[22] = a3;
    a1[23] = a4;
    sub_8D2D0((int)a1, a1 + 32, a1 + 54, 0, 0, 0, 0, 0, 0);
    a1[25] = 0;
    a1[24] = v6 == 0;
  }
}
// 8E9A0: variable 'v6' is possibly undefined
