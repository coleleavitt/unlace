unsigned __int64 __fastcall sub_725940(const __m128i *a1, _QWORD *a2)
{
  __int64 v2; // r14
  __int64 v5; // rax
  unsigned __int64 v6; // rbx
  __int64 v7; // rsi
  _QWORD *v8; // r13
  __m128i v9; // xmm0
  char v10; // al
  __m128i v11; // xmm0
  __int64 v12; // rsi
  __int64 v13; // rax
  _QWORD *v14; // rdi
  __int64 v15; // rdx
  size_t v16; // rdx
  char v17; // al
  char v18; // al

  v2 = (__int64)(a2 + 274);
  v5 = a2[274];
  a2[284] += 48LL;
  v6 = (v5 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a2[275] >= v6 + 48 && v5 )
    a2[274] = v6 + 48;
  else
    v6 = sub_722150(v2, 48, 3);
  v7 = a1[2].m128i_u32[1];
  v8 = (_QWORD *)a1[2].m128i_i64[1];
  v9 = _mm_loadu_si128(a1);
  *(_WORD *)(v6 + 32) = 113;
  v10 = *(_BYTE *)(v6 + 34);
  *(__m128i *)v6 = v9;
  v11 = _mm_loadu_si128(a1 + 1);
  *(_DWORD *)(v6 + 36) = v7;
  v12 = v7;
  *(__m128i *)(v6 + 16) = v11;
  *(_BYTE *)(v6 + 34) = v10 & 0xE0 | 0x18;
  v13 = a2[274];
  a2[284] += v12 * 8;
  v14 = (_QWORD *)((v13 + 15) & 0xFFFFFFFFFFFFFFF0LL);
  if ( a2[275] >= (unsigned __int64)&v14[v12] && v13 )
    a2[274] = &v14[v12];
  else
    v14 = (_QWORD *)sub_722150(v2, v12 * 8, 4);
  v15 = *(unsigned int *)(v6 + 36);
  *(_QWORD *)(v6 + 40) = v14;
  v16 = 8 * v15;
  if ( v16 <= 8 )
  {
    if ( v16 == 8 )
      *v14 = *v8;
  }
  else
  {
    memmove(v14, v8, v16);
  }
  v17 = a1[2].m128i_i8[2] & 1 | *(_BYTE *)(v6 + 34) & 0xFE;
  *(_BYTE *)(v6 + 34) = v17;
  v18 = a1[2].m128i_i8[2] & 2 | v17 & 0xFD;
  *(_BYTE *)(v6 + 34) = v18;
  *(_BYTE *)(v6 + 34) = a1[2].m128i_i8[2] & 4 | v18 & 0xFB;
  return v6;
}

