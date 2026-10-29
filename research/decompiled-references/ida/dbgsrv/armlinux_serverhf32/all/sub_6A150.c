/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6A150
// Address: 0x0006A150

//----- (0006A150) --------------------------------------------------------
const char *__fastcall sub_6A150(const char *result)
{
  const char *v1; // r4
  size_t v2; // r5
  unsigned int v3; // r7
  void *v4; // r0

  if ( result && (v1 = result, result = (const char *)strlen(result), (v2 = (size_t)result) != 0) )
  {
    v3 = (unsigned int)(result + 1);
    v4 = (void *)dword_D3B74;
    if ( v3 > dword_D3B7C )
    {
      v4 = sub_77EB0((int)&dword_D3B74, (void *)dword_D3B74, v3, 1u);
      dword_D3B74 = (int)v4;
    }
    dword_D3B78 = v3;
    result = (const char *)memmove(v4, v1, v2);
    *(_BYTE *)(dword_D3B74 + v2) = 0;
  }
  else
  {
    dword_D3B78 = 0;
  }
  return result;
}
// D3B74: using guessed type int dword_D3B74;
// D3B78: using guessed type int dword_D3B78;
// D3B7C: using guessed type int dword_D3B7C;
