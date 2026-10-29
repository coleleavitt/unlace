/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14006A8E8
// Address: 0x000000014006A8E8

//----- (000000014006A8E8) ----------------------------------------------------
__int64 __fastcall sub_14006A8E8(__int64 a1, __int64 a2)
{
  __int64 v4; // [rsp+20h] [rbp-18h] BYREF
  char v5; // [rsp+28h] [rbp-10h]

  v5 = 1;
  v4 = a2;
  *(_QWORD *)a1 = &std::exception::`vftable';
  *(_OWORD *)(a1 + 8) = 0;
  sub_14006C6AC((__int64)&v4, a1 + 8);
  *(_QWORD *)a1 = &std::length_error::`vftable';
  return a1;
}
// 1400AE648: using guessed type void *std::exception::`vftable';
// 1400AE690: using guessed type void *std::length_error::`vftable';
