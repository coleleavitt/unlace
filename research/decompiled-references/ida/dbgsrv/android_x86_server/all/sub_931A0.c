/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_931A0
// Address: 0x000931A0

//----- (000931A0) --------------------------------------------------------
int __cdecl sub_931A0(_DWORD *a1)
{
  int v1; // ecx

  if ( !a1[1] )
    return 0;
  if ( !a1[2] )
    return 1;
  if ( !a1[3] )
    return 2;
  if ( !a1[4] )
    return 3;
  if ( !a1[5] )
    return 4;
  if ( !a1[6] )
    return 5;
  if ( !a1[7] )
    return 6;
  if ( !a1[8] )
    return 7;
  if ( !a1[9] )
    return 8;
  if ( !a1[10] )
    return 9;
  if ( !a1[11] )
    return 10;
  if ( !a1[12] )
    return 11;
  if ( !a1[13] )
    return 12;
  if ( !a1[14] )
    return 13;
  if ( !a1[15] )
    return 14;
  if ( !a1[16] )
    return 15;
  *(_DWORD *)__errno(v1) = 23;
  return -1;
}
// 93219: variable 'v1' is possibly undefined
// 17A90: using guessed type int __fastcall __errno(_DWORD);
