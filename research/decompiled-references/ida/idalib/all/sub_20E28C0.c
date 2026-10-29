__int64 __fastcall sub_20E28C0(__int64 a1, char *a2)
{
  _DWORD *v4; // rdx
  char v5; // r13
  __int64 v6; // rax
  _BYTE *v7; // rdi
  __int64 v8; // rbx
  const __m128i *v9; // rax
  _BYTE *v10; // rax
  int v11; // eax
  void *v12; // rdx
  __int64 v13; // rax
  void *v14; // rdx
  __int64 v15; // rbx
  const __m128i *v16; // rax
  int v17; // ecx
  const __m128i *v18; // rsi
  __int64 v19; // rdx
  const __m128i *v20; // rdx
  const __m128i *v21; // rax
  void *v22; // rdi
  unsigned __int64 v23; // rax
  const __m128i *v24; // rax
  __int64 v25; // rdx
  const __m128i *v27; // r15
  _BYTE *v28; // rdi
  char v29; // si
  const __m128i *v30; // r13
  _BYTE *v31; // rax
  unsigned __int64 v33; // rdx
  unsigned int v34; // ebp
  const __m128i *v35; // rcx
  __int64 v36; // rdi
  const __m128i *v38; // rsi
  __m128i v39; // xmm0
  __m128i v40; // xmm1
  __m128i v41; // xmm3
  __int64 v42; // rax
  const __m128i *v43; // rax
  __m128i v44; // xmm2
  void *v45; // rdi

  v4 = *(_DWORD **)(a1 + 32);
  v5 = *a2;
  if ( *(_QWORD *)(a1 + 24) - (_QWORD)v4 > 3u )
  {
    *v4 = 1953460050;
    v8 = a1;
    v7 = (_BYTE *)(*(_QWORD *)(a1 + 32) + 4LL);
    *(_QWORD *)(a1 + 32) = v7;
  }
  else
  {
    v6 = sub_227BF10(a1, "Root", 4);
    v7 = *(_BYTE **)(v6 + 32);
    v8 = v6;
  }
  if ( v5 == 2 )
  {
    v9 = (const __m128i *)&off_2BE87E0;
  }
  else if ( v5 )
  {
    if ( v5 == 1 )
    {
      v9 = (const __m128i *)&off_2BE8830;
    }
    else
    {
      v9 = (const __m128i *)&off_2BE8858;
      if ( v5 != 3 )
      {
LABEL_7:
        v10 = *(_BYTE **)(v8 + 24);
        goto LABEL_8;
      }
    }
  }
  else
  {
    v9 = (const __m128i *)&off_2BE8808;
  }
  v40 = _mm_loadu_si128(v9);
  v10 = *(_BYTE **)(v8 + 24);
  if ( (unsigned __int64)(v10 - v7) < v40.m128i_i64[1] )
  {
    sub_227BF10(v8, v40.m128i_i64[0], v40.m128i_i64[1]);
    v10 = *(_BYTE **)(v8 + 24);
    v7 = *(_BYTE **)(v8 + 32);
  }
  else if ( v40.m128i_i64[1] )
  {
    memcpy(v7, (const void *)v40.m128i_i64[0], v40.m128i_u64[1]);
    v7 = (_BYTE *)(v40.m128i_i64[1] + *(_QWORD *)(v8 + 32));
    *(_QWORD *)(v8 + 32) = v7;
    goto LABEL_7;
  }
LABEL_8:
  if ( v10 == v7 )
  {
    v8 = sub_227BF10(v8, "(", 1);
  }
  else
  {
    *v7 = 40;
    ++*(_QWORD *)(v8 + 32);
  }
  v11 = *((_DWORD *)a2 + 1);
  if ( v11 )
  {
    switch ( v11 )
    {
      case 1:
        v43 = (const __m128i *)&off_2BE88A8;
        break;
      case 2:
        v43 = (const __m128i *)&off_2BE88D0;
        break;
      case 3:
        v43 = (const __m128i *)&off_2BE88F8;
        break;
      default:
        goto LABEL_14;
    }
  }
  else
  {
    v43 = (const __m128i *)&off_2BE8880;
  }
  v44 = _mm_loadu_si128(v43);
  v45 = *(void **)(v8 + 32);
  if ( v44.m128i_i64[1] > *(_QWORD *)(v8 + 24) - (_QWORD)v45 )
  {
    sub_227BF10(v8, v44.m128i_i64[0], v44.m128i_i64[1]);
  }
  else if ( v44.m128i_i64[1] )
  {
    memcpy(v45, (const void *)v44.m128i_i64[0], v44.m128i_u64[1]);
    *(_QWORD *)(v8 + 32) += v44.m128i_i64[1];
  }
LABEL_14:
  sub_227B910(v8, *((unsigned int *)a2 + 2));
  v12 = *(void **)(v8 + 32);
  if ( *(_QWORD *)(v8 + 24) - (_QWORD)v12 > 9u )
  {
    qmemcpy(v12, ", space = ", 10);
    *(_QWORD *)(v8 + 32) += 10LL;
  }
  else
  {
    v8 = sub_227BF10(v8, ", space = ", 10);
  }
  v13 = sub_227B910(v8, *((unsigned int *)a2 + 3));
  v14 = *(void **)(v13 + 32);
  v15 = v13;
  if ( *(_QWORD *)(v13 + 24) - (_QWORD)v14 > 0xEu )
  {
    qmemcpy(v14, ", visibility = ", 15);
    *(_QWORD *)(v13 + 32) += 15LL;
  }
  else
  {
    v15 = sub_227BF10(v13, ", visibility = ", 15);
  }
  v16 = (const __m128i *)sub_201F500();
  v17 = *((_DWORD *)a2 + 4);
  v18 = v16;
  v20 = (const __m128i *)((char *)v16 + 40 * v19);
  if ( v16 != v20 )
  {
    if ( v17 == v16[2].m128i_i32[0] )
    {
LABEL_54:
      v41 = _mm_loadu_si128(v18);
      v22 = *(void **)(v15 + 32);
      v23 = *(_QWORD *)(v15 + 24) - (_QWORD)v22;
      if ( v23 >= v41.m128i_i64[1] )
      {
        if ( v41.m128i_i64[1] )
        {
          memcpy(v22, (const void *)v41.m128i_i64[0], v41.m128i_u64[1]);
          v42 = *(_QWORD *)(v15 + 24);
          v22 = (void *)(v41.m128i_i64[1] + *(_QWORD *)(v15 + 32));
          *(_QWORD *)(v15 + 32) = v22;
          v23 = v42 - (_QWORD)v22;
        }
        goto LABEL_24;
      }
      sub_227BF10(v15, v41.m128i_i64[0], v41.m128i_i64[1]);
    }
    else
    {
      v21 = (const __m128i *)((char *)v16 + 40);
      while ( 1 )
      {
        v18 = v21;
        if ( v20 == v21 )
          break;
        v21 = (const __m128i *)((char *)v21 + 40);
        if ( v17 == v21[-1].m128i_i32[2] )
          goto LABEL_54;
      }
    }
  }
  v22 = *(void **)(v15 + 32);
  v23 = *(_QWORD *)(v15 + 24) - (_QWORD)v22;
LABEL_24:
  if ( v23 > 9 )
  {
    qmemcpy(v22, ", flags = ", 10);
    *(_QWORD *)(v15 + 32) += 10LL;
  }
  else
  {
    v15 = sub_227BF10(v15, ", flags = ", 10);
  }
  v24 = (const __m128i *)sub_201F4E0();
  _R14D = *((_DWORD *)a2 + 5);
  v27 = v24;
  if ( !_R14D )
  {
    v28 = *(_BYTE **)(v15 + 32);
    v33 = *(_QWORD *)(v15 + 24) - (_QWORD)v28;
    goto LABEL_59;
  }
  v28 = *(_BYTE **)(v15 + 32);
  v29 = 0;
  v30 = (const __m128i *)((char *)v24 + 40 * v25);
  v31 = *(_BYTE **)(v15 + 24);
  do
  {
    while ( 1 )
    {
      __asm { tzcnt   ecx, r14d }
      v33 = v31 - v28;
      v34 = 1 << _ECX;
      if ( ((1 << _ECX) & _R14D) != 0 )
        break;
      _R14D &= ~v34;
      if ( !_R14D )
        goto LABEL_40;
    }
    if ( v29 )
    {
      if ( v33 > 2 )
      {
        v28[2] = 32;
        *(_WORD *)v28 = 31776;
        v28 = (_BYTE *)(*(_QWORD *)(v15 + 32) + 3LL);
        *(_QWORD *)(v15 + 32) = v28;
      }
      else
      {
        sub_227BF10(v15, " | ", 3);
        v28 = *(_BYTE **)(v15 + 32);
      }
      v31 = *(_BYTE **)(v15 + 24);
      v33 = v31 - v28;
    }
    if ( v30 == v27 )
      goto LABEL_36;
    v35 = (const __m128i *)((char *)v27 + 40);
    if ( v34 != v27[2].m128i_i32[0] )
    {
      while ( 1 )
      {
        v38 = v35;
        if ( v30 == v35 )
          break;
        v35 = (const __m128i *)((char *)v35 + 40);
        if ( v34 == v35[-1].m128i_i32[2] )
          goto LABEL_44;
      }
LABEL_36:
      if ( v33 > 8 )
      {
        v28[8] = 32;
        *(_QWORD *)v28 = 0x3A64696C61766E69LL;
        v36 = v15;
        *(_QWORD *)(v15 + 32) += 9LL;
      }
      else
      {
        v36 = sub_227BF10(v15, "invalid: ", 9);
      }
      sub_227B910(v36, v34);
      v31 = *(_BYTE **)(v15 + 24);
      v28 = *(_BYTE **)(v15 + 32);
      v33 = v31 - v28;
      goto LABEL_39;
    }
    v38 = v27;
LABEL_44:
    v39 = _mm_loadu_si128(v38);
    if ( v39.m128i_i64[1] > v33 )
    {
      sub_227BF10(v15, v39.m128i_i64[0], v39.m128i_i64[1]);
      v31 = *(_BYTE **)(v15 + 24);
      v28 = *(_BYTE **)(v15 + 32);
      v33 = v31 - v28;
    }
    else if ( v39.m128i_i64[1] )
    {
      memcpy(v28, (const void *)v39.m128i_i64[0], v39.m128i_u64[1]);
      v31 = *(_BYTE **)(v15 + 24);
      v28 = (_BYTE *)(*(_QWORD *)(v15 + 32) + v39.m128i_i64[1]);
      *(_QWORD *)(v15 + 32) = v28;
      v33 = v31 - v28;
    }
LABEL_39:
    v29 = 1;
    _R14D &= ~v34;
  }
  while ( _R14D );
LABEL_40:
  if ( v29 )
  {
    if ( v28 == v31 )
      goto LABEL_42;
LABEL_62:
    *v28 = 41;
    ++*(_QWORD *)(v15 + 32);
    return a1;
  }
LABEL_59:
  if ( v33 > 3 )
  {
    *(_DWORD *)v28 = 1701736270;
    v28 = (_BYTE *)(*(_QWORD *)(v15 + 32) + 4LL);
    *(_QWORD *)(v15 + 32) = v28;
  }
  else
  {
    sub_227BF10(v15, "None", 4);
    v28 = *(_BYTE **)(v15 + 32);
  }
  if ( v28 != *(_BYTE **)(v15 + 24) )
    goto LABEL_62;
LABEL_42:
  sub_227BF10(v15, ")", 1);
  return a1;
}
