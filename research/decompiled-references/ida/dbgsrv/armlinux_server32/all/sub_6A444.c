/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6A444
// Address: 0x0006A444

//----- (0006A444) --------------------------------------------------------
size_t __fastcall sub_6A444(const char *a1, int a2)
{
  size_t result; // r0
  size_t v5; // r6
  unsigned int v6; // r7
  void *v7; // r0

  result = sub_775B0((int)a1);
  if ( !result )
  {
    result = sub_77464(a1, 0x1FFu);
    if ( result )
      sub_17188("Cannot create directory '%s' for recording conversations into", a1);
  }
  if ( a1 && (result = strlen(a1), (v5 = result) != 0) )
  {
    v6 = result + 1;
    v7 = *(void **)(a2 + 96);
    if ( v6 > *(_DWORD *)(a2 + 104) )
    {
      v7 = sub_78018(a2 + 96, *(void **)(a2 + 96), v6, 1u);
      *(_DWORD *)(a2 + 96) = v7;
    }
    *(_DWORD *)(a2 + 100) = v6;
    result = (size_t)memmove(v7, a1, v5);
    *(_BYTE *)(*(_DWORD *)(a2 + 96) + v5) = 0;
  }
  else
  {
    *(_DWORD *)(a2 + 100) = 0;
  }
  return result;
}
