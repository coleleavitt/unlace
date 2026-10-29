/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_83812
// Address: 0x00083812

//----- (00083812) --------------------------------------------------------
int __fastcall sub_83812(int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  int v4; // r5
  unsigned int *v5; // r4
  unsigned int v6; // r7
  unsigned int v7; // r3
  unsigned int v8; // r5
  unsigned int *v9; // r6
  unsigned int *v10; // r6
  int v11; // r2
  int v12; // r5
  unsigned int v13; // r0
  unsigned int v14; // r2
  unsigned int v16; // [sp+0h] [bp-10h]
  int v17; // [sp+0h] [bp-10h]
  int v18; // [sp+4h] [bp-Ch]
  unsigned int v19; // [sp+4h] [bp-Ch]

  v4 = 0;
  if ( a2 == a3 )
    return v4;
  v5 = *(unsigned int **)(a1 + 12);
  if ( !v5 || *v5 > a2 || (v6 = v5[1], v6 <= a2) )
  {
    v16 = a4;
    v18 = 8 * *(_DWORD *)(a1 + 4);
    v5 = *(unsigned int **)a1;
    if ( v18 )
    {
      v7 = v18 >> 3;
      v5 = *(unsigned int **)a1;
      do
      {
        while ( 1 )
        {
          v8 = v7 >> 1;
          v9 = &v5[2 * (v7 >> 1)];
          if ( v9[1] <= a2 )
            break;
          v7 >>= 1;
          if ( !v8 )
            goto LABEL_11;
        }
        v7 += ~v8;
        v5 = v9 + 2;
      }
      while ( v7 );
    }
LABEL_11:
    v4 = -1;
    if ( v5 == (unsigned int *)(*(_DWORD *)a1 + v18) )
      return v4;
    if ( *v5 > a2 )
      return v4;
    a4 = v16;
    if ( v5[1] <= a2 )
      return v4;
    *(_DWORD *)(a1 + 12) = v5;
    v6 = v5[1];
  }
  v4 = -2;
  v19 = a4 + a2;
  if ( v6 >= a4 + a2 )
  {
    if ( a4 + a3 > a3 )
    {
      v10 = *(unsigned int **)a1;
      v11 = *(_DWORD *)(a1 + 4);
      v17 = *(_DWORD *)a1 + 8 * v11;
      if ( !(8 * v11) )
        return 0;
      v12 = 8 * v11;
      while ( v10[1] <= a3 )
      {
        v12 -= 8;
        v10 += 2;
        if ( !v12 )
          return 0;
      }
      if ( *v10 > a3 )
      {
        v13 = *v10 - a3;
        if ( v5 != v10 )
          goto LABEL_24;
        return 0;
      }
      if ( v5 == v10 )
      {
        v14 = *v5;
        if ( (v6 == v19 || v14 == a2) && (a3 >= a2 || v14 == a2) && (a3 <= a2 || v6 == v19) )
        {
          if ( v5 != (unsigned int *)(v17 - 8) )
          {
            v13 = v5[2] - a3;
LABEL_24:
            v4 = -3;
            if ( v13 < a4 )
              return v4;
          }
          return 0;
        }
      }
    }
    return -3;
  }
  return v4;
}
