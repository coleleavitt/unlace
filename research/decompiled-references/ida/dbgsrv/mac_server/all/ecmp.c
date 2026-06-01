/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: ecmp
// Address: 0x00000001000758F0

//----- (00000001000758F0) ----------------------------------------------------
__int64 __fastcall ecmp(unsigned __int16 *a1, unsigned __int16 *a2)
{
  unsigned __int16 v2; // dx
  unsigned __int16 v3; // r8
  unsigned int v4; // ecx
  unsigned __int16 v5; // r8
  unsigned __int16 v6; // dx
  __int64 result; // rax

  v2 = a1[7];
  v3 = a2[7];
  v4 = 2 * ((v2 & 0x8000u) == 0) - 1;
  if ( ((v3 ^ v2) & 0x8000u) != 0 )
    return v4;
  v5 = v3 & 0x7FFF;
  v6 = v2 & 0x7FFF;
  if ( v6 != v5
    || (v6 = a1[6], v5 = a2[6], v6 != v5)
    || (v6 = a1[5], v5 = a2[5], v6 != v5)
    || (v6 = a1[4], v5 = a2[4], v6 != v5)
    || (v6 = a1[3], v5 = a2[3], v6 != v5)
    || (v6 = a1[2], v5 = a2[2], v6 != v5)
    || (v6 = a1[1], v5 = a2[1], v6 != v5)
    || (v6 = *a1, v5 = *a2, result = 0, *a1 != *a2) )
  {
    result = -v4;
    if ( v6 > v5 )
      return v4;
  }
  return result;
}
