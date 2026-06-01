__m128i *__fastcall sub_E57F30(__int64 a1, __int64 a2, __int8 a3)
{
  __m128i *v4; // rbx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rax
  _QWORD *v10; // rdi
  __int64 i; // rax
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rax
  char *v14; // rsi
  const void *v15; // r14
  char *v16; // r12
  __int64 v17; // rdi
  char *v18; // r12
  _BYTE *v19; // rdi
  __int64 v21; // rcx
  unsigned __int64 v22; // r12
  __int64 v23; // rax
  _QWORD *v24; // r13
  char v25; // dl
  size_t v26; // rax
  __int64 *v27; // rdi
  __int64 v28; // rcx
  _DWORD *v29; // rax
  _DWORD *v30; // rdx
  char v31; // [rsp+10h] [rbp-58h] BYREF
  _BYTE v32[15]; // [rsp+11h] [rbp-57h] BYREF
  void *src[2]; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v34[56]; // [rsp+30h] [rbp-38h] BYREF

  v4 = (__m128i *)operator new(0x120u);
  v4[1].m128i_i8[12] = a3;
  v4->m128i_i64[1] = a1;
  v4[1].m128i_i64[0] = a2;
  v4[1].m128i_i32[2] = 1;
  v4[2].m128i_i64[0] = 0;
  v4[2].m128i_i64[1] = 0;
  v4[3].m128i_i32[0] = 0;
  v4[3].m128i_i64[1] = 0;
  v4[4].m128i_i64[0] = 0;
  v4[4].m128i_i32[2] = 0;
  v4[5].m128i_i64[0] = 0;
  v4[5].m128i_i64[1] = 0;
  v4[6].m128i_i32[0] = 0;
  v4[6].m128i_i64[1] = 0;
  v4[7].m128i_i64[0] = 0;
  v4[7].m128i_i32[2] = 0;
  v4->m128i_i64[0] = (__int64)off_2BDB018;
  v4[8].m128i_i64[0] = 0;
  v4[8].m128i_i64[1] = 0;
  v4[9].m128i_i32[0] = 0;
  v4[9].m128i_i64[1] = 0;
  v4[10].m128i_i64[0] = 0;
  v4[10].m128i_i32[2] = 0;
  v4[11].m128i_i64[0] = 0;
  v4[11].m128i_i64[1] = 0;
  v4[12].m128i_i32[0] = 0;
  v4[12].m128i_i64[1] = 0;
  v4[13].m128i_i64[0] = 0;
  v4[13].m128i_i32[2] = 0;
  v4[14].m128i_i64[0] = 0;
  v4[14].m128i_i64[1] = 0;
  v4[15].m128i_i32[0] = 0;
  v4[15].m128i_i64[1] = (__int64)v4[17].m128i_i64;
  v7 = *(_QWORD *)(a1 + 2312);
  v4[16] = _mm_load_si128((const __m128i *)&xmmword_2384DC0);
  v8 = *(unsigned int *)(v7 + 520);
  LOBYTE(src[0]) = 0;
  if ( (unsigned int)(v8 + 1) <= 1 )
    goto LABEL_28;
  if ( (int)v8 < 0 )
  {
    v22 = (unsigned int)(-2 - v8);
    v23 = *(_QWORD *)(*(_QWORD *)(v7 + 320) + 8LL * ((unsigned int)(-2 - v8) >> 6));
    if ( _bittest64(&v23, v22) )
    {
      v24 = (_QWORD *)(*(_QWORD *)(v7 + 272) + 8 * ((unsigned __int64)(int)v22 >> 5));
      if ( *v24 )
      {
        v9 = *v24 + 24 * (v22 & 0x1F);
        goto LABEL_4;
      }
      v27 = (__int64 *)(*(_QWORD *)(v7 + 288) & 0xFFFFFFFFFFFFFFF8LL);
      v28 = *v27;
      v27[10] += 768;
      v29 = (_DWORD *)((v28 + 7) & 0xFFFFFFFFFFFFFFF8LL);
      if ( v27[1] >= (unsigned __int64)(v29 + 192) && v28 )
        *v27 = (__int64)(v29 + 192);
      else
        v29 = (_DWORD *)sub_962430((__int64)v27, 768, 768, 3, v5, v6);
      *v24 = v29;
      v30 = v29 + 192;
      do
      {
        *v29 = 0;
        v29 += 6;
        *((_OWORD *)v29 - 1) = 0;
        *((_QWORD *)v29 - 1) = 0;
      }
      while ( v29 != v30 );
      v25 = (char)src[0];
      v9 = *v24 + 24 * (v22 & 0x1F);
    }
    else
    {
      v9 = sub_FFBBF0(v7, (unsigned int)v22, src);
      v25 = (char)src[0];
    }
    if ( v25 )
    {
LABEL_28:
      v26 = j__strlen("0");
      v4[16].m128i_i64[0] = 0;
      sub_9FC110(&v4[15].m128i_i64[1], "0", &aVoid0_0[v26 + 8]);
      return v4;
    }
  }
  else
  {
    v9 = *(_QWORD *)(v7 + 184) + 24 * v8;
  }
LABEL_4:
  if ( !v9 )
    goto LABEL_28;
  if ( *(char *)(v9 + 3) < 0 )
    goto LABEL_28;
  v10 = *(_QWORD **)((*(_QWORD *)(v9 + 16) & 0xFFFFFFFFFFFFFFF8LL) + 8);
  if ( !v10 )
    goto LABEL_28;
  for ( i = v10[1]; i; i = *(_QWORD *)(v12 + 8) )
  {
    if ( (i & 4) == 0 )
      break;
    v12 = i & 0xFFFFFFFFFFFFFFF8LL;
    if ( !v12 )
      break;
    v10 = (_QWORD *)v12;
  }
  v13 = (unsigned int)sub_2263F90(v10 + 4, *v10);
  if ( (_DWORD)v13 )
  {
    v14 = v32;
    do
    {
      --v14;
      v21 = v13 & 0xF;
      v13 >>= 4;
      *v14 = a0123456789abcd_3[v21];
    }
    while ( v13 );
  }
  else
  {
    v31 = 48;
    v14 = &v31;
  }
  src[0] = v34;
  sub_E54EB0(src, v14, (__int64)v32);
  v15 = src[0];
  v16 = (char *)src[1];
  v17 = 0;
  v4[16].m128i_i64[0] = 0;
  if ( (unsigned __int64)v16 > v4[16].m128i_i64[1] )
  {
    sub_22130D0(&v4[15].m128i_u64[1], &v4[17], v16, 1);
    v17 = v4[16].m128i_i64[0];
  }
  if ( v16 )
  {
    memcpy((void *)(v4[15].m128i_i64[1] + v17), v15, (size_t)v16);
    v17 = v4[16].m128i_i64[0];
  }
  v18 = &v16[v17];
  v19 = src[0];
  v4[16].m128i_i64[0] = (__int64)v18;
  if ( v19 != v34 )
    operator delete(v19);
  return v4;
}

