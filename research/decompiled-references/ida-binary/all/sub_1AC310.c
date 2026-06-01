_QWORD *__fastcall sub_1AC310(
        _QWORD *a1,
        const char *a2,
        unsigned int a3,
        unsigned __int64 a4,
        unsigned int a5,
        _BYTE *a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10,
        double a11,
        double a12,
        __m128 a13,
        __m128 a14)
{
  size_t v17; // rax
  size_t v18; // r15
  size_t v19; // rbx
  const char *v20; // rax
  int *v21; // rax
  __int64 v22; // rcx
  __int64 (__fastcall ***v23)(); // rdi
  unsigned int v24; // eax
  double v25; // xmm4_8
  double v26; // xmm5_8
  const char *v27; // rsi
  char v28; // al
  __int64 v29; // rdx
  __m128i *v30; // rbp
  __int64 v31; // rdi
  bool v35; // [rsp+Fh] [rbp-171h] BYREF
  __int64 v36; // [rsp+10h] [rbp-170h] BYREF
  void *v37; // [rsp+18h] [rbp-168h] BYREF
  __int128 v38; // [rsp+20h] [rbp-160h]
  _QWORD v39[2]; // [rsp+38h] [rbp-148h] BYREF
  __int16 v40; // [rsp+48h] [rbp-138h]
  __int64 (__fastcall **v41)(); // [rsp+58h] [rbp-128h] BYREF
  __int64 v42; // [rsp+60h] [rbp-120h]
  __int128 v43; // [rsp+68h] [rbp-118h]
  __int64 v44; // [rsp+78h] [rbp-108h]
  const char *v45; // [rsp+80h] [rbp-100h]
  int v46; // [rsp+88h] [rbp-F8h]
  __m128i v47; // [rsp+90h] [rbp-F0h] BYREF
  int v48; // [rsp+A0h] [rbp-E0h]
  char v49; // [rsp+A8h] [rbp-D8h] BYREF
  char v50; // [rsp+F0h] [rbp-90h] BYREF
  int v51; // [rsp+108h] [rbp-78h] BYREF
  _QWORD v52[14]; // [rsp+110h] [rbp-70h] BYREF

  v52[6] = __readfsqword(0x28u);
  v38 = 0;
  v37 = nullptr;
  if ( !a2
    || (v17 = strlen(a2),
        v18 = v17 + 1,
        v19 = v17,
        v37 = (void *)qvector_reserve(&v37, 0, v17 + 1, 1),
        *(_QWORD *)&v38 = v18,
        memmove(v37, a2, v19),
        *((_BYTE *)v37 + v19) = 0,
        v20 = (const char *)v37,
        !(_QWORD)v38) )
  {
    v20 = &s1;
  }
  v45 = v20;
  v43 = -1;
  v41 = (__int64 (__fastcall **)())&stru_86F6A0;
  v21 = (int *)&v49;
  v42 = 0x3FF000004LL;
  v44 = 0;
  v46 = 4;
  v48 = -1;
  v47 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_85CAE0), (__m128i)(unsigned __int64)off_85CA80);
  do
  {
    *(_QWORD *)v21 = 0;
    v21 += 6;
    *((_OWORD *)v21 - 1) = 0;
  }
  while ( &v51 != v21 );
  v51 = 0;
  v22 = ((HIDWORD(v42) >> 19) & 0x3F) - 1;
  if ( ((HIDWORD(v42) >> 19) & 0x3F) != 0 )
  {
    if ( BYTE3(v42) != 0xFF )
    {
      if ( !under_debugger )
        interr(3449, 0x3FF000004LL, HIDWORD(v42), v22, 0.0);
      BUG();
    }
    BYTE3(v42) = ((HIDWORD(v42) >> 19) & 0x3F) - 1;
    HIDWORD(v42) &= 0xFE07FFFF;
  }
  v41 = venum_chooser_t___vtable;
  sub_1AB7A0((__int64)v52, a4, a5, v22);
  v48 = 63;
  v23 = &v41;
  v24 = sub_1ABEB0((__int64)&v41, a6, &v35, a3, a4);
  if ( !v24 && v35 )
  {
    v23 = (__int64 (__fastcall ***)())&s1;
    if ( (_QWORD)v38 )
    {
      v23 = (__int64 (__fastcall ***)())v37;
      v24 = sub_1ABF60((__int64)v37, a4, a5, a6, 0.0, (__m128)(unsigned __int64)off_85CA80, a9, a10, v25, v26, a13, a14);
    }
    else
    {
      v24 = sub_1ABF60((__int64)&s1, a4, a5, a6, 0.0, (__m128)(unsigned __int64)off_85CA80, a9, a10, v25, v26, a13, a14);
    }
  }
  v36 = 0;
  v40 = 257;
  v39[1] = v24;
  v27 = (_BYTE *)(&word_3C + 1);
  v39[0] = get_idati(v23);
  v28 = create_tinfo(&v36, 61, 189, v39);
  *a1 = 0;
  if ( v28 )
  {
    v27 = (const char *)&v36;
    copy_tinfo_t(a1, &v36, v29);
  }
  clear_tinfo_t(&v36);
  v41 = venum_chooser_t___vtable;
  if ( v52[0] )
  {
    v52[1] = 0;
    qfree(v52[0], v27, 0.0);
  }
  v41 = (__int64 (__fastcall **)())&stru_86F6A0;
  v30 = (__m128i *)&v50;
  do
  {
    v31 = v30->m128i_i64[0];
    if ( v30->m128i_i64[0] )
    {
      v30->m128i_i64[1] = 0;
      qfree(v31, v27, 0.0);
    }
    v30 = (__m128i *)((char *)v30 - 24);
  }
  while ( &v47 != v30 );
  if ( v37 )
  {
    *(_QWORD *)&v38 = 0;
    qfree(v37, v27, 0.0);
  }
  return a1;
}
