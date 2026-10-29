/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_96854
// Address: 0x00096854

//----- (00096854) --------------------------------------------------------
_DWORD *__fastcall sub_96854(int a1, __int64 *a2)
{
  _DWORD *result; // r0
  __int64 v4; // kr00_8

  result = sub_93AC6(a1 + 368, 16);
  v4 = *a2;
  *result = &off_DBE38;
  result[1] = 16843050;
  *((_QWORD *)result + 1) = v4;
  return result;
}
// DBE38: using guessed type _UNKNOWN *off_DBE38;
