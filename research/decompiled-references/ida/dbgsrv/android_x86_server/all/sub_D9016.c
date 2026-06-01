/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D9016
// Address: 0x000D9016

//----- (000D9016) --------------------------------------------------------
_BYTE *__usercall sub_D9016@<eax>(_BYTE *result@<eax>, _DWORD *a2@<edx>)
{
  int v2; // esi
  int v3; // ecx
  int v4; // edi

  v2 = 0;
  v3 = 0;
  do
  {
    v4 = (*result++ & 0x7F) << v3;
    v3 += 7;
    v2 |= v4;
  }
  while ( (char)*(result - 1) < 0 );
  *a2 = v2;
  return result;
}
