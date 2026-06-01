/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7CF9C
// Address: 0x0007CF9C

//----- (0007CF9C) --------------------------------------------------------
int __fastcall sub_7CF9C(void **a1, __int64 *a2)
{
  __int64 v2; // r4
  int v5; // r0

  v2 = *a2;
  HIDWORD(v2) = 8 * *((_DWORD *)a2 + 1);
  if ( HIDWORD(v2) )
  {
    HIDWORD(v2) = 0;
    do
    {
      v5 = sub_7C31C(a1, (unsigned int *)v2);
      LODWORD(v2) = v2 + 8;
      if ( v5 )
        HIDWORD(v2) = v5;
    }
    while ( (_DWORD)v2 != *(_DWORD *)a2 + 8 * *((_DWORD *)a2 + 1) );
  }
  return HIDWORD(v2);
}
