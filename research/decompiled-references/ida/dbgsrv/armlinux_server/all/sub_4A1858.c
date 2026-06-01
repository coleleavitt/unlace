/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4A1858
// Address: 0x00000000004A1858

//----- (00000000004A1858) ----------------------------------------------------
_QWORD *__fastcall sub_4A1858(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // x19
  size_t v3; // x0
  _QWORD *result; // x0

  if ( a1 > 0x3FFFFFFFFFFFFFF9LL )
    sub_4A04D0("basic_string::_S_create");
  v2 = a1;
  v3 = a1 + 25;
  if ( v2 > a2 )
  {
    if ( v2 < 2 * a2 )
      v2 = 2 * a2;
    if ( v2 + 57 > 0x1000 && a2 < v2 )
    {
      v2 = v2 + 4096 - (((_WORD)v2 + 57) & 0xFFF);
      if ( v2 > 0x3FFFFFFFFFFFFFF9LL )
        v2 = 0x3FFFFFFFFFFFFFF9LL;
    }
    v3 = v2 + 25;
  }
  result = sub_49E050(v3);
  result[1] = v2;
  *((_DWORD *)result + 4) = 0;
  return result;
}
