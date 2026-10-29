/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80C7EC0
// Address: 0x080C7EC0

//----- (080C7EC0) --------------------------------------------------------
int __usercall sub_80C7EC0@<eax>(int a1@<eax>)
{
  unsigned __int16 *v1; // ecx
  unsigned __int16 *v2; // esi
  int v3; // edx
  int v4; // eax
  int result; // eax

  v1 = (unsigned __int16 *)(a1 + 20);
  v2 = (unsigned __int16 *)(a1 + 2);
  v3 = 0;
  do
  {
    v4 = *v1;
    if ( (v4 & 0x8000u) != 0 )
      v3 |= 1u;
    result = 2 * v4;
    if ( (v3 & 2) != 0 )
      result |= 1u;
    --v1;
    v3 *= 2;
    v1[1] = result;
  }
  while ( v2 != v1 );
  return result;
}
