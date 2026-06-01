/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_2DAC0
// Address: 0x0002DAC0

//----- (0002DAC0) --------------------------------------------------------
char *__cdecl sub_2DAC0(int a1, char *a2)
{
  char *result; // eax
  unsigned int v3; // edx
  int v4; // edx
  int v5; // ecx
  int v6; // edi
  int v7; // ebx
  _DWORD *v8; // esi
  int v9; // ecx
  int v10; // ecx
  int v11; // [esp+4h] [ebp-18h]
  int v12; // [esp+8h] [ebp-14h]

  result = *(char **)a1;
  v3 = *(_DWORD *)(a1 + 8);
  if ( *(_DWORD *)a1 > (unsigned int)a2 || &result[12 * v3] <= a2 )
  {
    v7 = *(_DWORD *)(a1 + 4);
    if ( v3 < v7 + 1 )
    {
      result = (char *)qvector_reserve(a1, result, v7 + 1, 0xCu);
      *(_DWORD *)a1 = result;
      v7 = *(_DWORD *)(a1 + 4);
    }
    v8 = (_DWORD *)(a1 + 4);
    v9 = 3 * v7;
    *(_DWORD *)&result[4 * v9] = *(_DWORD *)a2;
    *(_DWORD *)a2 = 0;
    *(_DWORD *)&result[4 * v9 + 4] = *((_DWORD *)a2 + 1);
    *((_DWORD *)a2 + 1) = 0;
    *(_DWORD *)&result[4 * v9 + 8] = *((_DWORD *)a2 + 2);
    *((_DWORD *)a2 + 2) = 0;
  }
  else
  {
    v4 = *(_DWORD *)a2;
    v11 = *((_DWORD *)a2 + 1);
    *(_DWORD *)a2 = 0;
    *((_DWORD *)a2 + 1) = 0;
    v12 = *((_DWORD *)a2 + 2);
    *((_DWORD *)a2 + 2) = 0;
    v5 = *(_DWORD *)(a1 + 4);
    if ( *(_DWORD *)(a1 + 8) >= (unsigned int)(v5 + 1) )
    {
      result = *(char **)a1;
    }
    else
    {
      v6 = v4;
      result = (char *)qvector_reserve(a1, *(void **)a1, v5 + 1, 0xCu);
      *(_DWORD *)a1 = result;
      v5 = *(_DWORD *)(a1 + 4);
      v4 = v6;
    }
    v10 = 3 * v5;
    *(_DWORD *)&result[4 * v10] = v4;
    *(_DWORD *)&result[4 * v10 + 4] = v11;
    *(_DWORD *)&result[4 * v10 + 8] = v12;
    v8 = (_DWORD *)(a1 + 4);
  }
  ++*v8;
  return result;
}
