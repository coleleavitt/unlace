/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9AB10
// Address: 0x0009AB10

//----- (0009AB10) --------------------------------------------------------
char *__cdecl sub_9AB10(char *s)
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
    v4 = dword_13C2C4 < (unsigned int)(result + 1);
    v5 = (void *)dword_13C2BC;
    if ( v4 )
    {
      v5 = qvector_reserve((int)&dword_13C2BC, (void *)dword_13C2BC, v3, 1u);
      dword_13C2BC = (int)v5;
    }
    dword_13C2C0 = v3;
    memmove(v5, s, v2);
    result = (char *)dword_13C2BC;
    *(_BYTE *)(dword_13C2BC + v2) = 0;
  }
  else
  {
    dword_13C2C0 = 0;
  }
  return result;
}
// 13C2BC: using guessed type int dword_13C2BC;
// 13C2C0: using guessed type int dword_13C2C0;
// 13C2C4: using guessed type int dword_13C2C4;
