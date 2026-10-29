/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_690C0
// Address: 0x000690C0

//----- (000690C0) --------------------------------------------------------
int *__cdecl sub_690C0(int a1, int a2, int *a3)
{
  int v3; // ecx
  int *result; // eax
  int v5; // edx
  int *v6; // ecx
  int v7; // edi
  int v8; // ebx
  int v9; // [esp+8h] [ebp-14h]

  v3 = *(_DWORD *)(a1 + 32);
  if ( *(_DWORD *)(a1 + 36) >= (unsigned int)(v3 + 1) )
  {
    result = *(int **)(a1 + 28);
  }
  else
  {
    result = (int *)qvector_reserve(a1 + 28, *(void **)(a1 + 28), v3 + 1, 0x1Cu);
    *(_DWORD *)(a1 + 28) = result;
    v3 = *(_DWORD *)(a1 + 32);
  }
  v5 = 7 * v3;
  result[v5] = 0;
  result[v5 + 1] = 0;
  result[v5 + 2] = 0;
  ++*(_DWORD *)(a1 + 32);
  result[v5 + 3] = *(_DWORD *)a1;
  result[v5 + 4] = *(_DWORD *)(a1 + 4);
  result[v5 + 6] = *(_DWORD *)(a1 + 40);
  result[v5 + 5] = a2;
  if ( a3 )
  {
    v6 = &result[v5];
    result = (int *)((char *)result + v5 * 4 + 4);
    v9 = *a3;
    v7 = a3[1];
    v8 = a3[2];
    *a3 = *v6;
    a3[1] = *result;
    a3[2] = result[1];
    *v6 = v9;
    *result = v7;
    result[1] = v8;
  }
  return result;
}
