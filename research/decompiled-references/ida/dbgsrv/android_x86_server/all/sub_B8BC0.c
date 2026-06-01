/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_B8BC0
// Address: 0x000B8BC0

//----- (000B8BC0) --------------------------------------------------------
int __cdecl sub_B8BC0(int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  int result; // eax
  int v5; // ebx
  unsigned int *v6; // esi
  unsigned int v7; // ecx
  int v8; // ebx
  int v9; // edi
  unsigned int v10; // ecx
  int v11; // edi
  unsigned int *i; // ecx
  unsigned int v13; // ecx
  unsigned int v14; // [esp+4h] [ebp-14h]
  unsigned int v15; // [esp+8h] [ebp-10h]

  result = 0;
  if ( a2 == a3 )
    return result;
  v5 = a1;
  v6 = *(unsigned int **)(a1 + 12);
  if ( !v6 || *v6 > a2 || (v7 = v6[1], v7 <= a2) )
  {
    v8 = *(_DWORD *)(a1 + 4);
    v6 = *(unsigned int **)a1;
    if ( 8 * v8 )
    {
      v9 = (8 * v8) >> 3;
      v6 = *(unsigned int **)a1;
      v10 = v9;
      do
      {
        v10 >>= 1;
        if ( v6[2 * v10 + 1] <= a2 )
        {
          v6 += 2 * v10 + 2;
          v10 = v9 + ~v10;
        }
        v9 = v10;
      }
      while ( v10 );
    }
    result = -1;
    if ( v6 == (unsigned int *)(*(_DWORD *)a1 + 8 * v8) )
      return result;
    if ( *v6 > a2 )
      return result;
    v5 = a1;
    if ( v6[1] <= a2 )
      return result;
    *(_DWORD *)(a1 + 12) = v6;
    v7 = v6[1];
  }
  result = -2;
  v14 = v7;
  v15 = a4 + a2;
  if ( v7 >= a4 + a2 )
  {
    result = -3;
    if ( a4 + a3 > a3 )
    {
      v11 = 8 * *(_DWORD *)(v5 + 4);
      if ( !v11 )
        return 0;
      for ( i = *(unsigned int **)v5; i[1] <= a3; i += 2 )
      {
        v11 -= 8;
        if ( !v11 )
          return 0;
      }
      if ( *i <= a3 )
      {
        if ( v6 == i )
        {
          v13 = *v6;
          if ( (v14 == v15 || v13 == a2)
            && (a3 >= a2 || v13 == a2)
            && (a3 <= a2 || v14 == v15)
            && (v6 == (unsigned int *)(*(_DWORD *)v5 + 8 * *(_DWORD *)(v5 + 4) - 8) || v6[2] - a3 >= a4) )
          {
            return 0;
          }
        }
      }
      else if ( v6 == i || *i - a3 >= a4 )
      {
        return 0;
      }
    }
  }
  return result;
}
