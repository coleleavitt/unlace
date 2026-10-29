/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14006BC74
// Address: 0x000000014006BC74

//----- (000000014006BC74) ----------------------------------------------------
__int64 __fastcall sub_14006BC74(unsigned int *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  _QWORD v6[3]; // [rsp+50h] [rbp-18h] BYREF

  v6[0] = a1;
  v6[1] = a3;
  v4 = sub_14006CCF8();
  (*(void (__fastcall **)(_QWORD, _QWORD *))(v4 + 16))(*a1, v6);
  return 0;
}
