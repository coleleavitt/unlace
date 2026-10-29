unsigned __int64 __fastcall sub_73F8E0(_QWORD *a1, _DWORD *a2, unsigned int a3, const __m128i *a4)
{
  __int64 v4; // r15
  __int64 v9; // rax
  unsigned __int64 v10; // rbx
  __m128i v11; // xmm0
  __int64 v12; // rsi
  __m128i v13; // xmm0
  __int64 v14; // rax
  _DWORD *v15; // rdi
  __int64 v16; // rdx
  size_t v17; // rdx

  v4 = (__int64)(a1 + 274);
  v9 = a1[274];
  a1[284] += 80LL;
  v10 = (v9 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[275] >= v10 + 80 && v9 )
    a1[274] = v10 + 80;
  else
    v10 = sub_722150((__int64)(a1 + 274), 80, 3);
  v11 = _mm_loadu_si128(a4);
  *(_WORD *)(v10 + 32) = 64;
  v12 = a3;
  *(__m128i *)v10 = v11;
  v13 = _mm_loadu_si128(a4 + 1);
  *(_BYTE *)(v10 + 34) &= 0xE0u;
  *(_DWORD *)(v10 + 36) = a3;
  *(__m128i *)(v10 + 16) = v13;
  v14 = a1[274];
  a1[284] += v12 * 4;
  v15 = (_DWORD *)((v14 + 15) & 0xFFFFFFFFFFFFFFF0LL);
  if ( a1[275] >= (unsigned __int64)&v15[v12] && v14 )
    a1[274] = &v15[v12];
  else
    v15 = (_DWORD *)sub_722150(v4, v12 * 4, 4);
  v16 = *(unsigned int *)(v10 + 36);
  *(_QWORD *)(v10 + 40) = v15;
  *(_QWORD *)(v10 + 48) = 0;
  v17 = 4 * v16;
  *(_QWORD *)(v10 + 56) = 0;
  *(_QWORD *)(v10 + 64) = 0;
  *(_QWORD *)(v10 + 72) = 0;
  if ( v17 <= 4 )
  {
    if ( v17 == 4 )
      *v15 = *a2;
  }
  else
  {
    memmove(v15, a2, v17);
  }
  if ( (~*(_BYTE *)(v10 + 30) & 0xF0) == 0 && !*(_QWORD *)v10 )
    *(_BYTE *)(v10 + 30) &= 0xFu;
  return v10;
}

