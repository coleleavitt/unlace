__int64 __fastcall sub_42F60(__int64 a1, const __m128i *a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v7; // rdi
  _QWORD *next_seg; // rbx
  unsigned __int64 v10; // r12
  unsigned __int64 v11; // r14
  __int64 v12; // rdx
  __int64 v13; // rsi
  unsigned __int64 v14; // rbx
  __int64 v15; // rdx
  int v16; // ebx
  unsigned int v17; // r12d
  __int64 v18; // rax
  int v19; // ecx
  __m128i v20; // xmm0
  int v21; // r14d
  int segm_qty; // eax
  __int64 v24; // rsi
  _QWORD *v25; // rax
  int v26; // eax
  __int64 v28; // [rsp+10h] [rbp-128h] BYREF
  __int128 v29; // [rsp+18h] [rbp-120h]
  _OWORD v30[12]; // [rsp+30h] [rbp-108h] BYREF
  unsigned __int64 v31; // [rsp+F8h] [rbp-40h]

  v7 = a2->m128i_i64[0];
  v31 = __readfsqword(0x28u);
  next_seg = (_QWORD *)getseg(v7);
  if ( next_seg
    || (v25 = (_QWORD *)get_next_seg(a2->m128i_i64[0]), (next_seg = v25) != nullptr) && a2->m128i_i64[1] >= *v25 )
  {
    v28 = 0;
    v30[0] = _mm_loadu_si128(a2);
    v30[1] = _mm_loadu_si128(a2 + 1);
    v30[2] = _mm_loadu_si128(a2 + 2);
    v30[3] = _mm_loadu_si128(a2 + 3);
    v30[4] = _mm_loadu_si128(a2 + 4);
    v30[5] = _mm_loadu_si128(a2 + 5);
    v30[6] = _mm_loadu_si128(a2 + 6);
    v30[7] = _mm_loadu_si128(a2 + 7);
    v30[8] = _mm_loadu_si128(a2 + 8);
    v30[9] = _mm_loadu_si128(a2 + 9);
    v30[10] = _mm_loadu_si128(a2 + 10);
    v30[11] = _mm_loadu_si128(a2 + 11);
    v29 = 0;
    while ( 1 )
    {
      v10 = *((_QWORD *)&v30[0] + 1);
      if ( *next_seg >= *((_QWORD *)&v30[0] + 1) )
        break;
      v11 = *(_QWORD *)&v30[0];
      if ( *(_QWORD *)&v30[0] < *next_seg )
      {
        v12 = v29;
        v13 = v28;
        if ( *((_QWORD *)&v29 + 1) < (unsigned __int64)(v29 + 1) )
        {
          v28 = qvector_reserve(&v28, v28, v29 + 1, 16);
          v12 = v29;
          v13 = v28;
        }
        *(__m128i *)(v13 + 16 * v12) = _mm_unpacklo_epi64((__m128i)v11, (__m128i)v10);
        *(_QWORD *)&v29 = v29 + 1;
        *(_QWORD *)(v28 + 16 * v29 - 8) = *next_seg;
      }
      *(_QWORD *)&v30[0] = next_seg[1];
      next_seg = (_QWORD *)get_next_seg(*next_seg);
      if ( !next_seg )
      {
        v10 = *((_QWORD *)&v30[0] + 1);
        break;
      }
    }
    v14 = *(_QWORD *)&v30[0];
    v15 = v29;
    if ( *(_QWORD *)&v30[0] < v10 )
    {
      v24 = v28;
      if ( *((_QWORD *)&v29 + 1) < (unsigned __int64)(v29 + 1) )
      {
        v28 = qvector_reserve(&v28, v28, v29 + 1, 16);
        v15 = v29;
        v24 = v28;
      }
      *(__m128i *)(v24 + 16 * v15) = _mm_unpacklo_epi64((__m128i)v14, (__m128i)v10);
      v15 = v29 + 1;
      *(_QWORD *)&v29 = v29 + 1;
    }
    if ( v15 )
    {
      v16 = 0;
      v17 = 1;
      v18 = 0;
      do
      {
        v19 = a5 | 0x10;
        v20 = _mm_loadu_si128((const __m128i *)(v28 + 16 * v18));
        if ( (*(_BYTE *)(a1 + 520) & 0x10) == 0 )
          v19 = a5;
        v30[0] = v20;
        v21 = v19;
        segm_qty = get_segm_qty();
        if ( segm_qty > 63 )
        {
          if ( segm_qty == 64 )
            sub_EAA0((__int64)"Too many segments, future segment addition messages will not be displayed...\n");
          v21 |= 8u;
        }
        ++v16;
        v17 &= add_segm_ex(v30, a3, a4, v21 | 0x20u);
        v18 = v16;
      }
      while ( v16 < (unsigned __int64)v29 );
    }
    else
    {
      v17 = 1;
    }
    if ( v28 )
    {
      *(_QWORD *)&v29 = 0;
      qfree(v28);
    }
    return v17;
  }
  else
  {
    if ( (*(_BYTE *)(a1 + 520) & 0x10) != 0 )
      a5 |= 0x10u;
    v26 = get_segm_qty();
    if ( v26 > 63 )
    {
      if ( v26 == 64 )
        sub_EAA0((__int64)"Too many segments, future segment addition messages will not be displayed...\n");
      a5 |= 8u;
    }
    return add_segm_ex(a2, a3, a4, a5 | 0x20u);
  }
}

