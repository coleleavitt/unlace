/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8DB20
// Address: 0x0008DB20

//----- (0008DB20) --------------------------------------------------------
int __fastcall sub_8DB20(int a1, _DWORD *a2, int a3, unsigned int a4, int a5, unsigned int a6, int a7, unsigned int a8)
{
  int result; // r0
  int v10; // r2
  int v11; // r3
  int v12; // r5
  int v13; // r7
  int v14; // r6
  int v15; // r5
  int v16; // r6
  int v17; // r5
  int v18; // r6
  int v19[22]; // [sp+1Ch] [bp-5Ch] BYREF

  sub_8D2D0(a1, v19, nullptr, a3, a4, a5, a6, a7, a8);
  if ( a2 )
  {
    if ( !result )
    {
      *a2 = v19[0];
      a2[1] = v19[1];
      a2[2] = v19[2];
      a2[3] = v19[3];
      a2[4] = v19[4];
      a2[5] = v19[5];
      v10 = v19[11];
      v11 = v19[12];
      v12 = v19[13];
      v13 = v19[14];
      v14 = v19[15];
      a2[8] = v19[10];
      a2[9] = v10;
      a2[10] = v11;
      a2[11] = v12;
      a2[12] = v13;
      a2[13] = v14;
      v15 = v19[17];
      v16 = v19[18];
      a2[14] = v19[16];
      a2[15] = v15;
      a2[16] = v16;
      v17 = v19[20];
      v18 = v19[21];
      a2[17] = v19[19];
      a2[18] = v17;
      a2[19] = v18;
      a2[6] = v19[6];
      a2[7] = v19[8];
    }
  }
  return result;
}
// 8DB5A: variable 'result' is possibly undefined
