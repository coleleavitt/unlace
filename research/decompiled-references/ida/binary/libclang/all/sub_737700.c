char *__fastcall sub_737700(
        __int64 a1,
        _QWORD *a2,
        const __m128i *a3,
        __int64 a4,
        const void *a5,
        __int64 a6,
        int a7,
        void *src,
        __int64 a9,
        char a10,
        __int64 a11)
{
  __int64 v14; // r10
  __m128i v16; // xmm0
  char v17; // r8
  int v18; // r9d
  char v19; // al
  __m128i v20; // xmm0
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rdi
  __int64 v24; // rsi
  unsigned __int64 v25; // r11
  __int64 v26; // rdx
  char *v27; // rax
  char *v28; // r10
  char *result; // rax
  __int64 v30; // rax
  char v31; // [rsp+0h] [rbp-58h]
  __int64 v32; // [rsp+8h] [rbp-50h]

  v14 = (unsigned int)a6;
  v16 = _mm_loadu_si128(a3);
  v17 = a10;
  v18 = a7;
  *(_WORD *)(a1 + 32) = 196;
  v19 = *(_BYTE *)(a1 + 34);
  *(__m128i *)a1 = v16;
  v20 = _mm_loadu_si128(a3 + 1);
  *(_QWORD *)(a1 + 40) = a4;
  *(__m128i *)(a1 + 16) = v20;
  v21 = a11;
  *(_DWORD *)(a1 + 48) = v14;
  *(_BYTE *)(a1 + 34) = v19 & 0xE0 | 0x18;
  v22 = a2[284];
  v23 = (__int64)(a2 + 274);
  v24 = a2[274];
  v25 = a2[275];
  v26 = v14 + v22;
  a2[284] = v26;
  v27 = (char *)(v24 + v14);
  if ( v24 && v25 >= (unsigned __int64)v27 )
  {
    a2[274] = v27;
    v28 = (char *)(v24 + v14);
  }
  else
  {
    v30 = sub_722150(v23, v14, 0);
    v28 = (char *)a2[274];
    v21 = a11;
    v24 = v30;
    v26 = a2[284];
    v17 = a10;
    v25 = a2[275];
    v18 = a7;
    v27 = v28;
  }
  *(_QWORD *)(a1 + 56) = v24;
  *(_DWORD *)(a1 + 64) = v18;
  result = &v27[(unsigned int)a9];
  *(_DWORD *)(a1 + 68) = a9;
  a2[284] = (unsigned int)a9 + v26;
  if ( v28 && v25 >= (unsigned __int64)result )
  {
    a2[274] = result;
  }
  else
  {
    v32 = v21;
    v31 = v17;
    result = (char *)sub_722150(v23, (unsigned int)a9, 0);
    v21 = v32;
    v17 = v31;
    v28 = result;
  }
  *(_QWORD *)(a1 + 72) = v28;
  *(_BYTE *)(a1 + 80) = v17;
  *(_QWORD *)(a1 + 88) = v21;
  if ( !a6 )
  {
    if ( !a9 )
      return result;
    return (char *)memcpy(*(void **)(a1 + 72), src, *(unsigned int *)(a1 + 68));
  }
  result = (char *)memcpy(*(void **)(a1 + 56), a5, *(unsigned int *)(a1 + 48));
  if ( a9 )
    return (char *)memcpy(*(void **)(a1 + 72), src, *(unsigned int *)(a1 + 68));
  return result;
}

