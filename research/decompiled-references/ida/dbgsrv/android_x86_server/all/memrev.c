/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: memrev
// Address: 0x000B3290

//----- (000B3290) --------------------------------------------------------
_BYTE *__cdecl memrev(_BYTE *a1, int a2)
{
  _BYTE *result; // eax
  char *v3; // edx
  int v4; // ecx
  char *v5; // esi
  char v6; // bl

  result = a1;
  if ( a2 >= 2 )
  {
    v3 = &a1[a2 - 1];
    v4 = a2 + 2;
    v5 = a1;
    do
    {
      v6 = *v5;
      *v5 = *v3;
      *v3 = v6;
      ++v5;
      v4 -= 2;
      --v3;
    }
    while ( v4 > 3 );
  }
  return result;
}
