unsigned __int64 __fastcall sub_3EFC20(__int64 a1, __int64 a2, int a3, __int64 a4, __int64 a5, unsigned int a6)
{
  unsigned int v7; // r13d
  unsigned __int8 v9; // al
  __int64 v10; // rdx
  __m128i *v11; // rax
  __m128i si128; // xmm1
  __int64 v13; // rsi
  __int64 v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // r15
  __int64 v19; // [rsp-8h] [rbp-158h]
  int v20; // [rsp+0h] [rbp-150h]
  __int64 v21; // [rsp+10h] [rbp-140h]
  int v22; // [rsp+18h] [rbp-138h]
  __int128 v24; // [rsp+50h] [rbp-100h] BYREF
  __int64 v25; // [rsp+60h] [rbp-F0h] BYREF
  int v26; // [rsp+68h] [rbp-E8h]
  __int16 v27; // [rsp+6Ch] [rbp-E4h]
  _BYTE v28[4]; // [rsp+70h] [rbp-E0h] BYREF
  int v29; // [rsp+74h] [rbp-DCh]
  int v30; // [rsp+78h] [rbp-D8h]
  char v31; // [rsp+C0h] [rbp-90h]
  unsigned __int64 v32; // [rsp+C4h] [rbp-8Ch]
  char v33; // [rsp+110h] [rbp-40h] BYREF
  unsigned __int64 v34; // [rsp+118h] [rbp-38h]

  v7 = a6;
  v34 = __readfsqword(0x28u);
  if ( a6 == -1 )
    v7 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 468LL);
  if ( !*(_BYTE *)(a4 + 16) )
    sub_3EFA20((int *)a4, 0, 0);
  v9 = sub_3E3620(*(_QWORD *)a4 + 24LL);
  v10 = 2;
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL) == 8 )
    v10 = 7;
  if ( v9 < (unsigned __int8)v10 )
  {
    sub_1D3CC0(a1, v9, v10, v7, v7, 0);
    if ( a3 >= 0 )
      goto LABEL_9;
LABEL_21:
    copy_tinfo_t();
    goto LABEL_9;
  }
  if ( a3 < 0 )
    goto LABEL_21;
LABEL_9:
  v22 = a2 + 24;
  v24 = 0;
  copy_tinfo_t();
  v25 = 0;
  copy_tinfo_t();
  v26 = 0;
  v27 = 0;
  clear_tinfo_t();
  clear_tinfo_t();
  copy_tinfo_t();
  create_tinfo();
  clear_tinfo_t();
  clear_tinfo_t();
  clear_tinfo_t();
  if ( !*(_BYTE *)(*(_QWORD *)a4 + 56LL) || *(_WORD *)(a1 + 48) == 92 )
  {
    *(_BYTE *)a2 = 1;
    *(_DWORD *)(a2 + 8) = v7;
  }
  else
  {
    sub_3E4F40(
      a1,
      (unsigned __int8 *)(*(_QWORD *)a4 + 40LL * *(int *)(a4 + 8) + 64),
      *(_DWORD *)(*(_QWORD *)(a1 + 832) + 472LL));
    v11 = (__m128i *)v28;
    si128 = _mm_load_si128((const __m128i *)&xmmword_425B90);
    do
    {
      v11[1] = si128;
      v11->m128i_i16[0] = 0;
      v11 += 5;
      v11[-5].m128i_i16[1] = 0;
      v11[-5].m128i_i32[1] = -1;
      v11[-5].m128i_i64[1] = 0;
      v11[-3].m128i_i64[0] = 0;
      *(__m128i *)((char *)&v11[-3] + 8) = 0;
      v11[-2].m128i_i32[2] = 0;
      v11[-1].m128i_i64[0] = 0;
      v11[-1].m128i_i32[2] = 0;
    }
    while ( v11 != (__m128i *)&v33 );
    v13 = *(_QWORD *)(a1 + 832);
    v28[0] = 1;
    v29 = 2;
    v30 = *(_DWORD *)(v13 + 472);
    sub_328E20(&v24, v13, 2);
    copy_tinfo_t();
    clear_tinfo_t();
    v14 = *(_QWORD *)(a1 + 832);
    v31 = 1;
    v15 = *(unsigned int *)(v14 + 84);
    v32 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v15), _mm_cvtsi32_si128(v7)).m128i_u64[0];
    sub_328E20(&v24, v14, v15);
    copy_tinfo_t();
    clear_tinfo_t();
    v16 = sub_332690(
            *(_QWORD *)(a1 + 8),
            *(_QWORD *)(*(_QWORD *)a4 + 40LL),
            (unsigned int)"MK_FP",
            v22,
            2,
            (unsigned int)v28,
            0,
            v19,
            v20,
            (unsigned int)&v25,
            (unsigned int)&v33,
            v22);
    *(_BYTE *)a2 = 4;
    *(_QWORD *)(a2 + 8) = v16;
    v17 = v21;
    do
    {
      v17 -= 80;
      cleanup_argloc();
      if ( *(_QWORD *)(v17 + 32) )
      {
        *(_QWORD *)(v17 + 40) = 0;
        qfree();
      }
      clear_tinfo_t();
      sub_11A960(v17);
    }
    while ( (_BYTE *)v17 != v28 );
  }
  *(_DWORD *)(a2 + 4) = get_tinfo_size();
  clear_tinfo_t();
  return v34 - __readfsqword(0x28u);
}
