__int64 __fastcall sub_8C7EB0(_QWORD *a1, const void *a2, __int64 a3, __int64 a4, __int64 a5, unsigned __int64 a6)
{
  __int64 v10; // rsi
  unsigned int v11; // ebp
  __int64 v12; // rax
  __int64 v13; // rbx
  unsigned __int64 v14; // rdx
  unsigned __int8 v15; // al

  v10 = 8 * a3 + 40;
  v11 = a3;
  v12 = a1[274];
  a1[284] += v10;
  v13 = (v12 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[275] >= (unsigned __int64)(v10 + v13) && v12 )
    a1[274] = v10 + v13;
  else
    v13 = sub_8C7D70((__int64)(a1 + 274), v10, 3);
  v14 = HIDWORD(a6);
  *(_WORD *)v13 = *(_WORD *)v13 & 0xFE00 | 0x2B;
  if ( byte_4AD234C )
  {
    sub_AC4570(43);
    v14 = HIDWORD(a6);
  }
  *(_WORD *)(v13 + 1) &= 0xF801u;
  *(_QWORD *)(v13 + 8) = a4;
  *(_DWORD *)(v13 + 24) = v14;
  *(_QWORD *)(v13 + 32) = a5;
  *(_QWORD *)(v13 + 16) = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v11), _mm_cvtsi32_si128(a6)).m128i_u64[0];
  if ( v11 )
    memmove((void *)(v13 + 40), a2, 8LL * v11);
  v15 = sub_76D420(v13);
  *(_BYTE *)(v13 + 1) = (v15 << 6) | *(_BYTE *)(v13 + 1) & 0x3F;
  *(_BYTE *)(v13 + 2) = *(_BYTE *)(v13 + 2) & 0xF8 | (v15 >> 2) & 7;
  return v13;
}

