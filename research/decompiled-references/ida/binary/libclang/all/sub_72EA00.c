unsigned __int64 __fastcall sub_72EA00(const __m128i *a1, _QWORD *a2)
{
  __int64 v2; // r14
  __int64 v4; // rax
  unsigned __int64 v5; // rbx
  __m128i v6; // xmm0
  __int64 v7; // r13
  const void *v8; // r15
  __m128i v9; // xmm0
  char *v10; // rdi
  char v11; // al
  char v12; // al

  v2 = (__int64)(a2 + 274);
  v4 = a2[274];
  a2[284] += 48LL;
  v5 = (v4 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a2[275] >= v5 + 48 && v4 )
    a2[274] = v5 + 48;
  else
    v5 = sub_722150(v2, 48, 3);
  v6 = _mm_loadu_si128(a1);
  v7 = a1[2].m128i_u32[1];
  v8 = (const void *)a1[2].m128i_i64[1];
  *(_BYTE *)(v5 + 34) &= 0xE0u;
  *(__m128i *)v5 = v6;
  v9 = _mm_loadu_si128(a1 + 1);
  *(_WORD *)(v5 + 32) = 11;
  *(_DWORD *)(v5 + 36) = v7;
  *(__m128i *)(v5 + 16) = v9;
  v10 = (char *)a2[274];
  a2[284] += v7;
  if ( a2[275] >= (unsigned __int64)&v10[v7] && v10 )
    a2[274] = &v10[v7];
  else
    v10 = (char *)sub_722150(v2, v7, 0);
  *(_QWORD *)(v5 + 40) = v10;
  if ( v7 )
    memcpy(v10, v8, *(unsigned int *)(v5 + 36));
  v11 = a1[2].m128i_i8[2] & 1 | *(_BYTE *)(v5 + 34) & 0xFE;
  *(_BYTE *)(v5 + 34) = v11;
  v12 = a1[2].m128i_i8[2] & 2 | v11 & 0xFD;
  *(_BYTE *)(v5 + 34) = v12;
  *(_BYTE *)(v5 + 34) = a1[2].m128i_i8[2] & 4 | v12 & 0xFB;
  return v5;
}

