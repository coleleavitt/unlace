/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_44AA60
// Address: 0x0044AA60

//----- (0044AA60) --------------------------------------------------------
unsigned int __cdecl sub_44AA60(int a1, int a2)
{
  unsigned int *v2; // ebx
  unsigned int v3; // eax
  unsigned int v4; // esi
  unsigned __int8 *v5; // ecx
  void *v6; // edx
  unsigned int v7; // eax
  unsigned int v8; // eax
  unsigned int v9; // esi
  unsigned __int8 *v10; // ecx
  unsigned int v11; // edx
  unsigned int result; // eax

  v2 = (unsigned int *)(a2 + 4);
  v3 = sub_4541E0((unsigned __int8 **)a2, *(_DWORD *)(a2 + 4));
  v4 = v3;
  if ( v3 > *(_DWORD *)(a1 + 4) )
  {
    if ( v3 > *(_DWORD *)(a1 + 8) )
      *(_DWORD *)a1 = sub_453B00(a1, *(void **)a1, v3, 1u);
    sub_464890((__m128i *)(*(_DWORD *)(a1 + 4) + *(_DWORD *)a1), 0, v4 - *(_DWORD *)(a1 + 4));
    v2 = (unsigned int *)(a2 + 4);
    goto LABEL_7;
  }
  if ( v3 != *(_DWORD *)(a1 + 4) && v3 < *(_DWORD *)(a1 + 4) )
LABEL_7:
    *(_DWORD *)(a1 + 4) = v4;
  v5 = *(unsigned __int8 **)a2;
  v6 = *(void **)a1;
  v7 = *(_DWORD *)a2 + v4;
  if ( v7 >= *(_DWORD *)a2 && v7 <= *(_DWORD *)(a2 + 4) )
  {
    *(_DWORD *)a2 = v7;
    sub_464310((unsigned int)v6, (unsigned int)v5, v4);
  }
  *(_DWORD *)(a1 + 12) = sub_4542B0((unsigned __int8 **)a2, *v2) - 1;
  v8 = sub_4541E0((unsigned __int8 **)a2, *v2);
  v9 = v8;
  if ( v8 > *(_DWORD *)(a1 + 20) )
  {
    if ( v8 > *(_DWORD *)(a1 + 24) )
      *(_DWORD *)(a1 + 16) = sub_453B00(a1 + 16, *(void **)(a1 + 16), v8, 1u);
    sub_464890((__m128i *)(*(_DWORD *)(a1 + 20) + *(_DWORD *)(a1 + 16)), 0, v9 - *(_DWORD *)(a1 + 20));
    goto LABEL_17;
  }
  if ( v8 != *(_DWORD *)(a1 + 20) && v8 < *(_DWORD *)(a1 + 20) )
LABEL_17:
    *(_DWORD *)(a1 + 20) = v9;
  v10 = *(unsigned __int8 **)a2;
  v11 = *(_DWORD *)(a1 + 16);
  result = *(_DWORD *)a2 + v9;
  if ( result >= *(_DWORD *)a2 && result <= *(_DWORD *)(a2 + 4) )
  {
    *(_DWORD *)a2 = result;
    return sub_464310(v11, (unsigned int)v10, v9);
  }
  return result;
}
