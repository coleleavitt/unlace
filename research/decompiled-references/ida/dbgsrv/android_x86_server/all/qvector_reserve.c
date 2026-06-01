/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qvector_reserve
// Address: 0x000B0E00

//----- (000B0E00) --------------------------------------------------------
void *__cdecl qvector_reserve(int a2, void *ptr, unsigned int a4, unsigned int a5)
{
  unsigned int v5; // esi
  unsigned int v6; // edi
  size_t v7; // ecx
  void *result; // eax

  if ( !a2 )
  {
    if ( !(_BYTE)under_debugger )
      interr(2676);
    BUG();
  }
  v5 = 2 * *(_DWORD *)(a2 + 8);
  v6 = a4;
  if ( v5 > a4 )
    v6 = 2 * *(_DWORD *)(a2 + 8);
  if ( a5 && v6 && 0xFFFFFFFF / a5 < v6 )
  {
    if ( v5 <= a4 )
      goto LABEL_20;
    if ( a4 )
    {
      v6 = a4;
      if ( 0xFFFFFFFF / a5 < a4 )
LABEL_20:
        sub_B0D70();
    }
    else
    {
      v6 = 0;
    }
  }
  v7 = v6 * a5;
  if ( v6 * a5 >= 0x7FFFFFFF )
    goto LABEL_20;
  if ( !v7 )
  {
    free(ptr);
    sub_B0D70();
  }
  result = realloc(ptr, v7);
  if ( !result )
  {
    set_qerrno(1);
    goto LABEL_20;
  }
  *(_DWORD *)(a2 + 8) = v6;
  return result;
}
// 13E34C: using guessed type int under_debugger;
