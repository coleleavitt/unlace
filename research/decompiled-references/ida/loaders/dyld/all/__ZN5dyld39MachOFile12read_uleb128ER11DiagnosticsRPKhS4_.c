__int64 __fastcall dyld3::MachOFile::read_uleb128(
        dyld3::MachOFile *this,
        const unsigned __int8 ***a2,
        const unsigned __int8 **a3,
        const unsigned __int8 *a4)
{
  unsigned __int64 v5; // x9
  __int64 v6; // x19
  const unsigned __int8 **v7; // x10
  const char *v8; // x1
  int v9; // w13

  v5 = 0;
  v6 = 0;
  v7 = *a2;
  v8 = "malformed uleb128";
  while ( v7 != a3 )
  {
    if ( v5 > 0x3F )
    {
      v8 = "uleb128 too big for uint64";
      break;
    }
    v6 |= (unsigned __int64)(*(_BYTE *)v7 & 0x7F) << v5;
    v5 += 7LL;
    *a2 = (const unsigned __int8 **)((char *)v7 + 1);
    v9 = *(char *)v7;
    v7 = (const unsigned __int8 **)((char *)v7 + 1);
    if ( (v9 & 0x80000000) == 0 )
      return v6;
  }
  Diagnostics::error(this, v8);
  return v6;
}
