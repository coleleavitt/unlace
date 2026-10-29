/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100011E10
// Address: 0x0000000100011E10

//----- (0000000100011E10) ----------------------------------------------------
__int64 __fastcall sub_100011E10(const __m128i *a1, unsigned __int64 a2, __int64 a3, char a4)
{
  const __m128i *v5; // rdi
  unsigned int epi32; // r12d
  __m128i si128; // xmm1
  __m128i v8; // xmm2
  off_t v9; // r13
  __int64 v10; // rax
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rdx
  __int64 result; // rax
  unsigned __int32 v14; // r12d
  const __m128i *v15; // rdx
  __m128i v16; // xmm0
  __m128i v17; // xmm1
  __m128i v18; // xmm2
  const __m128i *v19; // r15
  __m128i v20; // xmm1
  __m128i v21; // xmm2
  const __m128i *v22; // [rsp+0h] [rbp-D0h]
  __m128i v24; // [rsp+10h] [rbp-C0h] BYREF
  __m128i v25; // [rsp+20h] [rbp-B0h]
  __m128i v26; // [rsp+30h] [rbp-A0h] BYREF
  __m128i v27; // [rsp+40h] [rbp-90h] BYREF
  unsigned int v28; // [rsp+50h] [rbp-80h]
  __m128i v29[4]; // [rsp+60h] [rbp-70h] BYREF

  if ( a2 - (unsigned __int64)a1 >= 0x38 && a2 > (unsigned __int64)a1 )
  {
    v29[3].i64[0] = a1[3].i64[0];
    v29[2] = _mm_loadu_si128(a1 + 2);
    v29[1] = _mm_loadu_si128(a1 + 1);
    v29[0] = _mm_loadu_si128(a1);
    v5 = (const __m128i *)((char *)a1 + 56);
    if ( !a4 )
    {
LABEL_3:
      epi32 = v29[3].u32[0];
      goto LABEL_6;
    }
  }
  else
  {
    memset(v29, 0, 56);
    v5 = (const __m128i *)a2;
    if ( !a4 )
      goto LABEL_3;
  }
  si128 = _mm_load_si128((const __m128i *)&xmmword_10008FEB0);
  v29[0].i64[0] = _mm_shuffle_epi8(_mm_loadl_epi64(v29), si128).u64[0];
  v8 = _mm_loadu_si128((const __m128i *)&v29[2].u64[1]);
  *(__m128i *)((char *)&v29[1] + 8) = _mm_shuffle_epi8(_mm_loadu_si128((const __m128i *)&v29[1].u64[1]), si128);
  *(__m128i *)((char *)&v29[2] + 8) = _mm_shuffle_epi8(v8, si128);
  epi32 = _mm_extract_epi32(*(__m128i *)((char *)&v29[2] + 8), 2);
LABEL_6:
  v9 = (off_t)v5;
  v22 = v5;
  if ( v5 == (const __m128i *)-1LL )
    v9 = qlseek(0, 0, 1);
  v10 = a2;
  if ( a2 == -1 )
    v10 = qlsize(0);
  v11 = v10 - v9;
  LODWORD(v12) = 0;
  if ( ((v11 | v9) & 0x8000000000000000LL) == 0LL )
  {
    if ( v11 >= 68 * (unsigned __int64)epi32 )
      goto LABEL_14;
    v12 = v11 / 0x44;
  }
  v29[3].i32[0] = v12;
  if ( (unsigned int)sub_10001D6D0(
                       1,
                       (int)"AUTOHIDE SESSION\nHIDECANCEL\n%s %llu is incorrect, maximum possible value is %llu%s",
                       "number of sections",
                       epi32,
                       (unsigned int)v12,
                       ". Do you want to continue with the new value?",
                       v5) != 1 )
    sub_10001D7A0(0);
LABEL_14:
  result = (*(__int64 (__fastcall **)(__int64, __m128i *, const __m128i *, unsigned __int64))(*(_QWORD *)a3 + 256LL))(
             a3,
             v29,
             v22,
             a2);
  if ( !(_DWORD)result && v29[3].i32[0] )
  {
    v14 = 0;
    v15 = v22;
    while ( 1 )
    {
      if ( (unsigned __int64)v15 >= a2 )
      {
        if ( under_debugger == 1 )
          BUG();
        interr(0x4EACu);
      }
      if ( a2 - (unsigned __int64)v15 <= 0x43 )
        break;
      v28 = v15[4].u32[0];
      v16 = _mm_loadu_si128(v15);
      v17 = _mm_loadu_si128(v15 + 1);
      v18 = _mm_loadu_si128(v15 + 2);
      v27 = v15[3];
      v26 = v18;
      v25 = v17;
      v24 = v16;
      v19 = (const __m128i *)((char *)v15 + 68);
      if ( a4 )
        goto LABEL_22;
LABEL_23:
      result = (*(__int64 (__fastcall **)(__int64, __m128i *, const __m128i *, unsigned __int64))(*(_QWORD *)a3 + 272LL))(
                 a3,
                 &v24,
                 v15,
                 a2);
      if ( !(_DWORD)result )
      {
        ++v14;
        v15 = v19;
        if ( v14 < v29[3].i32[0] )
          continue;
      }
      return result;
    }
    v27 = 0;
    v26 = 0;
    v25 = 0;
    v24 = 0;
    v28 = 0;
    v19 = (const __m128i *)a2;
    if ( !a4 )
      goto LABEL_23;
LABEL_22:
    v20 = _mm_load_si128(&v27);
    v21 = _mm_load_si128((const __m128i *)&xmmword_10008FEB0);
    v26 = _mm_shuffle_epi8(_mm_load_si128(&v26), v21);
    v27 = _mm_shuffle_epi8(v20, v21);
    v28 = _byteswap_ulong(v28);
    goto LABEL_23;
  }
  return result;
}
// 100011F90: variable 'v22' is possibly undefined
// 10008FEB0: using guessed type __int128 xmmword_10008FEB0;
// 1000AE23D: using guessed type char under_debugger;
