/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6A1AC
// Address: 0x0006A1AC

//----- (0006A1AC) --------------------------------------------------------
const char *__fastcall sub_6A1AC(const char *result)
{
  const char *v1; // r4
  size_t v2; // r5
  unsigned int v3; // r7
  void *v4; // r0

  if ( result && (v1 = result, result = (const char *)strlen(result), (v2 = (size_t)result) != 0) )
  {
    v3 = (unsigned int)(result + 1);
    v4 = (void *)dword_D3B8C;
    if ( v3 > dword_D3B94 )
    {
      v4 = sub_77EB0((int)&dword_D3B8C, (void *)dword_D3B8C, v3, 1u);
      dword_D3B8C = (int)v4;
    }
    dword_D3B90 = v3;
    result = (const char *)memmove(v4, v1, v2);
    *(_BYTE *)(dword_D3B8C + v2) = 0;
  }
  else
  {
    dword_D3B90 = 0;
  }
  return result;
}
// D3B8C: using guessed type int dword_D3B8C;
// D3B90: using guessed type int dword_D3B90;
// D3B94: using guessed type int dword_D3B94;
