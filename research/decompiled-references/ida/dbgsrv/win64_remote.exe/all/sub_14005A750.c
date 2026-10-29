/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14005A750
// Address: 0x000000014005A750

//----- (000000014005A750) ----------------------------------------------------
bool __fastcall sub_14005A750(__int64 a1, __int64 a2)
{
  __int64 v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = a2;
  return a2 >= 0 && !(unsigned int)common_gmtime_s<__int64>(a1, &v3);
}
// 1400753D4: using guessed type __int64 __fastcall common_gmtime_s<__int64>(_QWORD, _QWORD);
