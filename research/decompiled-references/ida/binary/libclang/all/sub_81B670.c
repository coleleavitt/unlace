__int64 __fastcall sub_81B670(_QWORD *a1, unsigned int a2, const void *a3, __int64 a4, unsigned int a5)
{
  __m128i v5; // xmm0
  __m128i v7; // xmm1
  __int64 v8; // rsi
  unsigned int v9; // ebp
  __int64 v10; // rax
  __int64 v11; // rbx
  unsigned __int64 v12; // xmm0_8
  unsigned __int8 v13; // al
  unsigned __int64 v15; // [rsp+0h] [rbp-28h]
  unsigned int v16; // [rsp+Ch] [rbp-1Ch]

  v5 = _mm_cvtsi32_si128(a2);
  v7 = _mm_cvtsi32_si128(a5);
  v8 = 8 * a4 + 24;
  v9 = a4;
  v10 = a1[274];
  a1[284] += v8;
  v11 = (v10 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[275] >= (unsigned __int64)(v8 + v11) && v10 )
  {
    a1[274] = v8 + v11;
  }
  else
  {
    v16 = _mm_cvtsi128_si32(v7);
    LODWORD(v15) = _mm_cvtsi128_si32(v5);
    v7 = _mm_cvtsi32_si128(v16);
    v5 = _mm_cvtsi32_si128(v15);
    v11 = sub_804090((__int64)(a1 + 274), v8, 3);
  }
  v12 = _mm_unpacklo_epi32(v5, v7).m128i_u64[0];
  *(_WORD *)v11 = *(_WORD *)v11 & 0xFE00 | 0x14;
  if ( byte_4AD234C )
  {
    v15 = v12;
    sub_AC4570(20);
  }
  *(_WORD *)(v11 + 1) &= 0xF801u;
  *(_QWORD *)(v11 + 8) = 0;
  *(_DWORD *)(v11 + 4) = v9;
  *(_QWORD *)(v11 + 16) = v12;
  if ( v9 )
    memmove((void *)(v11 + 24), a3, 8LL * v9);
  v13 = sub_76B600(v11);
  *(_BYTE *)(v11 + 1) = (v13 << 6) | *(_BYTE *)(v11 + 1) & 0x3F;
  *(_BYTE *)(v11 + 2) = *(_BYTE *)(v11 + 2) & 0xF8 | (v13 >> 2) & 7;
  return v11;
}

