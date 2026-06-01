/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_2748C
// Address: 0x0002748C

//----- (0002748C) --------------------------------------------------------
int __fastcall sub_2748C(int **a1, unsigned int *a2)
{
  int *v3; // r6
  int *v4; // r5
  int result; // r0
  unsigned int v6; // r1
  int *v7; // r4
  unsigned int v8; // r7
  int **v9; // r2
  int *v10; // r2
  int **v11; // r1
  int *v12; // r0
  _DWORD *v13; // r2
  int v14; // r6
  int *v15; // [sp+4h] [bp-4h]

  v3 = a1[1];
  v4 = (int *)(a1 + 1);
  result = 0;
  if ( v3 )
  {
    v6 = *a2;
    v7 = v4;
    v15 = v3;
    do
    {
      v8 = v3[4];
      if ( v8 >= v6 )
        v7 = v3;
      v9 = (int **)(v3 + 1);
      if ( v8 >= v6 )
        v9 = (int **)v3;
      v3 = *v9;
    }
    while ( *v9 );
    if ( v7 != v4 && v6 >= v7[4] )
    {
      v10 = (int *)v7[1];
      if ( v10 )
      {
        do
        {
          v11 = (int **)v10;
          v10 = (int *)*v10;
        }
        while ( v10 );
        v12 = v15;
      }
      else
      {
        v13 = v7 + 2;
        v11 = (int **)v7[2];
        v12 = v15;
        if ( *v11 != v7 )
        {
          do
          {
            v14 = *v13;
            v13 = (_DWORD *)(*v13 + 8);
            v11 = *(int ***)(v14 + 8);
          }
          while ( *v11 != (int *)v14 );
        }
      }
      if ( *a1 == v7 )
        *a1 = (int *)v11;
      a1[2] = (int *)((char *)a1[2] - 1);
      sub_27512(v12, v7);
      operator delete(v7);
      return 1;
    }
  }
  return result;
}
