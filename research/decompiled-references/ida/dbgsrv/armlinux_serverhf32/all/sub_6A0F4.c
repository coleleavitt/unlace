/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6A0F4
// Address: 0x0006A0F4

//----- (0006A0F4) --------------------------------------------------------
const char *__fastcall sub_6A0F4(const char *result)
{
  const char *v1; // r4
  size_t v2; // r5
  unsigned int v3; // r7
  void *v4; // r0

  if ( result && (v1 = result, result = (const char *)strlen(result), (v2 = (size_t)result) != 0) )
  {
    v3 = (unsigned int)(result + 1);
    v4 = (void *)dword_D3B68;
    if ( v3 > dword_D3B70 )
    {
      v4 = sub_77EB0((int)&dword_D3B68, (void *)dword_D3B68, v3, 1u);
      dword_D3B68 = (int)v4;
    }
    dword_D3B6C = v3;
    result = (const char *)memmove(v4, v1, v2);
    *(_BYTE *)(dword_D3B68 + v2) = 0;
  }
  else
  {
    dword_D3B6C = 0;
  }
  return result;
}
// D3B68: using guessed type int dword_D3B68;
// D3B6C: using guessed type int dword_D3B6C;
// D3B70: using guessed type int dword_D3B70;
