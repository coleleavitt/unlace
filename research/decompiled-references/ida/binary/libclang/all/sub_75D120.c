unsigned __int64 __fastcall sub_75D120(const __m128i *a1, _QWORD *a2)
{
  __int64 v2; // r14
  __int64 v4; // rax
  unsigned __int64 v5; // rbx
  __m128i v6; // xmm0
  __int64 v7; // r13
  __int32 v8; // r15d
  const void *v9; // rcx
  __m128i v10; // xmm0
  char *v11; // rdi
  char v12; // al
  char v13; // al
  __int64 v15; // rax
  const void *v16; // [rsp+8h] [rbp-40h]

  v2 = (__int64)(a2 + 274);
  v4 = a2[274];
  a2[284] += 56LL;
  v5 = (v4 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a2[275] >= v5 + 56 && v4 )
    a2[274] = v5 + 56;
  else
    v5 = sub_722150(v2, 56, 3);
  v6 = _mm_loadu_si128(a1);
  v7 = a1[2].m128i_u32[1];
  v8 = a1[3].m128i_i32[0];
  v9 = (const void *)a1[2].m128i_i64[1];
  *(_WORD *)(v5 + 32) = 376;
  *(__m128i *)v5 = v6;
  v10 = _mm_loadu_si128(a1 + 1);
  *(_BYTE *)(v5 + 34) &= 0xE0u;
  *(_DWORD *)(v5 + 36) = v7;
  *(__m128i *)(v5 + 16) = v10;
  v11 = (char *)a2[274];
  a2[284] += v7;
  if ( a2[275] >= (unsigned __int64)&v11[v7] && v11 )
  {
    a2[274] = &v11[v7];
  }
  else
  {
    v16 = v9;
    v15 = sub_722150(v2, v7, 0);
    v9 = v16;
    v11 = (char *)v15;
  }
  *(_QWORD *)(v5 + 40) = v11;
  *(_DWORD *)(v5 + 48) = v8;
  if ( v7 )
    memcpy(v11, v9, *(unsigned int *)(v5 + 36));
  v12 = a1[2].m128i_i8[2] & 1 | *(_BYTE *)(v5 + 34) & 0xFE;
  *(_BYTE *)(v5 + 34) = v12;
  v13 = a1[2].m128i_i8[2] & 2 | v12 & 0xFD;
  *(_BYTE *)(v5 + 34) = v13;
  *(_BYTE *)(v5 + 34) = a1[2].m128i_i8[2] & 4 | v13 & 0xFB;
  return v5;
}

