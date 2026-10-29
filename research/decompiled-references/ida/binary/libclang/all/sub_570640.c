int sub_570640()
{
  _BYTE *v0; // r13
  __m128i *v1; // rax
  __int64 v2; // rdx
  __m128i v3; // xmm0
  __m128i v4; // xmm0
  __int64 v5; // rbx
  __int64 v6; // rax
  unsigned __int64 v7; // rdx
  __m128i si128; // xmm2
  char *v9; // rbx
  char *v10; // rbp
  __int64 v11; // rax
  __int64 v12; // rdx
  char v13; // si
  __m128i *v14; // rcx
  __int64 v15; // r12
  __int64 v16; // r13
  __int64 v17; // rdi
  __int32 v18; // r10d
  int v19; // edx
  __m128i *v20; // rax
  __int64 v21; // rdi
  __m128i v22; // xmm0
  __int64 v24; // rax
  __int64 *v25; // r8
  char *v26; // rcx
  const __m128i *v27; // rdx
  const __m128i *v28; // rdi
  __m128i v29; // xmm0
  __int32 v30; // esi
  __m128i v31; // xmm0
  int v32; // eax
  __m128 v33; // [rsp+0h] [rbp-1F8h] BYREF
  __int32 v34; // [rsp+10h] [rbp-1E8h]
  char v35; // [rsp+17h] [rbp-1E1h]
  unsigned __int64 v36; // [rsp+18h] [rbp-1E0h]
  char *v37; // [rsp+20h] [rbp-1D8h]
  __int64 v38; // [rsp+28h] [rbp-1D0h]
  __int64 v39; // [rsp+38h] [rbp-1C0h] BYREF
  void *ptr; // [rsp+40h] [rbp-1B8h] BYREF
  __int64 v41; // [rsp+48h] [rbp-1B0h]
  _BYTE v42[160]; // [rsp+50h] [rbp-1A8h] BYREF
  __m128i v43; // [rsp+F0h] [rbp-108h] BYREF
  __m128i v44; // [rsp+100h] [rbp-F8h] BYREF
  __m128i v45; // [rsp+110h] [rbp-E8h] BYREF
  __m128i v46; // [rsp+120h] [rbp-D8h] BYREF
  __m128i v47; // [rsp+130h] [rbp-C8h] BYREF
  __m128i v48; // [rsp+140h] [rbp-B8h] BYREF
  __m128i v49; // [rsp+150h] [rbp-A8h] BYREF
  __m128i v50; // [rsp+160h] [rbp-98h] BYREF
  __m128i v51; // [rsp+170h] [rbp-88h] BYREF
  __m128i v52; // [rsp+180h] [rbp-78h] BYREF
  __m128i v53; // [rsp+190h] [rbp-68h] BYREF
  __m128i v54; // [rsp+1A0h] [rbp-58h] BYREF
  __int64 v55; // [rsp+1B0h] [rbp-48h]

  v43.m128i_i64[0] = (__int64)"Disabled";
  v0 = v42;
  v44.m128i_i64[1] = (__int64)"disable debug output";
  v45.m128i_i64[1] = (__int64)"Arguments";
  v47.m128i_i64[0] = (__int64)"print pass arguments to pass to 'opt'";
  v48.m128i_i64[0] = (__int64)"Structure";
  v49.m128i_i64[1] = (__int64)"print pass structure before run()";
  v33 = _mm_loadh_ps((const double *)&off_49D8BA0);
  v43.m128i_i64[1] = 8;
  v44.m128i_i32[0] = 0;
  v45.m128i_i64[0] = 20;
  v46.m128i_i64[0] = 9;
  v46.m128i_i32[2] = 1;
  v47.m128i_i64[1] = 37;
  v48.m128i_i64[1] = 9;
  v49.m128i_i32[0] = 2;
  v50.m128i_i64[0] = 33;
  v50.m128i_i64[1] = (__int64)"Executions";
  v52.m128i_i64[0] = (__int64)"print pass name before it is executed";
  v53.m128i_i64[0] = (__int64)"Details";
  v54.m128i_i64[1] = (__int64)"print pass details when it is executed";
  v51.m128i_i64[0] = 10;
  v41 = 0x400000000LL;
  v51.m128i_i32[2] = 3;
  v52.m128i_i64[1] = 37;
  v53.m128i_i64[1] = 7;
  v54.m128i_i32[0] = 4;
  v55 = 38;
  ptr = v42;
  sub_25D6060(&ptr, v42, 5, 40);
  v1 = (__m128i *)((char *)ptr + 40 * (unsigned int)v41);
  v2 = v55;
  *v1 = _mm_load_si128(&v43);
  v3 = _mm_load_si128(&v44);
  v1[12].m128i_i64[0] = v2;
  v1[1] = v3;
  v4 = _mm_load_si128(&v45);
  LODWORD(v41) = v41 + 5;
  v1[2] = v4;
  v1[3] = _mm_load_si128(&v46);
  v1[4] = _mm_load_si128(&v47);
  v1[5] = _mm_load_si128(&v48);
  v1[6] = _mm_load_si128(&v49);
  v1[7] = _mm_load_si128(&v50);
  v1[8] = _mm_load_si128(&v51);
  v1[9] = _mm_load_si128(&v52);
  v1[10] = _mm_load_si128(&v53);
  v1[11] = _mm_load_si128(&v54);
  qword_4AE2D00 = (__int64)&off_4A6E058;
  qword_4AE2D08 = (unsigned int)qword_4AE2D08 & 0x80000000;
  qword_4AE2D10 = 0;
  qword_4AE2D48 = 0x100000000LL;
  qword_4AE2D18 = 0;
  qword_4AE2D20 = 0;
  qword_4AE2D28 = 0;
  qword_4AE2D30 = 0;
  qword_4AE2D38 = 0;
  qword_4AE2D40 = (__int64)&qword_4AE2D50;
  qword_4AE2D58 = (__int64)&qword_4AE2D70;
  qword_4AE2D60 = 1;
  dword_4AE2D68 = 0;
  byte_4AE2D6C = 1;
  v5 = sub_259AC30(&ptr, &qword_4AE2D50);
  v6 = (unsigned int)qword_4AE2D48;
  v7 = (unsigned int)qword_4AE2D48 + 1LL;
  if ( HIDWORD(qword_4AE2D48) < v7 )
  {
    sub_25D6060(&qword_4AE2D50 - 2, &qword_4AE2D50, v7, 8);
    v6 = (unsigned int)qword_4AE2D48;
  }
  si128 = _mm_load_si128((const __m128i *)&v33);
  *(_QWORD *)(qword_4AE2D40 + 8 * v6) = v5;
  qword_4AE2D00 = (__int64)&off_4A6D4E8;
  ::ptr = qword_4AE2DB0;
  xmmword_4AE2F30 = 0;
  qword_4AE2DA8 = 0x800000000LL;
  LODWORD(qword_4AE2D48) = qword_4AE2D48 + 1;
  byte_4AE2D8C = 0;
  dword_4AE2D78 = 0;
  dword_4AE2D88 = 0;
  qword_4AE2D80 = (__int64)&off_4A6D478;
  xmmword_4AE2D90 = (__int128)si128;
  xmmword_4AE2F40 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_49D8BA8),
                                (__m128i)(unsigned __int64)nullsub_337);
  sub_259F400(&qword_4AE2D00, "debug-pass", 10);
  v9 = (char *)ptr;
  qword_4AE2D28 = 46;
  BYTE2(qword_4AE2D08) = BYTE2(qword_4AE2D08) & 0x9F | 0x20;
  qword_4AE2D20 = (__int64)"Print legacy PassManager debugging information";
  if ( ptr != (char *)ptr + 40 * (unsigned int)v41 )
  {
    v33.m128_u64[0] = (unsigned __int64)v42;
    v10 = (char *)ptr + 40 * (unsigned int)v41;
    do
    {
      v11 = *((_QWORD *)v9 + 4);
      v12 = *((_QWORD *)v9 + 3);
      v13 = 1;
      v14 = &v43;
      v15 = *(_QWORD *)v9;
      v16 = *((_QWORD *)v9 + 1);
      v45.m128i_i64[0] = (__int64)&off_4A6D478;
      v17 = (unsigned int)qword_4AE2DA8;
      v18 = *((_DWORD *)v9 + 4);
      v44.m128i_i64[1] = v11;
      v44.m128i_i64[0] = v12;
      v43.m128i_i64[0] = v15;
      v19 = qword_4AE2DA8;
      v43.m128i_i64[1] = v16;
      v45.m128i_i8[12] = 1;
      v45.m128i_i32[2] = v18;
      if ( HIDWORD(qword_4AE2DA8) < (unsigned __int64)(unsigned int)qword_4AE2DA8 + 1 )
      {
        if ( &v43 < ::ptr || &v43 >= (__m128i *)((char *)::ptr + 48 * (unsigned int)qword_4AE2DA8) )
        {
          v36 = -1;
          v35 = 0;
        }
        else
        {
          v35 = 1;
          v36 = 0xAAAAAAAAAAAAAAABLL * (((char *)&v43 - (_BYTE *)::ptr) >> 4);
        }
        v34 = v18;
        v24 = sub_25D5F70(&qword_4AE2DB0[-2], qword_4AE2DB0, (unsigned int)qword_4AE2DA8 + 1LL, 48, &v39);
        v25 = (__int64 *)::ptr;
        v18 = v34;
        v26 = (char *)v24;
        v27 = (const __m128i *)::ptr;
        v28 = (const __m128i *)((char *)::ptr + 48 * (unsigned int)qword_4AE2DA8);
        if ( ::ptr != v28 )
        {
          do
          {
            v29 = _mm_loadu_si128(v27);
            v30 = v27[2].m128i_i32[2];
            v27 += 3;
            v24 += 48;
            *(__m128i *)(v24 - 48) = v29;
            v31 = _mm_loadu_si128(v27 - 2);
            *(_DWORD *)(v24 - 8) = v30;
            LOBYTE(v30) = v27[-1].m128i_i8[12];
            *(__m128i *)(v24 - 32) = v31;
            *(_BYTE *)(v24 - 4) = v30;
            *(_QWORD *)(v24 - 16) = &off_4A6D478;
          }
          while ( v28 != v27 );
        }
        v32 = v39;
        if ( v25 != qword_4AE2DB0 )
        {
          v38 = v39;
          v37 = v26;
          v34 = v18;
          free(v25);
          v32 = v38;
          v26 = v37;
          v18 = v34;
        }
        v17 = (unsigned int)qword_4AE2DA8;
        ::ptr = v26;
        HIDWORD(qword_4AE2DA8) = v32;
        v19 = qword_4AE2DA8;
        if ( v35 )
        {
          v14 = (__m128i *)&v26[48 * v36];
          v18 = v14[2].m128i_i32[2];
          v13 = v14[2].m128i_i8[12];
        }
        else
        {
          v13 = 1;
          v14 = &v43;
        }
      }
      v9 += 40;
      v20 = (__m128i *)((char *)::ptr + 48 * v17);
      v21 = *((_QWORD *)&xmmword_4AE2D90 + 1);
      *v20 = _mm_loadu_si128(v14);
      v22 = _mm_loadu_si128(v14 + 1);
      v20[2].m128i_i8[12] = v13;
      v20[2].m128i_i32[2] = v18;
      v20[2].m128i_i64[0] = (__int64)&off_4A6D478;
      v20[1] = v22;
      LODWORD(qword_4AE2DA8) = v19 + 1;
      sub_259ED10(v21, v15, v16);
    }
    while ( v10 != v9 );
    v0 = (_BYTE *)v33.m128_u64[0];
  }
  sub_259EC40(&qword_4AE2D00);
  if ( ptr != v0 )
    free(ptr);
  return __cxa_atexit(sub_249E6C0, &qword_4AE2D00, &off_47CFE00);
}

