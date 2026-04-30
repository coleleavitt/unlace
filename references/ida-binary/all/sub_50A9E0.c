unsigned __int64 __fastcall sub_50A9E0(unsigned __int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdi
  unsigned __int64 v5; // rcx
  __int64 v6; // rbp
  __int64 v7; // r8
  const __m128i *v8; // rax
  __m128i v9; // xmm0
  __int8 v10; // si
  __m128i v11; // xmm0
  __int32 v12; // esi
  __m128i v13; // xmm0
  __int64 v14; // rsi
  __int64 v15; // rsi
  __int64 v16; // rsi
  unsigned __int64 v17; // rax
  __int64 v18; // rax
  _DWORD *v19; // rdx
  int v20; // esi
  __int64 v21; // rsi
  __int64 v22; // r8
  __int64 v23; // rsi
  __int64 v24; // r8
  __int64 v25; // rsi
  unsigned __int64 v26; // rcx
  volatile signed __int32 *v27; // rax
  __int64 *v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rbx
  volatile signed __int32 *v32; // rcx
  __int64 v34; // [rsp+8h] [rbp-40h] BYREF
  __int64 *v35; // [rsp+10h] [rbp-38h]
  unsigned __int64 v36; // [rsp+18h] [rbp-30h] BYREF
  __int64 v37; // [rsp+20h] [rbp-28h]
  unsigned __int64 v38; // [rsp+28h] [rbp-20h]

  v4 = a3;
  v5 = a3 + 96 * a2;
  v34 = a3;
  v38 = __readfsqword(0x28u);
  v36 = a3;
  v35 = &v34;
  if ( a1 >= v5 )
  {
    if ( v5 == a3 )
      return v38 - __readfsqword(0x28u);
    v6 = a1;
    v7 = a3 + 96 * a2;
  }
  else
  {
    v6 = a3 + 96 * a2;
    v7 = a1;
    if ( a3 == a1 )
    {
      v37 = a3;
LABEL_6:
      v18 = v4;
      v19 = (_DWORD *)a1;
      do
      {
        v20 = *v19;
        v18 += 96;
        v19 += 24;
        *(_DWORD *)(v18 - 96) = v20;
        *(_DWORD *)(v18 - 92) = *(v19 - 23);
        *(_DWORD *)(v18 - 88) = *(v19 - 22);
        *(_DWORD *)(v18 - 84) = *(v19 - 21);
        *(_BYTE *)(v18 - 80) = *((_BYTE *)v19 - 80);
        *(_DWORD *)(v18 - 76) = *(v19 - 19);
        *(_DWORD *)(v18 - 72) = *(v19 - 18);
        *(_DWORD *)(v18 - 68) = *(v19 - 17);
        *(_DWORD *)(v18 - 64) = *(v19 - 16);
        *(_DWORD *)(v18 - 60) = *(v19 - 15);
        v21 = *(_QWORD *)(v18 - 40);
        *(__m128i *)(v18 - 56) = _mm_loadu_si128((const __m128i *)(v19 - 14));
        *(_QWORD *)(v18 - 40) = *((_QWORD *)v19 - 5);
        v22 = *((_QWORD *)v19 - 4);
        *((_QWORD *)v19 - 5) = v21;
        v23 = *(_QWORD *)(v18 - 32);
        *(_QWORD *)(v18 - 32) = v22;
        v24 = *((_QWORD *)v19 - 3);
        *((_QWORD *)v19 - 4) = v23;
        v25 = *(_QWORD *)(v18 - 24);
        *(_QWORD *)(v18 - 24) = v24;
        *((_QWORD *)v19 - 3) = v25;
        *(_BYTE *)(v18 - 16) = *((_BYTE *)v19 - 16);
        *(_DWORD *)(v18 - 12) = *(v19 - 3);
        *(_DWORD *)(v18 - 8) = *(v19 - 2);
      }
      while ( v5 != v18 );
      v26 = (v5 - 96 - v4) & 0xFFFFFFFFFFFFFFE0LL;
      a1 += v26 + 96;
      v34 = v4 + v26 + 96;
      goto LABEL_9;
    }
  }
  v8 = (const __m128i *)a1;
  do
  {
    v9 = _mm_loadu_si128(v8);
    v10 = v8[1].m128i_i8[0];
    a3 += 96;
    v8 += 6;
    *(__m128i *)(a3 - 96) = v9;
    v11 = _mm_loadu_si128((const __m128i *)((char *)v8 - 76));
    *(_BYTE *)(a3 - 80) = v10;
    v12 = v8[-4].m128i_i32[1];
    *(__m128i *)(a3 - 76) = v11;
    v13 = _mm_loadu_si128((const __m128i *)((char *)v8 - 56));
    *(_DWORD *)(a3 - 60) = v12;
    *(__m128i *)(a3 - 56) = v13;
    v14 = v8[-3].m128i_i64[1];
    v8[-3].m128i_i64[1] = 0;
    *(_QWORD *)(a3 - 40) = v14;
    v15 = v8[-2].m128i_i64[0];
    v8[-2].m128i_i64[0] = 0;
    *(_QWORD *)(a3 - 32) = v15;
    v16 = v8[-2].m128i_i64[1];
    v8[-2].m128i_i64[1] = 0;
    *(_QWORD *)(a3 - 24) = v16;
    *(_BYTE *)(a3 - 16) = v8[-1].m128i_i8[0];
    *(_DWORD *)(a3 - 12) = v8[-1].m128i_i32[1];
    *(_DWORD *)(a3 - 8) = v8[-1].m128i_i32[2];
  }
  while ( v7 != a3 );
  v37 = v7;
  v17 = (v7 - v4 - 96) & 0xFFFFFFFFFFFFFFE0LL;
  v4 += v17 + 96;
  a1 += v17 + 96;
  v34 = v4;
  if ( v5 != v4 )
    goto LABEL_6;
LABEL_9:
  v35 = (__int64 *)&v36;
  if ( a1 != v6 )
  {
    do
    {
      v27 = *(volatile signed __int32 **)(a1 - 40);
      a1 -= 96LL;
      if ( v27 && !_InterlockedSub(v27, 1u) )
        free(*(void **)(a1 + 56));
    }
    while ( a1 != v6 );
    v28 = v35;
    v29 = 1;
    v30 = *v35;
    if ( *v35 >= v36 )
    {
      if ( v36 == v30 )
        return v38 - __readfsqword(0x28u);
      v29 = -1;
    }
    v31 = 96 * v29;
    do
    {
      *v28 = v31 + v30;
      v28 = v35;
      v30 = *v35;
      v32 = *(volatile signed __int32 **)(*v35 + 56);
      if ( v32 )
      {
        if ( !_InterlockedSub(v32, 1u) )
          free(*(void **)(v30 + 56));
        v28 = v35;
        v30 = *v35;
      }
    }
    while ( v30 != v36 );
  }
  return v38 - __readfsqword(0x28u);
}
