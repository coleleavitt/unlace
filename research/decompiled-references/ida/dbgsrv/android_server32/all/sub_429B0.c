/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_429B0
// Address: 0x000429B0

//----- (000429B0) --------------------------------------------------------
int __fastcall sub_429B0(int **a1, int *a2)
{
  int *v4; // r5
  unsigned int v5; // r7
  unsigned int v6; // r0
  int *v7; // r3
  int v8; // r6
  int *v9; // r0
  int *v10; // r0
  int v11; // r1
  int *v12; // r2
  int v13; // r3
  int *v14; // r0
  int *v15; // r0
  int v16; // r1
  int *v17; // r2
  int v18; // r3
  int result; // r0
  int *v20; // [sp+8h] [bp-8h]
  int *v21; // [sp+8h] [bp-8h]

  v4 = *a1;
  v5 = (unsigned int)a1[2];
  v6 = (unsigned int)&(*a1)[v5];
  if ( v4 > a2 || v6 <= (unsigned int)a2 )
  {
    v7 = (int *)(a1 + 1);
    v14 = a1[1];
    if ( v5 < (unsigned int)v14 + 1 )
    {
      v4 = (int *)qvector_reserve((int)a1, nullptr, (unsigned int)v14 + 1, 4u);
      v21 = a1[2];
      a1[2] = (int *)v5;
      v15 = *a1;
      v16 = (int)a1[1] - 1;
      if ( v16 >= 0 )
      {
        v17 = v4;
        do
        {
          v18 = *v15++;
          *v17++ = v18;
          --v16;
        }
        while ( v16 >= 0 );
        v15 = *a1;
      }
      qfree(v15);
      a1[2] = v21;
      *a1 = v4;
      v14 = a1[1];
      v7 = (int *)(a1 + 1);
    }
    v4[(_DWORD)v14] = *a2;
  }
  else
  {
    v7 = (int *)(a1 + 1);
    v8 = *a2;
    v9 = a1[1];
    if ( v5 < (unsigned int)v9 + 1 )
    {
      v4 = (int *)qvector_reserve((int)a1, nullptr, (unsigned int)v9 + 1, 4u);
      v20 = a1[2];
      a1[2] = (int *)v5;
      v10 = *a1;
      v11 = (int)a1[1] - 1;
      if ( v11 >= 0 )
      {
        v12 = v4;
        do
        {
          v13 = *v10++;
          *v12++ = v13;
          --v11;
        }
        while ( v11 >= 0 );
        v10 = *a1;
      }
      qfree(v10);
      a1[2] = v20;
      *a1 = v4;
      v9 = a1[1];
      v7 = (int *)(a1 + 1);
    }
    v4[(_DWORD)v9] = v8;
  }
  result = *v7 + 1;
  *v7 = result;
  return result;
}
