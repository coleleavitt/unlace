/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6A264
// Address: 0x0006A264

//----- (0006A264) --------------------------------------------------------
int __fastcall sub_6A264(const void *a1, int a2)
{
  size_t v4; // r0
  size_t v5; // r6
  int result; // r0
  unsigned int v7; // r7
  void *v8; // r0

  if ( a1 && (v4 = strlen((const char *)a1), (v5 = v4) != 0) )
  {
    v7 = v4 + 1;
    v8 = *(void **)(a2 + 72);
    if ( v7 > *(_DWORD *)(a2 + 80) )
    {
      v8 = sub_77EB0(a2 + 72, *(void **)(a2 + 72), v7, 1u);
      *(_DWORD *)(a2 + 72) = v8;
    }
    *(_DWORD *)(a2 + 76) = v7;
    memmove(v8, a1, v5);
    *(_BYTE *)(*(_DWORD *)(a2 + 72) + v5) = 0;
  }
  else
  {
    *(_DWORD *)(a2 + 76) = 0;
  }
  result = sub_77448((int)a1);
  if ( !result )
  {
    result = sub_772FC((const char *)a1, 0x1FFu);
    if ( result )
      sub_16FE4("Cannot create directory '%s' for bad requests", (const char *)a1);
  }
  return result;
}
