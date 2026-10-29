/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_61612
// Address: 0x00061612

//----- (00061612) --------------------------------------------------------
unsigned int *__fastcall sub_61612(int a1, int a2, int a3, int a4, unsigned int *a5)
{
  int v5; // r1
  unsigned int v6; // r3
  int v7; // r1
  unsigned int *result; // r0
  unsigned int v9; // r1

  v5 = 8 * a2;
  v6 = *(_DWORD *)(a1 + v5);
  v7 = a1 + v5;
  result = a5;
  if ( a3 == 1 )
  {
    a5[1] = 0;
    *a5 = (v6 << 24) + ((v6 << 8) & 0xFF0000) + ((v6 >> 8) & 0xFF00) + HIBYTE(v6);
    v9 = (*(_DWORD *)(v7 + 4) << 24)
       + ((*(_DWORD *)(v7 + 4) << 8) & 0xFF0000)
       + ((*(_DWORD *)(v7 + 4) >> 8) & 0xFF00)
       + HIBYTE(*(_DWORD *)(v7 + 4));
  }
  else
  {
    *a5 = v6;
    a5[1] = 0;
    v9 = *(_DWORD *)(v7 + 4);
  }
  a5[2] = (unsigned __int8)v9;
  a5[3] = 0;
  a5[4] = v9 >> 8;
  a5[5] = 0;
  a5[6] = 0;
  a5[7] = 0;
  return result;
}
