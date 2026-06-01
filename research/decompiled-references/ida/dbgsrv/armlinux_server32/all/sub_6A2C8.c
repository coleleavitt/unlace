/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6A2C8
// Address: 0x0006A2C8

//----- (0006A2C8) --------------------------------------------------------
const char *__fastcall sub_6A2C8(const char *result)
{
  const char *v1; // r4
  size_t v2; // r5
  unsigned int v3; // r7
  void *v4; // r0

  if ( result && (v1 = result, result = (const char *)strlen(result), (v2 = (size_t)result) != 0) )
  {
    v3 = (unsigned int)(result + 1);
    v4 = (void *)dword_D4B94;
    if ( v3 > dword_D4B9C )
    {
      v4 = sub_78018((int)&dword_D4B94, (void *)dword_D4B94, v3, 1u);
      dword_D4B94 = (int)v4;
    }
    dword_D4B98 = v3;
    result = (const char *)memmove(v4, v1, v2);
    *(_BYTE *)(dword_D4B94 + v2) = 0;
  }
  else
  {
    dword_D4B98 = 0;
  }
  return result;
}
// D4B94: using guessed type int dword_D4B94;
// D4B98: using guessed type int dword_D4B98;
// D4B9C: using guessed type int dword_D4B9C;
