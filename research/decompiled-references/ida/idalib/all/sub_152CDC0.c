__int64 __fastcall sub_152CDC0(
        __int64 *a1,
        unsigned __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int128 a7,
        int a8,
        __int128 a9,
        int a10)
{
  unsigned int v11; // r13d
  __int16 v12; // ax
  int v13; // ebx
  unsigned __int64 v14; // rdx
  __m128i *v15; // rcx
  const __m128i *v16; // rax
  __int64 v17; // rax
  int v18; // edx
  _BYTE *v19; // r15
  const __m128i *v20; // rbx
  unsigned __int64 v21; // rdx
  __m128i *v22; // rax
  char *v23; // r15
  __int64 v24; // rbx
  char *v25; // rax
  __int64 v26; // r13
  __int64 v27; // rdx
  unsigned __int64 v28; // rax
  void *v29; // rcx
  int v30; // eax
  __m128i v31; // xmm2
  __m128i v32; // xmm3
  int v33; // eax
  char v35; // [rsp+7h] [rbp-C1h]
  unsigned __int64 v36; // [rsp+8h] [rbp-C0h]
  void *src; // [rsp+10h] [rbp-B8h] BYREF
  __int64 v38; // [rsp+18h] [rbp-B0h]
  _BYTE v39[32]; // [rsp+20h] [rbp-A8h] BYREF
  int v40; // [rsp+40h] [rbp-88h] BYREF
  __int64 v41; // [rsp+44h] [rbp-84h]
  __int64 v42; // [rsp+4Ch] [rbp-7Ch]

  v11 = a3;
  v35 = a3;
  src = v39;
  v38 = 0x100000000LL;
  v12 = *(_WORD *)(a2 + 16);
  if ( v12 != 2 )
  {
    v13 = (unsigned __int8)a3;
    do
    {
      if ( v12 == 22 )
      {
        ++v13;
      }
      else if ( v12 == 23 && !--v13 )
      {
        if ( v35 )
        {
          sub_14634E0(a1, (int *)a2);
          v18 = *(_DWORD *)a2;
          goto LABEL_11;
        }
      }
      v14 = (unsigned int)v38 + 1LL;
      v15 = (__m128i *)((char *)src + 24 * (unsigned int)v38);
      v16 = (const __m128i *)a2;
      if ( v14 > HIDWORD(v38) )
      {
        if ( (unsigned __int64)src > a2 || (unsigned __int64)v15 <= a2 )
        {
          sub_2237220(&src, v39, v14, 24);
          v15 = (__m128i *)((char *)src + 24 * (unsigned int)v38);
          v16 = (const __m128i *)a2;
        }
        else
        {
          v36 = a2 - (_QWORD)src;
          sub_2237220(&src, v39, v14, 24);
          v16 = (const __m128i *)((char *)src + v36);
          v15 = (__m128i *)((char *)src + 24 * (unsigned int)v38);
        }
      }
      *v15 = _mm_loadu_si128(v16);
      v17 = v16[1].m128i_i64[0];
      LODWORD(v38) = v38 + 1;
      v15[1].m128i_i64[0] = v17;
      sub_14634E0(a1, (int *)a2);
      v12 = *(_WORD *)(a2 + 16);
    }
    while ( v12 != 2 );
  }
  v18 = *(_DWORD *)a2;
  if ( (_BYTE)v11 )
  {
    sub_FC70B0((__int64)&v40, a1[6], v18, 14);
    sub_AE9DF0((unsigned __int8 **)&v40, 23, 4u);
    sub_AEA040((__int64)&v40);
  }
  else
  {
LABEL_11:
    v19 = src;
    v40 = v18;
    v42 = 0x100000000LL;
    v20 = (const __m128i *)&v40;
    v41 = 0;
    v21 = (unsigned int)v38 + 1LL;
    v22 = (__m128i *)((char *)src + 24 * (unsigned int)v38);
    if ( v21 > HIDWORD(v38) )
    {
      if ( src > &v40 || v22 <= (__m128i *)&v40 )
      {
        sub_2237220(&src, v39, v21, 24);
        v22 = (__m128i *)((char *)src + 24 * (unsigned int)v38);
      }
      else
      {
        sub_2237220(&src, v39, v21, 24);
        v20 = (const __m128i *)((char *)src + (char *)&v40 - v19);
        v22 = (__m128i *)((char *)src + 24 * (unsigned int)v38);
      }
    }
    *v22 = _mm_loadu_si128(v20);
    v23 = (char *)src;
    v22[1].m128i_i64[0] = v20[1].m128i_i64[0];
    v25 = v23;
    LODWORD(v38) = v38 + 1;
    v24 = (unsigned int)v38;
    v26 = 24LL * (unsigned int)v38;
    if ( &v23[v26] != v23 )
    {
      do
      {
        *((_WORD *)v25 + 9) |= 0x800u;
        v25 += 24;
      }
      while ( &v23[v26] != v25 );
    }
    v27 = a1[16];
    a1[26] += v26;
    v28 = (v27 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    if ( a1[17] >= v26 + v28 && v27 )
    {
      a1[16] = v26 + v28;
      v29 = (void *)((v27 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    }
    else
    {
      v29 = (void *)sub_986170((__int64)(a1 + 16), v26, v26, 3, a5, a6);
    }
    if ( v26 )
      v29 = memmove(v29, v23, v26);
    v30 = a8;
    *(_QWORD *)(a4 + 48) = v29;
    v11 = 0;
    v31 = _mm_loadu_si128((const __m128i *)&a7);
    *(_QWORD *)(a4 + 56) = v24;
    v32 = _mm_loadu_si128((const __m128i *)&a9);
    *(_DWORD *)(a4 + 16) = v30;
    v33 = a10;
    *(__m128i *)a4 = v31;
    *(__m128i *)(a4 + 24) = v32;
    *(_DWORD *)(a4 + 40) = v33;
  }
  if ( src != v39 )
    free(src);
  return v11;
}
