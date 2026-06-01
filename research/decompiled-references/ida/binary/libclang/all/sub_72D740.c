char *__fastcall sub_72D740(
        __int64 a1,
        _QWORD *a2,
        const __m128i *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int128 a7,
        __int128 a8,
        char a9,
        void *src,
        __int64 a11,
        char a12,
        void *a13,
        __int64 a14,
        int a15,
        __int64 a16)
{
  __m128i v19; // xmm0
  char v20; // r9
  char v21; // al
  __m128i v22; // xmm0
  __int64 v23; // r14
  __m128i v24; // xmm0
  const void *v25; // r10
  const void *v26; // r13
  __int64 v27; // r12
  int v28; // ecx
  __int64 v29; // rdi
  __int64 v30; // r15
  __int64 v31; // rdx
  char v32; // al
  __int64 v33; // rsi
  unsigned __int64 v34; // r11
  char *v35; // rax
  char *v36; // r8
  char *result; // rax
  __int64 v38; // rax
  int v39; // [rsp+0h] [rbp-58h]
  const void *v40; // [rsp+8h] [rbp-50h]
  char v41; // [rsp+8h] [rbp-50h]
  int v42; // [rsp+14h] [rbp-44h]
  const void *v43; // [rsp+18h] [rbp-40h]

  v19 = _mm_loadu_si128(a3);
  v20 = a12;
  *(_WORD *)(a1 + 32) = 136;
  *(__m128i *)a1 = v19;
  v21 = *(_BYTE *)(a1 + 34);
  v22 = _mm_loadu_si128(a3 + 1);
  v23 = a11;
  *(_QWORD *)(a1 + 40) = a4;
  *(__m128i *)(a1 + 16) = v22;
  v24 = _mm_loadu_si128((const __m128i *)&a7);
  v25 = src;
  *(_QWORD *)(a1 + 48) = a5;
  v26 = a13;
  *(_BYTE *)(a1 + 34) = v21 & 0xE0 | 0x10;
  v27 = a14;
  *(_QWORD *)(a1 + 56) = a6;
  v28 = a15;
  v29 = (__int64)(a2 + 274);
  v30 = a16;
  *(__m128i *)(a1 + 64) = v24;
  v31 = (unsigned int)v23 + a2[284];
  *(__m128i *)(a1 + 80) = _mm_loadu_si128((const __m128i *)&a8);
  v32 = a9;
  a2[284] = v31;
  v33 = a2[274];
  *(_BYTE *)(a1 + 96) = v32;
  v34 = a2[275];
  *(_DWORD *)(a1 + 100) = v23;
  v35 = (char *)(v33 + (unsigned int)v23);
  if ( v33 && v34 >= (unsigned __int64)v35 )
  {
    a2[274] = v35;
    v36 = (char *)(v33 + (unsigned int)v23);
  }
  else
  {
    v43 = v25;
    v42 = v28;
    v41 = v20;
    v38 = sub_722150(v29, (unsigned int)v23, 0);
    v36 = (char *)a2[274];
    v25 = v43;
    v33 = v38;
    v31 = a2[284];
    v34 = a2[275];
    v28 = v42;
    v20 = v41;
    v35 = v36;
  }
  *(_QWORD *)(a1 + 104) = v33;
  *(_BYTE *)(a1 + 112) = v20;
  result = &v35[(unsigned int)v27];
  *(_DWORD *)(a1 + 116) = v27;
  a2[284] = (unsigned int)v27 + v31;
  if ( v36 && v34 >= (unsigned __int64)result )
  {
    a2[274] = result;
  }
  else
  {
    v40 = v25;
    v39 = v28;
    result = (char *)sub_722150(v29, (unsigned int)v27, 0);
    v25 = v40;
    v28 = v39;
    v36 = result;
  }
  *(_QWORD *)(a1 + 120) = v36;
  *(_DWORD *)(a1 + 128) = v28;
  *(_QWORD *)(a1 + 136) = v30;
  if ( !v23 )
  {
    if ( !v27 )
      return result;
    return (char *)memcpy(*(void **)(a1 + 120), v26, *(unsigned int *)(a1 + 116));
  }
  result = (char *)memcpy(*(void **)(a1 + 104), v25, *(unsigned int *)(a1 + 100));
  if ( v27 )
    return (char *)memcpy(*(void **)(a1 + 120), v26, *(unsigned int *)(a1 + 116));
  return result;
}

