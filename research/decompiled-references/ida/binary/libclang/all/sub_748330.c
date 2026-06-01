unsigned __int64 __fastcall sub_748330(const __m128i *a1, _QWORD *a2)
{
  __int64 v2; // r14
  __int64 v4; // rax
  unsigned __int64 v5; // rbx
  __int64 v6; // r13
  const void *v7; // r15
  __m128i v8; // xmm0
  char v9; // al
  __m128i v10; // xmm0
  char *v11; // rdi
  char v12; // al
  char v13; // al

  v2 = (__int64)(a2 + 274);
  v4 = a2[274];
  a2[284] += 48LL;
  v5 = (v4 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a2[275] >= v5 + 48 && v4 )
    a2[274] = v5 + 48;
  else
    v5 = sub_722150(v2, 48, 3);
  v6 = a1[2].m128i_u32[1];
  v7 = (const void *)a1[2].m128i_i64[1];
  v8 = _mm_loadu_si128(a1);
  *(_WORD *)(v5 + 32) = 285;
  v9 = *(_BYTE *)(v5 + 34);
  *(__m128i *)v5 = v8;
  v10 = _mm_loadu_si128(a1 + 1);
  *(_DWORD *)(v5 + 36) = v6;
  *(__m128i *)(v5 + 16) = v10;
  *(_BYTE *)(v5 + 34) = v9 & 0xE0 | 0x10;
  v11 = (char *)a2[274];
  a2[284] += v6;
  if ( a2[275] >= (unsigned __int64)&v11[v6] && v11 )
    a2[274] = &v11[v6];
  else
    v11 = (char *)sub_722150(v2, v6, 0);
  *(_QWORD *)(v5 + 40) = v11;
  if ( v6 )
    memcpy(v11, v7, *(unsigned int *)(v5 + 36));
  v12 = a1[2].m128i_i8[2] & 1 | *(_BYTE *)(v5 + 34) & 0xFE;
  *(_BYTE *)(v5 + 34) = v12;
  v13 = a1[2].m128i_i8[2] & 2 | v12 & 0xFD;
  *(_BYTE *)(v5 + 34) = v13;
  *(_BYTE *)(v5 + 34) = a1[2].m128i_i8[2] & 4 | v13 & 0xFB;
  return v5;
}

