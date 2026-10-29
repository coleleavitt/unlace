/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: get_nsec_stamp
// Address: 0x000000010007D600

//----- (000000010007D600) ----------------------------------------------------
__int64 get_nsec_stamp()
{
  _QWORD v1[2]; // [rsp+8h] [rbp-18h] BYREF

  sub_10007D550(v1);
  return v1[1] + 1000000000LL * v1[0];
}
