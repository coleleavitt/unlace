bool __fastcall sub_A2380(unsigned int *a1, unsigned int a2, int a3, char a4)
{
  bool result; // al
  bool v7; // r14
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  __m128i v11; // xmm0

  result = 0;
  if ( *(_DWORD *)(dbg + 16LL) != 12 )
  {
    v7 = a3 != 0;
    if ( *(char *)(dbg + 34LL) < 0 && (unsigned int)sub_9E1E0() == 1 )
    {
      dword_2526BC |= 3u;
      return 1;
    }
    else
    {
      if ( a2 != 1 && v7 && dword_25274C > 0 )
      {
        if ( (_QWORD)xmmword_252598 )
        {
          v8 = qword_252590;
          v9 = ((_QWORD)xmmword_252598 << 8) + qword_252590;
          if ( (xmmword_252598 & 1) == 0 || (*(_BYTE *)(qword_252590 + 152) = 0, v8 += 256, v8 != v9) )
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
      *(_QWORD *)v10 = off_22F7B0;
      *(_DWORD *)(v10 + 24) = a3;
      *(_BYTE *)(v10 + 28) = a4;
      *(_QWORD *)(v10 + 16) = _mm_unpacklo_epi32(v11, _mm_cvtsi32_si128(a2)).m128i_u64[0];
      return (int)sub_CE470() > 0;
    }
  }
  return result;
}

