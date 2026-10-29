/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A6820
// Address: 0x00000000000A6820

//----- (00000000000A6820) ----------------------------------------------------
unsigned __int64 __fastcall sub_A6820(__int64 a1, unsigned __int64 a2)
{
  void *ptr[2]; // [rsp+0h] [rbp-38h] BYREF
  __int128 v4; // [rsp+10h] [rbp-28h]
  unsigned __int64 v5; // [rsp+28h] [rbp-10h]

  v5 = __readfsqword(0x28u);
  if ( *(_QWORD *)(a1 + 8) != a2 )
  {
    v4 = 0;
    *(_OWORD *)ptr = 0;
    sub_A7290(a1, a2, (unsigned __int64)ptr);
    if ( ptr[1] )
    {
      *(_QWORD *)&v4 = 0;
      qfree(ptr[1]);
      ptr[1] = nullptr;
      *((_QWORD *)&v4 + 1) = 0;
    }
  }
  return __readfsqword(0x28u);
}
