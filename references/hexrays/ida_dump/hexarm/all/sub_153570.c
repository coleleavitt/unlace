__int64 __fastcall sub_153570(const __m128i *a1, __int64 a2, __int64 a3)
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
  _BYTE *v18; // r12
  __m128i v19; // xmm0
  char *v20; // rax
  __m128i v21; // xmm0
  char *v22; // r12
  __int64 v23; // rax
  __int64 v24; // rbx
  __int64 v25; // rdi
  __int64 v26; // rdi
  __int64 v27; // [rsp+8h] [rbp-180h]
  __m128i v28; // [rsp+10h] [rbp-178h] BYREF
  unsigned __int8 *v29; // [rsp+20h] [rbp-168h]
  __int8 *v30; // [rsp+28h] [rbp-160h]
  __m128i v31; // [rsp+30h] [rbp-158h] BYREF
  char *v32; // [rsp+40h] [rbp-148h]
  char *v33; // [rsp+48h] [rbp-140h]
  _QWORD v34[2]; // [rsp+50h] [rbp-138h] BYREF
  __m128i v35; // [rsp+60h] [rbp-128h] BYREF
  _BYTE *v36; // [rsp+70h] [rbp-118h]
  __m128i v37; // [rsp+78h] [rbp-110h] BYREF
  int v38; // [rsp+88h] [rbp-100h] BYREF
  __int64 v39; // [rsp+90h] [rbp-F8h]
  int v40; // [rsp+98h] [rbp-F0h]
  _BYTE v41[4]; // [rsp+A0h] [rbp-E8h] BYREF
  unsigned int v42; // [rsp+A4h] [rbp-E4h]
  __int64 v43; // [rsp+B0h] [rbp-D8h]
  char v44[8]; // [rsp+B8h] [rbp-D0h] BYREF
  _BYTE *v45; // [rsp+C0h] [rbp-C8h]
  __m128i v46; // [rsp+C8h] [rbp-C0h]
  char v47[16]; // [rsp+D8h] [rbp-B0h] BYREF
  int v48; // [rsp+E8h] [rbp-A0h]
  _BYTE v49[16]; // [rsp+F0h] [rbp-98h] BYREF
  __int64 v50; // [rsp+100h] [rbp-88h]
  char v51[8]; // [rsp+108h] [rbp-80h] BYREF
  char *v52; // [rsp+110h] [rbp-78h]
  __m128i v53; // [rsp+118h] [rbp-70h]
  char v54[16]; // [rsp+128h] [rbp-60h] BYREF
  int v55; // [rsp+138h] [rbp-50h]
  char v56; // [rsp+140h] [rbp-48h] BYREF
  unsigned __int64 v57; // [rsp+148h] [rbp-40h]

  v4 = *(_QWORD *)(a3 + 40);
  v57 = __readfsqword(0x28u);
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
  v27 = *(_QWORD *)(a1[30].m128i_i64[0] + 112);
  if ( !(unsigned __int8)sub_12E4C0(v27, a1, a2, v4 + 32, a2, v6 + 32, 0) )
    return 0;
  v8 = *(_DWORD *)(v4 + 36);
  v9 = 8 * v8;
  if ( *(_BYTE *)(v4 + 48) == 4
    && (v12 = *(_QWORD *)(v4 + 56), *(_DWORD *)v12 == 13)
    && (v28.m128i_i32[0] = 8 * v8,
        v29 = (unsigned __int8 *)v34,
        v13 = sub_11F7C0((char *)(v12 + 32), v34, 0),
        v9 = v28.m128i_i32[0],
        v13)
    && v28.m128i_i32[0] == v34[0] )
  {
    v14 = *(_QWORD *)(v4 + 56);
    v4 = v6;
    v15 = v14 + 48;
  }
  else
  {
    if ( *(_BYTE *)(v6 + 48) != 4 )
      return 0;
    v26 = *(_QWORD *)(v6 + 56);
    if ( *(_DWORD *)v26 != 13 )
      return 0;
    v28.m128i_i32[0] = v9;
    v29 = (unsigned __int8 *)v34;
    if ( !(unsigned __int8)sub_11F7C0((char *)(v26 + 32), v34, 0) || v28.m128i_i32[0] != v34[0] )
      return 0;
    v15 = *(_QWORD *)(v6 + 56) + 48LL;
  }
  v31.m128i_i64[0] = v4 + 48;
  v10 = sub_12E4C0(v27, a1, a2, v4 + 48, a2, v15, 0);
  if ( !(_BYTE)v10 )
    return 0;
  v32 = &v56;
  v16 = v41;
  do
  {
    si128 = _mm_load_si128((const __m128i *)&xmmword_41F8F0);
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
  while ( v32 != v16 );
  v28.m128i_i64[0] = (__int64)v49;
  sub_123480((__int64)v29, v7);
  v36 = nullptr;
  v38 = 0;
  v39 = 0;
  v40 = 0;
  v35 = _mm_load_si128((const __m128i *)&xmmword_41F8F0);
  v37 = 0;
  sub_124BC0((__int64)v41, v29);
  v30 = &v35.m128i_i8[8];
  v43 = v35.m128i_i64[0];
  v33 = v44;
  copy_tinfo_t(v44, &v35.m128i_u64[1]);
  v18 = v36;
  v36 = nullptr;
  v19 = _mm_loadu_si128(&v37);
  v37 = 0;
  if ( v45 )
  {
    v28 = v19;
    v46.m128i_i64[0] = 0;
    qfree(v45);
    v19 = _mm_load_si128(&v28);
  }
  v45 = v18;
  v46 = v19;
  copy_argloc(v47, &v38);
  v48 = v40;
  cleanup_argloc(&v38);
  if ( v36 )
  {
    v37.m128i_i64[0] = 0;
    qfree(v36);
  }
  clear_tinfo_t(v30);
  sub_11C7E0((__int64)v29);
  v28.m128i_i64[0] = (__int64)v49;
  sub_32C5A0(v29, v27, v42);
  copy_tinfo_t(v33, v29);
  clear_tinfo_t(v29);
  v28.m128i_i64[0] = (__int64)v49;
  sub_123480((__int64)v29, (unsigned __int8 *)v31.m128i_i64[0]);
  v36 = nullptr;
  v38 = 0;
  v39 = 0;
  v40 = 0;
  v28.m128i_i64[0] = (__int64)v49;
  v35 = _mm_load_si128((const __m128i *)&xmmword_41F8F0);
  v37 = 0;
  sub_124BC0((__int64)v49, v29);
  v50 = v35.m128i_i64[0];
  copy_tinfo_t(v51, v30);
  v20 = v36;
  v36 = nullptr;
  v21 = _mm_loadu_si128(&v37);
  v37 = 0;
  if ( v52 )
  {
    v33 = v20;
    v31 = v21;
    v53.m128i_i64[0] = 0;
    qfree(v52);
    v20 = v33;
    v21 = _mm_load_si128(&v31);
  }
  v52 = v20;
  v53 = v21;
  copy_argloc(v54, &v38);
  v55 = v40;
  cleanup_argloc(&v38);
  if ( v36 )
  {
    v37.m128i_i64[0] = 0;
    qfree(v36);
  }
  clear_tinfo_t(v30);
  v22 = (char *)v29;
  sub_11C7E0((__int64)v29);
  v34[0] = 50;
  copy_tinfo_t(v51, v22);
  clear_tinfo_t(v22);
  v23 = sub_1D6EA0(a1[4].m128i_i64[0], *(_QWORD *)(a3 + 24), *(_DWORD *)v4 == 23, v41);
  *(_DWORD *)a3 = 4;
  v34[1] = v23;
  LODWORD(v34[0]) = 4;
  HIDWORD(v34[0]) = v42;
  sub_11C450((char *)(a3 + 32), v22);
  sub_11C7E0(a3 + 48);
  sub_11C7E0((__int64)v22);
  v24 = (__int64)v32;
  do
  {
    v24 -= 80;
    cleanup_argloc(v24 + 56);
    v25 = *(_QWORD *)(v24 + 32);
    if ( v25 )
    {
      *(_QWORD *)(v24 + 40) = 0;
      qfree(v25);
    }
    clear_tinfo_t(v24 + 24);
    sub_11C7E0(v24);
  }
  while ( (_BYTE *)v24 != v41 );
  return v10;
}
