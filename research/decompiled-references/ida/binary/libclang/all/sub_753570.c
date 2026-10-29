unsigned __int64 __fastcall sub_753570(_QWORD *a1, const void *a2, __int64 a3, const __m128i *a4)
{
  __int64 v4; // r15
  __int64 v8; // rax
  unsigned __int64 v9; // rbx
  __m128i v10; // xmm0
  __m128i v11; // xmm0
  char *v12; // rdi
  char *v13; // rax

  v4 = (__int64)(a1 + 274);
  v8 = a1[274];
  a1[284] += 48LL;
  v9 = (v8 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[275] >= v9 + 48 && v8 )
    a1[274] = v9 + 48;
  else
    v9 = sub_722150((__int64)(a1 + 274), 48, 3);
  v10 = _mm_loadu_si128(a4);
  *(_WORD *)(v9 + 32) = 98;
  *(__m128i *)v9 = v10;
  v11 = _mm_loadu_si128(a4 + 1);
  *(_BYTE *)(v9 + 34) &= 0xE0u;
  *(_DWORD *)(v9 + 36) = a3;
  *(__m128i *)(v9 + 16) = v11;
  v12 = (char *)a1[274];
  a1[284] += (unsigned int)a3;
  v13 = &v12[(unsigned int)a3];
  if ( a1[275] >= (unsigned __int64)v13 && v12 )
    a1[274] = v13;
  else
    v12 = (char *)sub_722150(v4, (unsigned int)a3, 0);
  *(_QWORD *)(v9 + 40) = v12;
  if ( a3 )
    memcpy(v12, a2, *(unsigned int *)(v9 + 36));
  if ( (~*(_BYTE *)(v9 + 30) & 0xF0) == 0 && !*(_QWORD *)v9 )
    *(_BYTE *)(v9 + 30) &= 0xFu;
  return v9;
}

