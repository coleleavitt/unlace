unsigned __int64 __fastcall sub_8C7110(_QWORD *a1, __int64 a2, __int64 a3, unsigned int a4, _QWORD *a5, __int64 a6)
{
  __m128i v6; // xmm0
  __int64 v9; // rsi
  unsigned int v11; // ebp
  __int64 v12; // rax
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // xmm0_8
  __int16 v15; // ax
  size_t v16; // rdx
  char v17; // al
  unsigned __int64 v19; // [rsp+0h] [rbp-30h]

  v6 = _mm_cvtsi32_si128(a4);
  v9 = 8 * a6 + 32;
  v11 = a6;
  v12 = a1[274];
  a1[284] += v9;
  v13 = (v12 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[275] >= v9 + v13 && v12 )
  {
    a1[274] = v9 + v13;
  }
  else
  {
    LODWORD(v19) = _mm_cvtsi128_si32(v6);
    v6 = _mm_cvtsi32_si128(v19);
    v13 = sub_8C1090((__int64)(a1 + 274), v9, 3);
  }
  v14 = _mm_unpacklo_epi32(v6, _mm_cvtsi32_si128(v11)).m128i_u64[0];
  *(_WORD *)v13 = *(_WORD *)v13 & 0xFE00 | 0x3C;
  if ( byte_4AD234C )
  {
    v19 = v14;
    sub_AC4570(60);
  }
  v15 = *(_WORD *)(v13 + 1);
  *(_QWORD *)(v13 + 8) = a2;
  *(_QWORD *)(v13 + 16) = a3;
  *(_QWORD *)(v13 + 24) = v14;
  *(_WORD *)(v13 + 1) = v15 & 0xF801 | 2;
  if ( a5 )
  {
    v16 = 8LL * v11;
    if ( v16 <= 8 )
    {
      if ( v16 == 8 )
        *(_QWORD *)(v13 + 32) = *a5;
    }
    else
    {
      memmove((void *)(v13 + 32), a5, v16);
    }
  }
  v17 = *(_BYTE *)(v13 + 2);
  *(_BYTE *)(v13 + 1) |= 0xC0u;
  *(_BYTE *)(v13 + 2) = v17 & 0xF8 | 3;
  return v13;
}

