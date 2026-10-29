__int64 __fastcall sub_61C910(__int64 a1)
{
  unsigned int v1; // eax
  unsigned __int64 v2; // rbp
  _DWORD *v3; // r12
  unsigned __int16 *v4; // rsi
  _DWORD *v5; // rdx
  __int64 v6; // rcx
  unsigned __int64 v7; // r14
  char *v8; // r13
  char *v9; // rbp
  size_t v10; // r12
  size_t v11; // r12
  __m128i v12; // xmm0
  unsigned __int64 v13; // r12
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // r12
  size_t v16; // rbp
  size_t v18; // r14
  void *v19; // rax
  size_t v20; // r15
  void *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rsi
  size_t v24; // r14
  void *v25; // rax
  __int64 v26; // rsi
  __int64 v27; // rax
  unsigned __int16 v28; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int16 v29; // [rsp+12h] [rbp-56h]
  unsigned __int16 v30; // [rsp+14h] [rbp-54h]
  __m128i v31; // [rsp+16h] [rbp-52h] BYREF
  unsigned __int64 v32; // [rsp+28h] [rbp-40h]

  v1 = 18;
  v2 = *(_QWORD *)(a1 + 96);
  v3 = *(_DWORD **)(a1 + 88);
  v32 = __readfsqword(0x28u);
  v4 = &v28;
  v5 = v3;
  if ( v2 <= 0x12 )
    v1 = v2;
  if ( v1 >= 8 )
  {
    LODWORD(v22) = 0;
    do
    {
      v23 = (unsigned int)v22;
      v22 = (unsigned int)(v22 + 8);
      *(_QWORD *)((char *)&v28 + v23) = *(_QWORD *)((char *)v3 + v23);
    }
    while ( (unsigned int)v22 < (v1 & 0xFFFFFFF8) );
    v4 = (unsigned __int16 *)((char *)&v28 + v22);
    v5 = (_DWORD *)((char *)v3 + v22);
  }
  v6 = 0;
  if ( (v1 & 4) != 0 )
  {
    *(_DWORD *)v4 = *v5;
    v6 = 2;
    if ( (v1 & 2) == 0 )
    {
LABEL_6:
      if ( (v1 & 1) == 0 )
        goto LABEL_7;
LABEL_21:
      LOBYTE(v4[v6]) = *((_BYTE *)v5 + v6 * 2);
      if ( v2 <= 0x11 )
        return 2;
      goto LABEL_8;
    }
  }
  else if ( (v1 & 2) == 0 )
  {
    goto LABEL_6;
  }
  v4[v6] = *(_WORD *)((char *)v5 + v6 * 2);
  ++v6;
  if ( (v1 & 1) != 0 )
    goto LABEL_21;
LABEL_7:
  if ( v2 <= 0x11 )
    return 2;
LABEL_8:
  v7 = v28;
  v8 = (char *)v3 + 18;
  *(_QWORD *)(a1 + 16) = 0;
  *(_OWORD *)(a1 + 32) = 0;
  if ( !(_WORD)v7 )
  {
    v9 = (char *)v3 + v2;
    v10 = v29;
    if ( !v29 )
      goto LABEL_10;
LABEL_35:
    v24 = v9 - v8;
    v25 = (void *)qalloc((unsigned __int16)v10 + 1);
    if ( v9 - v8 > v10 )
      v24 = v10;
    *(_QWORD *)(a1 + 32) = v25;
    *((_BYTE *)memmove(v25, v8, v24) + v10) = 0;
    if ( (unsigned __int16)v10 != (_DWORD)v24 )
      return 2;
    v11 = v30;
    v8 += v24;
    if ( !v30 )
      goto LABEL_11;
    goto LABEL_17;
  }
  v20 = v2 - 18;
  v21 = (void *)qalloc((unsigned __int16)v7 + 1);
  if ( v2 - 18 > v7 )
    v20 = v7;
  *(_QWORD *)(a1 + 16) = v21;
  *((_BYTE *)memmove(v21, (char *)v3 + 18, v20) + v7) = 0;
  if ( (unsigned __int16)v7 != (_DWORD)v20 )
    return 2;
  v9 = (char *)v3 + v2;
  v10 = v29;
  v8 += v20;
  if ( v29 )
    goto LABEL_35;
LABEL_10:
  v11 = v30;
  if ( v30 )
  {
LABEL_17:
    v18 = v9 - v8;
    v19 = (void *)qalloc((unsigned __int16)v11 + 1);
    if ( v9 - v8 > v11 )
      v18 = v11;
    *(_QWORD *)(a1 + 40) = v19;
    *((_BYTE *)memmove(v19, v8, v18) + v11) = 0;
    if ( (unsigned __int16)v11 == (_DWORD)v18 )
    {
      v8 += v18;
      goto LABEL_11;
    }
    return 2;
  }
LABEL_11:
  v12 = _mm_loadl_epi64(&v31);
  v13 = *(unsigned int *)(a1 + 84);
  v14 = *(_QWORD *)(a1 + 120);
  *(_DWORD *)(a1 + 8) = v31.m128i_i32[2];
  *(_DWORD *)(a1 + 184) = (_DWORD)v8 - *(_DWORD *)(a1 + 88);
  *(_QWORD *)(a1 + 24) = _mm_shuffle_epi32(v12, 225).m128i_u64[0];
  if ( v14 < v13 )
  {
    v26 = *(_QWORD *)(a1 + 112);
    if ( *(_QWORD *)(a1 + 128) < v13 )
    {
      v27 = qvector_reserve(a1 + 112, v26, v13, 8);
      v14 = *(_QWORD *)(a1 + 120);
      *(_QWORD *)(a1 + 112) = v27;
      v26 = v27;
    }
    memset((void *)(v26 + 8 * v14), 0, 8 * (v13 - v14));
    *(_QWORD *)(a1 + 120) = v13;
    v13 = *(unsigned int *)(a1 + 84);
  }
  else if ( v13 != v14 )
  {
    *(_QWORD *)(a1 + 120) = v13;
  }
  v15 = 8 * v13;
  v16 = v9 - v8;
  if ( v16 > v15 )
    v16 = v15;
  memmove(*(void **)(a1 + 112), v8, v16);
  return 2 * (unsigned int)((int)v16 != v15);
}
