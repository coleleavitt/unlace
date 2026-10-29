__int64 __fastcall sub_C03780(
        unsigned __int64 a1,
        int a2,
        const __m128i *a3,
        unsigned __int64 a4,
        __int64 a5,
        int a6,
        int a7)
{
  unsigned __int8 v9; // al
  __int64 result; // rax
  __int64 v11; // [rsp+0h] [rbp-38h]
  int v12; // [rsp+Ch] [rbp-2Ch]

  *(_WORD *)a1 = *(_WORD *)a1 & 0xFE00 | 0x78;
  if ( unk_2CD7484 )
  {
    v12 = a6;
    v11 = a5;
    sub_EE9B50(120);
    a6 = v12;
    a5 = v11;
  }
  *(_WORD *)(a1 + 1) &= 0xF801u;
  *(_QWORD *)(a1 + 8) = a5;
  *(_DWORD *)(a1 + 72) = a4;
  *(_DWORD *)(a1 + 76) = a2;
  *(_DWORD *)(a1 + 80) = a7;
  *(_DWORD *)(a1 + 84) = a6;
  if ( a4 )
  {
    if ( (a1 >= (unsigned __int64)a3 || (unsigned __int64)a3 >= a1 + 32) && a4 - 1 > 3 )
    {
      *(__m128i *)(a1 + 16) = _mm_loadu_si128(a3);
      *(__m128i *)(a1 + 32) = _mm_loadu_si128(a3 + 1);
      if ( a4 >> 1 != 2 )
        *(__m128i *)(a1 + 48) = _mm_loadu_si128(a3 + 2);
      if ( a4 != (a4 & 0xFFFFFFFFFFFFFFFELL) )
        *(_QWORD *)(a1 + 8LL * ((unsigned int)a4 & 0xFFFFFFFE) + 16) = a3->m128i_i64[a4 & 0xFFFFFFFFFFFFFFFELL];
    }
    else
    {
      *(_QWORD *)(a1 + 16) = a3->m128i_i64[0];
      if ( a4 != 1 )
      {
        *(_QWORD *)(a1 + 24) = a3->m128i_i64[1];
        if ( a4 != 2 )
        {
          *(_QWORD *)(a1 + 32) = a3[1].m128i_i64[0];
          if ( a4 != 3 )
          {
            *(_QWORD *)(a1 + 40) = a3[1].m128i_i64[1];
            if ( a4 != 4 )
            {
              *(_QWORD *)(a1 + 48) = a3[2].m128i_i64[0];
              if ( a4 != 5 )
              {
                *(_QWORD *)(a1 + 56) = a3[2].m128i_i64[1];
                if ( a4 != 6 )
                  *(_QWORD *)(a1 + 64) = a3[3].m128i_i64[0];
              }
            }
          }
        }
      }
    }
  }
  v9 = sub_B64B70(a1);
  *(_BYTE *)(a1 + 1) = (v9 << 6) | *(_BYTE *)(a1 + 1) & 0x3F;
  result = *(_BYTE *)(a1 + 2) & 0xF8 | (v9 >> 2) & 7u;
  *(_BYTE *)(a1 + 2) = result;
  return result;
}
