/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_B8830
// Address: 0x000B8830

//----- (000B8830) --------------------------------------------------------
int __cdecl sub_B8830(_DWORD *a1)
{
  int v1; // ecx
  int v2; // ecx
  _DWORD *v3; // edx
  int result; // eax

  v1 = a1[1];
  if ( (v1 & 0x1FFFFFFF) == 0 )
    return 0;
  v2 = 8 * v1;
  v3 = (_DWORD *)(*a1 + 4);
  result = 0;
  do
  {
    result = *v3 + result - *(v3 - 1);
    v3 += 2;
    v2 -= 8;
  }
  while ( v2 );
  return result;
}
