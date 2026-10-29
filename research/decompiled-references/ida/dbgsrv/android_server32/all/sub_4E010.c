/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4E010
// Address: 0x0004E010

//----- (0004E010) --------------------------------------------------------
int *__fastcall sub_4E010(int *a1, int a2, int *a3)
{
  _DWORD *v6; // r0
  int v7; // r1
  _DWORD *v8; // r0
  int *result; // r0
  int v10; // r1
  int *v11; // r1
  int *v12; // r2
  int v13; // r3
  int v14; // r5
  int v15; // r6

  v6 = a1 + 7;
  v7 = a1[8];
  if ( a1[9] >= (unsigned int)(v7 + 1) )
  {
    v8 = (_DWORD *)*v6;
  }
  else
  {
    v8 = qvector_reserve((int)v6, (void *)a1[7], v7 + 1, 0x1Cu);
    a1[7] = (int)v8;
    v7 = a1[8];
  }
  v8[7 * v7] = 0;
  result = &v8[7 * v7];
  result[2] = 0;
  result[1] = 0;
  ++a1[8];
  result[3] = *a1;
  result[4] = a1[1];
  v10 = a1[10];
  result[5] = a2;
  result[6] = v10;
  v11 = result + 2;
  v12 = result + 1;
  if ( a3 )
  {
    v13 = *a3;
    *a3 = *result;
    v14 = a3[1];
    a3[1] = *v12;
    v15 = a3[2];
    a3[2] = *v11;
    *result = v13;
    *v12 = v14;
    *v11 = v15;
  }
  return result;
}
