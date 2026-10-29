/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6737C
// Address: 0x0006737C

//----- (0006737C) --------------------------------------------------------
int **__fastcall sub_6737C(int **a1, int *a2)
{
  int **v2; // r4
  int v3; // r7
  int *v5; // r6
  int *v6; // r2
  int v7; // r5
  int v8; // r7
  int *v9; // r0
  int *v10; // r6
  int *v11; // r4
  int *v13; // [sp+4h] [bp-10h]
  int **v14; // [sp+8h] [bp-Ch]
  int v15; // [sp+10h] [bp-4h]
  int v16; // [sp+10h] [bp-4h]

  v2 = a1;
  *a1 = nullptr;
  a1[1] = nullptr;
  a1[2] = nullptr;
  v3 = a2[1];
  if ( v3 )
  {
    v5 = (int *)qalloc_or_throw(24 * v3);
    v2[2] = (int *)v3;
    *v2 = v5;
    v15 = *a2;
    *v5 = -2;
    memset(v5 + 2, 0, 0x10u);
    sub_63C28(v5, v15);
    v13 = (int *)v3;
    if ( v3 != 1 )
    {
      v6 = a2;
      v7 = v3 - 1;
      v8 = 6;
      v14 = v2;
      do
      {
        v16 = *v6;
        v9 = *v2;
        v9[v8] = -2;
        v10 = &v9[v8];
        v11 = v6;
        memset(&v9[v8 + 2], 0, 0x10u);
        sub_63C28(v10, v16 + v8 * 4);
        v6 = v11;
        v2 = v14;
        --v7;
        v8 += 6;
      }
      while ( v7 );
    }
    v2[1] = v13;
  }
  return v2;
}
