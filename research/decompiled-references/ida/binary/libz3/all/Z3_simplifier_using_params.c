__int64 __fastcall Z3_simplifier_using_params(__int64 a1, __int64 a2, __int64 a3)
{
  __int128 *v3; // rdi
  __int64 i; // rcx
  char v6; // r14
  __int64 v7; // r12
  void (__fastcall *v8)(__int128 *, __int64, __int64); // rax
  __int64 (__fastcall *v9)(__int128 *, __int64); // rax
  __int64 v10; // rdx
  void *v11; // r12
  int *v12; // rsi
  __int64 v13; // rbx
  __int64 v14; // rbp
  void (__fastcall *v15)(__int64, __int128 *, __int64); // rax
  __m128i v16; // xmm0
  __m128i v17; // xmm0
  __int64 *v18; // rbp
  unsigned __int64 v19; // r12
  __int64 v20; // rsi
  __int64 v21; // rdi
  _BYTE v24[8]; // [rsp+48h] [rbp-160h] BYREF
  __int64 v25; // [rsp+50h] [rbp-158h] BYREF
  _BYTE v26[8]; // [rsp+58h] [rbp-150h] BYREF
  __int128 v27; // [rsp+60h] [rbp-148h] BYREF
  __m128i v28; // [rsp+70h] [rbp-138h] BYREF
  __m128i v29; // [rsp+80h] [rbp-128h] BYREF
  __m128i v30; // [rsp+90h] [rbp-118h]
  _BYTE v31[8]; // [rsp+A0h] [rbp-108h] BYREF
  __int128 v32; // [rsp+A8h] [rbp-100h] BYREF
  __m128i v33; // [rsp+B8h] [rbp-F0h] BYREF
  __int64 *v34; // [rsp+D0h] [rbp-D8h]
  int v35; // [rsp+D8h] [rbp-D0h]
  char v36; // [rsp+DCh] [rbp-CCh]
  __int64 v37; // [rsp+E0h] [rbp-C8h]
  int v38; // [rsp+E8h] [rbp-C0h]
  __int64 (__fastcall **v39)(); // [rsp+F0h] [rbp-B8h]
  __int64 v40; // [rsp+100h] [rbp-A8h]
  void *v41; // [rsp+108h] [rbp-A0h]
  __int64 v42; // [rsp+118h] [rbp-90h]
  void *ptr; // [rsp+120h] [rbp-88h]
  __int64 v44; // [rsp+128h] [rbp-80h]
  __int64 *v45; // [rsp+130h] [rbp-78h]
  __int64 v46; // [rsp+138h] [rbp-70h]
  __int64 v47; // [rsp+140h] [rbp-68h]
  _BYTE v48[96]; // [rsp+148h] [rbp-60h] BYREF

  v6 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v6 )
    sub_29CE20();
  *(_DWORD *)(a1 + 1520) = 0;
  sub_1857380(v24);
  v7 = *(_QWORD *)(a1 + 232);
  v35 = 0;
  v34 = qword_1C63778;
  v36 = 0;
  v37 = 0;
  v39 = &off_1C62200;
  v38 = 0;
  v40 = 0;
  v41 = nullptr;
  v42 = 0;
  ptr = nullptr;
  v44 = v7;
  v45 = nullptr;
  v46 = 0;
  v47 = 0;
  sub_180C0A0(v48);
  v25 = 0;
  v34 = (__int64 *)&off_1C4C830;
  if ( !a2 )
  {
    v3 = &v27;
    for ( i = 6; i; --i )
    {
      *(_DWORD *)v3 = 0;
      v3 = (__int128 *)((char *)v3 + 4);
    }
    v28.m128i_i64[1] = 0;
    BUG();
  }
  v8 = *(void (__fastcall **)(__int128 *, __int64, __int64))(a2 + 40);
  v28 = 0u;
  v27 = 0;
  if ( !v8
    || (v8(&v27, a2 + 24, 2),
        v9 = *(__int64 (__fastcall **)(__int128 *, __int64))(a2 + 48),
        v10 = *(_QWORD *)(a2 + 40),
        v28.m128i_i64[1] = (__int64)v9,
        (v28.m128i_i64[0] = v10) == 0) )
  {
    std::__throw_bad_function_call();
  }
  v11 = (void *)v9(&v27, v7);
  (*(void (__fastcall **)(void *, _BYTE *))(*(_QWORD *)v11 + 72LL))(v11, v24);
  v12 = (int *)(a3 + 24);
  if ( !a3 )
    v12 = &qword_1C7F4C8;
  sub_1858590(v26, v12);
  sub_18632D0(v26, v24);
  sub_1858590(v31, v26);
  v33 = 0u;
  v32 = 0;
  if ( v28.m128i_i64[0] )
  {
    ((void (__fastcall *)(__int128 *, __int128 *, __int64))v28.m128i_i64[0])(&v32, &v27, 2);
    v33 = _mm_load_si128(&v28);
  }
  v13 = sub_186B270(0x38u);
  sub_2518F0(v13, a1);
  *(_QWORD *)(v13 + 40) = 0;
  *(_QWORD *)v13 = &off_1C4C920;
  *(_QWORD *)(v13 + 48) = 0;
  *(_OWORD *)(v13 + 24) = 0;
  v30 = 0u;
  v29 = 0;
  v14 = operator new(0x28u);
  sub_1858590(v14, v31);
  v15 = (void (__fastcall *)(__int64, __int128 *, __int64))v33.m128i_i64[0];
  *(_QWORD *)(v14 + 24) = 0;
  *(_QWORD *)(v14 + 32) = 0;
  *(_OWORD *)(v14 + 8) = 0;
  if ( v15 )
  {
    v15(v14 + 8, &v32, 2);
    *(__m128i *)(v14 + 24) = _mm_loadu_si128(&v33);
  }
  v29.m128i_i64[0] = v14;
  v16 = _mm_load_si128(&v29);
  v29 = _mm_loadu_si128((const __m128i *)(v13 + 24));
  *(__m128i *)(v13 + 24) = v16;
  v17 = _mm_loadu_si128((const __m128i *)(v13 + 40));
  v30 = v17;
  *(__m128i *)(v13 + 40) = _mm_unpacklo_epi64(
                             _mm_loadl_epi64((const __m128i *)&off_1C4C9E8),
                             (__m128i)(unsigned __int64)sub_243440);
  if ( v17.m128i_i64[0] )
    ((void (__fastcall *)(__m128i *, __m128i *, __int64))v17.m128i_i64[0])(&v29, &v29, 3);
  sub_24FBE0(a1, v13);
  if ( v6 )
    sub_2BB620(v13);
  if ( v33.m128i_i64[0] )
    ((void (__fastcall *)(__int128 *, __int128 *, __int64))v33.m128i_i64[0])(&v32, &v32, 3);
  sub_18572D0(v31);
  sub_18572D0(v26);
  (**(void (__fastcall ***)(void *))v11)(v11);
  sub_186B220(v11);
  if ( v28.m128i_i64[0] )
    ((void (__fastcall *)(__int128 *, __int128 *, __int64))v28.m128i_i64[0])(&v27, &v27, 3);
  sub_18572D0(&v25);
  v34 = qword_1C63778;
  sub_180C0E0(v48);
  if ( v47 )
    sub_186B220((void *)(v47 - 8));
  if ( v46 )
    sub_186B220((void *)(v46 - 8));
  v18 = v45;
  if ( v45 )
  {
    v19 = (unsigned __int64)&v45[*((unsigned int *)v45 - 1)];
    if ( (unsigned __int64)v45 >= v19 )
      goto LABEL_32;
    do
    {
      while ( 1 )
      {
        v20 = *v18;
        if ( *v18 )
        {
          v21 = v44;
          if ( (*(_DWORD *)(v20 + 8))-- == 1 )
            break;
        }
        if ( (unsigned __int64)++v18 >= v19 )
          goto LABEL_31;
      }
      sub_15D7BC0(v21, v20);
      ++v18;
    }
    while ( (unsigned __int64)v18 < v19 );
LABEL_31:
    v18 = v45;
    if ( v45 )
LABEL_32:
      sub_186B220(v18 - 1);
  }
  v39 = &off_1C62200;
  if ( ptr )
    sub_186B220(ptr);
  if ( v41 )
    sub_186B220(v41);
  sub_1857540(v24);
  if ( v6 )
    byte_1C7EBA0 = 1;
  return v13;
}

