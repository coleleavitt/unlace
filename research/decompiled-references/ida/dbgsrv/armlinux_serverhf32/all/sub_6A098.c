/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6A098
// Address: 0x0006A098

//----- (0006A098) --------------------------------------------------------
const char *__fastcall sub_6A098(const char *result)
{
  const char *v1; // r4
  size_t v2; // r5
  unsigned int v3; // r7
  void *v4; // r0

  if ( result && (v1 = result, result = (const char *)strlen(result), (v2 = (size_t)result) != 0) )
  {
    v3 = (unsigned int)(result + 1);
    v4 = (void *)dword_D3B80;
    if ( v3 > dword_D3B88 )
    {
      v4 = sub_77EB0((int)&dword_D3B80, (void *)dword_D3B80, v3, 1u);
      dword_D3B80 = (int)v4;
    }
    dword_D3B84 = v3;
    result = (const char *)memmove(v4, v1, v2);
    *(_BYTE *)(dword_D3B80 + v2) = 0;
  }
  else
  {
    dword_D3B84 = 0;
  }
  return result;
}
// D3B80: using guessed type int dword_D3B80;
// D3B84: using guessed type int dword_D3B84;
// D3B88: using guessed type int dword_D3B88;
