/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_57F50
// Address: 0x00057F50

//----- (00057F50) --------------------------------------------------------
void *__fastcall sub_57F50(int a1, const void *a2, size_t a3)
{
  int v4; // r4
  unsigned int v7; // r6
  unsigned int v9; // r3
  char *v10; // r0
  int v11; // r2

  v4 = *(_DWORD *)(a1 + 4);
  v7 = v4 + a3;
  if ( !__CFADD__(v4, a3) )
  {
    if ( v4 >= v7 )
      return j_memcpy((void *)(*(_DWORD *)a1 + v4), a2, a3);
    goto LABEL_8;
  }
  if ( (unsigned int)v4 <= 0x7FFFFFFE )
  {
    v7 = 0x7FFFFFFF;
LABEL_8:
    v9 = *(_DWORD *)(a1 + 8);
    v10 = *(char **)a1;
    if ( v9 < v7 )
    {
      v10 = (char *)sub_77EB0(a1, *(void **)a1, v7, 1u);
      v11 = *(_DWORD *)(a1 + 4);
      *(_DWORD *)a1 = v10;
    }
    else
    {
      v11 = v4;
    }
    memset(&v10[v11], 0, v7 - v11);
    *(_DWORD *)(a1 + 4) = v7;
    return j_memcpy((void *)(*(_DWORD *)a1 + v4), a2, a3);
  }
  if ( v4 < 0 )
    *(_DWORD *)(a1 + 4) = 0x7FFFFFFF;
  return j_memcpy((void *)(*(_DWORD *)a1 + v4), a2, a3);
}
