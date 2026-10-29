/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47050
// Address: 0x0000000000047050

//----- (0000000000047050) ----------------------------------------------------
__int64 __fastcall sub_47050(unsigned __int64 a1, __int64 *a2)
{
  __int64 result; // x0

  result = sub_3EC08(a1, (__int64)a2, 0);
  if ( (_DWORD)result == 1 )
  {
    if ( (sub_999E4(a1, a2) & 1) != 0 )
    {
      return 4294967290LL;
    }
    else
    {
      sub_99A5C(a1, a2);
      return 1;
    }
  }
  return result;
}
