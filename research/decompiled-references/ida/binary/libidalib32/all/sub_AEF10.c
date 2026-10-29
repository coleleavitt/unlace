__int64 __fastcall sub_AEF10(__m128i *a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  __int64 v5; // rax

  if ( dword_2515A4 > 0 && *(_DWORD *)(dbg + 16LL) == 12 )
    return 0;
  if ( a1[21].m128i_i32[2] != -1 )
    return sub_AE800(a1, a2, a3, a4);
  v5 = dbg;
  if ( !dbg )
    return sub_AE800(a1, a2, a3, a4);
  a1[21].m128i_i32[2] = *(_DWORD *)(dbg + 16LL);
  a1[21].m128i_i32[3] = *(_QWORD *)(v5 + 32);
  a1[14].m128i_i32[2] = getinf();
  a1[22].m128i_i8[0] = *(_BYTE *)(dbg + 34LL) >> 7;
  return sub_AE800(a1, a2, a3, a4);
}

