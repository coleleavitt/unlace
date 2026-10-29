/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8E9AA
// Address: 0x0008E9AA

//----- (0008E9AA) --------------------------------------------------------
void __fastcall sub_8E9AA(_DWORD *a1, int a2)
{
  int v3; // r2
  int v4; // r0

  if ( a1 )
  {
    v3 = a1[15];
    a1[20] = a1[14];
    a1[21] = v3;
    a1[22] = a2;
    a1[23] = 0;
    sub_8D2D0((int)a1, a1 + 32, a1 + 54, 0, 0, 0, 0, 0, 0);
    a1[25] = 0;
    a1[24] = v4 == 0;
  }
}
// 8E9E4: variable 'v4' is possibly undefined
