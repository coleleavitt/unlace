/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_472C80
// Address: 0x0000000000472C80

//----- (0000000000472C80) ----------------------------------------------------
_QWORD *__fastcall sub_472C80(__int64 a1, int a2, __int64 a3)
{
  _QWORD *result; // rax

  result = sub_4813B0(80);
  *(_DWORD *)result = a2;
  result[1] = a3;
  *((_OWORD *)result + 1) = 0;
  *((_OWORD *)result + 2) = 0;
  *((_OWORD *)result + 3) = 0;
  *((_OWORD *)result + 4) = 0;
  return result;
}
