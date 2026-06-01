int *__fastcall sub_21EBB0(__m128i *a1, unsigned int a2, unsigned int a3, unsigned __int64 a4)
{
  __int64 v5; // rax

  if ( dword_8CC5F0 > 0 && *(_DWORD *)(dbg + 16) == 12 )
    return nullptr;
  if ( a1[22].m128i_i32[0] != -1 )
    return sub_21E480(a1, a2, a3, a4);
  v5 = dbg;
  if ( !dbg )
    return sub_21E480(a1, a2, a3, a4);
  a1[22].m128i_i32[0] = *(_DWORD *)(dbg + 16);
  a1[22].m128i_i32[1] = *(_QWORD *)(v5 + 32);
  a1[14].m128i_i64[1] = getinf(93);
  a1[22].m128i_i8[8] = *(_BYTE *)(dbg + 34) >> 7;
  return sub_21E480(a1, a2, a3, a4);
}
