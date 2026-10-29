/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100012100
// Address: 0x0000000100012100

//----- (0000000100012100) ----------------------------------------------------
__int64 __fastcall sub_100012100(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, char a4)
{
  __int128 v4; // xmm2
  unsigned __int64 v5; // r12
  unsigned __int64 v6; // r13
  __int64 v7; // rbx
  off_t v8; // r13
  __int64 v9; // rax
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rdx
  __int64 result; // rax
  unsigned int v13; // ebx
  __m128i v14; // xmm0
  __m128i v15; // xmm1
  __m128i v16; // xmm3
  unsigned __int64 v17; // r15
  unsigned __int64 v18; // rdi
  __m128i si128; // xmm1
  __int64 v20; // [rsp+0h] [rbp-E0h]
  __m128i v22; // [rsp+10h] [rbp-D0h] BYREF
  __m128i v23; // [rsp+20h] [rbp-C0h]
  __int128 v24; // [rsp+30h] [rbp-B0h]
  __m128i v25; // [rsp+40h] [rbp-A0h] BYREF
  __m128i v26; // [rsp+50h] [rbp-90h] BYREF
  __m128i v27; // [rsp+60h] [rbp-80h] BYREF
  __m128i v28; // [rsp+70h] [rbp-70h]
  __int128 v29; // [rsp+80h] [rbp-60h]
  _OWORD v30[2]; // [rsp+90h] [rbp-50h] BYREF

  v20 = a3;
  if ( a2 - a1 >= 0x48 && a2 > a1 )
  {
    *(_QWORD *)&v30[1] = *(_QWORD *)(a1 + 64);
    v4 = *(_OWORD *)(a1 + 32);
    v30[0] = *(_OWORD *)(a1 + 48);
    v29 = v4;
    v28 = _mm_loadu_si128((const __m128i *)(a1 + 16));
    v27 = _mm_loadu_si128((const __m128i *)a1);
    v5 = a1 + 72;
    if ( !a4 )
    {
LABEL_3:
      v6 = v28.u64[1];
      goto LABEL_6;
    }
  }
  else
  {
    memset(v30, 0, 24);
    v29 = 0;
    v28 = 0;
    v27 = 0;
    v5 = a2;
    if ( !a4 )
      goto LABEL_3;
  }
  v27.i64[0] = _mm_shuffle_epi8(_mm_loadl_epi64(&v27), (__m128i)xmmword_10008FEB0).u64[0];
  v6 = swap64(v28.i64[1]);
  v28.i64[1] = v6;
  *(_QWORD *)&v29 = swap64(v29);
  *((_QWORD *)&v29 + 1) = swap64(*((__int64 *)&v29 + 1));
  *(_QWORD *)&v30[0] = swap64(*(__int64 *)&v30[0]);
  *(__m128i *)((char *)v30 + 8) = _mm_shuffle_epi8(
                                    _mm_loadu_si128((const __m128i *)((char *)v30 + 8)),
                                    (__m128i)xmmword_10008FEB0);
LABEL_6:
  if ( HIWORD(v6) != 0 && (v6 & 0x4000000000000000LL) == 0 )
    v28.i64[1] = (v6 << 13) & 0xFF00000000000000LL | ((__int64)(v6 << 21) >> 21) & 0xFFFFFFFFFFFFFFLL;
  v7 = LODWORD(v30[1]);
  if ( v5 == -1 )
    v8 = qlseek(0, 0, 1);
  else
    v8 = v5;
  v9 = a2;
  if ( a2 == -1 )
    v9 = qlsize(0);
  v10 = v9 - v8;
  LODWORD(v11) = 0;
  if ( ((v10 | v8) & 0x8000000000000000LL) == 0LL )
  {
    if ( v10 >= 80 * v7 )
      goto LABEL_17;
    v11 = v10 / 0x50;
  }
  LODWORD(v30[1]) = v11;
  if ( (unsigned int)sub_10001D6D0(
                       1,
                       (int)"AUTOHIDE SESSION\nHIDECANCEL\n%s %llu is incorrect, maximum possible value is %llu%s",
                       "number of sections",
                       v7,
                       (unsigned int)v11,
                       ". Do you want to continue with the new value?",
                       v20) != 1 )
    sub_10001D7A0(0);
LABEL_17:
  result = (*(__int64 (__fastcall **)(__int64, __m128i *, unsigned __int64, unsigned __int64))(*(_QWORD *)v20 + 264LL))(
             v20,
             &v27,
             v5,
             a2);
  if ( !(_DWORD)result && LODWORD(v30[1]) )
  {
    v13 = 0;
    while ( 1 )
    {
      if ( v5 >= a2 )
      {
        if ( under_debugger == 1 )
          BUG();
        interr(0x4EACu);
      }
      if ( a2 - v5 > 0x4F )
        break;
      v26 = 0;
      v25 = 0;
      v24 = 0;
      v23 = 0;
      v22 = 0;
      v18 = 0;
      v17 = a2;
      if ( a4 )
        goto LABEL_25;
LABEL_26:
      if ( v18 > 0xFFFFFFFFFFFFLL && (v18 & 0x4000000000000000LL) == 0 )
        *(_QWORD *)&v24 = (v18 << 13) & 0xFF00000000000000LL | ((__int64)(v18 << 21) >> 21) & 0xFFFFFFFFFFFFFFLL;
      result = (*(__int64 (__fastcall **)(__int64, __m128i *, unsigned __int64, unsigned __int64))(*(_QWORD *)v20 + 280LL))(
                 v20,
                 &v22,
                 v5,
                 a2);
      if ( !(_DWORD)result )
      {
        ++v13;
        v5 = v17;
        if ( v13 < LODWORD(v30[1]) )
          continue;
      }
      return result;
    }
    v14 = _mm_loadu_si128((const __m128i *)v5);
    v15 = _mm_loadu_si128((const __m128i *)(v5 + 16));
    v16 = *(__m128i *)(v5 + 48);
    v24 = *(_OWORD *)(v5 + 32);
    v26 = *(__m128i *)(v5 + 64);
    v25 = v16;
    v23 = v15;
    v22 = v14;
    v17 = v5 + 80;
    v18 = v24;
    if ( !a4 )
      goto LABEL_26;
LABEL_25:
    *(_QWORD *)&v24 = swap64(v18);
    *((_QWORD *)&v24 + 1) = swap64(*((__int64 *)&v24 + 1));
    si128 = _mm_load_si128((const __m128i *)&xmmword_10008FEB0);
    v25 = _mm_shuffle_epi8(_mm_load_si128(&v25), si128);
    v26.i64[0] = _mm_shuffle_epi8(_mm_loadl_epi64(&v26), si128).u64[0];
    v26.i32[2] = _byteswap_ulong(v26.u32[2]);
    v18 = v24;
    goto LABEL_26;
  }
  return result;
}
// 1000122EF: variable 'v20' is possibly undefined
// 10008FEB0: using guessed type __int128 xmmword_10008FEB0;
// 1000AE23D: using guessed type char under_debugger;
