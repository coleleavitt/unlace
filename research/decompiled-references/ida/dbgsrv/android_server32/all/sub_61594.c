/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_61594
// Address: 0x00061594

//----- (00061594) --------------------------------------------------------
unsigned int *__fastcall sub_61594(int a1, int a2, int a3, int a4, unsigned int *a5)
{
  unsigned int v5; // r3
  int v6; // r1
  unsigned int *result; // r0
  unsigned int v8; // r3
  unsigned int v9; // r1
  int v10; // r3

  v5 = *(_DWORD *)(a1 + 12 * a2);
  v6 = a1 + 12 * a2;
  result = a5;
  if ( a3 == 1 )
  {
    a5[1] = 0;
    *a5 = (v5 << 24) + ((v5 << 8) & 0xFF0000) + ((v5 >> 8) & 0xFF00) + HIBYTE(v5);
    v8 = (*(_DWORD *)(v6 + 4) << 24)
       + ((*(_DWORD *)(v6 + 4) << 8) & 0xFF0000)
       + ((*(_DWORD *)(v6 + 4) >> 8) & 0xFF00)
       + HIBYTE(*(_DWORD *)(v6 + 4));
  }
  else
  {
    *a5 = v5;
    a5[1] = 0;
    v8 = *(_DWORD *)(v6 + 4);
  }
  a5[2] = (unsigned __int8)v8;
  a5[3] = 0;
  a5[4] = v8 >> 8;
  a5[5] = 0;
  v9 = *(_DWORD *)(v6 + 8);
  a5[7] = 0;
  v10 = (v9 << 24) + ((v9 << 8) & 0xFF0000) + ((v9 >> 8) & 0xFF00) + HIBYTE(v9);
  if ( a3 != 1 )
    v10 = v9;
  a5[6] = v10;
  return result;
}
