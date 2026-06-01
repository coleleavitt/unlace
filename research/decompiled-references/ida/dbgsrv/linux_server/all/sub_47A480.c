/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47A480
// Address: 0x000000000047A480

//----- (000000000047A480) ----------------------------------------------------
__int64 __fastcall sub_47A480(__int64 a1)
{
  unsigned __int16 *v1; // rcx
  int v2; // edx
  unsigned __int16 *v3; // rdi
  int v4; // eax
  __int64 result; // rax

  v1 = (unsigned __int16 *)(a1 + 20);
  v2 = 0;
  v3 = (unsigned __int16 *)(a1 + 2);
  do
  {
    v4 = *v1;
    if ( (v4 & 0x8000u) != 0 )
      v2 |= 1u;
    result = (unsigned int)(2 * v4);
    if ( (v2 & 2) != 0 )
      result = (unsigned int)result | 1;
    --v1;
    v2 *= 2;
    v1[1] = result;
  }
  while ( v3 != v1 );
  return result;
}
