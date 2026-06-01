/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100009090
// Address: 0x0000000100009090

//----- (0000000100009090) ----------------------------------------------------
__int64 __fastcall sub_100009090(__int64 a1, __int64 *a2)
{
  __int64 result; // rax
  bool v3; // cl

  result = sub_100008E30(a1, a2, 1);
  if ( (_DWORD)result == 1 )
  {
    v3 = sub_100060D10(a1, a2);
    result = 4294967290LL;
    if ( !v3 )
    {
      sub_100060D80(a1, a2);
      return 1;
    }
  }
  return result;
}
