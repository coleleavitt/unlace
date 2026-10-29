bool __fastcall sub_A2020(unsigned int *a1, unsigned int a2, int a3, char a4)
{
  bool result; // al
  bool v7; // r14
  __int64 v8; // rcx
  _BYTE *v9; // rax
  _BYTE *v10; // rdx
  __int64 v11; // rax
  __m128i v12; // xmm0

  result = 0;
  if ( *(_DWORD *)(dbg + 16LL) != 12 )
  {
    v7 = a3 != 0;
    if ( *(char *)(dbg + 34LL) < 0 && (unsigned int)sub_9E0A0() == 1 )
    {
      dword_251538 |= 3u;
      return 1;
    }
    else
    {
      if ( a2 != 1 && v7 && dword_2515A4 > 0 )
      {
        if ( (_QWORD)xmmword_251418 )
        {
          v8 = qword_251410;
          v9 = (_BYTE *)(qword_251410 + 152);
          v10 = (_BYTE *)(qword_251410 + 232 * xmmword_251418 + 152);
          if ( (((_BYTE)qword_251410 - 24 * (_BYTE)xmmword_251418 - (_BYTE)qword_251410) & 8) == 0
            || (*v9 = 0, v9 = (_BYTE *)(v8 + 384), (_BYTE *)(v8 + 384) != v10) )
          {
            do
            {
              *v9 = 0;
              v9 += 464;
              *(v9 - 232) = 0;
            }
            while ( v9 != v10 );
          }
        }
      }
      v11 = operator new(0x20u);
      v12 = _mm_cvtsi32_si128(*a1);
      *(_QWORD *)(v11 + 8) = 0;
      *(_QWORD *)v11 = off_22E730;
      *(_DWORD *)(v11 + 24) = a3;
      *(_BYTE *)(v11 + 28) = a4;
      *(_QWORD *)(v11 + 16) = _mm_unpacklo_epi32(v12, _mm_cvtsi32_si128(a2)).m128i_u64[0];
      return (int)sub_CCEC0() > 0;
    }
  }
  return result;
}

