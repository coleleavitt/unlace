/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6B106
// Address: 0x0006B106

//----- (0006B106) --------------------------------------------------------
int __fastcall sub_6B106(int a1, int a2, int **a3)
{
  void **v4; // r7
  void **v5; // r4
  int v6; // r3
  int v7; // r2
  void *v8; // r1
  void **v9; // r1
  _BYTE *v10; // r6
  int v11; // r1
  int *v12; // r0
  int *v13; // r1
  int v15; // [sp+4h] [bp-Ch]
  int v16; // [sp+8h] [bp-8h]
  int *v17; // [sp+Ch] [bp-4h]

  v4 = (void **)a3[1];
  v5 = (void **)(a3 + 1);
  v6 = *(_DWORD *)(a2 + 16);
  v17 = (int *)(a1 + 784);
  if ( v4 )
  {
    v7 = *(_DWORD *)(a1 + 784);
    v5 = (void **)(a3 + 1);
    while ( 1 )
    {
      v8 = v4[4];
      if ( v7 >= (int)v8 )
      {
        if ( (int)v8 >= v7 )
          goto LABEL_11;
        v9 = (void **)v4[1];
        v5 = v4 + 1;
        if ( !v9 )
          goto LABEL_11;
        ++v4;
      }
      else
      {
        v9 = (void **)*v4;
        if ( !*v4 )
        {
          v5 = v4;
          goto LABEL_11;
        }
      }
      v5 = v4;
      v4 = v9;
    }
  }
  v4 = (void **)(a3 + 1);
LABEL_11:
  v10 = *v5;
  if ( !*v5 )
  {
    v15 = v6;
    v16 = a1;
    v10 = operator new(0x30u);
    v11 = *v17;
    v10[47] = 0;
    v10[46] = 0;
    v10[45] = 0;
    v10[44] = 0;
    v10[43] = 0;
    v10[42] = 0;
    v10[41] = 0;
    v10[40] = 0;
    *((_DWORD *)v10 + 6) = -2;
    *((_DWORD *)v10 + 4) = v11;
    *((_DWORD *)v10 + 8) = -1;
    *((_DWORD *)v10 + 9) = -1;
    *(_DWORD *)v10 = 0;
    *((_DWORD *)v10 + 1) = 0;
    *((_DWORD *)v10 + 2) = v4;
    *v5 = v10;
    v12 = (int *)**a3;
    if ( v12 )
    {
      *a3 = v12;
      v13 = (int *)*v5;
    }
    else
    {
      v13 = (int *)v10;
    }
    sub_261FA(a3[1], v13);
    a3[2] = (int *)((char *)a3[2] + 1);
    a1 = v16;
    v6 = v15;
  }
  *((_DWORD *)v10 + 8) = v6;
  *((_DWORD *)v10 + 9) = 0;
  return *(_DWORD *)(a1 + 128);
}
