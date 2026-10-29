__int64 __fastcall sub_46A350(__int64 *a1, const char *a2)
{
  __int64 v2; // rax
  size_t v3; // rbx
  _DWORD *v4; // rax
  char *v5; // rsi
  char *v6; // rsi
  void *v7; // rsi
  void *v8; // rsi
  void *v9; // rsi
  void *v10; // rsi
  void *v11; // rsi
  void *v12; // rsi
  __m128i *v13; // rsi
  _BYTE *v14; // rax
  __m128i *v15; // rsi
  _BYTE *v16; // rax
  void *v17; // rsi
  void *v18; // rsi
  char *v19; // rdx
  void *v20; // rbp
  void *v21; // rbx
  char *v22; // rax
  void *v23; // rdi
  void *v25; // rax
  _DWORD *v26; // rsi
  void *ptr; // [rsp+0h] [rbp-78h] BYREF
  void *v28[2]; // [rsp+8h] [rbp-70h]
  __int64 v29; // [rsp+20h] [rbp-58h] BYREF
  void *v30; // [rsp+28h] [rbp-50h] BYREF
  __int128 v31; // [rsp+30h] [rbp-48h]
  _DWORD *v32; // [rsp+40h] [rbp-38h]
  int v33; // [rsp+48h] [rbp-30h]
  unsigned __int64 v34; // [rsp+58h] [rbp-20h]

  v2 = *a1;
  v3 = a1[2];
  v34 = __readfsqword(0x28u);
  v31 = 0;
  v29 = v2;
  v30 = nullptr;
  if ( v3 )
  {
    v25 = (void *)qalloc_or_throw(v3, a2);
    v26 = (_DWORD *)a1[1];
    *((_QWORD *)&v31 + 1) = v3;
    v30 = v25;
    memcpy(v25, v26, v3);
    *(_QWORD *)&v31 = v3;
  }
  v4 = (_DWORD *)a1[4];
  ptr = nullptr;
  v32 = v4;
  LODWORD(v4) = *((_DWORD *)a1 + 10);
  *(_OWORD *)v28 = 0;
  v33 = (int)v4;
  sub_4547D0((char **)&ptr, a1);
  if ( sub_469F60(&xmmword_2CA1A40, (_DWORD *)*a1) )
  {
    v5 = (char *)v30;
    if ( *((_QWORD *)&v31 + 1) <= 0x1Eu )
    {
      v30 = (void *)qvector_reserve(&v30, v30, 31, 1);
      v5 = (char *)v30;
    }
    *(_QWORD *)&v31 = 31;
    *(__m128i *)v5 = _mm_load_si128((const __m128i *)&xmmword_23839A0);
    *(__m128i *)(v5 + 14) = _mm_load_si128((const __m128i *)&xmmword_23839B0);
    *((_BYTE *)v30 + 30) = 0;
    create_std_modmerge_handlers(&v29, 0xFFFFFFFFLL, &xmmword_2CA1A40, 0, 0);
  }
  if ( sub_469B30((__int64)&xmmword_2CA1AE0, (_DWORD *)*a1, -1) )
  {
    v6 = (char *)v30;
    if ( *((_QWORD *)&v31 + 1) <= 0x17u )
    {
      v30 = (void *)qvector_reserve(&v30, v30, 24, 1);
      v6 = (char *)v30;
    }
    *(_QWORD *)&v31 = 24;
    *(__m128i *)v6 = _mm_load_si128((const __m128i *)&xmmword_23839C0);
    *(_QWORD *)(v6 + 15) = 0x736E6F6974704F73LL;
    *((_BYTE *)v30 + 23) = 0;
    create_std_modmerge_handlers(&v29, 0xFFFFFFFFLL, &xmmword_2CA1AE0, 0, 0);
  }
  v7 = v30;
  if ( *((_QWORD *)&v31 + 1) <= 0xCu )
  {
    v30 = (void *)qvector_reserve(&v30, v30, 13, 1);
    v7 = v30;
  }
  *(_QWORD *)&v31 = 13;
  qmemcpy(v7, "Debugger/pin", 12);
  *((_BYTE *)v30 + 12) = 0;
  create_std_modmerge_handlers(&v29, 0xFFFFFFFFLL, &xmmword_2CA1E00, 0, 0);
  sub_452F20((__int64)&ptr, (__int64)&v29);
  v8 = v30;
  if ( *((_QWORD *)&v31 + 1) <= 0xCu )
  {
    v30 = (void *)qvector_reserve(&v30, v30, 13, 1);
    v8 = v30;
  }
  *(_QWORD *)&v31 = 13;
  qmemcpy(v8, "Debugger/gdb", 12);
  *((_BYTE *)v30 + 12) = 0;
  create_std_modmerge_handlers(&v29, 0xFFFFFFFFLL, &xmmword_2CA1DC0, 0, 0);
  sub_452F20((__int64)&ptr, (__int64)&v29);
  v9 = v30;
  if ( *((_QWORD *)&v31 + 1) <= 0xCu )
  {
    v30 = (void *)qvector_reserve(&v30, v30, 13, 1);
    v9 = v30;
  }
  *(_QWORD *)&v31 = 13;
  qmemcpy(v9, "Debugger/xnu", 12);
  *((_BYTE *)v30 + 12) = 0;
  create_std_modmerge_handlers(&v29, 0xFFFFFFFFLL, &xmmword_2CA1D60, 0, 0);
  sub_452F20((__int64)&ptr, (__int64)&v29);
  v10 = v30;
  if ( *((_QWORD *)&v31 + 1) <= 0xCu )
  {
    v30 = (void *)qvector_reserve(&v30, v30, 13, 1);
    v10 = v30;
  }
  *(_QWORD *)&v31 = 13;
  qmemcpy(v10, "Debugger/ios", 12);
  *((_BYTE *)v30 + 12) = 0;
  create_std_modmerge_handlers(&v29, 0xFFFFFFFFLL, &xmmword_2CA1D00, 0, 0);
  sub_452F20((__int64)&ptr, (__int64)&v29);
  v11 = v30;
  if ( *((_QWORD *)&v31 + 1) <= 0xEu )
  {
    v30 = (void *)qvector_reserve(&v30, v30, 15, 1);
    v11 = v30;
  }
  *(_QWORD *)&v31 = 15;
  qmemcpy(v11, "Debugger/bochs", 14);
  *((_BYTE *)v30 + 14) = 0;
  create_std_modmerge_handlers(&v29, 0xFFFFFFFFLL, &xmmword_2CA1CC0, 0, 0);
  sub_452F20((__int64)&ptr, (__int64)&v29);
  v12 = v30;
  if ( *((_QWORD *)&v31 + 1) <= 0xFu )
  {
    v30 = (void *)qvector_reserve(&v30, v30, 16, 1);
    v12 = v30;
  }
  *(_QWORD *)&v31 = 16;
  qmemcpy(v12, "Debugger/windbg", 15);
  *((_BYTE *)v30 + 15) = 0;
  create_std_modmerge_handlers(&v29, 0xFFFFFFFFLL, &xmmword_2CA1C80, 0, 0);
  sub_452F20((__int64)&ptr, (__int64)&v29);
  v13 = (__m128i *)v30;
  if ( *((_QWORD *)&v31 + 1) <= 0x11u )
  {
    v30 = (void *)qvector_reserve(&v30, v30, 18, 1);
    v13 = (__m128i *)v30;
  }
  *(_QWORD *)&v31 = 18;
  *v13 = _mm_load_si128((const __m128i *)&xmmword_23839D0);
  v14 = v30;
  v13[1].m128i_i8[0] = 109;
  v14[17] = 0;
  create_std_modmerge_handlers(&v29, 0xFFFFFFFFLL, &xmmword_2CA1C40, 0, 0);
  sub_452F20((__int64)&ptr, (__int64)&v29);
  v15 = (__m128i *)v30;
  if ( *((_QWORD *)&v31 + 1) <= 0x11u )
  {
    v30 = (void *)qvector_reserve(&v30, v30, 18, 1);
    v15 = (__m128i *)v30;
  }
  *(_QWORD *)&v31 = 18;
  *v15 = _mm_load_si128((const __m128i *)&xmmword_23839E0);
  v16 = v30;
  v15[1].m128i_i8[0] = 109;
  v16[17] = 0;
  create_std_modmerge_handlers(&v29, 0xFFFFFFFFLL, &xmmword_2CA1C00, 0, 0);
  sub_452F20((__int64)&ptr, (__int64)&v29);
  v17 = v30;
  if ( *((_QWORD *)&v31 + 1) <= 0xDu )
  {
    v30 = (void *)qvector_reserve(&v30, v30, 14, 1);
    v17 = v30;
  }
  *(_QWORD *)&v31 = 14;
  qmemcpy(v17, "Debugger/rmac", 13);
  *((_BYTE *)v30 + 13) = 0;
  create_std_modmerge_handlers(&v29, 0xFFFFFFFFLL, &xmmword_2CA1BC0, 0, 0);
  sub_452F20((__int64)&ptr, (__int64)&v29);
  v18 = v30;
  if ( *((_QWORD *)&v31 + 1) <= 0xDu )
  {
    v30 = (void *)qvector_reserve(&v30, v30, 14, 1);
    v18 = v30;
  }
  *(_QWORD *)&v31 = 14;
  qmemcpy(v18, "Debugger/lmac", 13);
  *((_BYTE *)v30 + 13) = 0;
  create_std_modmerge_handlers(&v29, 0xFFFFFFFFLL, &xmmword_2CA1B80, 0, 0);
  sub_452F20((__int64)&ptr, (__int64)&v29);
  sub_452DA0(a1, (__int64)&ptr);
  v19 = (char *)ptr;
  if ( ptr )
  {
    v20 = v28[0];
    if ( v28[0] )
    {
      v21 = nullptr;
      do
      {
        v22 = &v19[24 * (_QWORD)v21];
        v23 = *(void **)v22;
        if ( *(_QWORD *)v22 )
        {
          *((_QWORD *)v22 + 1) = 0;
          qfree(v23);
          v19 = (char *)ptr;
        }
        v21 = (char *)v21 + 1;
      }
      while ( v20 != v21 );
    }
    v28[0] = nullptr;
    qfree(v19);
  }
  if ( v30 )
  {
    *(_QWORD *)&v31 = 0;
    qfree(v30);
  }
  return 0;
}

