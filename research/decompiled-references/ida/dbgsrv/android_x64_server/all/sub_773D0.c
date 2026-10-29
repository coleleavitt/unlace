/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_773D0
// Address: 0x00000000000773D0

//----- (00000000000773D0) ----------------------------------------------------
unsigned __int64 __fastcall sub_773D0(__int64 a1, unsigned __int64 a2, double a3, __m128 a4)
{
  char v5[8]; // [rsp+8h] [rbp-30h] BYREF
  void *ptr[2]; // [rsp+10h] [rbp-28h]
  __int64 v7; // [rsp+20h] [rbp-18h]
  unsigned __int64 v8; // [rsp+28h] [rbp-10h]

  v8 = __readfsqword(0x28u);
  if ( *(_QWORD *)(a1 + 8) != a2 )
  {
    v5[0] = 2;
    *(_OWORD *)ptr = 0;
    v7 = 0;
    sub_68BE0(a1, a2, v5, 0.0, a4);
    if ( v5[0] == 5 )
    {
      sub_72DD0((char **)ptr[0], v5, 0.0, a4);
    }
    else if ( v5[0] == 7 && ptr[0] )
    {
      ptr[1] = nullptr;
      qfree(ptr[0]);
      ptr[0] = nullptr;
      v7 = 0;
    }
  }
  return __readfsqword(0x28u);
}
