/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_416100
// Address: 0x0000000000416100

//----- (0000000000416100) ----------------------------------------------------
__int64 sub_416100()
{
  __int64 (__fastcall **v1[3])(_QWORD, __int64); // [rsp+0h] [rbp-18h] BYREF

  v1[1] = (__int64 (__fastcall **)(_QWORD, __int64))__readfsqword(0x28u);
  v1[0] = (__int64 (__fastcall **)(_QWORD, __int64))&off_4C2240;
  sub_45A8A0(v1);
  return 1;
}
// 416100: using guessed type __int64 sub_416100();
// 4C2240: using guessed type __int64 (__fastcall *off_4C2240)();
