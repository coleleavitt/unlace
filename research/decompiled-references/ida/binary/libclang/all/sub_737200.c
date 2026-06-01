unsigned __int64 __fastcall sub_737200(const __m128i *a1, _QWORD *a2)
{
  __int64 v2; // r14
  __int64 v5; // rax
  unsigned __int64 v6; // rbx
  __m128i v7; // xmm0
  __int64 v8; // rsi
  __int64 v9; // rax
  _DWORD *v10; // r13
  __m128i v11; // xmm0
  __int64 v12; // rsi
  __int64 v13; // rax
  _DWORD *v14; // rdi
  __int64 v15; // rdx
  size_t v16; // rdx
  char v17; // al
  char v18; // al

  v2 = (__int64)(a2 + 274);
  v5 = a2[274];
  a2[284] += 64LL;
  v6 = (v5 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a2[275] >= v6 + 64 && v5 )
    a2[274] = v6 + 64;
  else
    v6 = sub_722150(v2, 64, 3);
  v7 = _mm_loadu_si128(a1);
  v8 = a1[3].m128i_u32[0];
  v9 = a1[2].m128i_i64[1];
  v10 = (_DWORD *)a1[3].m128i_i64[1];
  *(_WORD *)(v6 + 32) = 195;
  *(__m128i *)v6 = v7;
  v11 = _mm_loadu_si128(a1 + 1);
  *(_DWORD *)(v6 + 48) = v8;
  v12 = v8;
  *(_BYTE *)(v6 + 34) &= 0xE0u;
  *(_QWORD *)(v6 + 40) = v9;
  *(__m128i *)(v6 + 16) = v11;
  v13 = a2[274];
  a2[284] += v12 * 4;
  v14 = (_DWORD *)((v13 + 15) & 0xFFFFFFFFFFFFFFF0LL);
  if ( a2[275] >= (unsigned __int64)&v14[v12] && v13 )
    a2[274] = &v14[v12];
  else
    v14 = (_DWORD *)sub_722150(v2, v12 * 4, 4);
  v15 = *(unsigned int *)(v6 + 48);
  *(_QWORD *)(v6 + 56) = v14;
  v16 = 4 * v15;
  if ( v16 <= 4 )
  {
    if ( v16 == 4 )
      *v14 = *v10;
  }
  else
  {
    memmove(v14, v10, v16);
  }
  v17 = a1[2].m128i_i8[2] & 1 | *(_BYTE *)(v6 + 34) & 0xFE;
  *(_BYTE *)(v6 + 34) = v17;
  v18 = a1[2].m128i_i8[2] & 2 | v17 & 0xFD;
  *(_BYTE *)(v6 + 34) = v18;
  *(_BYTE *)(v6 + 34) = a1[2].m128i_i8[2] & 4 | v18 & 0xFB;
  return v6;
}

