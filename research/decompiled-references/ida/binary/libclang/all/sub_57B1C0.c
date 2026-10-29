int __fastcall sub_57B1C0(__int64 a1)
{
  __m128i v1; // xmm0
  __m128i v2; // xmm0
  __m128i v3; // xmm0
  __m128i v4; // xmm0
  __m128i v5; // xmm0
  __int64 v6; // rbx
  __int64 v7; // rax
  unsigned __int64 v8; // rdx
  __m128i si128; // xmm2
  __m128i *v10; // rbp
  unsigned __int64 v11; // rdi
  __int64 *v12; // rcx
  unsigned int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rsi
  __int64 v16; // r8
  __int64 v17; // rbx
  __int64 v18; // r9
  __m128i *v19; // r12
  __int32 v20; // r10d
  unsigned __int64 v21; // rdx
  char v22; // si
  __int64 v23; // rdi
  __m128i *v24; // rdx
  __m128i v25; // xmm0
  char v27; // r12
  __int64 v28; // rax
  __int64 *v29; // r8
  const __m128i *v30; // rdx
  const __m128i *v31; // rsi
  __m128i v32; // xmm0
  __int32 v33; // r11d
  __m128i v34; // xmm0
  int v35; // eax
  __m128 v36; // [rsp+0h] [rbp-178h] BYREF
  __int64 v37; // [rsp+10h] [rbp-168h]
  unsigned __int64 v38; // [rsp+18h] [rbp-160h]
  __int64 v39; // [rsp+20h] [rbp-158h]
  __int64 *v40; // [rsp+28h] [rbp-150h]
  __int64 v41; // [rsp+38h] [rbp-140h] BYREF
  __m128i v42; // [rsp+40h] [rbp-138h] BYREF
  __m128i v43; // [rsp+50h] [rbp-128h] BYREF
  __m128i v44; // [rsp+60h] [rbp-118h] BYREF
  __m128i v45; // [rsp+70h] [rbp-108h] BYREF
  __m128i v46; // [rsp+80h] [rbp-F8h] BYREF
  _QWORD v47[2]; // [rsp+90h] [rbp-E8h] BYREF
  _OWORD v48[4]; // [rsp+A0h] [rbp-D8h] BYREF
  __m128i v49; // [rsp+E0h] [rbp-98h] BYREF

  v42.m128i_i64[1] = 18;
  v43.m128i_i32[0] = 0;
  v44.m128i_i64[0] = 35;
  v42.m128i_i64[0] = (__int64)"regbankselect-fast";
  v1 = _mm_load_si128(&v42);
  v43.m128i_i64[1] = (__int64)"Run the Fast mode (default mapping)";
  v44.m128i_i64[1] = (__int64)"regbankselect-greedy";
  v46.m128i_i64[0] = (__int64)"Use the Greedy mode (best local mapping)";
  v48[0] = v1;
  v2 = _mm_load_si128(&v43);
  v47[0] = v48;
  v36 = _mm_loadh_ps((const double *)&off_49E8C20);
  v45.m128i_i64[0] = 20;
  v45.m128i_i32[2] = 1;
  v46.m128i_i64[1] = 40;
  v48[1] = v2;
  v3 = _mm_load_si128(&v44);
  v47[1] = 0x400000002LL;
  v48[2] = v3;
  v4 = _mm_load_si128(&v45);
  qword_4AEB470 = 0;
  qword_4AEB460 = (__int64)&off_4A6E058;
  qword_4AEB468 = (unsigned int)qword_4AEB468 & 0x80000000;
  v48[3] = v4;
  v5 = _mm_load_si128(&v46);
  qword_4AEB4A8 = 0x100000000LL;
  qword_4AEB478 = 0;
  qword_4AEB480 = 0;
  qword_4AEB488 = 0;
  qword_4AEB490 = 0;
  qword_4AEB498 = 0;
  qword_4AEB4A0 = (__int64)&qword_4AEB4B0;
  qword_4AEB4B8 = (__int64)&qword_4AEB4D0;
  qword_4AEB4C0 = 1;
  dword_4AEB4C8 = 0;
  byte_4AEB4CC = 1;
  v49 = v5;
  v6 = sub_259AC30(a1, &qword_4AEB4B0);
  v7 = (unsigned int)qword_4AEB4A8;
  v8 = (unsigned int)qword_4AEB4A8 + 1LL;
  if ( HIDWORD(qword_4AEB4A8) < v8 )
  {
    sub_25D6060(&qword_4AEB4B0 - 2, &qword_4AEB4B0, v8, 8);
    v7 = (unsigned int)qword_4AEB4A8;
  }
  si128 = _mm_load_si128((const __m128i *)&v36);
  v10 = (__m128i *)v47;
  v11 = 8;
  *(_QWORD *)(qword_4AEB4A0 + 8 * v7) = v6;
  xmmword_4AEB690 = 0;
  v12 = qword_4AEB510;
  LODWORD(qword_4AEB4A8) = qword_4AEB4A8 + 1;
  dword_4AEB4D8 = 0;
  byte_4AEB4EC = 0;
  qword_4AEB460 = (__int64)&off_4A77E38;
  qword_4AEB500 = qword_4AEB510;
  dword_4AEB4E8 = 0;
  qword_4AEB508 = 0x800000000LL;
  qword_4AEB4E0 = (__int64)off_4A77DC8;
  qword_4AEB480 = (__int64)"Mode of the RegBankSelect pass";
  qword_4AEB488 = 30;
  xmmword_4AEB4F0 = (__int128)si128;
  xmmword_4AEB6A0 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_49E8C28),
                                (__m128i)(unsigned __int64)nullsub_491);
  BYTE2(qword_4AEB468) = BYTE2(qword_4AEB468) & 0x98 | 0x20;
  v13 = 0;
  while ( 1 )
  {
    v14 = v10[3].m128i_i64[0];
    v15 = v10[2].m128i_i64[1];
    v16 = v13;
    v44.m128i_i64[0] = (__int64)off_4A77DC8;
    v17 = v10[1].m128i_i64[0];
    v18 = v10[1].m128i_i64[1];
    v44.m128i_i8[12] = 1;
    v19 = &v42;
    v20 = v10[2].m128i_i32[0];
    v43.m128i_i64[1] = v14;
    v21 = v13 + 1LL;
    v43.m128i_i64[0] = v15;
    v22 = 1;
    v42.m128i_i64[0] = v17;
    v42.m128i_i64[1] = v18;
    v44.m128i_i32[2] = v20;
    if ( v11 < v21 )
    {
      if ( &v42 < (__m128i *)v12 || &v42 >= (__m128i *)&v12[6 * v13] )
      {
        v38 = -1;
        v27 = 0;
      }
      else
      {
        v38 = 0xAAAAAAAAAAAAAAABLL * (((char *)&v42 - (char *)v12) >> 4);
        v27 = 1;
      }
      v37 = v18;
      v36.m128_i32[0] = v20;
      v28 = sub_25D5F70(&qword_4AEB510[-2], qword_4AEB510, v21, 48, &v41);
      v29 = (__int64 *)qword_4AEB500;
      v20 = v36.m128_i32[0];
      v12 = (__int64 *)v28;
      v18 = v37;
      v30 = (const __m128i *)qword_4AEB500;
      v31 = (const __m128i *)((char *)qword_4AEB500 + 48 * (unsigned int)qword_4AEB508);
      if ( qword_4AEB500 != v31 )
      {
        do
        {
          v32 = _mm_loadu_si128(v30);
          v33 = v30[2].m128i_i32[2];
          v30 += 3;
          v28 += 48;
          *(__m128i *)(v28 - 48) = v32;
          v34 = _mm_loadu_si128(v30 - 2);
          *(_DWORD *)(v28 - 8) = v33;
          LOBYTE(v33) = v30[-1].m128i_i8[12];
          *(__m128i *)(v28 - 32) = v34;
          *(_BYTE *)(v28 - 4) = v33;
          *(_QWORD *)(v28 - 16) = off_4A77DC8;
        }
        while ( v31 != v30 );
      }
      v35 = v41;
      if ( v29 != qword_4AEB510 )
      {
        v40 = v12;
        v39 = v18;
        v37 = v41;
        v36.m128_i32[0] = v20;
        free(v29);
        v12 = v40;
        v18 = v39;
        v35 = v37;
        v20 = v36.m128_i32[0];
      }
      v16 = (unsigned int)qword_4AEB508;
      HIDWORD(qword_4AEB508) = v35;
      qword_4AEB500 = v12;
      v13 = qword_4AEB508;
      if ( v27 )
      {
        v19 = (__m128i *)&v12[6 * v38];
        v20 = v19[2].m128i_i32[2];
        v22 = v19[2].m128i_i8[12];
      }
      else
      {
        v22 = 1;
        v19 = &v42;
      }
    }
    v10 = (__m128i *)((char *)v10 + 40);
    v23 = *((_QWORD *)&xmmword_4AEB4F0 + 1);
    v24 = (__m128i *)&v12[6 * v16];
    *v24 = _mm_loadu_si128(v19);
    v25 = _mm_loadu_si128(v19 + 1);
    v24[2].m128i_i8[12] = v22;
    v24[2].m128i_i32[2] = v20;
    v24[2].m128i_i64[0] = (__int64)off_4A77DC8;
    v24[1] = v25;
    LODWORD(qword_4AEB508) = v13 + 1;
    sub_259ED10(v23, v17, v18);
    if ( &v49 == v10 )
      break;
    v13 = qword_4AEB508;
    v11 = HIDWORD(qword_4AEB508);
    v12 = (__int64 *)qword_4AEB500;
  }
  sub_259EC40(&qword_4AEB460);
  return __cxa_atexit(sub_2BEC0C0, &qword_4AEB460, &off_47CFE00);
}

