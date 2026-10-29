__int64 __fastcall sub_20E2210(__int64 a1, char *a2)
{
  char v4; // al
  _BYTE *v5; // rax
  _BYTE *v6; // rdi
  __int64 v7; // r12
  int v8; // eax
  __m128i *v9; // rdx
  __int64 v10; // rsi
  void *v11; // rdx
  __int64 v12; // rdi
  __int64 v13; // rax
  void *v14; // rcx
  __int64 v15; // rsi
  void *v16; // rdx
  __int64 v17; // r14
  const __m128i *v18; // rax
  __int64 v19; // rdx
  const __m128i *v21; // r15
  _BYTE *v22; // rdi
  char v23; // si
  const __m128i *v24; // r12
  _BYTE *v25; // rax
  unsigned __int64 v27; // rdx
  unsigned int v28; // ebp
  const __m128i *v29; // rcx
  __int64 v30; // rdi
  const __m128i *v32; // rsi
  __m128i v33; // xmm1
  __m128i *v34; // rdx
  __int64 v35; // rdx
  __m128i si128; // xmm0
  __m128i v37; // xmm0
  const __m128i *v38; // rax
  __m128i v39; // xmm3
  void *v40; // rdi
  const __m128i *v41; // rax
  __m128i v42; // xmm2

  v4 = *a2;
  if ( *a2 == 2 )
  {
    v41 = (const __m128i *)&off_2BE87E0;
  }
  else if ( v4 )
  {
    if ( v4 == 1 )
    {
      v41 = (const __m128i *)&off_2BE8830;
    }
    else
    {
      if ( v4 != 3 )
      {
LABEL_5:
        v5 = *(_BYTE **)(a1 + 24);
        v6 = *(_BYTE **)(a1 + 32);
        goto LABEL_6;
      }
      v41 = (const __m128i *)&off_2BE8858;
    }
  }
  else
  {
    v41 = (const __m128i *)&off_2BE8808;
  }
  v42 = _mm_loadu_si128(v41);
  v5 = *(_BYTE **)(a1 + 24);
  v6 = *(_BYTE **)(a1 + 32);
  if ( (unsigned __int64)(v5 - v6) < v42.m128i_i64[1] )
  {
    sub_227BF10(a1, v42.m128i_i64[0], v42.m128i_i64[1]);
    goto LABEL_5;
  }
  if ( v42.m128i_i64[1] )
  {
    memcpy(v6, (const void *)v42.m128i_i64[0], v42.m128i_u64[1]);
    v5 = *(_BYTE **)(a1 + 24);
    v6 = (_BYTE *)(v42.m128i_i64[1] + *(_QWORD *)(a1 + 32));
    *(_QWORD *)(a1 + 32) = v6;
  }
LABEL_6:
  if ( v6 == v5 )
  {
    v7 = sub_227BF10(a1, "(", 1);
  }
  else
  {
    *v6 = 40;
    v7 = a1;
    ++*(_QWORD *)(a1 + 32);
  }
  v8 = *((_DWORD *)a2 + 1);
  if ( v8 )
  {
    switch ( v8 )
    {
      case 1:
        v38 = (const __m128i *)&off_2BE88A8;
        break;
      case 2:
        v38 = (const __m128i *)&off_2BE88D0;
        break;
      case 3:
        v38 = (const __m128i *)&off_2BE88F8;
        break;
      default:
        goto LABEL_12;
    }
  }
  else
  {
    v38 = (const __m128i *)&off_2BE8880;
  }
  v39 = _mm_loadu_si128(v38);
  v40 = *(void **)(v7 + 32);
  if ( *(_QWORD *)(v7 + 24) - (_QWORD)v40 < v39.m128i_i64[1] )
  {
    sub_227BF10(v7, v39.m128i_i64[0], v39.m128i_i64[1]);
  }
  else if ( v39.m128i_i64[1] )
  {
    memcpy(v40, (const void *)v39.m128i_i64[0], v39.m128i_u64[1]);
    *(_QWORD *)(v7 + 32) += v39.m128i_i64[1];
  }
LABEL_12:
  sub_227B910(v7, *((unsigned int *)a2 + 2));
  v9 = *(__m128i **)(v7 + 32);
  if ( *(_QWORD *)(v7 + 24) - (_QWORD)v9 > 0x12u )
  {
    si128 = _mm_load_si128((const __m128i *)&xmmword_23AB1D0);
    v9[1].m128i_i8[2] = 32;
    v9[1].m128i_i16[0] = 15648;
    *v9 = si128;
    *(_QWORD *)(v7 + 32) += 19LL;
  }
  else
  {
    sub_227BF10(v7, ", numDescriptors = ", 19);
  }
  v10 = *((unsigned int *)a2 + 3);
  if ( (_DWORD)v10 == -1 )
  {
    v35 = *(_QWORD *)(a1 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(a1 + 24) - v35) <= 8 )
    {
      sub_227BF10(a1, "unbounded", 9);
      v11 = *(void **)(a1 + 32);
      if ( *(_QWORD *)(a1 + 24) - (_QWORD)v11 <= 9u )
        goto LABEL_17;
      goto LABEL_54;
    }
    *(_BYTE *)(v35 + 8) = 100;
    *(_QWORD *)v35 = 0x65646E756F626E75LL;
    v11 = (void *)(*(_QWORD *)(a1 + 32) + 9LL);
    *(_QWORD *)(a1 + 32) = v11;
  }
  else
  {
    sub_227B910(a1, v10);
    v11 = *(void **)(a1 + 32);
  }
  if ( *(_QWORD *)(a1 + 24) - (_QWORD)v11 <= 9u )
  {
LABEL_17:
    v12 = sub_227BF10(a1, ", space = ", 10);
    goto LABEL_18;
  }
LABEL_54:
  v12 = a1;
  qmemcpy(v11, ", space = ", 10);
  *(_QWORD *)(a1 + 32) += 10LL;
LABEL_18:
  v13 = sub_227B910(v12, *((unsigned int *)a2 + 4));
  v14 = *(void **)(v13 + 32);
  if ( *(_QWORD *)(v13 + 24) - (_QWORD)v14 > 0xAu )
  {
    qmemcpy(v14, ", offset = ", 11);
    *(_QWORD *)(v13 + 32) += 11LL;
  }
  else
  {
    sub_227BF10(v13, ", offset = ", 11);
  }
  v15 = *((unsigned int *)a2 + 5);
  if ( (_DWORD)v15 == -1 )
  {
    v34 = *(__m128i **)(a1 + 32);
    if ( *(_QWORD *)(a1 + 24) - (_QWORD)v34 <= 0x1Au )
    {
      sub_227BF10(a1, "DescriptorTableOffsetAppend", 27);
      v16 = *(void **)(a1 + 32);
      if ( *(_QWORD *)(a1 + 24) - (_QWORD)v16 <= 9u )
        goto LABEL_23;
LABEL_51:
      v17 = a1;
      qmemcpy(v16, ", flags = ", 10);
      *(_QWORD *)(a1 + 32) += 10LL;
      goto LABEL_24;
    }
    v37 = _mm_load_si128((const __m128i *)&xmmword_23AB1E0);
    qmemcpy(&v34[1], "ffsetAppend", 11);
    *v34 = v37;
    v16 = (void *)(*(_QWORD *)(a1 + 32) + 27LL);
    *(_QWORD *)(a1 + 32) = v16;
  }
  else
  {
    sub_227B910(a1, v15);
    v16 = *(void **)(a1 + 32);
  }
  if ( *(_QWORD *)(a1 + 24) - (_QWORD)v16 > 9u )
    goto LABEL_51;
LABEL_23:
  v17 = sub_227BF10(a1, ", flags = ", 10);
LABEL_24:
  v18 = (const __m128i *)sub_201F4F0();
  _R13D = *((_DWORD *)a2 + 6);
  v21 = v18;
  if ( !_R13D )
  {
    v22 = *(_BYTE **)(v17 + 32);
    v27 = *(_QWORD *)(v17 + 24) - (_QWORD)v22;
    goto LABEL_56;
  }
  v22 = *(_BYTE **)(v17 + 32);
  v23 = 0;
  v24 = (const __m128i *)((char *)v18 + 40 * v19);
  v25 = *(_BYTE **)(v17 + 24);
  do
  {
    while ( 1 )
    {
      __asm { tzcnt   ecx, r13d }
      v27 = v25 - v22;
      v28 = 1 << _ECX;
      if ( ((1 << _ECX) & _R13D) != 0 )
        break;
      _R13D &= ~v28;
      if ( !_R13D )
        goto LABEL_38;
    }
    if ( v23 )
    {
      if ( v27 > 2 )
      {
        v22[2] = 32;
        *(_WORD *)v22 = 31776;
        v22 = (_BYTE *)(*(_QWORD *)(v17 + 32) + 3LL);
        *(_QWORD *)(v17 + 32) = v22;
      }
      else
      {
        sub_227BF10(v17, " | ", 3);
        v22 = *(_BYTE **)(v17 + 32);
      }
      v25 = *(_BYTE **)(v17 + 24);
      v27 = v25 - v22;
    }
    if ( v21 == v24 )
      goto LABEL_34;
    v29 = (const __m128i *)((char *)v21 + 40);
    if ( v28 != v21[2].m128i_i32[0] )
    {
      while ( 1 )
      {
        v32 = v29;
        if ( v24 == v29 )
          break;
        v29 = (const __m128i *)((char *)v29 + 40);
        if ( v28 == v29[-1].m128i_i32[2] )
          goto LABEL_42;
      }
LABEL_34:
      if ( v27 > 8 )
      {
        v22[8] = 32;
        *(_QWORD *)v22 = 0x3A64696C61766E69LL;
        v30 = v17;
        *(_QWORD *)(v17 + 32) += 9LL;
      }
      else
      {
        v30 = sub_227BF10(v17, "invalid: ", 9);
      }
      sub_227B910(v30, v28);
      v25 = *(_BYTE **)(v17 + 24);
      v22 = *(_BYTE **)(v17 + 32);
      v27 = v25 - v22;
      goto LABEL_37;
    }
    v32 = v21;
LABEL_42:
    v33 = _mm_loadu_si128(v32);
    if ( v27 < v33.m128i_i64[1] )
    {
      sub_227BF10(v17, v33.m128i_i64[0], v33.m128i_i64[1]);
      v25 = *(_BYTE **)(v17 + 24);
      v22 = *(_BYTE **)(v17 + 32);
      v27 = v25 - v22;
    }
    else if ( v33.m128i_i64[1] )
    {
      memcpy(v22, (const void *)v33.m128i_i64[0], v33.m128i_u64[1]);
      v25 = *(_BYTE **)(v17 + 24);
      v22 = (_BYTE *)(*(_QWORD *)(v17 + 32) + v33.m128i_i64[1]);
      *(_QWORD *)(v17 + 32) = v22;
      v27 = v25 - v22;
    }
LABEL_37:
    v23 = 1;
    _R13D &= ~v28;
  }
  while ( _R13D );
LABEL_38:
  if ( v23 )
  {
    if ( v25 == v22 )
      goto LABEL_40;
LABEL_59:
    *v22 = 41;
    ++*(_QWORD *)(v17 + 32);
    return a1;
  }
LABEL_56:
  if ( v27 > 3 )
  {
    *(_DWORD *)v22 = 1701736270;
    v22 = (_BYTE *)(*(_QWORD *)(v17 + 32) + 4LL);
    *(_QWORD *)(v17 + 32) = v22;
  }
  else
  {
    sub_227BF10(v17, "None", 4);
    v22 = *(_BYTE **)(v17 + 32);
  }
  if ( *(_BYTE **)(v17 + 24) != v22 )
    goto LABEL_59;
LABEL_40:
  sub_227BF10(v17, ")", 1);
  return a1;
}
