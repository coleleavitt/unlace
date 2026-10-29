/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_614C4
// Address: 0x000614C4

//----- (000614C4) --------------------------------------------------------
int __fastcall sub_614C4(int a1, int a2, int a3, int a4, int *a5)
{
  int v7; // r0
  _DWORD *v8; // r6
  unsigned int v9; // r1
  int v10; // r1
  int v11; // r0
  unsigned int v12; // r1
  int result; // r0
  unsigned int v14; // r1

  v7 = *(_DWORD *)(a1 + 24 * a2);
  v8 = (_DWORD *)(a1 + 24 * a2);
  v9 = v8[1];
  if ( a3 == 1 )
  {
    *a5 = swap64(v7, v9);
    a5[1] = v10;
    v11 = swap64(v8[2], v8[3]);
  }
  else
  {
    *a5 = v7;
    a5[1] = v9;
    v11 = v8[2];
    v12 = v8[3];
    if ( a3 == 2 && a4 == 8 )
    {
      a5[2] = HIBYTE(v12);
      a5[3] = 0;
      a5[4] = v11;
      a5[5] = 0;
      result = v8[4];
      v14 = v8[5];
      goto LABEL_8;
    }
  }
  a5[2] = v11;
  a5[3] = 0;
  a5[4] = v12;
  a5[5] = 0;
  result = v8[4];
  v14 = v8[5];
  if ( a3 == 1 )
    result = swap64(result, v14);
LABEL_8:
  a5[6] = result;
  a5[7] = v14;
  return result;
}
// 614E6: variable 'v10' is possibly undefined
// 6151E: variable 'v12' is possibly undefined
// 61530: variable 'v14' is possibly undefined
