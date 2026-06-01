/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_61D04
// Address: 0x00061D04

//----- (00061D04) --------------------------------------------------------
unsigned int __fastcall sub_61D04(int a1, __int64 *a2)
{
  unsigned int v4; // r0
  char v5; // r3
  unsigned int result; // r0
  __int64 v7; // kr00_8
  unsigned __int8 *v8; // r3
  size_t v10; // r4
  unsigned int v11; // r7
  void *v12; // r0

  *(_DWORD *)a1 = sub_7617C((unsigned __int8 **)a2, *((_DWORD *)a2 + 1));
  v4 = sub_7617C((unsigned __int8 **)a2, *((_DWORD *)a2 + 1));
  v5 = v4;
  if ( v4 )
    v5 = 1;
  *(_BYTE *)(a1 + 4) = v5;
  result = sub_76244((unsigned __int8 **)a2, *((_DWORD *)a2 + 1)) - 1;
  *(_DWORD *)(a1 + 8) = result;
  v7 = *a2;
  if ( HIDWORD(v7) <= (unsigned int)v7 )
    goto LABEL_8;
  v8 = (unsigned __int8 *)(v7 + 1);
  if ( *(_BYTE *)v7 )
  {
    while ( (unsigned __int8 *)HIDWORD(v7) != v8 )
    {
      if ( !*v8++ )
        goto LABEL_9;
    }
    goto LABEL_8;
  }
LABEL_9:
  *(_DWORD *)a2 = v8;
  if ( !(_DWORD)v7 || (result = strlen((const char *)v7), (v10 = result) == 0) )
  {
LABEL_8:
    *(_DWORD *)(a1 + 16) = 0;
    return result;
  }
  v11 = result + 1;
  v12 = *(void **)(a1 + 12);
  if ( v11 > *(_DWORD *)(a1 + 20) )
  {
    v12 = sub_77EB0(a1 + 12, *(void **)(a1 + 12), v11, 1u);
    *(_DWORD *)(a1 + 12) = v12;
  }
  *(_DWORD *)(a1 + 16) = v11;
  result = (unsigned int)memmove(v12, (const void *)v7, v10);
  *(_BYTE *)(*(_DWORD *)(a1 + 12) + v10) = 0;
  return result;
}
