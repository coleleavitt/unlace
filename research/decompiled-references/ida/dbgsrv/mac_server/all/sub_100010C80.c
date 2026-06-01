/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100010C80
// Address: 0x0000000100010C80

//----- (0000000100010C80) ----------------------------------------------------
__int64 __fastcall sub_100010C80(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rbx
  unsigned __int64 v3; // r15
  int v4; // eax
  const __m128i *v5; // r12
  unsigned __int64 v6; // rax
  const __m128i *v7; // r13
  int v8; // ecx
  __m128i v9; // xmm0
  __m128i v10; // xmm0
  __m128i v11; // xmm1
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rax
  __m128i v14; // xmm0
  __m128i v15; // xmm1
  __m128i v16; // xmm0
  __m128i v17; // xmm0
  __m128i v18; // xmm0
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rax
  __m128i v21; // xmm0
  __m128i v22; // xmm1
  __m128i v23; // xmm2
  __m128i v24; // xmm0
  __m128i v25; // xmm1
  __m128i v26; // xmm2
  __m128i v27; // xmm0
  __m128i v28; // xmm0
  __m128i v29; // xmm1
  __m128i v30; // xmm2
  __m128i v31; // xmm3
  __m128i v32; // xmm0
  __m128i si128; // xmm1
  __m128i v34; // xmm1
  __m128i v35; // xmm1
  __m128i v36; // xmm2
  __m128i v37; // xmm3
  __m128i v38; // xmm4
  __m128i v39; // xmm1
  __m128i v40; // xmm2
  unsigned __int64 v42; // [rsp+8h] [rbp-98h]
  unsigned __int64 v43; // [rsp+18h] [rbp-88h] BYREF
  __m128i v44; // [rsp+20h] [rbp-80h] BYREF
  __m128i v45; // [rsp+30h] [rbp-70h] BYREF
  __m128i v46; // [rsp+40h] [rbp-60h] BYREF
  __m128i v47; // [rsp+50h] [rbp-50h] BYREF
  __m128i v48; // [rsp+60h] [rbp-40h] BYREF

  v42 = *(_QWORD *)(a1 + 144) + *(_QWORD *)(a1 + 136);
  v3 = 0;
  while ( 1 )
  {
    if ( v3 >= *(_QWORD *)(a1 + 208) )
    {
      v4 = 0;
      goto LABEL_187;
    }
    v5 = *(const __m128i **)(*(_QWORD *)(a1 + 200) + 8 * v3);
    v6 = v5->i64[0];
    v43 = v6;
    v2 = HIDWORD(v6);
    if ( *(_BYTE *)(a1 + 160) == 1 )
    {
      LODWORD(v43) = _byteswap_ulong(v6);
      LODWORD(v2) = _byteswap_ulong(HIDWORD(v6));
      HIDWORD(v43) = v2;
    }
    v7 = (const __m128i *)((char *)v5 + (unsigned int)v2);
    if ( (unsigned __int64)v7 > v42 || v5 >= v7 )
    {
      LODWORD(v2) = 0;
      sub_100000AE0((int)"Inconsistency in load commands");
      return (unsigned int)v2;
    }
    v8 = (**(__int64 (__fastcall ***)(__int64, unsigned __int64 *, const __m128i *, __int8 *))a2)(
           a2,
           &v43,
           v5,
           &v5->i8[(unsigned int)v2]);
    v4 = 0;
    if ( v8 == 2 )
      goto LABEL_3;
    if ( v8 )
      break;
    switch ( (int)v43 )
    {
      case 1:
        v4 = sub_100011E10(v5, (unsigned __int64)v5->u64 + (unsigned int)v2, a2, *(_BYTE *)(a1 + 160));
        break;
      case 2:
        if ( (unsigned int)v2 <= 0x17 )
        {
          v44 = 0;
          v45.i64[0] = 0;
          if ( *(_BYTE *)(a1 + 160) != 1 )
            goto LABEL_141;
        }
        else
        {
          v45.i64[0] = v5[1].i64[0];
          v44 = _mm_loadu_si128(v5);
          if ( *(_BYTE *)(a1 + 160) != 1 )
            goto LABEL_141;
        }
        si128 = _mm_load_si128((const __m128i *)&xmmword_10008FEB0);
        v44 = _mm_shuffle_epi8(_mm_load_si128(&v44), si128);
        v45.i64[0] = _mm_shuffle_epi8(_mm_loadl_epi64(&v45), si128).u64[0];
LABEL_141:
        v4 = (*(__int64 (__fastcall **)(__int64, __m128i *, const __m128i *, __int8 *))(*(_QWORD *)a2 + 16LL))(
               a2,
               &v44,
               v5,
               &v5->i8[(unsigned int)v2]);
        break;
      case 3:
        if ( (unsigned int)v2 <= 0xF )
          v18 = 0;
        else
          v18 = _mm_loadu_si128(v5);
        v44 = v18;
        if ( *(_BYTE *)(a1 + 160) == 1 )
          v44 = _mm_shuffle_epi8(_mm_load_si128(&v44), (__m128i)xmmword_10008FEB0);
        v4 = (*(__int64 (__fastcall **)(__int64, __m128i *, const __m128i *, __int8 *))(*(_QWORD *)a2 + 24LL))(
               a2,
               &v44,
               v5,
               &v5->i8[(unsigned int)v2]);
        break;
      case 4:
      case 5:
        if ( (unsigned int)v2 <= 7 )
        {
          v44.i64[0] = 0;
          LODWORD(v13) = 0;
          LODWORD(v12) = 0;
          if ( *(_BYTE *)(a1 + 160) != 1 )
            goto LABEL_46;
        }
        else
        {
          v12 = v5->i64[0];
          v44.i64[0] = v12;
          v13 = HIDWORD(v12);
          if ( *(_BYTE *)(a1 + 160) != 1 )
            goto LABEL_46;
        }
        v44.i64[0] = _byteswap_uint64(__PAIR64__(v12, v13));
LABEL_46:
        v4 = (*(__int64 (__fastcall **)(__int64, __m128i *, const __m128i *, __int8 *))(*(_QWORD *)a2 + 32LL))(
               a2,
               &v44,
               v5,
               &v5->i8[(unsigned int)v2]);
        break;
      case 6:
      case 7:
        if ( (unsigned int)v2 <= 0x13 )
        {
          v44 = 0;
          v45.i32[0] = 0;
          if ( *(_BYTE *)(a1 + 160) != 1 )
            goto LABEL_49;
        }
        else
        {
          v45.i32[0] = v5[1].i32[0];
          v44 = _mm_loadu_si128(v5);
          if ( *(_BYTE *)(a1 + 160) != 1 )
            goto LABEL_49;
        }
        v44 = _mm_shuffle_epi8(_mm_load_si128(&v44), (__m128i)xmmword_10008FEB0);
        v45.i32[0] = _byteswap_ulong(v45.u32[0]);
LABEL_49:
        v4 = (*(__int64 (__fastcall **)(__int64, __m128i *, const __m128i *, __int8 *))(*(_QWORD *)a2 + 40LL))(
               a2,
               &v44,
               v5,
               &v5->i8[(unsigned int)v2]);
        break;
      case 8:
        if ( (unsigned int)v2 <= 7 )
        {
          v44.i64[0] = 0;
          LODWORD(v20) = 0;
          LODWORD(v19) = 0;
          if ( *(_BYTE *)(a1 + 160) != 1 )
            goto LABEL_138;
        }
        else
        {
          v19 = v5->i64[0];
          v44.i64[0] = v19;
          v20 = HIDWORD(v19);
          if ( *(_BYTE *)(a1 + 160) != 1 )
            goto LABEL_138;
        }
        v44.i64[0] = _byteswap_uint64(__PAIR64__(v19, v20));
LABEL_138:
        v4 = (*(__int64 (__fastcall **)(__int64, __m128i *, const __m128i *, __int8 *))(*(_QWORD *)a2 + 48LL))(
               a2,
               &v44,
               v5,
               &v5->i8[(unsigned int)v2]);
        break;
      case 9:
        if ( (unsigned int)v2 <= 0xF )
          v28 = 0;
        else
          v28 = _mm_loadu_si128(v5);
        v44 = v28;
        if ( *(_BYTE *)(a1 + 160) == 1 )
          v44 = _mm_shuffle_epi8(_mm_load_si128(&v44), (__m128i)xmmword_10008FEB0);
        v4 = (*(__int64 (__fastcall **)(__int64, __m128i *, const __m128i *, __int8 *))(*(_QWORD *)a2 + 56LL))(
               a2,
               &v44,
               v5,
               &v5->i8[(unsigned int)v2]);
        break;
      case 10:
      case 24:
      case 28:
      case 31:
      case 35:
      case 40:
      case 45:
      case 46:
      case 49:
LABEL_114:
        v4 = (*(__int64 (__fastcall **)(__int64, unsigned __int64 *, const __m128i *, __int8 *))(*(_QWORD *)a2 + 8LL))(
               a2,
               &v43,
               v5,
               &v5->i8[(unsigned int)v2]);
        break;
      case 11:
        if ( (unsigned int)v2 <= 0x4F )
        {
          v21 = 0;
          v48 = 0;
          v47 = 0;
          v46 = 0;
          v45 = 0;
        }
        else
        {
          v48 = v5[4];
          v21 = _mm_loadu_si128(v5);
          v22 = _mm_loadu_si128(v5 + 1);
          v23 = _mm_loadu_si128(v5 + 2);
          v47 = _mm_loadu_si128(v5 + 3);
          v46 = v23;
          v45 = v22;
        }
        v44 = v21;
        if ( *(_BYTE *)(a1 + 160) == 1 )
        {
          v35 = _mm_load_si128(&v45);
          v36 = _mm_load_si128(&v46);
          v37 = _mm_load_si128(&v47);
          v38 = _mm_load_si128((const __m128i *)&xmmword_10008FEB0);
          v44 = _mm_shuffle_epi8(_mm_load_si128(&v44), v38);
          v45 = _mm_shuffle_epi8(v35, v38);
          v46 = _mm_shuffle_epi8(v36, v38);
          v47 = _mm_shuffle_epi8(v37, v38);
          v48 = _mm_shuffle_epi8(_mm_load_si128(&v48), v38);
        }
        v4 = (*(__int64 (__fastcall **)(__int64, __m128i *, const __m128i *, __int8 *))(*(_QWORD *)a2 + 64LL))(
               a2,
               &v44,
               v5,
               &v5->i8[(unsigned int)v2]);
        break;
      case 12:
      case 13:
      case 32:
LABEL_15:
        if ( (unsigned int)v2 <= 0x17 )
        {
          v44 = 0;
          v45.i64[0] = 0;
          if ( *(_BYTE *)(a1 + 160) != 1 )
            goto LABEL_2;
        }
        else
        {
          v45.i64[0] = v5[1].i64[0];
          v44 = _mm_loadu_si128(v5);
          if ( *(_BYTE *)(a1 + 160) != 1 )
            goto LABEL_2;
        }
        v11 = _mm_load_si128((const __m128i *)&xmmword_10008FEB0);
        v44 = _mm_shuffle_epi8(_mm_load_si128(&v44), v11);
        v45.i64[0] = _mm_shuffle_epi8(_mm_loadl_epi64(&v45), v11).u64[0];
LABEL_2:
        v4 = (*(__int64 (__fastcall **)(__int64, __m128i *, const __m128i *, __int8 *))(*(_QWORD *)a2 + 72LL))(
               a2,
               &v44,
               v5,
               &v5->i8[(unsigned int)v2]);
        break;
      case 14:
      case 15:
      case 39:
        if ( (unsigned int)v2 <= 0xB )
        {
          v44.i32[2] = 0;
          v44.i64[0] = 0;
          if ( *(_BYTE *)(a1 + 160) != 1 )
            goto LABEL_43;
        }
        else
        {
          v44.i32[2] = v5->i32[2];
          v44.i64[0] = v5->i64[0];
          if ( *(_BYTE *)(a1 + 160) != 1 )
            goto LABEL_43;
        }
        v44.i64[0] = _mm_shuffle_epi8(_mm_loadl_epi64(&v44), (__m128i)xmmword_10008FEC0).u64[0];
        v44.i32[2] = _byteswap_ulong(v44.u32[2]);
LABEL_43:
        v4 = (*(__int64 (__fastcall **)(__int64, __m128i *, const __m128i *, __int8 *))(*(_QWORD *)a2 + 80LL))(
               a2,
               &v44,
               v5,
               &v5->i8[(unsigned int)v2]);
        break;
      case 16:
        if ( (unsigned int)v2 <= 0x13 )
        {
          v44 = 0;
          v45.i32[0] = 0;
          if ( *(_BYTE *)(a1 + 160) != 1 )
            goto LABEL_160;
        }
        else
        {
          v45.i32[0] = v5[1].i32[0];
          v44 = _mm_loadu_si128(v5);
          if ( *(_BYTE *)(a1 + 160) != 1 )
            goto LABEL_160;
        }
        v44 = _mm_shuffle_epi8(_mm_load_si128(&v44), (__m128i)xmmword_10008FEB0);
        v45.i32[0] = _byteswap_ulong(v45.u32[0]);
LABEL_160:
        v4 = (*(__int64 (__fastcall **)(__int64, __m128i *, const __m128i *, __int8 *))(*(_QWORD *)a2 + 88LL))(
               a2,
               &v44,
               v5,
               &v5->i8[(unsigned int)v2]);
        break;
      case 17:
        if ( (unsigned int)v2 <= 0x27 )
        {
          v45 = 0;
          v44 = 0;
          v46.i64[0] = 0;
          if ( *(_BYTE *)(a1 + 160) != 1 )
            goto LABEL_166;
        }
        else
        {
          v46.i64[0] = v5[2].i64[0];
          v27 = _mm_loadu_si128(v5);
          v45 = _mm_loadu_si128(v5 + 1);
          v44 = v27;
          if ( *(_BYTE *)(a1 + 160) != 1 )
            goto LABEL_166;
        }
        v39 = _mm_load_si128(&v45);
        v40 = _mm_load_si128((const __m128i *)&xmmword_10008FEB0);
        v44 = _mm_shuffle_epi8(_mm_load_si128(&v44), v40);
        v45 = _mm_shuffle_epi8(v39, v40);
        v46.i64[0] = _mm_shuffle_epi8(_mm_loadl_epi64(&v46), v40).u64[0];
LABEL_166:
        v4 = (*(__int64 (__fastcall **)(__int64, __m128i *, const __m128i *, __int8 *))(*(_QWORD *)a2 + 96LL))(
               a2,
               &v44,
               v5,
               &v5->i8[(unsigned int)v2]);
        break;
      case 18:
        if ( (unsigned int)v2 <= 0xB )
        {
          v44.i32[2] = 0;
          v44.i64[0] = 0;
          if ( *(_BYTE *)(a1 + 160) != 1 )
            goto LABEL_157;
        }
        else
        {
          v44.i32[2] = v5->i32[2];
          v44.i64[0] = v5->i64[0];
          if ( *(_BYTE *)(a1 + 160) != 1 )
            goto LABEL_157;
        }
        v44.i64[0] = _mm_shuffle_epi8(_mm_loadl_epi64(&v44), (__m128i)xmmword_10008FEC0).u64[0];
        v44.i32[2] = _byteswap_ulong(v44.u32[2]);
LABEL_157:
        v4 = (*(__int64 (__fastcall **)(__int64, __m128i *, const __m128i *, __int8 *))(*(_QWORD *)a2 + 104LL))(
               a2,
               &v44,
               v5,
               &v5->i8[(unsigned int)v2]);
        break;
      case 19:
        if ( (unsigned int)v2 <= 0xB )
        {
          v44.i32[2] = 0;
          v44.i64[0] = 0;
          if ( *(_BYTE *)(a1 + 160) != 1 )
            goto LABEL_128;
        }
        else
        {
          v44.i32[2] = v5->i32[2];
          v44.i64[0] = v5->i64[0];
          if ( *(_BYTE *)(a1 + 160) != 1 )
            goto LABEL_128;
        }
        v44.i64[0] = _mm_shuffle_epi8(_mm_loadl_epi64(&v44), (__m128i)xmmword_10008FEC0).u64[0];
        v44.i32[2] = _byteswap_ulong(v44.u32[2]);
LABEL_128:
        v4 = (*(__int64 (__fastcall **)(__int64, __m128i *, const __m128i *, __int8 *))(*(_QWORD *)a2 + 112LL))(
               a2,
               &v44,
               v5,
               &v5->i8[(unsigned int)v2]);
        break;
      case 20:
        if ( (unsigned int)v2 <= 0xB )
        {
          v44.i32[2] = 0;
          v44.i64[0] = 0;
          if ( *(_BYTE *)(a1 + 160) != 1 )
            goto LABEL_131;
        }
        else
        {
          v44.i32[2] = v5->i32[2];
          v44.i64[0] = v5->i64[0];
          if ( *(_BYTE *)(a1 + 160) != 1 )
            goto LABEL_131;
        }
        v44.i64[0] = _mm_shuffle_epi8(_mm_loadl_epi64(&v44), (__m128i)xmmword_10008FEC0).u64[0];
        v44.i32[2] = _byteswap_ulong(v44.u32[2]);
LABEL_131:
        v4 = (*(__int64 (__fastcall **)(__int64, __m128i *, const __m128i *, __int8 *))(*(_QWORD *)a2 + 120LL))(
               a2,
               &v44,
               v5,
               &v5->i8[(unsigned int)v2]);
        break;
      case 21:
        if ( (unsigned int)v2 <= 0xB )
        {
          v44.i32[2] = 0;
          v44.i64[0] = 0;
          if ( *(_BYTE *)(a1 + 160) != 1 )
            goto LABEL_173;
        }
        else
        {
          v44.i32[2] = v5->i32[2];
          v44.i64[0] = v5->i64[0];
          if ( *(_BYTE *)(a1 + 160) != 1 )
            goto LABEL_173;
        }
        v44.i64[0] = _mm_shuffle_epi8(_mm_loadl_epi64(&v44), (__m128i)xmmword_10008FEC0).u64[0];
        v44.i32[2] = _byteswap_ulong(v44.u32[2]);
LABEL_173:
        v4 = (*(__int64 (__fastcall **)(__int64, __m128i *, const __m128i *, __int8 *))(*(_QWORD *)a2 + 128LL))(
               a2,
               &v44,
               v5,
               &v5->i8[(unsigned int)v2]);
        break;
      case 22:
        if ( (unsigned int)v2 <= 0xF )
          v16 = 0;
        else
          v16 = _mm_loadu_si128(v5);
        v44 = v16;
        if ( *(_BYTE *)(a1 + 160) == 1 )
          v44 = _mm_shuffle_epi8(_mm_load_si128(&v44), (__m128i)xmmword_10008FEB0);
        v4 = (*(__int64 (__fastcall **)(__int64, __m128i *, const __m128i *, __int8 *))(*(_QWORD *)a2 + 136LL))(
               a2,
               &v44,
               v5,
               &v5->i8[(unsigned int)v2]);
        break;
      case 23:
        if ( (unsigned int)v2 <= 0xB )
        {
          v44.i32[2] = 0;
          v44.i64[0] = 0;
          if ( *(_BYTE *)(a1 + 160) != 1 )
            goto LABEL_151;
        }
        else
        {
          v44.i32[2] = v5->i32[2];
          v44.i64[0] = v5->i64[0];
          if ( *(_BYTE *)(a1 + 160) != 1 )
            goto LABEL_151;
        }
        v44.i64[0] = _mm_shuffle_epi8(_mm_loadl_epi64(&v44), (__m128i)xmmword_10008FEC0).u64[0];
        v44.i32[2] = _byteswap_ulong(v44.u32[2]);
LABEL_151:
        v4 = (*(__int64 (__fastcall **)(__int64, __m128i *, const __m128i *, __int8 *))(*(_QWORD *)a2 + 144LL))(
               a2,
               &v44,
               v5,
               &v5->i8[(unsigned int)v2]);
        break;
      case 25:
        v4 = sub_100012100((unsigned __int64)v5, (unsigned __int64)v5->u64 + (unsigned int)v2, a2, *(_BYTE *)(a1 + 160));
        break;
      case 26:
        if ( (unsigned int)v2 <= 0x47 )
        {
          v47 = 0;
          v46 = 0;
          v45 = 0;
          v44 = 0;
          v48.i64[0] = 0;
          if ( *(_BYTE *)(a1 + 160) != 1 )
            goto LABEL_163;
        }
        else
        {
          v48.i64[0] = v5[4].i64[0];
          v24 = _mm_loadu_si128(v5);
          v25 = _mm_loadu_si128(v5 + 1);
          v26 = _mm_loadu_si128(v5 + 2);
          v47 = _mm_loadu_si128(v5 + 3);
          v46 = v26;
          v45 = v25;
          v44 = v24;
          if ( *(_BYTE *)(a1 + 160) != 1 )
            goto LABEL_163;
        }
        v44.i64[0] = _mm_shuffle_epi8(_mm_loadl_epi64(&v44), (__m128i)xmmword_10008FEC0).u64[0];
        v44.i64[1] = swap64(v44.i64[1]);
        v45.i64[0] = swap64(v45.i64[0]);
        v45.i64[1] = swap64(v45.i64[1]);
        v46.i64[0] = swap64(v46.i64[0]);
        v46.i64[1] = swap64(v46.i64[1]);
        v47.i64[0] = swap64(v47.i64[0]);
        v47.i64[1] = swap64(v47.i64[1]);
        v48.i64[0] = swap64(v48.i64[0]);
LABEL_163:
        v4 = (*(__int64 (__fastcall **)(__int64, __m128i *, const __m128i *, __int8 *))(*(_QWORD *)a2 + 152LL))(
               a2,
               &v44,
               v5,
               &v5->i8[(unsigned int)v2]);
        break;
      case 27:
        if ( (unsigned int)v2 <= 0x17 )
        {
          v44 = 0;
          v45.i64[0] = 0;
          if ( *(_BYTE *)(a1 + 160) != 1 )
            goto LABEL_154;
        }
        else
        {
          v45.i64[0] = v5[1].i64[0];
          v44 = _mm_loadu_si128(v5);
          if ( *(_BYTE *)(a1 + 160) != 1 )
            goto LABEL_154;
        }
        v44.i64[0] = _mm_shuffle_epi8(_mm_loadl_epi64(&v44), (__m128i)xmmword_10008FEC0).u64[0];
LABEL_154:
        v4 = (*(__int64 (__fastcall **)(__int64, __m128i *, const __m128i *, __int8 *))(*(_QWORD *)a2 + 160LL))(
               a2,
               &v44,
               v5,
               &v5->i8[(unsigned int)v2]);
        break;
      case 29:
      case 30:
      case 38:
      case 41:
      case 43:
LABEL_18:
        if ( (unsigned int)v2 <= 0xF )
          v10 = 0;
        else
          v10 = _mm_loadu_si128(v5);
        v44 = v10;
        if ( *(_BYTE *)(a1 + 160) == 1 )
          v44 = _mm_shuffle_epi8(_mm_load_si128(&v44), (__m128i)xmmword_10008FEB0);
        v4 = (*(__int64 (__fastcall **)(__int64, __m128i *, const __m128i *, __int8 *))(*(_QWORD *)a2 + 176LL))(
               a2,
               &v44,
               v5,
               &v5->i8[(unsigned int)v2]);
        break;
      case 33:
        if ( (unsigned int)v2 <= 0x13 )
        {
          v44 = 0;
          v45.i32[0] = 0;
          if ( *(_BYTE *)(a1 + 160) != 1 )
            goto LABEL_117;
        }
        else
        {
          v45.i32[0] = v5[1].i32[0];
          v44 = _mm_loadu_si128(v5);
          if ( *(_BYTE *)(a1 + 160) != 1 )
            goto LABEL_117;
        }
        v44 = _mm_shuffle_epi8(_mm_load_si128(&v44), (__m128i)xmmword_10008FEB0);
        v45.i32[0] = _byteswap_ulong(v45.u32[0]);
LABEL_117:
        v4 = (*(__int64 (__fastcall **)(__int64, __m128i *, const __m128i *, __int8 *))(*(_QWORD *)a2 + 184LL))(
               a2,
               &v44,
               v5,
               &v5->i8[(unsigned int)v2]);
        break;
      case 34:
LABEL_39:
        if ( (unsigned int)v2 <= 0x2F )
        {
          v14 = 0;
          v46 = 0;
          v45 = 0;
        }
        else
        {
          v14 = _mm_loadu_si128(v5);
          v15 = _mm_loadu_si128(v5 + 1);
          v46 = _mm_loadu_si128(v5 + 2);
          v45 = v15;
        }
        v44 = v14;
        if ( *(_BYTE *)(a1 + 160) == 1 )
        {
          v29 = _mm_load_si128(&v45);
          v30 = _mm_load_si128(&v46);
          v31 = _mm_load_si128((const __m128i *)&xmmword_10008FEB0);
          v44 = _mm_shuffle_epi8(_mm_load_si128(&v44), v31);
          v45 = _mm_shuffle_epi8(v29, v31);
          v46 = _mm_shuffle_epi8(v30, v31);
        }
        v4 = (*(__int64 (__fastcall **)(__int64, __m128i *, const __m128i *, __int8 *))(*(_QWORD *)a2 + 200LL))(
               a2,
               &v44,
               v5,
               &v5->i8[(unsigned int)v2]);
        break;
      case 36:
      case 37:
      case 47:
      case 48:
        if ( (unsigned int)v2 <= 0xF )
          v9 = 0;
        else
          v9 = _mm_loadu_si128(v5);
        v44 = v9;
        if ( *(_BYTE *)(a1 + 160) == 1 )
          v44 = _mm_shuffle_epi8(_mm_load_si128(&v44), (__m128i)xmmword_10008FEB0);
        v4 = (*(__int64 (__fastcall **)(__int64, __m128i *, const __m128i *, __int8 *))(*(_QWORD *)a2 + 208LL))(
               a2,
               &v44,
               v5,
               &v5->i8[(unsigned int)v2]);
        break;
      case 42:
        if ( (unsigned int)v2 <= 0xF )
          v17 = 0;
        else
          v17 = _mm_loadu_si128(v5);
        v44 = v17;
        if ( *(_BYTE *)(a1 + 160) == 1 )
        {
          v44.i64[0] = _mm_shuffle_epi8(_mm_loadl_epi64(&v44), (__m128i)xmmword_10008FEC0).u64[0];
          v44.i64[1] = swap64(v44.i64[1]);
        }
        v4 = (*(__int64 (__fastcall **)(__int64, __m128i *, const __m128i *, __int8 *))(*(_QWORD *)a2 + 232LL))(
               a2,
               &v44,
               v5,
               &v5->i8[(unsigned int)v2]);
        break;
      case 44:
        if ( (unsigned int)v2 <= 0x17 )
        {
          v44 = 0;
          v45.i64[0] = 0;
          if ( *(_BYTE *)(a1 + 160) != 1 )
            goto LABEL_144;
        }
        else
        {
          v45.i64[0] = v5[1].i64[0];
          v44 = _mm_loadu_si128(v5);
          if ( *(_BYTE *)(a1 + 160) != 1 )
            goto LABEL_144;
        }
        v34 = _mm_load_si128((const __m128i *)&xmmword_10008FEB0);
        v44 = _mm_shuffle_epi8(_mm_load_si128(&v44), v34);
        v45.i64[0] = _mm_shuffle_epi8(_mm_loadl_epi64(&v45), v34).u64[0];
LABEL_144:
        v4 = (*(__int64 (__fastcall **)(__int64, __m128i *, const __m128i *, __int8 *))(*(_QWORD *)a2 + 192LL))(
               a2,
               &v44,
               v5,
               &v5->i8[(unsigned int)v2]);
        break;
      case 50:
        v4 = sub_100010AF0(v5, (unsigned __int64)v5->u64 + (unsigned int)v2, a2, *(_BYTE *)(a1 + 160));
        break;
      default:
        switch ( (unsigned int)v43 )
        {
          case 0x80000018:
          case 0x8000001F:
          case 0x80000023:
            goto LABEL_15;
          case 0x8000001C:
            if ( (unsigned int)v2 <= 0xB )
            {
              v44.i32[2] = 0;
              v44.i64[0] = 0;
              if ( *(_BYTE *)(a1 + 160) != 1 )
                goto LABEL_183;
            }
            else
            {
              v44.i32[2] = v5->i32[2];
              v44.i64[0] = v5->i64[0];
              if ( *(_BYTE *)(a1 + 160) != 1 )
                goto LABEL_183;
            }
            v44.i64[0] = _mm_shuffle_epi8(_mm_loadl_epi64(&v44), (__m128i)xmmword_10008FEC0).u64[0];
            v44.i32[2] = _byteswap_ulong(v44.u32[2]);
LABEL_183:
            v4 = (*(__int64 (__fastcall **)(__int64, __m128i *, const __m128i *, __int8 *))(*(_QWORD *)a2 + 168LL))(
                   a2,
                   &v44,
                   v5,
                   &v5->i8[(unsigned int)v2]);
            goto LABEL_3;
          case 0x80000022:
            goto LABEL_39;
          case 0x80000028:
            if ( (unsigned int)v2 <= 0x17 )
            {
              v44 = 0;
              v45.i64[0] = 0;
              if ( *(_BYTE *)(a1 + 160) != 1 )
                goto LABEL_176;
            }
            else
            {
              v45.i64[0] = v5[1].i64[0];
              v44 = _mm_loadu_si128(v5);
              if ( *(_BYTE *)(a1 + 160) != 1 )
                goto LABEL_176;
            }
            v44.i64[0] = _mm_shuffle_epi8(_mm_loadl_epi64(&v44), (__m128i)xmmword_10008FEC0).u64[0];
            v44.i64[1] = swap64(v44.i64[1]);
            v45.i64[0] = swap64(v45.i64[0]);
LABEL_176:
            v4 = (*(__int64 (__fastcall **)(__int64, __m128i *, const __m128i *, __int8 *))(*(_QWORD *)a2 + 240LL))(
                   a2,
                   &v44,
                   v5,
                   &v5->i8[(unsigned int)v2]);
            break;
          case 0x80000033:
          case 0x80000034:
            goto LABEL_18;
          case 0x80000035:
            if ( (unsigned int)v2 <= 0x1F )
            {
              v32 = 0;
              v45 = 0;
            }
            else
            {
              v32 = _mm_loadu_si128(v5);
              v45 = _mm_loadu_si128(v5 + 1);
            }
            v44 = v32;
            if ( *(_BYTE *)(a1 + 160) == 1 )
            {
              v44.i64[0] = _mm_shuffle_epi8(_mm_loadl_epi64(&v44), _mm_load_si128((const __m128i *)&xmmword_10008FEB0)).u64[0];
              v44.i64[1] = swap64(v44.i64[1]);
              v45.i64[0] = swap64(v44.i64[1]);
              v45.i64[1] = _mm_shuffle_epi8(_mm_loadl_epi64((const __m128i *)&v45.u64[1]), (__m128i)xmmword_10008FEB0).u64[0];
            }
            v4 = (*(__int64 (__fastcall **)(__int64, __m128i *, const __m128i *, __int8 *))(*(_QWORD *)a2 + 248LL))(
                   a2,
                   &v44,
                   v5,
                   &v5->i8[(unsigned int)v2]);
            goto LABEL_3;
          default:
            goto LABEL_114;
        }
        break;
    }
LABEL_3:
    ++v3;
    if ( v4 )
      goto LABEL_187;
  }
  v4 = v8;
LABEL_187:
  LOBYTE(v2) = v4 != 0;
  return (unsigned int)v2;
}
// 100011CB1: variable 'v2' is possibly undefined
// 10008FEB0: using guessed type __int128 xmmword_10008FEB0;
// 10008FEC0: using guessed type __int128 xmmword_10008FEC0;
