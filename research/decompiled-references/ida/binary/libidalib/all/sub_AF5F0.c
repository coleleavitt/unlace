int *__fastcall sub_AF5F0(__m128i *a1, unsigned int a2, unsigned int a3, unsigned __int64 a4)
{
  __int64 v5; // rax

  if ( dword_25274C > 0 && *(_DWORD *)(dbg + 16LL) == 12 )
    return nullptr;
  if ( a1[22].m128i_i32[0] != -1 )
    return sub_AEEC0(a1, a2, a3, a4);
  v5 = dbg;
  if ( !dbg )
    return sub_AEEC0(a1, a2, a3, a4);
  a1[22].m128i_i32[0] = *(_DWORD *)(dbg + 16LL);
  a1[22].m128i_i32[1] = *(_QWORD *)(v5 + 32);
  a1[14].m128i_i64[1] = getinf();
  a1[22].m128i_i8[8] = *(_BYTE *)(dbg + 34LL) >> 7;
  return sub_AEEC0(a1, a2, a3, a4);
}

