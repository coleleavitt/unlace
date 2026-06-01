/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5ACC4
// Address: 0x0005ACC4

//----- (0005ACC4) --------------------------------------------------------
_DWORD *__fastcall sub_5ACC4(_DWORD *a1, char *s)
{
  size_t v4; // r7
  void *v5; // r0

  *a1 = 0;
  a1[1] = 0;
  a1[2] = 0;
  if ( s )
  {
    v4 = strlen(s);
    v5 = sub_78018((int)a1, nullptr, v4 + 1, 1u);
    *a1 = v5;
    a1[1] = v4 + 1;
    memmove(v5, s, v4);
    *(_BYTE *)(*a1 + v4) = 0;
  }
  return a1;
}
