/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_DAC91
// Address: 0x000DAC91

//----- (000DAC91) --------------------------------------------------------
_BYTE *__usercall sub_DAC91@<eax>(_BYTE *result@<eax>, _DWORD *a2@<edx>)
{
  int v2; // esi
  unsigned int v3; // ecx
  int v4; // edx

  v2 = 0;
  v3 = 0;
  do
  {
    v4 = (*result++ & 0x7F) << v3;
    v3 += 7;
    v2 |= v4;
  }
  while ( (char)*(result - 1) < 0 );
  if ( v3 <= 0x1F && (*(result - 1) & 0x40) != 0 )
    v2 |= -1 << v3;
  *a2 = v2;
  return result;
}
