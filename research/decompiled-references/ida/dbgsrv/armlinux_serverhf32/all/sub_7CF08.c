/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7CF08
// Address: 0x0007CF08

//----- (0007CF08) --------------------------------------------------------
int __fastcall sub_7CF08(_DWORD *a1, __int64 *a2)
{
  __int64 v2; // r4
  __int64 *v4; // r1
  int result; // r0

  v2 = *a2;
  HIDWORD(v2) = *(_DWORD *)a2 + 8 * *((_DWORD *)a2 + 1);
  if ( *(_DWORD *)a2 == HIDWORD(v2) )
    return 1;
  do
  {
    v4 = (__int64 *)v2;
    LODWORD(v2) = v2 + 8;
    result = sub_7B5D4(a1, v4);
  }
  while ( result && (_DWORD)v2 != HIDWORD(v2) );
  return result;
}
