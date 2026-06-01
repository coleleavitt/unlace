/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4790F8
// Address: 0x004790F8

//----- (004790F8) --------------------------------------------------------
char sub_4790F8()
{
  int *v0; // eax
  int v1; // edx
  uintptr_t v2; // esi

  v0 = dword_4B7AB0;
  v1 = 0;
  v2 = __security_cookie;
  do
  {
    ++v1;
    *v0++ = v2;
  }
  while ( v1 != (&dword_4B7B38 < (LPCRITICAL_SECTION *)dword_4B7AB0 ? 0 : 34) );
  return 1;
}
// 4B7AB0: using guessed type int dword_4B7AB0[34];
