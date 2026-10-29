/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5B970
// Address: 0x0005B970

//----- (0005B970) --------------------------------------------------------
void *__fastcall sub_5B970(int a1, unsigned int a2)
{
  char *v4; // r3
  void *result; // r0

  v4 = *(char **)a1;
  if ( *(_DWORD *)(a1 + 8) < a2 )
  {
    v4 = (char *)sub_78018(a1, *(void **)a1, a2, 1u);
    *(_DWORD *)a1 = v4;
  }
  result = memset(&v4[*(_DWORD *)(a1 + 4)], 0, a2 - *(_DWORD *)(a1 + 4));
  *(_DWORD *)(a1 + 4) = a2;
  return result;
}
