/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5E3B0
// Address: 0x0005E3B0

//----- (0005E3B0) --------------------------------------------------------
int *__fastcall sub_5E3B0(int *result, unsigned int a2, int a3)
{
  int *v3; // r10
  unsigned int v5; // r8
  int v6; // r7
  int v7; // r9
  int v8; // r11
  _DWORD *v9; // r4
  size_t v10; // r9
  void *v11; // r0
  size_t v12; // r9
  void *v13; // r0
  void *v14; // r0

  v3 = result;
  if ( result[2] < a2 )
  {
    result = (int *)sub_78018((int)result, (void *)*result, a2, 0x28u);
    *v3 = (int)result;
  }
  v5 = v3[1];
  if ( v5 < a2 )
  {
    v6 = 40 * v5;
    do
    {
      v8 = *v3;
      v9 = (_DWORD *)(v8 + v6);
      *(_DWORD *)(v8 + v6) = 0;
      v9[1] = 0;
      v9[2] = 0;
      v10 = *(_DWORD *)(a3 + 4);
      if ( v10 )
      {
        v11 = sub_77FEC(*(_DWORD *)(a3 + 4));
        *(_DWORD *)(v8 + v6) = v11;
        v9[2] = v10;
        result = (int *)memcpy(v11, *(const void **)a3, v10);
        v9[1] = v10;
      }
      v9[3] = 0;
      v9[4] = 0;
      v9[5] = 0;
      v12 = *(_DWORD *)(a3 + 16);
      if ( v12 )
      {
        v13 = sub_77FEC(*(_DWORD *)(a3 + 16));
        v9[5] = v12;
        v9[3] = v13;
        result = (int *)memcpy(v13, *(const void **)(a3 + 12), v12);
        v9[4] = v12;
        v9[6] = 0;
        v9[7] = 0;
        v9[8] = 0;
        v7 = *(_DWORD *)(a3 + 28);
        if ( v7 )
        {
LABEL_11:
          v14 = sub_77FEC(8 * v7);
          v9[6] = v14;
          v9[8] = v7;
          result = (int *)memcpy(v14, *(const void **)(a3 + 24), 8 * v7);
          v9[7] = v7;
        }
      }
      else
      {
        v9[6] = 0;
        v9[7] = 0;
        v9[8] = 0;
        v7 = *(_DWORD *)(a3 + 28);
        if ( v7 )
          goto LABEL_11;
      }
      ++v5;
      v6 += 40;
      v9[9] = *(_DWORD *)(a3 + 36);
    }
    while ( v5 != a2 );
  }
  v3[1] = a2;
  return result;
}
