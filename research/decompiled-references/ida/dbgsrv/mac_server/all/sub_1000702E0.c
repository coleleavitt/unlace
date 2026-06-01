/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000702E0
// Address: 0x00000001000702E0

//----- (00000001000702E0) ----------------------------------------------------
_QWORD *__fastcall sub_1000702E0(__int64 a1, int a2, __int64 a3)
{
  _QWORD *result; // rax

  result = qalloc(80);
  *(_DWORD *)result = a2;
  result[1] = a3;
  *((_OWORD *)result + 1) = 0;
  *((_OWORD *)result + 2) = 0;
  *((_OWORD *)result + 3) = 0;
  *((_OWORD *)result + 4) = 0;
  return result;
}
