unsigned __int64 __fastcall sub_3FA780(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        unsigned __int8 a5,
        unsigned int a6,
        double a7)
{
  unsigned int v8; // r13d
  unsigned __int8 v11; // al
  unsigned __int8 v12; // dl
  unsigned __int64 v13; // rax
  __m128i *v14; // rax
  __m128i si128; // xmm1
  __int64 v16; // rsi
  __int64 v17; // rsi
  unsigned int v18; // edx
  __int64 v19; // rax
  char *v20; // r15
  __int64 v21; // rdi
  __int64 v23; // rax
  _QWORD *v24; // [rsp+18h] [rbp-138h]
  unsigned __int64 v26; // [rsp+38h] [rbp-118h] BYREF
  __int64 v27; // [rsp+40h] [rbp-110h] BYREF
  __int64 v28; // [rsp+48h] [rbp-108h] BYREF
  __int128 v29; // [rsp+50h] [rbp-100h] BYREF
  __int64 v30; // [rsp+60h] [rbp-F0h] BYREF
  int v31; // [rsp+68h] [rbp-E8h]
  __int16 v32; // [rsp+6Ch] [rbp-E4h]
  _BYTE v33[4]; // [rsp+70h] [rbp-E0h] BYREF
  int v34; // [rsp+74h] [rbp-DCh]
  int v35; // [rsp+78h] [rbp-D8h]
  _BYTE v36[60]; // [rsp+88h] [rbp-C8h] BYREF
  unsigned __int64 v37; // [rsp+C4h] [rbp-8Ch]
  _BYTE v38[56]; // [rsp+D8h] [rbp-78h] BYREF
  char v39; // [rsp+110h] [rbp-40h] BYREF
  unsigned __int64 v40; // [rsp+118h] [rbp-38h]

  v8 = a6;
  v40 = __readfsqword(0x28u);
  if ( a6 == -1 )
    v8 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 468LL);
  if ( !*(_BYTE *)(a4 + 16) )
    sub_3FA580((int *)a4, 0, 0, a7);
  v11 = sub_3EE260(*(_QWORD *)a4 + 24LL);
  v12 = 2;
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL) == 8 )
    v12 = 7;
  if ( v11 < v12 )
  {
    sub_1D6840(a1, v11, v12, v8, v8, 0);
    if ( a3 >= 0 )
      goto LABEL_9;
LABEL_25:
    v23 = *(_QWORD *)(a1 + 800);
    v26 = 0;
    copy_tinfo_t(&v26, v23 + 8LL * -a3 + 200);
    goto LABEL_10;
  }
  if ( a3 < 0 )
    goto LABEL_25;
LABEL_9:
  v26 = (unsigned __int8)a3;
LABEL_10:
  if ( a5 )
  {
    v13 = v26;
    if ( (_BYTE)v26 )
    {
      LOBYTE(v13) = v26 & 0x3F;
      v26 = a5 & 0xC0 | v13;
    }
  }
  v28 = 0;
  v24 = (_QWORD *)(a2 + 24);
  v27 = 0;
  v29 = 0;
  copy_tinfo_t((char *)&v29 + 8, &v27);
  v30 = 0;
  copy_tinfo_t(&v30, &v28);
  v31 = 0;
  v32 = 0;
  clear_tinfo_t(&v27);
  clear_tinfo_t(&v28);
  copy_tinfo_t(&v29, &v26);
  create_tinfo(a2 + 24, 10, 10, &v29);
  clear_tinfo_t(&v30);
  clear_tinfo_t((char *)&v29 + 8);
  clear_tinfo_t(&v29);
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
    v14 = (__m128i *)v33;
    si128 = _mm_load_si128((const __m128i *)&xmmword_4247F0);
    do
    {
      v14[1] = si128;
      v14->m128i_i16[0] = 0;
      v14 += 5;
      v14[-5].m128i_i16[1] = 0;
      v14[-5].m128i_i32[1] = -1;
      v14[-5].m128i_i64[1] = 0;
      v14[-3].m128i_i64[0] = 0;
      *(__m128i *)((char *)&v14[-3] + 8) = 0;
      v14[-2].m128i_i32[2] = 0;
      v14[-1].m128i_i64[0] = 0;
      v14[-1].m128i_i32[2] = 0;
    }
    while ( v14 != (__m128i *)&v39 );
    v16 = *(_QWORD *)(a1 + 832);
    v33[0] = 1;
    v34 = 2;
    v35 = *(_DWORD *)(v16 + 472);
    sub_32C270(&v29, v16, 2u);
    copy_tinfo_t(v36, &v29);
    clear_tinfo_t(&v29);
    v17 = *(_QWORD *)(a1 + 832);
    v36[56] = 1;
    v18 = *(_DWORD *)(v17 + 84);
    v37 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v18), _mm_cvtsi32_si128(v8)).m128i_u64[0];
    sub_32C270(&v29, v17, v18);
    copy_tinfo_t(v38, &v29);
    clear_tinfo_t(&v29);
    v19 = sub_335B10(*(_QWORD *)(a1 + 8), *(_QWORD *)(*(_QWORD *)a4 + 40LL), (__int64)"MK_FP", v24, 2, (__int64)v33, 0);
    *(_BYTE *)a2 = 4;
    *(_QWORD *)(a2 + 8) = v19;
    v20 = &v39;
    do
    {
      v20 -= 80;
      cleanup_argloc(v20 + 56);
      v21 = *((_QWORD *)v20 + 4);
      if ( v21 )
      {
        *((_QWORD *)v20 + 5) = 0;
        qfree(v21);
      }
      clear_tinfo_t(v20 + 24);
      sub_11CDA0((__int64)v20);
    }
    while ( v20 != v33 );
  }
  *(_DWORD *)(a2 + 4) = get_tinfo_size(0, *(_QWORD *)(a2 + 24), 0);
  clear_tinfo_t(&v26);
  return v40 - __readfsqword(0x28u);
}
