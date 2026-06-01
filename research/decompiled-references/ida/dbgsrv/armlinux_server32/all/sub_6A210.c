/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6A210
// Address: 0x0006A210

//----- (0006A210) --------------------------------------------------------
const char *__fastcall sub_6A210(const char *result)
{
  const char *v1; // r4
  size_t v2; // r5
  unsigned int v3; // r7
  void *v4; // r0

  if ( result && (v1 = result, result = (const char *)strlen(result), (v2 = (size_t)result) != 0) )
  {
    v3 = (unsigned int)(result + 1);
    v4 = (void *)dword_D4BA0;
    if ( v3 > dword_D4BA8 )
    {
      v4 = sub_78018((int)&dword_D4BA0, (void *)dword_D4BA0, v3, 1u);
      dword_D4BA0 = (int)v4;
    }
    dword_D4BA4 = v3;
    result = (const char *)memmove(v4, v1, v2);
    *(_BYTE *)(dword_D4BA0 + v2) = 0;
  }
  else
  {
    dword_D4BA4 = 0;
  }
  return result;
}
// D4BA0: using guessed type int dword_D4BA0;
// D4BA4: using guessed type int dword_D4BA4;
// D4BA8: using guessed type int dword_D4BA8;
