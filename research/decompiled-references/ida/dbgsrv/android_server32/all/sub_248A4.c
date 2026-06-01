/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_248A4
// Address: 0x000248A4

//----- (000248A4) --------------------------------------------------------
int __fastcall sub_248A4(int a1, int a2, int a3, int *a4)
{
  int v5; // r7
  int *v6; // r5
  int v7; // r0
  int v8; // r0
  int *v9; // r1
  int v10; // r6
  unsigned int v11; // r0
  int v12; // r7
  unsigned int i; // r4

  v5 = -1;
  if ( a4 )
  {
    v6 = a4;
    v7 = *(_DWORD *)(a1 + 276);
    *(_DWORD *)(v7 + 40) = a3;
    *(_DWORD *)(v7 + 44) = a2;
    v8 = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 276) + 12))(*(_DWORD *)(a1 + 276));
    v9 = (int *)(a1 + 276);
    if ( v8 )
    {
      v10 = *v9;
      v11 = *(_DWORD *)(*v9 + 12);
      v5 = 1;
      if ( v11 )
      {
        v12 = 0;
        for ( i = 0; i < v11; ++i )
        {
          if ( (*(_DWORD *)(v10 + 40) & *(unsigned __int8 *)(**(_DWORD **)(v10 + 4) + v12 + 8)) != 0 )
          {
            sub_26C34(*(_DWORD *)(v10 + 8) + v12, v6, v10);
            v11 = *(_DWORD *)(v10 + 12);
          }
          v6 += 6;
          v12 += 20;
        }
        return 1;
      }
    }
  }
  return v5;
}
