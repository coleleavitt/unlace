/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8DBB8
// Address: 0x0008DBB8

//----- (0008DBB8) --------------------------------------------------------
void __fastcall sub_8DBB8(_DWORD *a1)
{
  int v2; // r0
  int v3; // r1
  int v4; // r0

  if ( a1 )
  {
    v2 = a1[30];
    v3 = a1[31];
    a1[20] = 0;
    a1[21] = 0;
    a1[22] = v2;
    a1[23] = v3;
    sub_8D2D0((int)a1, a1 + 32, a1 + 54, 0, 0, 0, 0, 0, 0);
    a1[25] = 0;
    a1[24] = v4 == 0;
  }
}
// 8DBF2: variable 'v4' is possibly undefined
