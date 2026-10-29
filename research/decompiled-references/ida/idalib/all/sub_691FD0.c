unsigned __int64 __fastcall sub_691FD0(__int64 a1, __int64 a2)
{
  __m128i v3; // [rsp+0h] [rbp-48h] BYREF
  void *ptr; // [rsp+10h] [rbp-38h] BYREF
  __int128 v5; // [rsp+18h] [rbp-30h]
  unsigned __int64 v6; // [rsp+28h] [rbp-20h]

  v6 = __readfsqword(0x28u);
  if ( !*(_BYTE *)(a1 + 48) )
  {
    if ( *(_QWORD *)(a1 + 40) == -1 )
      goto LABEL_9;
    if ( *(_QWORD *)(a1 + 24) )
    {
      if ( !under_debugger )
        interr(2029);
      BUG();
    }
    v5 = 0;
    ptr = nullptr;
    if ( sub_7BEED0(a1 + 40, a2, &ptr, 1, 0, 115) > 0 )
    {
      v3 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)ptr, (__m128i)(unsigned __int64)((unsigned __int64)ptr + v5));
      if ( (unsigned __int8)sub_691280((unsigned __int64 *)a1, a2, &v3) )
        *(_BYTE *)(a1 + 48) = 1;
    }
    if ( ptr )
    {
      *(_QWORD *)&v5 = 0;
      qfree(ptr);
    }
    if ( !*(_BYTE *)(a1 + 48) )
    {
LABEL_9:
      sub_691EB0((__int64 *)(*(_QWORD *)(a2 + 1800) + 72LL), a1);
      *(_QWORD *)(a1 + 40) = -1;
      *(_BYTE *)(a1 + 48) = 1;
    }
  }
  return v6 - __readfsqword(0x28u);
}
