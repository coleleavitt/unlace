unsigned __int64 __fastcall sub_730870(const __m128i *a1, _QWORD *a2)
{
  __int64 v2; // r14
  __int64 v5; // rax
  unsigned __int64 v6; // rbx
  __m128i v7; // xmm0
  __int64 v8; // rsi
  _QWORD *v9; // r13
  __m128i v10; // xmm0
  __int64 v11; // rsi
  __int64 v12; // rax
  _QWORD *v13; // rdi
  __int64 v14; // rdx
  size_t v15; // rdx
  char v16; // al
  char v17; // al

  v2 = (__int64)(a2 + 274);
  v5 = a2[274];
  a2[284] += 48LL;
  v6 = (v5 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a2[275] >= v6 + 48 && v5 )
    a2[274] = v6 + 48;
  else
    v6 = sub_722150(v2, 48, 3);
  v7 = _mm_loadu_si128(a1);
  v8 = a1[2].m128i_u32[1];
  v9 = (_QWORD *)a1[2].m128i_i64[1];
  *(_WORD *)(v6 + 32) = 152;
  *(__m128i *)v6 = v7;
  v10 = _mm_loadu_si128(a1 + 1);
  *(_DWORD *)(v6 + 36) = v8;
  v11 = v8;
  *(_BYTE *)(v6 + 34) &= 0xE0u;
  *(__m128i *)(v6 + 16) = v10;
  v12 = a2[274];
  a2[284] += v11 * 8;
  v13 = (_QWORD *)((v12 + 15) & 0xFFFFFFFFFFFFFFF0LL);
  if ( a2[275] >= (unsigned __int64)&v13[v11] && v12 )
    a2[274] = &v13[v11];
  else
    v13 = (_QWORD *)sub_722150(v2, v11 * 8, 4);
  v14 = *(unsigned int *)(v6 + 36);
  *(_QWORD *)(v6 + 40) = v13;
  v15 = 8 * v14;
  if ( v15 <= 8 )
  {
    if ( v15 == 8 )
      *v13 = *v9;
  }
  else
  {
    memmove(v13, v9, v15);
  }
  v16 = a1[2].m128i_i8[2] & 1 | *(_BYTE *)(v6 + 34) & 0xFE;
  *(_BYTE *)(v6 + 34) = v16;
  v17 = a1[2].m128i_i8[2] & 2 | v16 & 0xFD;
  *(_BYTE *)(v6 + 34) = v17;
  *(_BYTE *)(v6 + 34) = a1[2].m128i_i8[2] & 4 | v17 & 0xFB;
  return v6;
}

