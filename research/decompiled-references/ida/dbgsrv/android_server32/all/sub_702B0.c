/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_702B0
// Address: 0x000702B0

//----- (000702B0) --------------------------------------------------------
int *__fastcall sub_702B0(const void *a1)
{
  size_t v2; // r0
  size_t v3; // r5
  void *v4; // r1
  unsigned int v5; // r6
  int *result; // r0

  if ( a1 && (v2 = strlen((const char *)a1)) != 0 )
  {
    v3 = v2;
    v4 = (void *)dword_DE4D0;
    v5 = v2 + 1;
    if ( dword_DE4D8 < v2 + 1 )
    {
      v4 = qvector_reserve((int)&dword_DE4D0, (void *)dword_DE4D0, v5, 1u);
      dword_DE4D0 = (int)v4;
    }
    dword_DE4D4 = v5;
    memmove(v4, a1, v3);
    result = (int *)dword_DE4D0;
    *(_BYTE *)(dword_DE4D0 + v3) = 0;
  }
  else
  {
    dword_DE4D4 = 0;
    return &dword_DE4B8;
  }
  return result;
}
// DE4B8: using guessed type int dword_DE4B8;
// DE4D0: using guessed type int dword_DE4D0;
// DE4D4: using guessed type int dword_DE4D4;
// DE4D8: using guessed type int dword_DE4D8;
