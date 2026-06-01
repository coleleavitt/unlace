unsigned __int64 __fastcall sub_278850(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4, char a5)
{
  unsigned __int64 result; // rax
  const __m128i *v7; // rbp
  __int64 v8; // r13
  __m128i *v9; // rax
  __int64 v10; // rsi
  __m128i v11; // xmm0
  __int64 v12; // rax

  result = *(_QWORD *)(a1 + 112);
  if ( result )
  {
    *(_QWORD *)(a1 + 120) = a2;
    if ( (*(_BYTE *)(a1 + 128) & 1) == 0 && a2 < *(_QWORD *)(result + 104) )
    {
      if ( a5 )
      {
        v7 = (const __m128i *)(*(_QWORD *)(result + 96) + 32 * a2);
        v8 = operator new(0x18u);
        v9 = (__m128i *)operator new(0x20u);
        v10 = v8;
        *v9 = _mm_loadu_si128(v7);
        v11 = _mm_loadu_si128(v7 + 1);
        *(_DWORD *)v8 = 4;
        *(_QWORD *)(v8 + 16) = a4;
        *(_QWORD *)(v8 + 8) = v9;
        v9[1] = v11;
      }
      else
      {
        v12 = operator new(0x18u);
        *(_DWORD *)v12 = 5;
        v10 = v12;
        *(_QWORD *)(v12 + 8) = 0;
        *(_QWORD *)(v12 + 16) = a4;
      }
      return sub_2787D0(a1, v10);
    }
  }
  return result;
}
