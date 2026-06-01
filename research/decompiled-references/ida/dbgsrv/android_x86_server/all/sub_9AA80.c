/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9AA80
// Address: 0x0009AA80

//----- (0009AA80) --------------------------------------------------------
char *__cdecl sub_9AA80(char *s)
{
  char *result; // eax
  size_t v2; // edi
  unsigned int v3; // esi
  bool v4; // cf
  void *v5; // eax

  result = s;
  if ( s && (result = (char *)strlen(s)) != nullptr )
  {
    v2 = (size_t)result;
    v3 = (unsigned int)(result + 1);
    v4 = dword_13C2B8 < (unsigned int)(result + 1);
    v5 = (void *)dword_13C2B0;
    if ( v4 )
    {
      v5 = qvector_reserve((int)&dword_13C2B0, (void *)dword_13C2B0, v3, 1u);
      dword_13C2B0 = (int)v5;
    }
    dword_13C2B4 = v3;
    memmove(v5, s, v2);
    result = (char *)dword_13C2B0;
    *(_BYTE *)(dword_13C2B0 + v2) = 0;
  }
  else
  {
    dword_13C2B4 = 0;
  }
  return result;
}
// 13C2B0: using guessed type int dword_13C2B0;
// 13C2B4: using guessed type int dword_13C2B4;
// 13C2B8: using guessed type int dword_13C2B8;
