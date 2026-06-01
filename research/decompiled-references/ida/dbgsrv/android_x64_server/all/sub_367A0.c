/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_367A0
// Address: 0x00000000000367A0

//----- (00000000000367A0) ----------------------------------------------------
__int64 __fastcall sub_367A0(__int64 a1, int a2, _QWORD *a3)
{
  __int64 result; // rax
  int v4; // ecx

  result = 13;
  if ( !a2 )
  {
    v4 = ps_pglobal_lookup(0, nullptr, off_154000, a3);
    result = 13;
    if ( !v4 )
      return 0;
  }
  return result;
}
// 154000: using guessed type char *off_154000;
