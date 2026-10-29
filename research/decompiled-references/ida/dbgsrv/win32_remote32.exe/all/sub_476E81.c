/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_476E81
// Address: 0x00476E81

//----- (00476E81) --------------------------------------------------------
int sub_476E81()
{
  LPCCH *v0; // edi
  const CHAR *v1; // eax
  unsigned int v2; // eax
  int v3; // ebx
  WCHAR *v4; // eax
  __m128i *v5; // esi

  v0 = (LPCCH *)dword_4B7A00;
  if ( dword_4B7A00 )
  {
    v1 = *(const CHAR **)dword_4B7A00;
    if ( !*(_DWORD *)dword_4B7A00 )
      return 0;
    while ( 1 )
    {
      v2 = sub_47B3EB(0, 0, v1, -1, nullptr, 0);
      v3 = v2;
      if ( !v2 )
        break;
      v4 = (WCHAR *)sub_4791B9(v2, 2u);
      v5 = (__m128i *)v4;
      if ( !v4 || !sub_47B3EB(0, 0, *v0, -1, v4, v3) )
      {
        sub_479216(v5);
        return -1;
      }
      sub_47BF01(v5, 0);
      sub_479216(nullptr);
      v1 = *++v0;
      if ( !*v0 )
        return 0;
    }
  }
  return -1;
}
// 4B7A00: using guessed type int dword_4B7A00;
