__int64 __fastcall sub_81D800(__int64 a1, _QWORD *a2, int a3, __int64 a4, __int64 a5, int a6)
{
  __int64 v11; // rdi
  __int64 v12; // rax
  __int64 v13; // r8
  __int64 v14; // r15
  __m128i si128; // xmm0
  unsigned __int64 v16; // r14
  __int64 v17; // rax
  unsigned __int8 v18; // al
  __int64 result; // rax
  __int64 v20; // rax

  *(_WORD *)a1 = *(_WORD *)a1 & 0xFE00 | 0x36;
  if ( byte_4AD234C )
    sub_AC4570(54);
  *(_WORD *)(a1 + 1) &= 0xF801u;
  v11 = a1 + 16;
  v12 = 0;
  *(_QWORD *)(a1 + 8) = 0;
  v13 = 0;
  *(_QWORD *)(a1 + 32) = 0;
  *(_OWORD *)(a1 + 16) = 0;
  if ( (_DWORD)a5 )
  {
    sub_81D560(v11, a2, (unsigned int)a5);
    v13 = *(_QWORD *)(a1 + 24);
    v11 = a1 + 16;
    v12 = v13 - *(_QWORD *)(a1 + 16);
  }
  v14 = 8 * a5;
  *(_DWORD *)(a1 + 40) = a3;
  si128 = _mm_load_si128((const __m128i *)&xmmword_3C7E990);
  *(_BYTE *)(a1 + 2) &= ~8u;
  v16 = v14 >> 3;
  *(_DWORD *)(a1 + 44) = a6;
  *(__m128i *)(a1 + 48) = si128;
  if ( v14 >> 3 )
  {
    if ( (*(_QWORD *)(a1 + 32) & 0xFFFFFFFFFFFFFFF8LL) - v13 < v14 )
    {
      sub_81D560(v11, a2, (v12 >> 3) + v16);
      v13 = *(_QWORD *)(a1 + 24);
    }
    if ( v14 > 0 )
    {
      if ( v14 <= 24 || v13 == a4 + 8 )
      {
        v20 = 0;
        do
        {
          *(_QWORD *)(v13 + 8 * v20) = *(_QWORD *)(a4 + 8 * v20);
          ++v20;
        }
        while ( (__int64)(v16 - v20) > 0 );
      }
      else
      {
        v17 = 0;
        do
        {
          *(__m128i *)(v13 + v17) = _mm_loadu_si128((const __m128i *)(a4 + v17));
          v17 += 16;
        }
        while ( 16 * (v16 >> 1) != v17 );
        if ( (v16 & 1) != 0 )
          *(_QWORD *)(v13 + 8 * (v16 & 0xFFFFFFFFFFFFFFFELL)) = *(_QWORD *)(a4 + 8 * (v16 & 0xFFFFFFFFFFFFFFFELL));
      }
      v13 = *(_QWORD *)(a1 + 24);
    }
    *(_QWORD *)(a1 + 24) = v14 + v13;
  }
  v18 = sub_76C6A0(a1);
  *(_BYTE *)(a1 + 1) = (v18 << 6) | *(_BYTE *)(a1 + 1) & 0x3F;
  result = *(_BYTE *)(a1 + 2) & 0xF8 | (v18 >> 2) & 7u;
  *(_BYTE *)(a1 + 2) = result;
  return result;
}

