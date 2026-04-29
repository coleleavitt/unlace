unsigned __int64 __fastcall sub_3FA780(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        double a5,
        __int64 a6,
        unsigned int a7)
{
  unsigned int v8; // r13d
  unsigned __int8 v10; // al
  __int64 v11; // rdx
  __m128i *v12; // rax
  __m128i si128; // xmm1
  __int64 v14; // rsi
  __int64 v15; // rsi
  unsigned int v16; // edx
  __int64 v17; // rax
  char *v18; // r15
  _BYTE *v20; // [rsp+18h] [rbp-138h]
  __int128 v22; // [rsp+50h] [rbp-100h] BYREF
  __int64 v23; // [rsp+60h] [rbp-F0h]
  int v24; // [rsp+68h] [rbp-E8h]
  __int16 v25; // [rsp+6Ch] [rbp-E4h]
  _BYTE v26[4]; // [rsp+70h] [rbp-E0h] BYREF
  int v27; // [rsp+74h] [rbp-DCh]
  int v28; // [rsp+78h] [rbp-D8h]
  char v29; // [rsp+C0h] [rbp-90h]
  unsigned __int64 v30; // [rsp+C4h] [rbp-8Ch]
  char v31; // [rsp+110h] [rbp-40h] BYREF
  unsigned __int64 v32; // [rsp+118h] [rbp-38h]

  v8 = a7;
  v32 = __readfsqword(0x28u);
  if ( a7 == -1 )
    v8 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 468LL);
  if ( !*(_BYTE *)(a4 + 16) )
    sub_3FA580((int *)a4, 0, 0, a5);
  v10 = sub_3EE260(*(_QWORD *)a4 + 24LL);
  v11 = 2;
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL) == 8 )
    v11 = 7;
  if ( v10 < (unsigned __int8)v11 )
  {
    sub_1D6840(a1, v10, v11, v8, v8, 0);
    if ( a3 >= 0 )
      goto LABEL_9;
LABEL_21:
    copy_tinfo_t();
    goto LABEL_9;
  }
  if ( a3 < 0 )
    goto LABEL_21;
LABEL_9:
  v20 = (_BYTE *)(a2 + 24);
  v22 = 0;
  copy_tinfo_t();
  v23 = 0;
  copy_tinfo_t();
  v24 = 0;
  v25 = 0;
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
    *(_DWORD *)(a2 + 8) = v8;
  }
  else
  {
    sub_3EFB80(
      a1,
      (unsigned __int8 *)(*(_QWORD *)a4 + 40LL * *(int *)(a4 + 8) + 64),
      *(_DWORD *)(*(_QWORD *)(a1 + 832) + 472LL));
    v12 = (__m128i *)v26;
    si128 = _mm_load_si128((const __m128i *)&xmmword_4247F0);
    do
    {
      v12[1] = si128;
      v12->m128i_i16[0] = 0;
      v12 += 5;
      v12[-5].m128i_i16[1] = 0;
      v12[-5].m128i_i32[1] = -1;
      v12[-5].m128i_i64[1] = 0;
      v12[-3].m128i_i64[0] = 0;
      *(__m128i *)((char *)&v12[-3] + 8) = 0;
      v12[-2].m128i_i32[2] = 0;
      v12[-1].m128i_i64[0] = 0;
      v12[-1].m128i_i32[2] = 0;
    }
    while ( v12 != (__m128i *)&v31 );
    v14 = *(_QWORD *)(a1 + 832);
    v26[0] = 1;
    v27 = 2;
    v28 = *(_DWORD *)(v14 + 472);
    sub_32C270(&v22, v14, 2);
    copy_tinfo_t();
    clear_tinfo_t();
    v15 = *(_QWORD *)(a1 + 832);
    v29 = 1;
    v16 = *(_DWORD *)(v15 + 84);
    v30 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v16), _mm_cvtsi32_si128(v8)).m128i_u64[0];
    sub_32C270(&v22, v15, v16);
    copy_tinfo_t();
    clear_tinfo_t();
    v17 = sub_335B10(*(_QWORD *)(a1 + 8), *(_QWORD *)(*(_QWORD *)a4 + 40LL), (__int64)"MK_FP", v20, 2, (__int64)v26, 0);
    *(_BYTE *)a2 = 4;
    *(_QWORD *)(a2 + 8) = v17;
    v18 = &v31;
    do
    {
      v18 -= 80;
      cleanup_argloc();
      if ( *((_QWORD *)v18 + 4) )
      {
        *((_QWORD *)v18 + 5) = 0;
        qfree();
      }
      clear_tinfo_t();
      sub_11CDA0((__int64)v18);
    }
    while ( v18 != v26 );
  }
  *(_DWORD *)(a2 + 4) = get_tinfo_size();
  clear_tinfo_t();
  return v32 - __readfsqword(0x28u);
}
