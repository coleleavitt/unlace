/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6A324
// Address: 0x0006A324

//----- (0006A324) --------------------------------------------------------
const char *__fastcall sub_6A324(const char *result)
{
  const char *v1; // r4
  size_t v2; // r5
  unsigned int v3; // r7
  void *v4; // r0

  if ( result && (v1 = result, result = (const char *)strlen(result), (v2 = (size_t)result) != 0) )
  {
    v3 = (unsigned int)(result + 1);
    v4 = (void *)dword_D4BAC;
    if ( v3 > dword_D4BB4 )
    {
      v4 = sub_78018((int)&dword_D4BAC, (void *)dword_D4BAC, v3, 1u);
      dword_D4BAC = (int)v4;
    }
    dword_D4BB0 = v3;
    result = (const char *)memmove(v4, v1, v2);
    *(_BYTE *)(dword_D4BAC + v2) = 0;
  }
  else
  {
    dword_D4BB0 = 0;
  }
  return result;
}
// D4BAC: using guessed type int dword_D4BAC;
// D4BB0: using guessed type int dword_D4BB0;
// D4BB4: using guessed type int dword_D4BB4;
