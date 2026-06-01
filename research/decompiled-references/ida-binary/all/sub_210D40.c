bool __fastcall sub_210D40(unsigned int *a1, unsigned int a2, int a3, char a4)
{
  bool result; // al
  bool v7; // r14
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  __m128i v11; // xmm0

  result = 0;
  if ( *(_DWORD *)(dbg + 16) != 12 )
  {
    v7 = a3 != 0;
    if ( *(char *)(dbg + 34) < 0 && (unsigned int)sub_20CEA0(dbg, 38, *a1, v7, a2) == 1 )
    {
      dword_8CC55C |= 3u;
      return 1;
    }
    else
    {
      if ( a2 != 1 && v7 && dword_8CC5F0 > 0 )
      {
        if ( (_QWORD)xmmword_8CC438 )
        {
          v8 = qword_8CC430;
          v9 = ((_QWORD)xmmword_8CC438 << 8) + qword_8CC430;
          if ( (xmmword_8CC438 & 1) == 0 || (*(_BYTE *)(qword_8CC430 + 152) = 0, v8 += 256, v8 != v9) )
          {
            do
            {
              *(_BYTE *)(v8 + 152) = 0;
              v8 += 512;
              *(_BYTE *)(v8 - 104) = 0;
            }
            while ( v8 != v9 );
          }
        }
      }
      v10 = operator new(0x20u);
      v11 = _mm_cvtsi32_si128(*a1);
      *(_QWORD *)(v10 + 8) = 0;
      *(_QWORD *)v10 = thread_t::enable_trace;
      *(_DWORD *)(v10 + 24) = a3;
      *(_BYTE *)(v10 + 28) = a4;
      *(_QWORD *)(v10 + 16) = _mm_unpacklo_epi32(v11, _mm_cvtsi32_si128(a2)).m128i_u64[0];
      return (int)sub_23DBF0() > 0;
    }
  }
  return result;
}
