/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_615D8
// Address: 0x000615D8

//----- (000615D8) --------------------------------------------------------
unsigned int __fastcall sub_615D8(int a1, __int64 *a2)
{
  unsigned int result; // r0
  __int64 v5; // kr00_8
  unsigned __int8 *v6; // r3
  size_t v8; // r4
  unsigned int v9; // r7
  void *v10; // r0

  *(_DWORD *)a1 = sub_763AC((unsigned __int8 **)a2, *((_DWORD *)a2 + 1)) - 1;
  result = sub_763AC((unsigned __int8 **)a2, *((_DWORD *)a2 + 1)) - 1;
  *(_DWORD *)(a1 + 4) = result;
  v5 = *a2;
  if ( HIDWORD(v5) <= (unsigned int)v5 )
    goto LABEL_6;
  v6 = (unsigned __int8 *)(v5 + 1);
  if ( *(_BYTE *)v5 )
  {
    while ( (unsigned __int8 *)HIDWORD(v5) != v6 )
    {
      if ( !*v6++ )
        goto LABEL_7;
    }
    goto LABEL_6;
  }
LABEL_7:
  *(_DWORD *)a2 = v6;
  if ( !(_DWORD)v5 || (result = strlen((const char *)v5), (v8 = result) == 0) )
  {
LABEL_6:
    *(_DWORD *)(a1 + 12) = 0;
    return result;
  }
  v9 = result + 1;
  v10 = *(void **)(a1 + 8);
  if ( v9 > *(_DWORD *)(a1 + 16) )
  {
    v10 = sub_78018(a1 + 8, *(void **)(a1 + 8), v9, 1u);
    *(_DWORD *)(a1 + 8) = v10;
  }
  *(_DWORD *)(a1 + 12) = v9;
  result = (unsigned int)memmove(v10, (const void *)v5, v8);
  *(_BYTE *)(*(_DWORD *)(a1 + 8) + v8) = 0;
  return result;
}
