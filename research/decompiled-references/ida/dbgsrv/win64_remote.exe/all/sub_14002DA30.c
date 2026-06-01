/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14002DA30
// Address: 0x000000014002DA30

//----- (000000014002DA30) ----------------------------------------------------
_QWORD *sub_14002DA30()
{
  _QWORD *result; // rax

  if ( (dword_1400CB018 & 1) != 0 )
    return (_QWORD *)qword_1400CB010;
  dword_1400CB018 |= 1u;
  result = operator new(0x80u);
  if ( result )
  {
    *result = 0;
    result[1] = 0;
    result[2] = 0;
    result[3] = 0;
    result[4] = 0;
    result[5] = 0;
    result[6] = 0;
    result[7] = 0;
    result[8] = 0;
    result[9] = 0;
    result[10] = 0;
    result[11] = 0;
    result[12] = 0;
    result[13] = 0;
    result[14] = 0;
    *((_DWORD *)result + 30) = 0;
    *((_BYTE *)result + 124) = 0;
  }
  else
  {
    result = nullptr;
  }
  qword_1400CB010 = (__int64)result;
  return result;
}
// 1400CB010: using guessed type __int64 qword_1400CB010;
// 1400CB018: using guessed type int dword_1400CB018;
