/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: get_nsec_stamp
// Address: 0x0000000100074E44

//----- (0000000100074E44) ----------------------------------------------------
__int64 get_nsec_stamp()
{
  _QWORD v1[2]; // [xsp+8h] [xbp-18h] BYREF

  sub_100074D78(v1);
  return v1[1] + 1000000000LL * v1[0];
}
