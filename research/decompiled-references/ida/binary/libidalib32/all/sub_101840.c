__int64 __fastcall sub_101840(const char *src, unsigned int a2, char a3)
{
  int i; // ebx
  __m128i si128; // xmm0
  __int64 Extent; // rax
  __int64 v8; // rdx
  __int64 v9; // rbx
  unsigned int v10; // eax
  unsigned int v11; // eax
  __int64 v12; // rax
  __int64 v13; // rbp
  char *v14; // rsi
  void *v16; // rsi
  size_t v17; // rax
  size_t v18; // rbp
  size_t v19; // r15
  void *v20; // [rsp+0h] [rbp-158h] BYREF
  __int128 v21; // [rsp+8h] [rbp-150h]
  __int64 (**s)(); // [rsp+20h] [rbp-138h] BYREF
  _BYTE s_8[12]; // [rsp+28h] [rbp-130h] BYREF
  int v24; // [rsp+40h] [rbp-118h]
  __int64 v25; // [rsp+50h] [rbp-108h] BYREF
  __int128 v26; // [rsp+58h] [rbp-100h]
  __int128 v27; // [rsp+68h] [rbp-F0h]
  __int128 v28; // [rsp+78h] [rbp-E0h]
  __int64 v29; // [rsp+88h] [rbp-D0h]
  __m128i v30; // [rsp+90h] [rbp-C8h]
  __m128i v31; // [rsp+A0h] [rbp-B8h]
  __int64 v32; // [rsp+B0h] [rbp-A8h]
  __int128 v33; // [rsp+B8h] [rbp-A0h]
  __int64 v34; // [rsp+C8h] [rbp-90h]
  __int64 v35; // [rsp+D0h] [rbp-88h]
  char v36; // [rsp+D8h] [rbp-80h]
  __int128 v37; // [rsp+DCh] [rbp-7Ch]
  char v38[40]; // [rsp+F0h] [rbp-68h] BYREF
  unsigned __int64 v39; // [rsp+118h] [rbp-40h]

  v39 = __readfsqword(0x28u);
  v20 = nullptr;
  v21 = 0;
  if ( src && *src )
  {
    v17 = strlen(src);
    v18 = v17;
    if ( !v17 )
    {
      if ( !a3 )
        goto LABEL_8;
      goto LABEL_24;
    }
    v19 = v17 + 1;
    v20 = (void *)qvector_reserve();
    *(_QWORD *)&v21 = v19;
    memmove(v20, src, v18);
    *((_BYTE *)v20 + v18) = 0;
  }
  else
  {
    for ( i = 1; ; ++i )
    {
      qsnprintf();
      if ( !sub_101770(v38) )
        break;
    }
    qsnprintf();
    sub_101680((__int64 *)&v20, v38);
  }
  if ( a3 )
  {
    v16 = v20;
    if ( *((_QWORD *)&v21 + 1) > 0xAu )
    {
LABEL_19:
      *(_QWORD *)&v21 = 11;
      qmemcpy(v16, "Stack view", 10);
      *((_BYTE *)v20 + 10) = 0;
      goto LABEL_8;
    }
LABEL_24:
    v20 = (void *)qvector_reserve();
    v16 = v20;
    goto LABEL_19;
  }
LABEL_8:
  v25 = 0;
  v29 = 0;
  v31.m128i_i64[0] = 0;
  v31.m128i_i64[1] = -1;
  v32 = 0;
  v34 = 0;
  v35 = 0;
  v26 = 0;
  v27 = 0;
  v28 = 0;
  v30 = 0;
  v33 = 0;
  sub_15B6C0(&s, 1);
  si128 = _mm_load_si128((const __m128i *)&s);
  v36 = 0;
  LODWORD(v32) = v24;
  v30 = si128;
  v31 = _mm_load_si128((const __m128i *)&s_8[8]);
  v37 = 0;
  Extent = TView::getExtent(TProgram::deskTop);
  *(_QWORD *)s_8 = v8;
  s = (__int64 (**)())Extent;
  sub_15B5F0(&v25, &s, 0);
  v9 = operator new(0x48u);
  *(_QWORD *)v9 = &off_230490;
  *(_QWORD *)(v9 + 8) = 0;
  *(_QWORD *)(v9 + 24) = 0x1000000001LL;
  *(_QWORD *)(v9 + 16) = 0;
  *(_BYTE *)(v9 + 32) = 0;
  *(_QWORD *)(v9 + 36) = 1;
  *(_BYTE *)(v9 + 44) = 1;
  *(_QWORD *)(v9 + 48) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v9 + 56) = 16;
  *(_DWORD *)(v9 + 64) = 5;
  *(_BYTE *)(v9 + 68) = 1;
  v10 = getinf();
  *(_DWORD *)s_8 = 0;
  s = off_2301D8;
  *(_QWORD *)&s_8[4] = _mm_shuffle_epi32(_mm_cvtsi32_si128(v10), 224).m128i_u64[0];
  *((_QWORD *)&v33 + 1) = hexplace_t__clone();
  v11 = getinf();
  s = off_2301D8;
  *(_DWORD *)s_8 = 0x7FFFFFFF;
  *(_QWORD *)&s_8[4] = _mm_shuffle_epi32(_mm_cvtsi32_si128(v11), 224).m128i_u64[0];
  v34 = hexplace_t__clone();
  *(_DWORD *)s_8 = -1;
  s = off_2301D8;
  *(_QWORD *)&s_8[4] = _mm_shuffle_epi32(_mm_cvtsi32_si128(a2), 224).m128i_u64[0];
  if ( a2 == -1 )
  {
    *(_DWORD *)&s_8[4] = getinf();
    if ( *(_DWORD *)&s_8[4] != -1 )
      hexplace_t__adjust();
  }
  if ( (_QWORD)v33 )
  {
    qfree();
    *(_QWORD *)&v33 = 0;
  }
  *(_QWORD *)&v33 = hexplace_t__clone();
  v12 = operator new(0x540u);
  v13 = v12;
  v14 = (char *)s1;
  if ( (_QWORD)v21 )
    v14 = (char *)v20;
  sub_FF940(v12, v14, (__int64)&v25, v9, a2, a3);
  qfree();
  *((_QWORD *)&v33 + 1) = 0;
  qfree();
  v34 = 0;
  if ( (_QWORD)v33 )
    qfree();
  if ( v20 )
  {
    *(_QWORD *)&v21 = 0;
    qfree();
  }
  return v13;
}

