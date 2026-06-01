/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_B5360
// Address: 0x00000000000B5360

//----- (00000000000B5360) ----------------------------------------------------
unsigned __int64 __fastcall sub_B5360(__int64 a1, unsigned __int64 a2)
{
  void *ptr[2]; // [rsp+0h] [rbp-28h] BYREF
  __int64 v4; // [rsp+10h] [rbp-18h]
  unsigned __int64 v5; // [rsp+18h] [rbp-10h]

  v5 = __readfsqword(0x28u);
  if ( *(_QWORD *)(a1 + 8) != a2 )
  {
    *(_OWORD *)ptr = 0;
    v4 = 0;
    sub_B6000(a1, a2, (unsigned __int64)ptr);
    if ( ptr[0] )
    {
      ptr[1] = nullptr;
      qfree(ptr[0]);
      ptr[0] = nullptr;
      v4 = 0;
    }
  }
  return __readfsqword(0x28u);
}
