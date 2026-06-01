/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100032BC0
// Address: 0x0000000100032BC0

//----- (0000000100032BC0) ----------------------------------------------------
__int64 __fastcall sub_100032BC0(_QWORD *a1, const void *a2, size_t a3)
{
  __int64 v3; // r14
  unsigned __int8 v6; // [rsp+7h] [rbp-29h] BYREF

  if ( a3 )
  {
    v3 = a1[1];
    v6 = 0;
    sub_10001CE90((__int64)a1, v3 + a3, &v6);
    memcpy((void *)(*a1 + v3), a2, a3);
  }
  return __stack_chk_guard;
}
