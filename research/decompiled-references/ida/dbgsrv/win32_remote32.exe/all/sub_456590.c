/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_456590
// Address: 0x00456590

//----- (00456590) --------------------------------------------------------
_BYTE *__stdcall sub_456590(_BYTE *a1)
{
  _BYTE *v1; // edx
  char v2; // cl
  _BYTE *v3; // esi
  _BYTE *v4; // eax

  v1 = a1;
  if ( !a1 )
    return a1;
  v2 = *a1;
  if ( !*a1 )
    return a1;
  v3 = nullptr;
  v4 = a1;
  do
  {
    if ( v2 == 47 || *v4 == 92 )
      v3 = v4;
    v2 = *++v4;
  }
  while ( v2 );
  if ( v3 )
    return v3 + 1;
  if ( a1[1] == 58 )
    return a1 + 2;
  return v1;
}
