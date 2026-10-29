/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_96D30
// Address: 0x00096D30

//----- (00096D30) --------------------------------------------------------
unsigned int __cdecl sub_96D30(int a1, char a2, int a3)
{
  signed int v3; // edi
  int v4; // edx
  int v5; // eax
  __suseconds_t v6; // eax
  unsigned int v7; // edx
  int v8; // edi
  int v9; // ecx
  _DWORD *v10; // eax
  int v11; // ecx
  int v13; // [esp+Ch] [ebp-20h]
  __int16 v14; // [esp+11h] [ebp-1Bh]
  char v15; // [esp+13h] [ebp-19h]

  v3 = *(_DWORD *)(a1 + 12);
  v4 = 0;
  v5 = 0;
  if ( v3 >= 0 && *(_DWORD *)(a1 + 4) )
  {
    v6 = qtime64();
    v5 = sub_94A20(v6, v7, v3);
  }
  v13 = v5;
  v8 = v4;
  v9 = *(_DWORD *)(a1 + 20);
  if ( *(_DWORD *)(a1 + 24) >= (unsigned int)(v9 + 1) )
  {
    v10 = *(_DWORD **)(a1 + 16);
  }
  else
  {
    v10 = qvector_reserve(a1 + 16, *(void **)(a1 + 16), v9 + 1, 0x14u);
    *(_DWORD *)(a1 + 16) = v10;
    v9 = *(_DWORD *)(a1 + 20);
  }
  v11 = 5 * v9;
  v10[v11] = a3;
  v10[v11 + 1] = 0;
  v10[v11 + 3] = v8;
  v10[v11 + 2] = v13;
  LOBYTE(v10[v11 + 4]) = a2;
  HIBYTE(v10[v11 + 4]) = v15;
  *(_WORD *)((char *)&v10[v11 + 4] + 1) = v14;
  ++*(_DWORD *)(a1 + 20);
  return __readgsdword(0x14u);
}
// 96D75: variable 'v7' is possibly undefined
// 96D81: variable 'v4' is possibly undefined
// 96DE4: variable 'v15' is possibly undefined
// 96DED: variable 'v14' is possibly undefined
