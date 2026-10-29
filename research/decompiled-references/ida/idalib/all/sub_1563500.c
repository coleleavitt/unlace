__int64 __fastcall sub_1563500(__int64 a1)
{
  int v2; // r15d
  __m128i v3; // xmm3
  unsigned __int64 v4; // rbp
  int v5; // eax
  __int64 v6; // rdi
  unsigned __int16 v7; // cx
  int v8; // eax
  __int16 v9; // ax
  __int64 v10; // rdi
  __int64 v11; // rdx
  unsigned int v12; // eax
  int v13; // eax
  __int64 *v14; // rdi
  unsigned int v15; // r13d
  __m128i v16; // xmm4
  __m128i v17; // xmm5
  __m128i v18; // xmm6
  int v19; // eax
  unsigned __int64 v20; // rax
  __int64 v21; // rdx
  char *v22; // rdi
  char *v23; // rax
  unsigned int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // r13
  __int64 v28; // rdx
  __int64 v29; // rsi
  __int64 v30; // rdi
  unsigned __int64 v31; // rax
  __int64 v32; // rax
  unsigned int v33; // esi
  __int64 v34; // rax
  unsigned __int64 v35; // rax
  __int64 v36; // rax
  __int16 v37; // [rsp+6h] [rbp-D2h]
  __int64 v38; // [rsp+8h] [rbp-D0h]
  __int128 v39; // [rsp+10h] [rbp-C8h] BYREF
  void *ptr[2]; // [rsp+20h] [rbp-B8h]
  __int128 v41; // [rsp+30h] [rbp-A8h]
  __m128i v42; // [rsp+48h] [rbp-90h] BYREF
  __m128i v43; // [rsp+58h] [rbp-80h] BYREF
  __int64 v44; // [rsp+68h] [rbp-70h]
  __m128i v45; // [rsp+70h] [rbp-68h] BYREF
  int v46; // [rsp+80h] [rbp-58h]

  v2 = *(_DWORD *)(a1 + 88);
  v3 = _mm_loadu_si128((const __m128i *)(a1 + 16));
  v4 = *(unsigned int *)(a1 + 2712);
  v44 = *(_QWORD *)(a1 + 80);
  v5 = *(_DWORD *)(a1 + 32);
  v42 = _mm_loadu_si128((const __m128i *)(a1 + 48));
  v43 = _mm_loadu_si128((const __m128i *)(a1 + 64));
  v46 = v5;
  LOWORD(v5) = *(_WORD *)(a1 + 92);
  v6 = *(_QWORD *)(a1 + 8);
  v45 = v3;
  v37 = v5;
  sub_1418D30(v6, 0);
  if ( *(_WORD *)(a1 + 32) == 22 )
  {
    ++*(_WORD *)(a1 + 88);
    goto LABEL_3;
  }
  v7 = *(_WORD *)(a1 + 88);
  if ( v7 )
  {
    v25 = *(_DWORD *)(a1 + 2792);
    if ( !v25 )
    {
LABEL_40:
      *(_WORD *)(a1 + 88) = v7 - 1;
      goto LABEL_3;
    }
    v26 = *(_QWORD *)(a1 + 2784) + 24LL * v25 - 24;
    while ( 1 )
    {
      if ( v7 == *(_WORD *)(v26 + 14) )
      {
        if ( *(_DWORD *)(v26 + 16) == *(_DWORD *)(a1 + 90) )
          goto LABEL_35;
      }
      else if ( v7 > *(_WORD *)(v26 + 14) )
      {
        goto LABEL_35;
      }
      if ( *(_WORD *)(a1 + 90) <= *(_WORD *)(v26 + 16) && *(_WORD *)(a1 + 92) <= *(_WORD *)(v26 + 18) )
        goto LABEL_40;
LABEL_35:
      --v25;
      v26 -= 24;
      *(_DWORD *)(a1 + 2792) = v25;
      if ( !v25 )
        goto LABEL_40;
    }
  }
LABEL_3:
  for ( *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16); ; *(_DWORD *)(a1 + 40) = v8 )
  {
    sub_14634E0(*(__int64 **)(a1 + 8), (int *)(a1 + 16));
    v9 = *(_WORD *)(a1 + 32);
    if ( v9 != 22 )
      break;
    v8 = *(_DWORD *)(a1 + 16);
    ++*(_WORD *)(a1 + 88);
  }
  v10 = *(_QWORD *)(a1 + 8);
  if ( (*(_BYTE *)(*(_QWORD *)(v10 + 56) + 1LL) & 8) == 0 )
    goto LABEL_7;
  if ( v9 != 5 && v9 != 72 )
  {
    if ( v9 != 418 )
    {
LABEL_28:
      if ( v9 != 163 && v9 != 329 )
        goto LABEL_7;
      goto LABEL_30;
    }
    v35 = *(_QWORD *)(v10 + 2944);
    if ( v35 >= *(unsigned int *)(v10 + 2912) )
      v36 = sub_14180A0(v10, 1u);
    else
      v36 = *(_QWORD *)(v10 + 2904) + 24 * v35;
    if ( *(_WORD *)(v36 + 16) != 72 )
    {
      v9 = *(_WORD *)(a1 + 32);
      goto LABEL_28;
    }
  }
LABEL_30:
  v15 = 3;
  if ( (unsigned __int8)sub_1566C80(a1, 0) )
    goto LABEL_17;
  v9 = *(_WORD *)(a1 + 32);
LABEL_7:
  v39 = 0;
  *(_OWORD *)ptr = 0;
  v41 = 0;
  if ( v9 == 416 )
  {
    v11 = *(unsigned int *)(a1 + 20);
    v12 = *(_DWORD *)(a1 + 16);
    if ( !(_DWORD)v11 )
      v11 = v12;
    sub_169D790(*(_QWORD *)(a1 + 96), *(_QWORD *)(a1 + 24), (v11 << 32) | v12, &v39);
    v13 = *(_DWORD *)(a1 + 20);
    v14 = *(__int64 **)(a1 + 8);
    if ( !v13 )
      v13 = *(_DWORD *)(a1 + 16);
    *(_DWORD *)(a1 + 40) = v13;
    sub_14634E0(v14, (int *)(a1 + 16));
    v9 = *(_WORD *)(a1 + 32);
  }
  if ( v9 == 140 )
    goto LABEL_50;
  if ( v9 != 5 && v9 != 418 )
    goto LABEL_16;
  v27 = *(_QWORD *)(a1 + 96);
  v28 = *(_QWORD *)(v27 + 608);
  if ( v9 == 5 )
  {
    v29 = *(_QWORD *)(a1 + 24);
  }
  else
  {
    v38 = *(_QWORD *)(v27 + 608);
    v34 = sub_1565590(a1, a1 + 16);
    v28 = v38;
    v29 = *(_QWORD *)(v34 + 8);
  }
  if ( !(unsigned __int8)sub_183B910(v27, v29, v28, &v39) )
    goto LABEL_16;
  v30 = *(_QWORD *)(a1 + 8);
  v31 = *(_QWORD *)(v30 + 2944);
  v32 = v31 >= *(unsigned int *)(v30 + 2912) ? sub_14180A0(v30, 1u) : *(_QWORD *)(v30 + 2904) + 24 * v31;
  if ( *(_WORD *)(v32 + 16) == 23 )
    goto LABEL_50;
  if ( !(_DWORD)v39 || (v33 = 0, !DWORD1(v39)) )
    v33 = *((_QWORD *)&v39 + 1) == 0;
  if ( (unsigned __int8)sub_147F8B0(a1, v33, 0, 0, 0) )
  {
LABEL_50:
    v15 = 2;
    if ( !HIDWORD(ptr[1]) )
      goto LABEL_17;
  }
  else
  {
LABEL_16:
    v15 = 0;
    if ( !HIDWORD(ptr[1]) )
      goto LABEL_17;
  }
  free(ptr[0]);
LABEL_17:
  sub_1417BC0(*(_QWORD *)(a1 + 8));
  v16 = _mm_loadu_si128(&v42);
  v17 = _mm_loadu_si128(&v43);
  v18 = _mm_load_si128(&v45);
  *(_QWORD *)(a1 + 80) = v44;
  v19 = v46;
  *(__m128i *)(a1 + 48) = v16;
  *(_DWORD *)(a1 + 32) = v19;
  v20 = *(unsigned int *)(a1 + 2712);
  *(__m128i *)(a1 + 64) = v17;
  *(__m128i *)(a1 + 16) = v18;
  if ( v4 != v20 )
  {
    if ( v4 >= v20 )
    {
      if ( v4 > *(unsigned int *)(a1 + 2716) )
      {
        sub_2237220(a1 + 2704, a1 + 2720, v4, 8);
        v20 = *(unsigned int *)(a1 + 2712);
      }
      v21 = *(_QWORD *)(a1 + 2704);
      v22 = (char *)(v21 + 8 * v20);
      v23 = (char *)(v21 + 8 * v4);
      if ( v22 != v23 )
        memset(v22, 0, 8 * ((unsigned __int64)(v23 - 8 - v22) >> 3) + 8);
    }
    *(_DWORD *)(a1 + 2712) = v4;
  }
  *(_DWORD *)(a1 + 88) = v2;
  *(_WORD *)(a1 + 92) = v37;
  return v15;
}
