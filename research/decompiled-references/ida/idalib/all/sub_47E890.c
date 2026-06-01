__int64 __fastcall sub_47E890(__int64 *a1)
{
  __int64 v1; // rax
  size_t v2; // rbx
  _DWORD *v3; // rax
  __int64 v4; // rsi
  __int64 v5; // rsi
  void *v6; // rsi
  void *v7; // rsi
  void *v8; // rsi
  void *v9; // rsi
  void *v10; // rsi
  void *v11; // rsi
  __m128i *v12; // rsi
  __int64 v13; // rax
  __m128i *v14; // rsi
  __int64 v15; // rax
  void *v16; // rsi
  void *v17; // rsi
  char *v18; // rdx
  void *v19; // rbp
  void *v20; // rbx
  char *v21; // rax
  void *v22; // rdi
  void *v24; // rax
  _DWORD *v25; // rsi
  void *ptr; // [rsp+0h] [rbp-78h] BYREF
  void *v27[2]; // [rsp+8h] [rbp-70h]
  __m128i v28; // [rsp+20h] [rbp-58h] BYREF
  __int128 v29; // [rsp+30h] [rbp-48h]
  _DWORD *v30; // [rsp+40h] [rbp-38h]
  int v31; // [rsp+48h] [rbp-30h]
  unsigned __int64 v32; // [rsp+58h] [rbp-20h]

  v1 = *a1;
  v2 = a1[2];
  v32 = __readfsqword(0x28u);
  v29 = 0;
  v28 = (__m128i)(unsigned __int64)v1;
  if ( v2 )
  {
    v24 = (void *)qalloc_or_throw(v2);
    v25 = (_DWORD *)a1[1];
    *((_QWORD *)&v29 + 1) = v2;
    v28.m128i_i64[1] = (__int64)v24;
    memcpy(v24, v25, v2);
    *(_QWORD *)&v29 = v2;
  }
  v3 = (_DWORD *)a1[4];
  ptr = nullptr;
  v30 = v3;
  LODWORD(v3) = *((_DWORD *)a1 + 10);
  *(_OWORD *)v27 = 0;
  v31 = (int)v3;
  sub_468BB0((char **)&ptr, a1);
  if ( sub_47E4A0(&xmmword_2CCB940, (_DWORD *)*a1) )
  {
    v4 = v28.m128i_i64[1];
    if ( *((_QWORD *)&v29 + 1) <= 0x1Eu )
    {
      v28.m128i_i64[1] = qvector_reserve(&v28.m128i_u64[1], v28.m128i_i64[1], 31, 1);
      v4 = v28.m128i_i64[1];
    }
    *(_QWORD *)&v29 = 31;
    *(__m128i *)v4 = _mm_load_si128((const __m128i *)&xmmword_23A79D0);
    *(__m128i *)(v4 + 14) = _mm_load_si128((const __m128i *)&xmmword_23A79E0);
    *(_BYTE *)(v28.m128i_i64[1] + 30) = 0;
    create_std_modmerge_handlers(&v28, -1, (__int64)&xmmword_2CCB940, 0, 0);
  }
  if ( sub_47E070((__int64)&xmmword_2CCB9E0, (_DWORD *)*a1, (void *)0xFFFFFFFFFFFFFFFFLL) )
  {
    v5 = v28.m128i_i64[1];
    if ( *((_QWORD *)&v29 + 1) <= 0x17u )
    {
      v28.m128i_i64[1] = qvector_reserve(&v28.m128i_u64[1], v28.m128i_i64[1], 24, 1);
      v5 = v28.m128i_i64[1];
    }
    *(_QWORD *)&v29 = 24;
    *(__m128i *)v5 = _mm_load_si128((const __m128i *)&xmmword_23A79F0);
    *(_QWORD *)(v5 + 15) = 0x736E6F6974704F73LL;
    *(_BYTE *)(v28.m128i_i64[1] + 23) = 0;
    create_std_modmerge_handlers(&v28, -1, (__int64)&xmmword_2CCB9E0, 0, 0);
  }
  v6 = (void *)v28.m128i_i64[1];
  if ( *((_QWORD *)&v29 + 1) <= 0xCu )
  {
    v28.m128i_i64[1] = qvector_reserve(&v28.m128i_u64[1], v28.m128i_i64[1], 13, 1);
    v6 = (void *)v28.m128i_i64[1];
  }
  *(_QWORD *)&v29 = 13;
  qmemcpy(v6, "Debugger/pin", 12);
  *(_BYTE *)(v28.m128i_i64[1] + 12) = 0;
  create_std_modmerge_handlers(&v28, -1, (__int64)&xmmword_2CCBD00, 0, 0);
  sub_467300((__int64)&ptr, (__int64)&v28);
  v7 = (void *)v28.m128i_i64[1];
  if ( *((_QWORD *)&v29 + 1) <= 0xCu )
  {
    v28.m128i_i64[1] = qvector_reserve(&v28.m128i_u64[1], v28.m128i_i64[1], 13, 1);
    v7 = (void *)v28.m128i_i64[1];
  }
  *(_QWORD *)&v29 = 13;
  qmemcpy(v7, "Debugger/gdb", 12);
  *(_BYTE *)(v28.m128i_i64[1] + 12) = 0;
  create_std_modmerge_handlers(&v28, -1, (__int64)&xmmword_2CCBCC0, 0, 0);
  sub_467300((__int64)&ptr, (__int64)&v28);
  v8 = (void *)v28.m128i_i64[1];
  if ( *((_QWORD *)&v29 + 1) <= 0xCu )
  {
    v28.m128i_i64[1] = qvector_reserve(&v28.m128i_u64[1], v28.m128i_i64[1], 13, 1);
    v8 = (void *)v28.m128i_i64[1];
  }
  *(_QWORD *)&v29 = 13;
  qmemcpy(v8, "Debugger/xnu", 12);
  *(_BYTE *)(v28.m128i_i64[1] + 12) = 0;
  create_std_modmerge_handlers(&v28, -1, (__int64)&xmmword_2CCBC60, 0, 0);
  sub_467300((__int64)&ptr, (__int64)&v28);
  v9 = (void *)v28.m128i_i64[1];
  if ( *((_QWORD *)&v29 + 1) <= 0xCu )
  {
    v28.m128i_i64[1] = qvector_reserve(&v28.m128i_u64[1], v28.m128i_i64[1], 13, 1);
    v9 = (void *)v28.m128i_i64[1];
  }
  *(_QWORD *)&v29 = 13;
  qmemcpy(v9, "Debugger/ios", 12);
  *(_BYTE *)(v28.m128i_i64[1] + 12) = 0;
  create_std_modmerge_handlers(&v28, -1, (__int64)&xmmword_2CCBC00, 0, 0);
  sub_467300((__int64)&ptr, (__int64)&v28);
  v10 = (void *)v28.m128i_i64[1];
  if ( *((_QWORD *)&v29 + 1) <= 0xEu )
  {
    v28.m128i_i64[1] = qvector_reserve(&v28.m128i_u64[1], v28.m128i_i64[1], 15, 1);
    v10 = (void *)v28.m128i_i64[1];
  }
  *(_QWORD *)&v29 = 15;
  qmemcpy(v10, "Debugger/bochs", 14);
  *(_BYTE *)(v28.m128i_i64[1] + 14) = 0;
  create_std_modmerge_handlers(&v28, -1, (__int64)&xmmword_2CCBBC0, 0, 0);
  sub_467300((__int64)&ptr, (__int64)&v28);
  v11 = (void *)v28.m128i_i64[1];
  if ( *((_QWORD *)&v29 + 1) <= 0xFu )
  {
    v28.m128i_i64[1] = qvector_reserve(&v28.m128i_u64[1], v28.m128i_i64[1], 16, 1);
    v11 = (void *)v28.m128i_i64[1];
  }
  *(_QWORD *)&v29 = 16;
  qmemcpy(v11, "Debugger/windbg", 15);
  *(_BYTE *)(v28.m128i_i64[1] + 15) = 0;
  create_std_modmerge_handlers(&v28, -1, (__int64)&xmmword_2CCBB80, 0, 0);
  sub_467300((__int64)&ptr, (__int64)&v28);
  v12 = (__m128i *)v28.m128i_i64[1];
  if ( *((_QWORD *)&v29 + 1) <= 0x11u )
  {
    v28.m128i_i64[1] = qvector_reserve(&v28.m128i_u64[1], v28.m128i_i64[1], 18, 1);
    v12 = (__m128i *)v28.m128i_i64[1];
  }
  *(_QWORD *)&v29 = 18;
  *v12 = _mm_load_si128((const __m128i *)&xmmword_23A7A00);
  v13 = v28.m128i_i64[1];
  v12[1].m128i_i8[0] = 109;
  *(_BYTE *)(v13 + 17) = 0;
  create_std_modmerge_handlers(&v28, -1, (__int64)&xmmword_2CCBB40, 0, 0);
  sub_467300((__int64)&ptr, (__int64)&v28);
  v14 = (__m128i *)v28.m128i_i64[1];
  if ( *((_QWORD *)&v29 + 1) <= 0x11u )
  {
    v28.m128i_i64[1] = qvector_reserve(&v28.m128i_u64[1], v28.m128i_i64[1], 18, 1);
    v14 = (__m128i *)v28.m128i_i64[1];
  }
  *(_QWORD *)&v29 = 18;
  *v14 = _mm_load_si128((const __m128i *)&xmmword_23A7A10);
  v15 = v28.m128i_i64[1];
  v14[1].m128i_i8[0] = 109;
  *(_BYTE *)(v15 + 17) = 0;
  create_std_modmerge_handlers(&v28, -1, (__int64)&xmmword_2CCBB00, 0, 0);
  sub_467300((__int64)&ptr, (__int64)&v28);
  v16 = (void *)v28.m128i_i64[1];
  if ( *((_QWORD *)&v29 + 1) <= 0xDu )
  {
    v28.m128i_i64[1] = qvector_reserve(&v28.m128i_u64[1], v28.m128i_i64[1], 14, 1);
    v16 = (void *)v28.m128i_i64[1];
  }
  *(_QWORD *)&v29 = 14;
  qmemcpy(v16, "Debugger/rmac", 13);
  *(_BYTE *)(v28.m128i_i64[1] + 13) = 0;
  create_std_modmerge_handlers(&v28, -1, (__int64)&xmmword_2CCBAC0, 0, 0);
  sub_467300((__int64)&ptr, (__int64)&v28);
  v17 = (void *)v28.m128i_i64[1];
  if ( *((_QWORD *)&v29 + 1) <= 0xDu )
  {
    v28.m128i_i64[1] = qvector_reserve(&v28.m128i_u64[1], v28.m128i_i64[1], 14, 1);
    v17 = (void *)v28.m128i_i64[1];
  }
  *(_QWORD *)&v29 = 14;
  qmemcpy(v17, "Debugger/lmac", 13);
  *(_BYTE *)(v28.m128i_i64[1] + 13) = 0;
  create_std_modmerge_handlers(&v28, -1, (__int64)&xmmword_2CCBA80, 0, 0);
  sub_467300((__int64)&ptr, (__int64)&v28);
  sub_467180(a1, (__int64)&ptr);
  v18 = (char *)ptr;
  if ( ptr )
  {
    v19 = v27[0];
    if ( v27[0] )
    {
      v20 = nullptr;
      do
      {
        v21 = &v18[24 * (_QWORD)v20];
        v22 = *(void **)v21;
        if ( *(_QWORD *)v21 )
        {
          *((_QWORD *)v21 + 1) = 0;
          qfree(v22);
          v18 = (char *)ptr;
        }
        v20 = (char *)v20 + 1;
      }
      while ( v19 != v20 );
    }
    v27[0] = nullptr;
    qfree(v18);
  }
  if ( v28.m128i_i64[1] )
  {
    *(_QWORD *)&v29 = 0;
    qfree((void *)v28.m128i_i64[1]);
  }
  return 0;
}
