__int64 __fastcall sub_153B30(const __m128i *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbp
  __int64 v6; // r15
  unsigned __int8 *v7; // r12
  int v8; // eax
  int v9; // ecx
  unsigned int v10; // r15d
  __int64 v12; // rdi
  char v13; // al
  __int64 v14; // r9
  __int64 v15; // r9
  char *v16; // rax
  __m128i si128; // xmm2
  __int64 v18; // r12
  __m128i v19; // xmm0
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rax
  __m128i v23; // xmm0
  char *v24; // r12
  __int64 v25; // rax
  __int64 v26; // rbx
  __int64 v27; // rdi
  __int64 v28; // rdi
  __int64 v29; // [rsp+8h] [rbp-180h]
  __m128i v30; // [rsp+10h] [rbp-178h] BYREF
  unsigned __int8 *v31; // [rsp+20h] [rbp-168h]
  __int8 *v32; // [rsp+28h] [rbp-160h]
  __m128i v33; // [rsp+30h] [rbp-158h] BYREF
  char *v34; // [rsp+40h] [rbp-148h]
  char *v35; // [rsp+48h] [rbp-140h]
  _QWORD v36[2]; // [rsp+50h] [rbp-138h] BYREF
  __m128i v37; // [rsp+60h] [rbp-128h] BYREF
  __int64 v38; // [rsp+70h] [rbp-118h]
  __m128i v39; // [rsp+78h] [rbp-110h] BYREF
  int v40; // [rsp+88h] [rbp-100h]
  __int64 v41; // [rsp+90h] [rbp-F8h]
  int v42; // [rsp+98h] [rbp-F0h]
  _BYTE v43[4]; // [rsp+A0h] [rbp-E8h] BYREF
  unsigned int v44; // [rsp+A4h] [rbp-E4h]
  __int64 v45; // [rsp+B0h] [rbp-D8h]
  char v46; // [rsp+B8h] [rbp-D0h] BYREF
  __int64 v47; // [rsp+C0h] [rbp-C8h]
  __m128i v48; // [rsp+C8h] [rbp-C0h]
  int v49; // [rsp+E8h] [rbp-A0h]
  _BYTE v50[16]; // [rsp+F0h] [rbp-98h] BYREF
  __int64 v51; // [rsp+100h] [rbp-88h]
  __int64 v52; // [rsp+110h] [rbp-78h]
  __m128i v53; // [rsp+118h] [rbp-70h]
  int v54; // [rsp+138h] [rbp-50h]
  char v55; // [rsp+140h] [rbp-48h] BYREF
  unsigned __int64 v56; // [rsp+148h] [rbp-40h]

  v4 = *(_QWORD *)(a3 + 40);
  v56 = __readfsqword(0x28u);
  if ( *(_DWORD *)v4 == 23 )
  {
    v6 = *(_QWORD *)(a3 + 56);
    if ( *(_DWORD *)v6 != 22 )
      return 0;
  }
  else
  {
    if ( *(_DWORD *)v4 != 22 )
      return 0;
    v6 = *(_QWORD *)(a3 + 56);
    if ( *(_DWORD *)v6 != 23 )
      return 0;
  }
  v7 = (unsigned __int8 *)(v4 + 32);
  v29 = *(_QWORD *)(a1[30].m128i_i64[0] + 112);
  if ( !(unsigned __int8)sub_12EA80(v29, a1, a2, v4 + 32, a2, v6 + 32, 0) )
    return 0;
  v8 = *(_DWORD *)(v4 + 36);
  v9 = 8 * v8;
  if ( *(_BYTE *)(v4 + 48) == 4
    && (v12 = *(_QWORD *)(v4 + 56), *(_DWORD *)v12 == 13)
    && (v30.m128i_i32[0] = 8 * v8,
        v31 = (unsigned __int8 *)v36,
        v13 = sub_11FD80((char *)(v12 + 32), v36, 0),
        v9 = v30.m128i_i32[0],
        v13)
    && v30.m128i_i32[0] == v36[0] )
  {
    v14 = *(_QWORD *)(v4 + 56);
    v4 = v6;
    v15 = v14 + 48;
  }
  else
  {
    if ( *(_BYTE *)(v6 + 48) != 4 )
      return 0;
    v28 = *(_QWORD *)(v6 + 56);
    if ( *(_DWORD *)v28 != 13 )
      return 0;
    v30.m128i_i32[0] = v9;
    v31 = (unsigned __int8 *)v36;
    if ( !(unsigned __int8)sub_11FD80((char *)(v28 + 32), v36, 0) || v30.m128i_i32[0] != v36[0] )
      return 0;
    v15 = *(_QWORD *)(v6 + 56) + 48LL;
  }
  v33.m128i_i64[0] = v4 + 48;
  v10 = sub_12EA80(v29, a1, a2, v4 + 48, a2, v15, 0);
  if ( !(_BYTE)v10 )
    return 0;
  v34 = &v55;
  v16 = v43;
  do
  {
    si128 = _mm_load_si128((const __m128i *)&xmmword_4247F0);
    *(_OWORD *)(v16 + 40) = 0;
    *(_WORD *)v16 = 0;
    v16 += 80;
    *((_WORD *)v16 - 39) = 0;
    *((_DWORD *)v16 - 19) = -1;
    *((_QWORD *)v16 - 9) = 0;
    *((__m128i *)v16 - 4) = si128;
    *((_QWORD *)v16 - 6) = 0;
    *((_DWORD *)v16 - 6) = 0;
    *((_QWORD *)v16 - 2) = 0;
    *((_DWORD *)v16 - 2) = 0;
  }
  while ( v34 != v16 );
  v30.m128i_i64[0] = (__int64)v50;
  sub_123A40((__int64)v31, v7, 0, 0);
  v38 = 0;
  v40 = 0;
  v41 = 0;
  v42 = 0;
  v37 = _mm_load_si128((const __m128i *)&xmmword_4247F0);
  v39 = 0;
  sub_125180((__int64)v43, v31);
  v32 = &v37.m128i_i8[8];
  v45 = v37.m128i_i64[0];
  v35 = &v46;
  copy_tinfo_t();
  v18 = v38;
  v38 = 0;
  v19 = _mm_loadu_si128(&v39);
  v39 = 0;
  if ( v47 )
  {
    v30 = v19;
    v48.m128i_i64[0] = 0;
    qfree(v47);
    v19 = _mm_load_si128(&v30);
  }
  v47 = v18;
  v48 = v19;
  copy_argloc();
  v49 = v42;
  cleanup_argloc();
  if ( v38 )
  {
    v39.m128i_i64[0] = 0;
    qfree(v38);
  }
  clear_tinfo_t();
  sub_11CDA0((__int64)v31);
  v30.m128i_i64[0] = (__int64)v50;
  sub_32C270(v31, v29, v44);
  copy_tinfo_t();
  clear_tinfo_t();
  v30.m128i_i64[0] = (__int64)v50;
  sub_123A40((__int64)v31, (unsigned __int8 *)v33.m128i_i64[0], v20, v21);
  v38 = 0;
  v40 = 0;
  v41 = 0;
  v42 = 0;
  v30.m128i_i64[0] = (__int64)v50;
  v37 = _mm_load_si128((const __m128i *)&xmmword_4247F0);
  v39 = 0;
  sub_125180((__int64)v50, v31);
  v51 = v37.m128i_i64[0];
  copy_tinfo_t();
  v22 = v38;
  v38 = 0;
  v23 = _mm_loadu_si128(&v39);
  v39 = 0;
  if ( v52 )
  {
    v35 = (char *)v22;
    v33 = v23;
    v53.m128i_i64[0] = 0;
    qfree(v52);
    v22 = (__int64)v35;
    v23 = _mm_load_si128(&v33);
  }
  v52 = v22;
  v53 = v23;
  copy_argloc();
  v54 = v42;
  cleanup_argloc();
  if ( v38 )
  {
    v39.m128i_i64[0] = 0;
    qfree(v38);
  }
  clear_tinfo_t();
  v24 = (char *)v31;
  sub_11CDA0((__int64)v31);
  v36[0] = 50;
  copy_tinfo_t();
  clear_tinfo_t();
  v25 = sub_1D6BA0(a1[4].m128i_i64[0], *(_QWORD *)(a3 + 24), *(_DWORD *)v4 == 23, v43);
  *(_DWORD *)a3 = 4;
  v36[1] = v25;
  LODWORD(v36[0]) = 4;
  HIDWORD(v36[0]) = v44;
  sub_11CA10((char *)(a3 + 32), v24);
  sub_11CDA0(a3 + 48);
  sub_11CDA0((__int64)v24);
  v26 = (__int64)v34;
  do
  {
    v26 -= 80;
    cleanup_argloc();
    v27 = *(_QWORD *)(v26 + 32);
    if ( v27 )
    {
      *(_QWORD *)(v26 + 40) = 0;
      qfree(v27);
    }
    clear_tinfo_t();
    sub_11CDA0(v26);
  }
  while ( (_BYTE *)v26 != v43 );
  return v10;
}
