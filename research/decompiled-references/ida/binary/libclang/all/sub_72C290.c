unsigned __int64 __fastcall sub_72C290(_QWORD *a1, const void *a2, __int64 a3, char a4, const __m128i *a5)
{
  __int64 v6; // rcx
  __int64 v10; // rax
  unsigned __int64 v11; // rbx
  __m128i v12; // xmm0
  __m128i v13; // xmm0
  char *v14; // rdi
  char *v15; // rax
  char v16; // al
  __int64 v18; // rax

  v6 = (__int64)(a1 + 274);
  v10 = a1[274];
  a1[284] += 56LL;
  v11 = (v10 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[275] >= v11 + 56 && v10 )
  {
    a1[274] = v11 + 56;
  }
  else
  {
    v18 = sub_722150(v6, 56, 3);
    v6 = (__int64)(a1 + 274);
    v11 = v18;
  }
  v12 = _mm_loadu_si128(a5);
  *(_WORD *)(v11 + 32) = 131;
  *(__m128i *)v11 = v12;
  v13 = _mm_loadu_si128(a5 + 1);
  *(_BYTE *)(v11 + 34) &= 0xE0u;
  *(_DWORD *)(v11 + 36) = a3;
  *(__m128i *)(v11 + 16) = v13;
  v14 = (char *)a1[274];
  a1[284] += (unsigned int)a3;
  v15 = &v14[(unsigned int)a3];
  if ( a1[275] >= (unsigned __int64)v15 && v14 )
    a1[274] = v15;
  else
    v14 = (char *)sub_722150(v6, (unsigned int)a3, 0);
  *(_QWORD *)(v11 + 40) = v14;
  *(_BYTE *)(v11 + 48) = a4;
  if ( a3 )
    memcpy(v14, a2, *(unsigned int *)(v11 + 36));
  v16 = *(_BYTE *)(v11 + 30);
  *(_BYTE *)(v11 + 34) |= 4u;
  if ( (~v16 & 0xF0) == 0 && !*(_QWORD *)v11 )
    *(_BYTE *)(v11 + 30) = v16 & 0xF;
  return v11;
}

