/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_93C50
// Address: 0x0000000000093C50

//----- (0000000000093C50) ----------------------------------------------------
unsigned __int64 __fastcall sub_93C50(__int64 a1, unsigned __int64 a2)
{
  __int64 ptr; // [rsp+0h] [rbp-48h] BYREF
  void *ptr_8[2]; // [rsp+8h] [rbp-40h]
  __int64 v5; // [rsp+18h] [rbp-30h]
  __int64 v6; // [rsp+20h] [rbp-28h]
  unsigned __int64 v7; // [rsp+28h] [rbp-20h]
  __int64 v8; // [rsp+30h] [rbp-18h]
  unsigned __int64 v9; // [rsp+38h] [rbp-10h]

  v9 = __readfsqword(0x28u);
  if ( *(_QWORD *)(a1 + 8) != a2 )
  {
    v7 = 0xFFFFFFFF00000000LL;
    v8 = 0;
    ptr = -1;
    *(_OWORD *)ptr_8 = 0;
    v5 = 0;
    v6 = 4;
    sub_9D7D0(a1, a2, (unsigned __int64)&ptr);
    if ( ptr_8[0] )
    {
      ptr_8[1] = nullptr;
      qfree(ptr_8[0]);
      ptr_8[0] = nullptr;
      v5 = 0;
    }
  }
  return __readfsqword(0x28u);
}
