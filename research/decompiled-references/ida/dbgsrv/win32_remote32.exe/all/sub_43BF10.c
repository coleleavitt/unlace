/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43BF10
// Address: 0x0043BF10

//----- (0043BF10) --------------------------------------------------------
int __stdcall sub_43BF10(_DWORD *a1, int a2, int a3)
{
  _DWORD *v3; // edi
  unsigned int v4; // ebx
  int v5; // ecx
  int v6; // ebx
  _DWORD *v7; // edi
  void *v8; // eax
  unsigned int v9; // eax
  _DWORD *v10; // edx
  _DWORD *v11; // edi
  _DWORD *v13; // [esp+10h] [ebp-10h]
  int v14; // [esp+28h] [ebp+8h]
  int v15; // [esp+28h] [ebp+8h]
  unsigned int v16; // [esp+30h] [ebp+10h]

  v3 = a1 + 37;
  v13 = a1 + 37;
  sub_415D30(a1 + 37, 0);
  (*(void (__stdcall **)(_DWORD *, _DWORD *, int))(*a1 + 12))(a1, a1 + 37, a3);
  v4 = a1[38];
  v16 = v4;
  v5 = *(_DWORD *)(a2 + 4);
  v14 = v5;
  if ( v5 )
  {
    v6 = 0;
    do
    {
      v7 = (_DWORD *)(v6 + *(_DWORD *)a2);
      v8 = (void *)v7[1];
      if ( v8 )
      {
        v7[2] = 0;
        sub_453A20(v8);
        v5 = v14;
        v7[1] = 0;
        v7[3] = 0;
      }
      v6 += 16;
      v14 = --v5;
    }
    while ( v5 );
    v4 = v16;
    v3 = v13;
  }
  *(_DWORD *)(a2 + 4) = 0;
  if ( v4 > *(_DWORD *)(a2 + 8) )
    *(_DWORD *)a2 = sub_453B00(a2, *(void **)a2, v4, 0x10u);
  if ( v4 )
  {
    v15 = 0;
    do
    {
      v9 = *(_DWORD *)(a2 + 4) + 1;
      if ( v9 > *(_DWORD *)(a2 + 8) )
        *(_DWORD *)a2 = sub_453B00(a2, *(void **)a2, v9, 0x10u);
      v10 = (_DWORD *)(*(_DWORD *)a2 + 16 * *(_DWORD *)(a2 + 4));
      v10[1] = 0;
      v10[2] = 0;
      v10[3] = 0;
      ++*(_DWORD *)(a2 + 4);
      v11 = (_DWORD *)(v15 + *v3);
      *v10 = *v11;
      sub_403330((int)(v10 + 1), (_DWORD *)((char *)v11 + (v11[6] > 1u ? 0x10 : 0) + 4));
      v15 += 32;
      v3 = v13;
      --v4;
    }
    while ( v4 );
  }
  return 1;
}
