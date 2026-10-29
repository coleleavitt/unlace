/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140005200
// Address: 0x0000000140005200

//----- (0000000140005200) ----------------------------------------------------
_QWORD *__fastcall sub_140005200(__int64 a1, __int64 a2, char a3)
{
  _QWORD *result; // rax

  result = operator new(0x20u);
  if ( result )
  {
    result[1] = a1;
    *result = off_140091E48;
    result[2] = a2;
    *((_BYTE *)result + 24) = a3;
  }
  return result;
}
// 140091E48: using guessed type __int64 (__fastcall *off_140091E48[32])();
