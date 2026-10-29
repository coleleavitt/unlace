__int64 __fastcall sub_E7C4B0(__int64 a1, _BYTE *a2, size_t a3)
{
  __int64 v6; // r12
  __int64 v7; // rdx
  __int64 v8; // r15
  __int64 v9; // r14
  __int64 v11; // rbp
  unsigned __int64 v12; // rax
  _BYTE *v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // rsi
  __int64 v16; // rcx
  __m128i *v17; // rax
  __m128i *v18; // rdx
  _BYTE *v19; // rdi
  unsigned __int64 v20; // r14
  __int64 v21; // rdi
  __int64 v22; // [rsp+8h] [rbp-70h]
  unsigned __int64 v23; // [rsp+18h] [rbp-60h]
  void *v24[2]; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v25[72]; // [rsp+30h] [rbp-48h] BYREF

  v6 = *(_QWORD *)(a1 + 32);
  v23 = *(unsigned int *)(a1 + 40);
  v7 = (__int64)(32 * v23) >> 5;
  v22 = v6 + 32 * v23;
  if ( !((__int64)(32 * v23) >> 7) )
  {
    v8 = *(_QWORD *)(a1 + 32);
LABEL_26:
    if ( v7 != 2 )
    {
      if ( v7 != 3 )
      {
        if ( v7 != 1 )
          goto LABEL_19;
        goto LABEL_29;
      }
      if ( a3 == *(_QWORD *)(v8 + 8) && (!a3 || !memcmp(*(const void **)v8, a2, a3)) )
        goto LABEL_16;
      v8 += 32;
    }
    if ( a3 == *(_QWORD *)(v8 + 8) && (!a3 || !memcmp(*(const void **)v8, a2, a3)) )
      goto LABEL_16;
    v8 += 32;
LABEL_29:
    if ( a3 != *(_QWORD *)(v8 + 8) || a3 && memcmp(*(const void **)v8, a2, a3) )
      goto LABEL_19;
    goto LABEL_16;
  }
  v8 = *(_QWORD *)(a1 + 32);
  while ( a3 != *(_QWORD *)(v8 + 8) || a3 && memcmp(*(const void **)v8, a2, a3) )
  {
    v9 = v8 + 32;
    if ( a3 == *(_QWORD *)(v8 + 40) && (!a3 || !memcmp(*(const void **)(v8 + 32), a2, a3))
      || (v9 = v8 + 64, a3 == *(_QWORD *)(v8 + 72)) && (!a3 || !memcmp(*(const void **)(v8 + 64), a2, a3))
      || (v9 = v8 + 96, a3 == *(_QWORD *)(v8 + 104)) && (!a3 || !memcmp(*(const void **)(v8 + 96), a2, a3)) )
    {
      v8 = v9;
      if ( v22 != v9 )
        return sub_227B930(*(_QWORD *)(a1 + 8), (v8 - v6) >> 5);
      goto LABEL_19;
    }
    v8 += 128;
    if ( v6 + ((__int64)(32 * v23) >> 7 << 7) == v8 )
    {
      v7 = (v22 - v8) >> 5;
      goto LABEL_26;
    }
  }
LABEL_16:
  if ( v22 != v8 )
    return sub_227B930(*(_QWORD *)(a1 + 8), (v8 - v6) >> 5);
LABEL_19:
  if ( v23 <= 9 )
  {
    v24[0] = v25;
    sub_E78CB0(v24, a2, (__int64)&a2[a3]);
    v14 = *(unsigned int *)(a1 + 40);
    v15 = v14 + 1;
    if ( v14 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 44) )
    {
      v20 = *(_QWORD *)(a1 + 32);
      v21 = a1 + 32;
      if ( v20 > (unsigned __int64)v24 || (unsigned __int64)v24 >= v20 + 32 * v14 )
      {
        sub_A8C1F0(v21, v15);
        v16 = *(_QWORD *)(a1 + 32);
        v14 = *(unsigned int *)(a1 + 40);
        v17 = (__m128i *)v24;
      }
      else
      {
        sub_A8C1F0(v21, v15);
        v16 = *(_QWORD *)(a1 + 32);
        v14 = *(unsigned int *)(a1 + 40);
        v17 = (__m128i *)((char *)v24 + v16 - v20);
      }
    }
    else
    {
      v16 = *(_QWORD *)(a1 + 32);
      v17 = (__m128i *)v24;
    }
    v18 = (__m128i *)(v16 + 32 * v14);
    v18->m128i_i64[0] = (__int64)v18[1].m128i_i64;
    if ( (__m128i *)v17->m128i_i64[0] == &v17[1] )
    {
      v18[1] = _mm_loadu_si128(v17 + 1);
    }
    else
    {
      v18->m128i_i64[0] = v17->m128i_i64[0];
      v18[1].m128i_i64[0] = v17[1].m128i_i64[0];
    }
    v18->m128i_i64[1] = v17->m128i_i64[1];
    v17->m128i_i64[0] = (__int64)v17[1].m128i_i64;
    v19 = v24[0];
    v17->m128i_i64[1] = 0;
    v17[1].m128i_i8[0] = 0;
    ++*(_DWORD *)(a1 + 40);
    if ( v19 != v25 )
      operator delete(v19);
  }
  v11 = *(_QWORD *)(a1 + 8);
  v12 = *(_QWORD *)(v11 + 24);
  v13 = *(_BYTE **)(v11 + 32);
  if ( a3 > v12 - (unsigned __int64)v13 )
  {
    v11 = sub_227BF10(v11, a2, a3);
    v13 = *(_BYTE **)(v11 + 32);
    v12 = *(_QWORD *)(v11 + 24);
  }
  else if ( a3 )
  {
    memcpy(v13, a2, a3);
    v12 = *(_QWORD *)(v11 + 24);
    v13 = (_BYTE *)(a3 + *(_QWORD *)(v11 + 32));
    *(_QWORD *)(v11 + 32) = v13;
  }
  if ( v12 <= (unsigned __int64)v13 )
    return sub_227BA10(v11, 64);
  *(_QWORD *)(v11 + 32) = v13 + 1;
  *v13 = 64;
  return (__int64)(v13 + 1);
}
