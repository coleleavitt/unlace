unsigned __int64 __fastcall sub_728850(_QWORD *a1, _QWORD *a2, unsigned int a3, const __m128i *a4)
{
  __int64 v6; // r13
  unsigned __int64 v9; // rax
  __m128i v10; // xmm0
  unsigned __int64 v11; // rbx
  __m128i v12; // xmm0
  char v13; // al
  __int64 v14; // rax
  __int64 v15; // rsi
  _QWORD *v16; // rdi
  __int64 v17; // rdx
  size_t v18; // rdx

  v6 = (__int64)(a1 + 274);
  v9 = sub_7222F0((__int64)(a1 + 274), 80, 3);
  v10 = _mm_loadu_si128(a4);
  *(_WORD *)(v9 + 32) = 86;
  v11 = v9;
  *(__m128i *)v9 = v10;
  v12 = _mm_loadu_si128(a4 + 1);
  *(_BYTE *)(v9 + 34) &= 0xE0u;
  *(_QWORD *)(v9 + 36) = 0;
  *(_QWORD *)(v9 + 44) = 0;
  *(_QWORD *)(v9 + 56) = 0;
  *(_QWORD *)(v9 + 72) = 0;
  *(__m128i *)(v9 + 16) = v12;
  v13 = *(_BYTE *)(v9 + 30);
  if ( (~v13 & 0xF0) == 0 && !*(_QWORD *)v11 )
    *(_BYTE *)(v11 + 30) = v13 & 0xF;
  *(_DWORD *)(v11 + 64) = a3;
  v14 = a1[274];
  v15 = a3;
  a1[284] += v15 * 8;
  v16 = (_QWORD *)((v14 + 15) & 0xFFFFFFFFFFFFFFF0LL);
  if ( a1[275] >= (unsigned __int64)&v16[v15] && v14 )
    a1[274] = &v16[v15];
  else
    v16 = (_QWORD *)sub_722150(v6, v15 * 8, 4);
  v17 = *(unsigned int *)(v11 + 64);
  *(_QWORD *)(v11 + 72) = v16;
  v18 = 8 * v17;
  if ( v18 <= 8 )
  {
    if ( v18 == 8 )
      *v16 = *a2;
  }
  else
  {
    memmove(v16, a2, v18);
  }
  return v11;
}

