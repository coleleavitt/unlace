int sub_333290()
{
  void **p_ptr; // rbx
  __m128i v1; // xmm2
  __m128i v2; // xmm3
  __m128i v3; // xmm4
  __m128i v4; // xmm5
  __m128i v5; // xmm6
  __m128i v6; // xmm7
  __m128i *v7; // rax
  __int64 v8; // rdx
  __m128i v9; // xmm1
  __m128i v10; // xmm2
  __m128i v11; // xmm3
  __m128i v12; // xmm4
  __m128i v13; // xmm5
  size_t v14; // rax
  __int64 v15; // r12
  __int64 *v16; // rax
  __int64 v17; // rcx
  unsigned __int64 v18; // rdx
  __m128 v19; // xmm0
  size_t v20; // rax
  __int64 *v21; // rbx
  __int64 v22; // rcx
  __int32 v23; // eax
  __m128i *v24; // rsi
  __int64 v25; // rdx
  __int64 v26; // r11
  __int64 v27; // r15
  int v28; // edi
  unsigned __int64 v29; // rdx
  __m128i *v30; // rcx
  __int32 v31; // eax
  __m128i v32; // xmm2
  unsigned __int64 v34; // r13
  __m128i *v35; // rax
  void *v36; // rdi
  __m128i *v37; // rdx
  const __m128i *v38; // rcx
  const __m128i *v39; // rsi
  __m128i v40; // xmm6
  __int32 v41; // r8d
  __m128i v42; // xmm7
  int v43; // edx
  __int64 *v44; // [rsp+8h] [rbp-200h] BYREF
  char v45; // [rsp+17h] [rbp-1F1h]
  __int64 *v46; // [rsp+18h] [rbp-1F0h]
  void **v47; // [rsp+20h] [rbp-1E8h]
  char *v48; // [rsp+28h] [rbp-1E0h]
  __int64 v49; // [rsp+30h] [rbp-1D8h]
  __int64 v50; // [rsp+38h] [rbp-1D0h]
  __int64 v51; // [rsp+48h] [rbp-1C0h] BYREF
  void *ptr; // [rsp+50h] [rbp-1B8h] BYREF
  __int64 v53; // [rsp+58h] [rbp-1B0h]
  _BYTE v54[160]; // [rsp+60h] [rbp-1A8h] BYREF
  __m128i v55; // [rsp+100h] [rbp-108h] BYREF
  __m128i v56; // [rsp+110h] [rbp-F8h] BYREF
  __m128i v57; // [rsp+120h] [rbp-E8h] BYREF
  __m128i v58; // [rsp+130h] [rbp-D8h] BYREF
  __m128i v59; // [rsp+140h] [rbp-C8h] BYREF
  __m128i v60; // [rsp+150h] [rbp-B8h] BYREF
  __m128i v61; // [rsp+160h] [rbp-A8h] BYREF
  __m128i v62; // [rsp+170h] [rbp-98h] BYREF
  __m128i v63; // [rsp+180h] [rbp-88h] BYREF
  __m128i v64; // [rsp+190h] [rbp-78h] BYREF
  __m128i v65; // [rsp+1A0h] [rbp-68h] BYREF
  __m128i v66; // [rsp+1B0h] [rbp-58h] BYREF
  __int64 v67; // [rsp+1C0h] [rbp-48h]

  v55.m128i_i64[0] = (__int64)"Disabled";
  p_ptr = &ptr;
  v56.m128i_i64[1] = (__int64)"disable debug output";
  v57.m128i_i64[1] = (__int64)"Arguments";
  v59.m128i_i64[0] = (__int64)"print pass arguments to pass to 'opt'";
  v60.m128i_i64[0] = (__int64)"Structure";
  v61.m128i_i64[1] = (__int64)"print pass structure before run()";
  v62.m128i_i64[1] = (__int64)"Executions";
  v64.m128i_i64[0] = (__int64)"print pass name before it is executed";
  v65.m128i_i64[0] = (__int64)"Details";
  v66.m128i_i64[1] = (__int64)"print pass details when it is executed";
  v55.m128i_i64[1] = 8;
  v56.m128i_i32[0] = 0;
  v57.m128i_i64[0] = 20;
  v58.m128i_i64[0] = 9;
  v58.m128i_i32[2] = 1;
  v59.m128i_i64[1] = 37;
  v60.m128i_i64[1] = 9;
  v61.m128i_i32[0] = 2;
  v62.m128i_i64[0] = 33;
  v63.m128i_i64[0] = 10;
  v63.m128i_i32[2] = 3;
  v64.m128i_i64[1] = 37;
  v65.m128i_i64[1] = 7;
  v66.m128i_i32[0] = 4;
  v67 = 38;
  ptr = v54;
  v53 = 0x400000000LL;
  sub_2237220(&ptr, v54, 5, 40);
  v1 = _mm_load_si128(&v56);
  v2 = _mm_load_si128(&v57);
  v3 = _mm_load_si128(&v58);
  v4 = _mm_load_si128(&v59);
  v5 = _mm_load_si128(&v60);
  v6 = _mm_load_si128(&v61);
  v7 = (__m128i *)((char *)ptr + 40 * (unsigned int)v53);
  v8 = v67;
  *v7 = _mm_load_si128(&v55);
  v9 = _mm_load_si128(&v62);
  v7[12].m128i_i64[0] = v8;
  v7[1] = v1;
  v10 = _mm_load_si128(&v63);
  v7[2] = v2;
  v11 = _mm_load_si128(&v64);
  v7[3] = v3;
  v12 = _mm_load_si128(&v65);
  v7[4] = v4;
  v13 = _mm_load_si128(&v66);
  v7[5] = v5;
  v7[6] = v6;
  v7[7] = v9;
  v7[8] = v10;
  v7[9] = v11;
  v7[10] = v12;
  v7[11] = v13;
  LODWORD(v53) = v53 + 5;
  v14 = j__strlen("Print legacy PassManager debugging information");
  qword_2CFD4A0 = (__int64)&unk_2CFD4B0;
  qword_2CFD470 = 0;
  v15 = v14;
  qword_2CFD478 = 0;
  qword_2CFD480 = 0;
  qword_2CFD460 = (__int64)&off_2C758B0;
  qword_2CFD468 = (unsigned int)qword_2CFD468 & 0x80000000;
  qword_2CFD4A8 = 0x100000000LL;
  qword_2CFD4B8 = (__int64)&unk_2CFD4D0;
  qword_2CFD488 = 0;
  qword_2CFD490 = 0;
  qword_2CFD498 = 0;
  qword_2CFD4C0 = 1;
  dword_2CFD4C8 = 0;
  byte_2CFD4CC = 1;
  v16 = (__int64 *)sub_2210FF0("Print legacy PassManager debugging information");
  v17 = (unsigned int)qword_2CFD4A8;
  v18 = (unsigned int)qword_2CFD4A8 + 1LL;
  if ( v18 > HIDWORD(qword_2CFD4A8) )
  {
    v44 = v16;
    sub_2237220((char *)&unk_2CFD4B0 - 16, &unk_2CFD4B0, v18, 8);
    v17 = (unsigned int)qword_2CFD4A8;
    v16 = v44;
  }
  *(_QWORD *)(qword_2CFD4A0 + 8 * v17) = v16;
  qword_2CFD460 = (__int64)&off_2C72378;
  v44 = &qword_2CFD460;
  qword_2CFD508 = 0x800000000LL;
  LODWORD(qword_2CFD4A8) = qword_2CFD4A8 + 1;
  xmmword_2CFD4F0 = (__int128)_mm_loadh_ps((const double *)&v44);
  v44 = (__int64 *)nullsub_1296;
  dword_2CFD4D8 = 0;
  dword_2CFD4E8 = 0;
  v19 = _mm_loadh_ps((const double *)&v44);
  byte_2CFD4EC = 0;
  xmmword_2CFD6A0 = (__int128)v19;
  qword_2CFD4E0 = (__int64)&off_2C72308;
  ::ptr = &unk_2CFD510;
  v20 = j__strlen("debug-pass");
  sub_2217250(&qword_2CFD460, "debug-pass", v20);
  qword_2CFD488 = v15;
  v46 = &v51;
  BYTE2(qword_2CFD468) = BYTE2(qword_2CFD468) & 0x9F | 0x20;
  qword_2CFD480 = (__int64)"Print legacy PassManager debugging information";
  v44 = (__int64 *)((char *)ptr + 40 * (unsigned int)v53);
  if ( ptr != v44 )
  {
    v47 = &ptr;
    v21 = (__int64 *)ptr;
    do
    {
      v22 = v21[3];
      v23 = *((_DWORD *)v21 + 4);
      v57.m128i_i64[0] = (__int64)&off_2C72308;
      v24 = &v55;
      v25 = v21[4];
      v26 = *v21;
      v57.m128i_i8[12] = 1;
      v56.m128i_i64[0] = v22;
      v27 = v21[1];
      v56.m128i_i64[1] = v25;
      v57.m128i_i32[2] = v23;
      v28 = qword_2CFD508;
      v29 = (unsigned int)qword_2CFD508 + 1LL;
      v55.m128i_i64[0] = v26;
      v55.m128i_i64[1] = v27;
      v30 = (__m128i *)((char *)::ptr + 48 * (unsigned int)qword_2CFD508);
      if ( v29 > HIDWORD(qword_2CFD508) )
      {
        v34 = -1;
        v45 = 0;
        if ( ::ptr <= &v55 && v30 > &v55 )
        {
          v45 = 1;
          v34 = 0xAAAAAAAAAAAAAAABLL * (((char *)&v55 - (_BYTE *)::ptr) >> 4);
        }
        v48 = (char *)v26;
        v35 = (__m128i *)sub_2237400((char *)&unk_2CFD510 - 16, &unk_2CFD510, v29, 48, v46);
        v26 = (__int64)v48;
        v36 = ::ptr;
        v37 = v35;
        v38 = (const __m128i *)::ptr;
        v39 = (const __m128i *)((char *)::ptr + 48 * (unsigned int)qword_2CFD508);
        if ( ::ptr != v39 )
        {
          do
          {
            v40 = _mm_loadu_si128(v38);
            v41 = v38[2].m128i_i32[2];
            v38 += 3;
            v37 += 3;
            v37[-3] = v40;
            v42 = _mm_loadu_si128(v38 - 2);
            v37[-1].m128i_i32[2] = v41;
            LOBYTE(v41) = v38[-1].m128i_i8[12];
            v37[-2] = v42;
            v37[-1].m128i_i8[12] = v41;
            v37[-1].m128i_i64[0] = (__int64)&off_2C72308;
          }
          while ( v39 != v38 );
        }
        v43 = v51;
        if ( v36 != &unk_2CFD510 )
        {
          v50 = v26;
          v49 = v51;
          v48 = (char *)v35;
          free(v36);
          v26 = v50;
          v43 = v49;
          v35 = (__m128i *)v48;
        }
        HIDWORD(qword_2CFD508) = v43;
        v24 = &v55;
        ::ptr = v35;
        v28 = qword_2CFD508;
        v30 = &v35[3 * (unsigned int)qword_2CFD508];
        if ( v45 )
          v24 = &v35[3 * v34];
      }
      v31 = v24[2].m128i_i32[2];
      v21 += 5;
      *v30 = _mm_loadu_si128(v24);
      v32 = _mm_loadu_si128(v24 + 1);
      v30[2].m128i_i32[2] = v31;
      LOBYTE(v31) = v24[2].m128i_i8[12];
      v30[2].m128i_i64[0] = (__int64)&off_2C72308;
      v30[2].m128i_i8[12] = v31;
      v30[1] = v32;
      LODWORD(qword_2CFD508) = v28 + 1;
      sub_2216D40(*((_QWORD *)&xmmword_2CFD4F0 + 1), v26, v27);
    }
    while ( v44 != v21 );
    p_ptr = v47;
  }
  sub_2218140(&qword_2CFD460);
  if ( ptr != p_ptr + 2 )
    free(ptr);
  return __cxa_atexit(sub_2094700, &qword_2CFD460, &off_2B25620);
}
