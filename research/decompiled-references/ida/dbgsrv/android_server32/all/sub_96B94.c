/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_96B94
// Address: 0x00096B94

//----- (00096B94) --------------------------------------------------------
int __fastcall sub_96B94(unsigned __int8 **a1, __int64 *a2)
{
  __int64 v2; // r2
  unsigned __int8 *v3; // r1
  unsigned __int8 *v4; // lr

  v2 = *a2;
  v4 = a1[1];
  v3 = *a1;
  if ( v4 - *a1 != HIDWORD(v2) - (_DWORD)v2 )
    return 0;
  while ( v4 != v3 )
  {
    if ( *v3 != *(unsigned __int8 *)v2 )
      return 0;
    LODWORD(v2) = v2 + 1;
    ++v3;
  }
  return 1;
}
