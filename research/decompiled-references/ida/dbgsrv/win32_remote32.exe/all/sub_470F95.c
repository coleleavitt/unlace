/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_470F95
// Address: 0x00470F95

//----- (00470F95) --------------------------------------------------------
int __fastcall sub_470F95(_BYTE *a1)
{
  __int64 v1; // rax
  int v2; // esi

  v1 = (unsigned int)(a1 + 32);
  v2 = a1 + 32 < a1 ? 0 : 32;
  if ( a1 < a1 + 32 )
  {
    do
    {
      *a1 = ~*a1;
      ++a1;
      ++HIDWORD(v1);
    }
    while ( HIDWORD(v1) != v2 );
  }
  return v1;
}
