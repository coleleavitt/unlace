__int64 __fastcall sub_3EC200(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int8 (__fastcall *a4)(__int64, __int64),
        __int64 a5,
        __int64 a6,
        double a7,
        double a8,
        double a9,
        double a10,
        double a11,
        __m128 a12,
        __m128 a13,
        __m128 a14)
{
  bool v14; // zf
  __m128 v15; // xmm1
  __int64 v16; // r15
  char v17; // bl
  __m128i *v20; // rbx
  __m128i *v21; // rbp
  unsigned __int64 v22; // rax
  __int64 v23; // rdx
  int *v24; // rbx
  int *v25; // r13
  double v26; // xmm0_8
  __int64 v27; // rdx
  __m128 si128; // xmm4
  const char *v29; // r15
  const char *v30; // rsi
  __int64 v31; // rax
  __int64 v32; // r14
  __int64 v33; // rax
  __int64 v34; // r13
  __int64 v35; // rdi
  char v37; // al
  __m128 v38; // [rsp+0h] [rbp-168h] BYREF
  __int64 v39; // [rsp+10h] [rbp-158h]
  __int64 v40; // [rsp+18h] [rbp-150h]
  __int64 v41; // [rsp+20h] [rbp-148h] BYREF
  char v42; // [rsp+28h] [rbp-140h]
  __m128i *v43; // [rsp+30h] [rbp-138h] BYREF
  __int128 v44; // [rsp+38h] [rbp-130h]
  __int64 (__fastcall **v45)(); // [rsp+50h] [rbp-118h] BYREF
  __int64 v46; // [rsp+58h] [rbp-110h]
  __int128 v47; // [rsp+60h] [rbp-108h]
  __int64 v48; // [rsp+70h] [rbp-F8h]
  const char *v49; // [rsp+78h] [rbp-F0h]
  int v50; // [rsp+80h] [rbp-E8h]
  __m128i v51; // [rsp+88h] [rbp-E0h]
  int v52; // [rsp+98h] [rbp-D0h]
  _BYTE v53[96]; // [rsp+A0h] [rbp-C8h] BYREF
  int v54; // [rsp+100h] [rbp-68h] BYREF
  __m128 v55; // [rsp+108h] [rbp-60h]
  __int64 v56; // [rsp+118h] [rbp-50h]
  __int16 v57; // [rsp+120h] [rbp-48h]
  unsigned __int64 v58; // [rsp+128h] [rbp-40h]

  v14 = *(_QWORD *)(a1 + 40) == 0;
  v40 = a1;
  v39 = a3;
  v58 = __readfsqword(0x28u);
  v15 = (__m128)_mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_86A460), (__m128i)(unsigned __int64)&v43);
  v38 = v15;
  if ( v14 )
    return -1;
  v16 = *(_QWORD *)(a1 + 24);
  v17 = a2;
  v43 = nullptr;
  v44 = 0;
  if ( v16 != a1 + 8 )
  {
    do
    {
      a2 = *(_QWORD *)(v16 + 32);
      sub_3EBB40(&v43, a2, v17, a4, a5, 0);
      v16 = std::_Rb_tree_increment(v16);
    }
    while ( v16 != a1 + 8 );
    v20 = v43;
    v21 = &v43[v44];
    if ( v43 != v21 )
    {
      v22 = (16 * (__int64)v44) >> 4;
      v23 = -2;
      if ( v22 )
      {
        _BitScanReverse64(&v22, v22);
        v23 = 2LL * (int)v22;
      }
      sub_3EB850(v43, (unsigned __int64 *)&v43[v44], v23);
      a2 = (__int64)v21;
      sub_3EB460(v20, v21);
    }
  }
  v48 = 0;
  v46 = 0x20003FF000004LL;
  v24 = &v54;
  v47 = -1;
  v25 = (int *)v53;
  v49 = (const char *)v39;
  v45 = (__int64 (__fastcall **)())&stru_86F6A0;
  v50 = 4;
  v52 = -1;
  v51 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_86A468), (__m128i)(unsigned __int64)&off_86A440);
  v26 = 0.0;
  do
  {
    *(_QWORD *)v25 = 0;
    v25 += 6;
    *((_OWORD *)v25 - 1) = 0;
  }
  while ( v25 != &v54 );
  v54 = 0;
  v27 = HIDWORD(v46);
  if ( ((HIDWORD(v46) >> 19) & 0x3F) != 0 )
  {
    if ( BYTE3(v46) != 0xFF )
    {
      if ( !under_debugger )
        interr(3449, a2, HIDWORD(v46), ((HIDWORD(v46) >> 19) & 0x3F) - 1, 0.0);
      BUG();
    }
    v27 = HIDWORD(v46) & 0xFE07FFFF;
    BYTE3(v46) = ((HIDWORD(v46) >> 19) & 0x3F) - 1;
    HIDWORD(v46) &= 0xFE07FFFF;
  }
  si128 = (__m128)_mm_load_si128((const __m128i *)&v38);
  v45 = xref_chooser_t___vtable;
  v52 = 55;
  v54 = 2;
  v56 = -1;
  v57 = 0;
  v55 = si128;
  if ( !(_QWORD)v44 )
  {
    v30 = v49;
    sub_169630(
      (int)"There are no %s",
      (__int64)v49,
      v27,
      0,
      a5,
      a6,
      (__m128)0LL,
      v15,
      (__m128)(unsigned __int64)&v43,
      (__m128)(unsigned __int64)&off_86A440,
      si128,
      a12,
      a13,
      a14,
      v38.m128_i8[0]);
LABEL_27:
    v34 = -1;
    goto LABEL_19;
  }
  v29 = *(const char **)(*(_QWORD *)(v40 + 24) + 32LL);
  v30 = v29;
  v31 = sub_3EBDF0((__int64)&v45);
  if ( v31 < 0 || (unsigned __int64)v31 >= *(_QWORD *)(v55.m128_u64[1] + 8) )
    goto LABEL_27;
  v32 = *(_QWORD *)v55.m128_u64[1] + 16 * v31;
  if ( v31 )
  {
    v37 = *(_BYTE *)(v32 + 9);
    v30 = (const char *)&v41;
    v41 = *(_QWORD *)v32;
    v42 = v37;
    set_xrefpos(v29, &v41, 0.0);
  }
  else
  {
    v33 = ea2node(v29);
    v30 = (_BYTE *)(&off_18 + 3);
    netnode_supdel(v33, 27, 83);
  }
  v34 = *(_QWORD *)v32;
LABEL_19:
  v45 = (__int64 (__fastcall **)())&stru_86F6A0;
  v55.m128_u64[0] = (unsigned __int64)&xref_chooser_t___vtable_at__184;
  do
  {
    v35 = *((_QWORD *)v24 - 3);
    v24 -= 6;
    if ( v35 )
    {
      *((_QWORD *)v24 + 1) = 0;
      v26 = qfree(v35, v30, v26);
    }
  }
  while ( v24 != (int *)v53 );
  if ( v43 )
  {
    *(_QWORD *)&v44 = 0;
    qfree(v43, v30, v26);
  }
  return v34;
}
