/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_657D0
// Address: 0x00000000000657D0

//----- (00000000000657D0) ----------------------------------------------------
__int64 __fastcall sub_657D0(__int64 a1, const char *a2)
{
  __int64 v2; // r14
  void *ptr[7]; // [rsp+0h] [rbp-38h] BYREF

  ptr[3] = (void *)__readfsqword(0x28u);
  v2 = *(_QWORD *)(a1 + 8);
  sub_37F60((__int64)ptr, a2);
  sub_4AA20(a1, ptr);
  if ( ptr[0] )
  {
    ptr[1] = nullptr;
    qfree(ptr[0]);
    ptr[0] = nullptr;
    ptr[2] = nullptr;
  }
  return v2;
}
