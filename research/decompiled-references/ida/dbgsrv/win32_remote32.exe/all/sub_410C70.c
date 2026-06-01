/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_410C70
// Address: 0x00410C70

//----- (00410C70) --------------------------------------------------------
__int8 *__cdecl sub_410C70(int a1, __int8 **a2)
{
  __int8 *v3; // ebx
  __int8 *result; // eax
  unsigned int v5; // edi
  int v6; // ebp
  unsigned int v7; // eax
  int v8; // edi
  unsigned int v9; // ebx
  __int8 *v10; // [esp+10h] [ebp+4h]

  v3 = *a2;
  result = &(*a2)[12 * (_DWORD)a2[1]];
  v10 = result;
  if ( *a2 != result )
  {
    do
    {
      result = sub_464F10(*(char **)v3, 0x3Du);
      if ( result )
      {
        v5 = *((_DWORD *)v3 + 1) != 0 ? *((_DWORD *)v3 + 1) - 1 : 0;
        if ( v5 )
        {
          v6 = *(_DWORD *)(a1 + 4) != 0 ? *(_DWORD *)(a1 + 4) - 1 : 0;
          v7 = v5 + v6 + 1;
          if ( v7 > *(_DWORD *)(a1 + 8) )
          {
            *(_DWORD *)a1 = sub_453B00(a1, *(void **)a1, v5 + v6 + 1, 1u);
            v7 = v5 + v6 + 1;
          }
          *(_DWORD *)(a1 + 4) = v7;
          *(_BYTE *)(v6 + *(_DWORD *)a1 + v5) = 0;
          sub_464310(v6 + *(_DWORD *)a1, *(_DWORD *)v3, v5);
        }
        v8 = *(_DWORD *)(a1 + 4) != 0 ? *(_DWORD *)(a1 + 4) - 1 : 0;
        if ( (unsigned int)(v8 + 2) > *(_DWORD *)(a1 + 8) )
          *(_DWORD *)a1 = sub_453B00(a1, *(void **)a1, v8 + 2, 1u);
        *(_DWORD *)(a1 + 4) = v8 + 2;
        *(_BYTE *)(v8 + *(_DWORD *)a1) = 0;
        result = *(__int8 **)a1;
        *(_BYTE *)(*(_DWORD *)a1 + v8 + 1) = 0;
      }
      v3 += 12;
    }
    while ( v3 != v10 );
  }
  v9 = *(_DWORD *)(a1 + 4);
  if ( v9 > 1 )
  {
    if ( v9 + 1 > *(_DWORD *)(a1 + 8) )
      *(_DWORD *)a1 = sub_453B00(a1, *(void **)a1, v9 + 1, 1u);
    *(_DWORD *)(a1 + 4) = v9 + 1;
    *(_BYTE *)(v9 + *(_DWORD *)a1 - 1) = 0;
    result = *(__int8 **)a1;
    *(_BYTE *)(*(_DWORD *)a1 + v9) = 0;
  }
  return result;
}
