_QWORD *__fastcall sub_1564D0(_QWORD *a1, const char *a2, int a3, unsigned __int64 a4, int a5, _BYTE *a6)
{
  size_t v8; // rax
  size_t v9; // r15
  size_t v10; // rbx
  const char *v11; // rax
  int *v12; // rax
  unsigned int v13; // eax
  char tinfo; // al
  __m128i *v15; // rbp
  bool v19; // [rsp+Fh] [rbp-171h] BYREF
  __int64 v20; // [rsp+10h] [rbp-170h]
  void *v21; // [rsp+18h] [rbp-168h]
  __int128 v22; // [rsp+20h] [rbp-160h]
  __int64 idati; // [rsp+38h] [rbp-148h]
  __int64 v24; // [rsp+40h] [rbp-140h]
  __int16 v25; // [rsp+48h] [rbp-138h]
  __int64 (__fastcall **v26)(); // [rsp+58h] [rbp-128h] BYREF
  __int64 v27; // [rsp+60h] [rbp-120h]
  __int128 v28; // [rsp+68h] [rbp-118h]
  __int64 v29; // [rsp+78h] [rbp-108h]
  const char *v30; // [rsp+80h] [rbp-100h]
  int v31; // [rsp+88h] [rbp-F8h]
  __m128i v32; // [rsp+90h] [rbp-F0h] BYREF
  int v33; // [rsp+A0h] [rbp-E0h]
  char v34; // [rsp+A8h] [rbp-D8h] BYREF
  char v35; // [rsp+F0h] [rbp-90h] BYREF
  int v36; // [rsp+108h] [rbp-78h] BYREF
  _QWORD v37[14]; // [rsp+110h] [rbp-70h] BYREF

  v37[6] = __readfsqword(0x28u);
  v22 = 0;
  v21 = nullptr;
  if ( !a2
    || (v8 = strlen(a2),
        v9 = v8 + 1,
        v10 = v8,
        v21 = (void *)qvector_reserve(),
        *(_QWORD *)&v22 = v9,
        memmove(v21, a2, v10),
        *((_BYTE *)v21 + v10) = 0,
        v11 = (const char *)v21,
        !(_QWORD)v22) )
  {
    v11 = s1;
  }
  v30 = v11;
  v28 = -1;
  v26 = (__int64 (__fastcall **)())&stru_235898;
  v12 = (int *)&v34;
  v27 = 0x3FF000004LL;
  v29 = 0;
  v31 = 4;
  v33 = -1;
  v32 = _mm_unpacklo_epi64(_mm_loadl_epi64(&off_234520), (__m128i)(unsigned __int64)off_2344C0);
  do
  {
    *(_QWORD *)v12 = 0;
    v12 += 6;
    *((_OWORD *)v12 - 1) = 0;
  }
  while ( &v36 != v12 );
  v36 = 0;
  if ( ((HIDWORD(v27) >> 19) & 0x3F) != 0 )
  {
    if ( BYTE3(v27) != 0xFF )
    {
      if ( !under_debugger )
        interr();
      BUG();
    }
    BYTE3(v27) = ((HIDWORD(v27) >> 19) & 0x3F) - 1;
    HIDWORD(v27) &= 0xFE07FFFF;
  }
  v26 = off_234280;
  sub_155960((__int64)v37, a4, a5);
  v33 = 63;
  v13 = sub_156070((__int64)&v26, a6, &v19, a3, a4);
  if ( !v13 && v19 )
  {
    if ( (_QWORD)v22 )
      v13 = sub_156120((__int64)v21, a4, a5, a6);
    else
      v13 = sub_156120((__int64)s1, a4, a5, a6);
  }
  v20 = 0;
  v25 = 257;
  v24 = v13;
  idati = get_idati();
  tinfo = create_tinfo();
  *a1 = 0;
  if ( tinfo )
    copy_tinfo_t();
  clear_tinfo_t();
  v26 = off_234280;
  if ( v37[0] )
  {
    v37[1] = 0;
    qfree();
  }
  v26 = (__int64 (__fastcall **)())&stru_235898;
  v15 = (__m128i *)&v35;
  do
  {
    if ( v15->m128i_i64[0] )
    {
      v15->m128i_i64[1] = 0;
      qfree();
    }
    v15 = (__m128i *)((char *)v15 - 24);
  }
  while ( &v32 != v15 );
  if ( v21 )
  {
    *(_QWORD *)&v22 = 0;
    qfree();
  }
  return a1;
}

