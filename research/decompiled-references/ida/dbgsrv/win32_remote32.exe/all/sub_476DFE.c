/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_476DFE
// Address: 0x00476DFE

//----- (00476DFE) --------------------------------------------------------
int sub_476DFE()
{
  LPCWCH *v0; // edi
  const WCHAR *v1; // eax
  unsigned int v2; // eax
  int v3; // ebx
  CHAR *v4; // eax
  CHAR *v5; // esi

  v0 = (LPCWCH *)dword_4B7A04;
  if ( dword_4B7A04 )
  {
    v1 = *(const WCHAR **)dword_4B7A04;
    if ( !*(_DWORD *)dword_4B7A04 )
      return 0;
    while ( 1 )
    {
      v2 = sub_47B467(0, 0, v1, -1, nullptr, 0, nullptr, nullptr);
      v3 = v2;
      if ( !v2 )
        break;
      v4 = (CHAR *)sub_4791B9(v2, 1u);
      v5 = v4;
      if ( !v4 || !sub_47B467(0, 0, *v0, -1, v4, v3, nullptr, nullptr) )
      {
        sub_479216(v5);
        return -1;
      }
      sub_47BEF6(0, v5, 0);
      sub_479216(nullptr);
      v1 = *++v0;
      if ( !*v0 )
        return 0;
    }
  }
  return -1;
}
