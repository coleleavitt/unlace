/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_450840
// Address: 0x0000000000450840

//----- (0000000000450840) ----------------------------------------------------
_QWORD *__fastcall sub_450840(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // x19
  _QWORD *result; // x0

  v2 = a1;
  if ( a1 > 0x3FFFFFFFFFFFFFF9LL )
    sub_4A04D0("basic_string::_S_create");
  if ( a1 > a2 && a1 < 2 * a2 )
    v2 = 2 * a2;
  if ( v2 + 57 > 0x1000 && a2 < v2 )
  {
    v2 = v2 + 4096 - (((_WORD)v2 + 57) & 0xFFF);
    if ( v2 > 0x3FFFFFFFFFFFFFF9LL )
      v2 = 0x3FFFFFFFFFFFFFF9LL;
  }
  result = sub_49E050(v2 + 25);
  result[1] = v2;
  *((_DWORD *)result + 4) = 0;
  return result;
}
