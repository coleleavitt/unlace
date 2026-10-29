/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47FE0
// Address: 0x0000000000047FE0

//----- (0000000000047FE0) ----------------------------------------------------
__int64 __fastcall sub_47FE0(unsigned __int64 a1, __int64 *a2, double a3, double a4)
{
  __int64 result; // rax
  char v5; // cl

  result = sub_3E150(a1, (__int64)a2, 0, a3, a4);
  if ( (_DWORD)result == 1 )
  {
    v5 = sub_9FAC0(a1, a2);
    result = 4294967290LL;
    if ( !v5 )
    {
      sub_9FB30(a1, a2);
      return 1;
    }
  }
  return result;
}
