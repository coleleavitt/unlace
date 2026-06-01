/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_94068
// Address: 0x00094068

//----- (00094068) --------------------------------------------------------
int __fastcall sub_94068(__int64 *a1)
{
  __int64 v1; // r2
  int result; // r0

  v1 = *a1;
  if ( (_DWORD)v1 == HIDWORD(v1) || *(_BYTE *)v1 != 114 )
  {
    result = 0;
  }
  else
  {
    LODWORD(v1) = v1 + 1;
    result = 4;
    *(_DWORD *)a1 = v1;
  }
  if ( (_DWORD)v1 != HIDWORD(v1) )
  {
    if ( *(_BYTE *)v1 == 86 )
    {
      LODWORD(v1) = v1 + 1;
      *(_DWORD *)a1 = v1;
      result |= 2u;
    }
    if ( (_DWORD)v1 != HIDWORD(v1) && *(_BYTE *)v1 == 75 )
    {
      *(_DWORD *)a1 = v1 + 1;
      return result | 1;
    }
  }
  return result;
}
