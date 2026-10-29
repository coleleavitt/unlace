__int64 __fastcall sub_81C0C0(__int64 a1, int a2)
{
  __int64 v2; // rax
  int v3; // ebp
  __int64 **v4; // rbp
  __int64 *v5; // rax
  __int64 v6; // rsi
  __int64 v7; // rax

  if ( !a2
    || ((v2 = *(_QWORD *)(a1 + 72), v3 = *(_DWORD *)(a1 + 152) & 0x2000, !v2)
     || !(unsigned int)sub_81A980(
                         a1,
                         *(_QWORD *)(v2 + 24) / *(_QWORD *)(a1 + 280),
                         *(_QWORD *)(a1 + 272),
                         (_QWORD *)(a1 + 336)))
    && (v3 || !(unsigned int)sub_81A980(a1, *(_QWORD *)(a1 + 80), *(_QWORD *)(a1 + 288), (_QWORD *)(a1 + 408))) )
  {
    v4 = (__int64 **)(a1 + 680);
    while ( 1 )
    {
      v5 = sub_81BFF0(a1, 0);
      v4[4] = v5;
      *v4 = v5;
      if ( !v5 )
        break;
      if ( ++v4 == (__int64 **)(a1 + 712) )
      {
        v6 = *(_QWORD *)(a1 + 104);
        *(__m128i *)(a1 + 752) = _mm_unpacklo_epi64(
                                   (__m128i)(unsigned __int64)(a1 + 752),
                                   (__m128i)(unsigned __int64)(a1 + 752));
        *(__m128i *)(a1 + 768) = _mm_unpacklo_epi64(
                                   (__m128i)(unsigned __int64)(a1 + 768),
                                   (__m128i)(unsigned __int64)(a1 + 768));
        if ( (unsigned int)sub_8171C0(a1, v6) )
          return 12;
        v7 = *(_QWORD *)(a1 + 1336);
        *(_QWORD *)(a1 + 456) = *(unsigned __int8 *)(v7 + 1);
        *(_QWORD *)(a1 + 464) = *(unsigned __int8 *)(v7 + 2);
        *(_QWORD *)(a1 + 1328) = (*(__int64 (**)(void))(a1 + 1320))();
        return sub_816EB0(a1);
      }
    }
  }
  return 12;
}
