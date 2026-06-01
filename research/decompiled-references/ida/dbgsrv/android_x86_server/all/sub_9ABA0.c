/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9ABA0
// Address: 0x0009ABA0

//----- (0009ABA0) --------------------------------------------------------
char *__cdecl sub_9ABA0(char *s)
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
    v4 = dword_13C2D0 < (unsigned int)(result + 1);
    v5 = (void *)dword_13C2C8;
    if ( v4 )
    {
      v5 = qvector_reserve((int)&dword_13C2C8, (void *)dword_13C2C8, v3, 1u);
      dword_13C2C8 = (int)v5;
    }
    dword_13C2CC = v3;
    memmove(v5, s, v2);
    result = (char *)dword_13C2C8;
    *(_BYTE *)(dword_13C2C8 + v2) = 0;
  }
  else
  {
    dword_13C2CC = 0;
  }
  return result;
}
// 13C2C8: using guessed type int dword_13C2C8;
// 13C2CC: using guessed type int dword_13C2CC;
// 13C2D0: using guessed type int dword_13C2D0;
