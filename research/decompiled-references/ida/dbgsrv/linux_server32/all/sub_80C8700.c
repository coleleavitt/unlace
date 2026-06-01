/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80C8700
// Address: 0x080C8700

//----- (080C8700) --------------------------------------------------------
__int16 *__cdecl sub_80C8700(_WORD *a1, int a2)
{
  __int16 v2; // cx
  int v3; // edx
  __int16 *result; // eax
  __int16 v5; // cx

  v2 = a1[1];
  v3 = a2 + 12;
  if ( *a1 )
    v2 |= 0x8000u;
  *(_WORD *)(a2 + 14) = v2;
  result = a1 + 3;
  do
  {
    v5 = *result++;
    v3 -= 2;
    *(_WORD *)(v3 + 2) = v5;
  }
  while ( result != a1 + 10 );
  return result;
}
