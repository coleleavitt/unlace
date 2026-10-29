/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5B7EC
// Address: 0x0005B7EC

//----- (0005B7EC) --------------------------------------------------------
void *__fastcall sub_5B7EC(int a1, unsigned int a2)
{
  char *v4; // r3
  void *result; // r0

  v4 = *(char **)a1;
  if ( *(_DWORD *)(a1 + 8) < a2 )
  {
    v4 = (char *)sub_77EB0(a1, *(void **)a1, a2, 1u);
    *(_DWORD *)a1 = v4;
  }
  result = memset(&v4[*(_DWORD *)(a1 + 4)], 0, a2 - *(_DWORD *)(a1 + 4));
  *(_DWORD *)(a1 + 4) = a2;
  return result;
}
