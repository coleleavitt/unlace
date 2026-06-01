/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9A950
// Address: 0x000000000009A950

//----- (000000000009A950) ----------------------------------------------------
unsigned __int64 __fastcall sub_9A950(__int64 a1, unsigned __int64 a2)
{
  int v3; // [rsp+8h] [rbp-30h] BYREF
  void *ptr; // [rsp+10h] [rbp-28h]
  __int128 v5; // [rsp+18h] [rbp-20h]
  unsigned __int64 v6; // [rsp+28h] [rbp-10h]

  v6 = __readfsqword(0x28u);
  if ( *(_QWORD *)(a1 + 8) != a2 )
  {
    v3 = -2;
    v5 = 0;
    ptr = (void *)-1LL;
    sub_9E1B0(a1, a2, (unsigned __int64)&v3);
    if ( v3 >= -1 )
    {
      if ( ptr )
      {
        *(_QWORD *)&v5 = 0;
        qfree(ptr);
        ptr = nullptr;
        *((_QWORD *)&v5 + 1) = 0;
      }
      v3 = -2;
    }
  }
  return __readfsqword(0x28u);
}
