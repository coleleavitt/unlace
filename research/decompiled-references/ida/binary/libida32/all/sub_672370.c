unsigned __int64 __fastcall sub_672370(__int64 a1, __int64 a2)
{
  __m128i v3; // [rsp+0h] [rbp-48h] BYREF
  void *ptr; // [rsp+10h] [rbp-38h] BYREF
  __int128 v5; // [rsp+18h] [rbp-30h]
  unsigned __int64 v6; // [rsp+28h] [rbp-20h]

  v6 = __readfsqword(0x28u);
  if ( !*(_BYTE *)(a1 + 36) )
  {
    if ( *(_DWORD *)(a1 + 32) == -1 )
      goto LABEL_9;
    if ( *(_QWORD *)(a1 + 16) )
    {
      if ( !under_debugger )
        interr(2029);
      BUG();
    }
    v5 = 0;
    ptr = nullptr;
    if ( sub_79BAE0(a1 + 32, a2, &ptr, 1, 0, 115) > 0 )
    {
      v3 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)ptr, (__m128i)(unsigned __int64)((unsigned __int64)ptr + v5));
      if ( (unsigned __int8)sub_671640((int *)a1, a2, &v3) )
        *(_BYTE *)(a1 + 36) = 1;
    }
    if ( ptr )
    {
      *(_QWORD *)&v5 = 0;
      qfree(ptr);
    }
    if ( !*(_BYTE *)(a1 + 36) )
    {
LABEL_9:
      sub_672250((__int64 *)(*(_QWORD *)(a2 + 1608) + 64LL), (int *)a1);
      *(_DWORD *)(a1 + 32) = -1;
      *(_BYTE *)(a1 + 36) = 1;
    }
  }
  return v6 - __readfsqword(0x28u);
}

