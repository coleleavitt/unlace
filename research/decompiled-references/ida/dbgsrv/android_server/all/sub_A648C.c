/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A648C
// Address: 0x00000000000A648C

//----- (00000000000A648C) ----------------------------------------------------
_QWORD *__fastcall sub_A648C(_QWORD *result, __int64 a2)
{
  __int64 v2; // x1

  result[11] = a2;
  if ( (byte_168DDE & 0x10) != 0 )
  {
    v2 = (*(__int64 (__fastcall **)(_QWORD *))(*result + 88LL))(result);
    return (_QWORD *)sub_A64CC((__int64)"%s", v2);
  }
  return result;
}
// 168DDE: using guessed type char byte_168DDE;
