/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_629FC
// Address: 0x000629FC

//----- (000629FC) --------------------------------------------------------
unsigned int __fastcall sub_629FC(int a1, int a2)
{
  unsigned int result; // r0
  unsigned int v5; // r3
  signed int v6; // r8
  int v7; // r6
  _DWORD *v8; // r5
  char *v9; // r5
  char *v10; // r0

  result = sub_762E4((unsigned __int8 **)a2, *(_DWORD *)(a2 + 4));
  v5 = *(_DWORD *)(a1 + 4);
  v6 = result;
  if ( result > v5 )
  {
    v10 = *(char **)a1;
    if ( (unsigned int)v6 > *(_DWORD *)(a1 + 8) )
    {
      v10 = (char *)sub_78018(a1, *(void **)a1, v6, 0x10u);
      v5 = *(_DWORD *)(a1 + 4);
      *(_DWORD *)a1 = v10;
    }
    result = (unsigned int)memset(&v10[16 * v5], 0, 16 * (v6 - v5));
    *(_DWORD *)(a1 + 4) = v6;
  }
  else if ( result != v5 && result < v5 )
  {
    *(_DWORD *)(a1 + 4) = result;
  }
  if ( v6 > 0 )
  {
    v7 = 0;
    do
    {
      v8 = *(_DWORD **)a1;
      v8[4 * v7] = sub_763AC((unsigned __int8 **)a2, *(_DWORD *)(a2 + 4)) - 1;
      v9 = (char *)&v8[4 * v7++];
      *((_DWORD *)v9 + 1) = sub_763AC((unsigned __int8 **)a2, *(_DWORD *)(a2 + 4)) - 1;
      *((_DWORD *)v9 + 2) = sub_763AC((unsigned __int8 **)a2, *(_DWORD *)(a2 + 4)) - 1;
      result = sub_762E4((unsigned __int8 **)a2, *(_DWORD *)(a2 + 4)) != 0;
      v9[12] = result;
    }
    while ( v6 != v7 );
  }
  return result;
}
