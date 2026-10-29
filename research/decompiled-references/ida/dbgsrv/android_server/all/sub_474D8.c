/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_474D8
// Address: 0x00000000000474D8

//----- (00000000000474D8) ----------------------------------------------------
__int64 sub_474D8()
{
  __int64 (__fastcall **v1[2])(_QWORD, __int64); // [xsp+0h] [xbp-20h] BYREF

  v1[1] = *(__int64 (__fastcall ***)(_QWORD, __int64))(_ReadStatusReg(TPIDR_EL0) + 40);
  v1[0] = (__int64 (__fastcall **)(_QWORD, __int64))&off_156740;
  sub_9DBF0(v1);
  return 1;
}
// 156740: using guessed type __int64 (__fastcall *off_156740)();
