__int64 __fastcall dyld3::MachOFile::read_sleb128(
        dyld3::MachOFile *this,
        const unsigned __int8 ***a2,
        const unsigned __int8 **a3,
        const unsigned __int8 *a4)
{
  const unsigned __int8 **v4; // x8
  int v5; // w20
  __int64 v6; // x19
  const unsigned __int8 **v7; // x9
  unsigned int v8; // w21
  __int64 v9; // x8

  v4 = *a2;
  if ( *a2 == a3 )
  {
    v6 = 0;
    v5 = 0;
    v8 = 0;
LABEL_7:
    Diagnostics::error(this, "malformed sleb128");
  }
  else
  {
    v5 = 0;
    v6 = 0;
    while ( 1 )
    {
      v7 = (const unsigned __int8 **)((char *)v4 + 1);
      *a2 = (const unsigned __int8 **)((char *)v4 + 1);
      v8 = *(unsigned __int8 *)v4;
      v6 |= (unsigned __int64)(v8 & 0x7F) << v5;
      if ( (v8 & 0x80) == 0 )
        break;
      v5 += 7;
      v4 = (const unsigned __int8 **)((char *)v4 + 1);
      if ( v7 == a3 )
        goto LABEL_7;
    }
    v5 += 7;
  }
  if ( ((v5 < 64) & (v8 >> 6)) != 0 )
    v9 = -1LL << v5;
  else
    v9 = 0;
  return v9 | v6;
}
