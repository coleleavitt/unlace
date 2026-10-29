__int64 __fastcall sub_89CCB0(__m128i **a1, __int64 a2)
{
  unsigned __int64 v3; // rbp
  __int64 v4; // rax

  if ( ((*(_WORD *)(a2 + 2) >> 3) & 0x7F) == 0x14 )
  {
    v3 = *(_QWORD *)(a2 + 16);
    v4 = sub_823B90((*a1)[2].m128i_i64[0], v3, *(_QWORD *)(v3 + 8), a1[1]);
    return sub_88A010(v4, (__int64)*a1, a1[1], v3, 0);
  }
  else if ( ((*(_WORD *)(a2 + 2) >> 3) & 0x7Fu) - 7 <= 1 )
  {
    if ( (unsigned __int8)sub_89CD60(a1) )
      return sub_82E0E0((__int64)*a1, a2, *(_QWORD *)(*(_QWORD *)(a2 + 16) + 8LL), (__int64)a1[1]);
    else
      return 0;
  }
  else
  {
    return sub_89DC40();
  }
}

