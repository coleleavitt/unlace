/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: ecmp
// Address: 0x000A4FB0

//----- (000A4FB0) --------------------------------------------------------
int __cdecl ecmp(unsigned __int16 *a1, unsigned __int16 *a2)
{
  unsigned __int16 v2; // dx
  _BOOL4 v3; // ecx
  int v4; // edi
  unsigned __int16 v5; // cx
  int result; // eax

  v2 = a2[7] & 0x7FFF;
  v3 = (a1[7] & 0x8000u) == 0;
  v4 = 2 * v3 - 1;
  if ( (__int16)a1[7] >> 15 != (__int16)a2[7] >> 15 )
    return 2 * v3 - 1;
  v5 = a1[7] & 0x7FFF;
  if ( v5 != v2
    || (v5 = a1[6], v2 = a2[6], v5 != v2)
    || (v5 = a1[5], v2 = a2[5], v5 != v2)
    || (v5 = a1[4], v2 = a2[4], v5 != v2)
    || (v5 = a1[3], v2 = a2[3], v5 != v2)
    || (v5 = a1[2], v2 = a2[2], v5 != v2)
    || (v5 = a1[1], v2 = a2[1], v5 != v2)
    || (v5 = *a1, v2 = *a2, result = 0, *a1 != *a2) )
  {
    result = -v4;
    if ( v5 > v2 )
      return v4;
  }
  return result;
}
