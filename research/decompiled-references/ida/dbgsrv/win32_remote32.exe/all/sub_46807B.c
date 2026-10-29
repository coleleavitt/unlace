/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46807B
// Address: 0x0046807B

//----- (0046807B) --------------------------------------------------------
int __cdecl sub_46807B(unsigned __int16 *a1, unsigned __int16 *a2, int a3)
{
  int v3; // ecx
  int result; // eax
  int v7; // edx
  int v8; // esi

  v3 = a3;
  if ( !a3 )
    return 0;
  do
  {
    v7 = *a1;
    if ( (unsigned int)(v7 - 65) <= 0x19 )
      v7 += 32;
    v8 = *a2;
    ++a1;
    if ( (unsigned int)(v8 - 65) <= 0x19 )
      v8 += 32;
    ++a2;
    result = v7 - v8;
    if ( v7 != v8 )
      break;
    if ( !v7 )
      break;
    --v3;
  }
  while ( v3 );
  return result;
}
