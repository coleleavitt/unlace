/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_926B0
// Address: 0x00000000000926B0

//----- (00000000000926B0) ----------------------------------------------------
__int64 *__fastcall sub_926B0(__int64 a1)
{
  __int64 *result; // rax

  result = &qword_155940;
  if ( (_BYTE)qword_155940 )
  {
    result = (__int64 *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 440) + 504LL))(*(_QWORD *)(a1 + 440));
    if ( !(_BYTE)result )
      return (__int64 *)sub_926F0(
                          (_BYTE *)(a1 + 192),
                          "Error preparing debugger server to handle a broken connection\n");
  }
  return result;
}
// 155940: using guessed type __int64 qword_155940;
