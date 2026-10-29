unsigned __int64 __fastcall sub_739410(const __m128i *a1, _QWORD *a2)
{
  __int64 v2; // r14
  __int64 v5; // rax
  unsigned __int64 v6; // rbx
  __int64 v7; // rsi
  __int64 v8; // rdx
  _QWORD *v9; // r13
  __m128i v10; // xmm0
  char v11; // al
  __m128i v12; // xmm0
  __int64 v13; // rsi
  __int64 v14; // rax
  _QWORD *v15; // rdi
  __int64 v16; // rdx
  size_t v17; // rdx
  char v18; // al
  char v19; // al

  v2 = (__int64)(a2 + 274);
  v5 = a2[274];
  a2[284] += 64LL;
  v6 = (v5 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a2[275] >= v6 + 64 && v5 )
    a2[274] = v6 + 64;
  else
    v6 = sub_722150(v2, 64, 3);
  v7 = a1[3].m128i_u32[0];
  v8 = a1[2].m128i_i64[1];
  v9 = (_QWORD *)a1[3].m128i_i64[1];
  v10 = _mm_loadu_si128(a1);
  *(_WORD *)(v6 + 32) = 206;
  v11 = *(_BYTE *)(v6 + 34);
  *(__m128i *)v6 = v10;
  v12 = _mm_loadu_si128(a1 + 1);
  *(_QWORD *)(v6 + 40) = v8;
  *(_DWORD *)(v6 + 48) = v7;
  v13 = v7;
  *(_BYTE *)(v6 + 34) = v11 & 0xE0 | 0x18;
  *(__m128i *)(v6 + 16) = v12;
  v14 = a2[274];
  a2[284] += v13 * 8;
  v15 = (_QWORD *)((v14 + 15) & 0xFFFFFFFFFFFFFFF0LL);
  if ( a2[275] >= (unsigned __int64)&v15[v13] && v14 )
    a2[274] = &v15[v13];
  else
    v15 = (_QWORD *)sub_722150(v2, v13 * 8, 4);
  v16 = *(unsigned int *)(v6 + 48);
  *(_QWORD *)(v6 + 56) = v15;
  v17 = 8 * v16;
  if ( v17 <= 8 )
  {
    if ( v17 == 8 )
      *v15 = *v9;
  }
  else
  {
    memmove(v15, v9, v17);
  }
  v18 = a1[2].m128i_i8[2] & 1 | *(_BYTE *)(v6 + 34) & 0xFE;
  *(_BYTE *)(v6 + 34) = v18;
  v19 = a1[2].m128i_i8[2] & 2 | v18 & 0xFD;
  *(_BYTE *)(v6 + 34) = v19;
  *(_BYTE *)(v6 + 34) = a1[2].m128i_i8[2] & 4 | v19 & 0xFB;
  return v6;
}

