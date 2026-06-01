unsigned __int64 __fastcall sub_1DC670(double a1, __m128 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rbp
  __int64 v11; // r15
  __m128i si128; // xmm0
  __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  void *v16; // rdi
  __int64 v17; // rax
  __int64 v18; // rsi
  __m128i v19; // xmm0
  __int64 v20; // rdx
  __int64 v21; // rax
  const char *v22; // rsi
  __int64 v23; // rdi
  __int64 v24; // rbp
  _QWORD *v25; // r12
  __int64 v26; // r13
  __int64 v27; // rbx
  _QWORD *v28; // rbp
  void *v29; // r12
  __int64 v30; // rdi
  __int64 v31; // rdi
  __int64 v33; // [rsp+20h] [rbp-198h]
  __m128i v34; // [rsp+30h] [rbp-188h] BYREF
  __int64 v35; // [rsp+40h] [rbp-178h]
  __m128i v36; // [rsp+50h] [rbp-168h] BYREF
  __int64 v37; // [rsp+60h] [rbp-158h]
  __int64 v38; // [rsp+70h] [rbp-148h] BYREF
  __int128 v39; // [rsp+78h] [rbp-140h]
  void *v40[2]; // [rsp+90h] [rbp-128h] BYREF
  __int64 v41; // [rsp+A0h] [rbp-118h]
  void *ptr[2]; // [rsp+B0h] [rbp-108h] BYREF
  __int64 v43; // [rsp+C0h] [rbp-F8h]
  __m128i v44[2]; // [rsp+D0h] [rbp-E8h] BYREF
  __int64 (__fastcall **v45)(); // [rsp+F0h] [rbp-C8h] BYREF
  __int128 v46; // [rsp+100h] [rbp-B8h] BYREF
  __int64 v47; // [rsp+110h] [rbp-A8h]
  int v48; // [rsp+118h] [rbp-A0h]
  __int64 v49; // [rsp+120h] [rbp-98h]
  __int64 v50; // [rsp+128h] [rbp-90h]
  __int64 v51; // [rsp+130h] [rbp-88h]
  __int64 v52; // [rsp+138h] [rbp-80h]
  __int128 v53; // [rsp+140h] [rbp-78h] BYREF
  __int64 v54; // [rsp+150h] [rbp-68h]
  __int128 v55; // [rsp+158h] [rbp-60h] BYREF
  __int64 v56; // [rsp+168h] [rbp-50h]
  unsigned __int64 v57; // [rsp+178h] [rbp-40h]

  v57 = __readfsqword(0x28u);
  v46 = 0;
  v47 = 0;
  v48 = 0;
  v49 = 0;
  v50 = 0;
  v51 = 0;
  v45 = &deskcfg_target_t___vtable;
  sub_1CD1B0((__int64)&v45, 0, a5, a6, 0.0);
  v52 = 0;
  v33 = v49;
  v45 = &ida_deskcfg_t___vtable;
  v54 = 0;
  v56 = 0;
  v35 = 0;
  v53 = 0;
  v55 = 0;
  v34 = 0;
  sub_1D5FD0(&v36, &v34, v6, v7, 0.0, a2);
  v38 = 0;
  v39 = 0;
  if ( (int)v37 > 0 )
  {
    v10 = 0;
    v11 = 8 * (3LL * (unsigned int)(v37 - 1) + 3);
    do
    {
      if ( !v36.m128i_i64[0] || *(int *)v36.m128i_i64[0] > 1 )
        sub_1B21C0(&v36, 0, 0, 0, v8, v9);
      v19 = _mm_loadu_si128((const __m128i *)(v10 + v36.m128i_i64[1]));
      v20 = *(_QWORD *)(v10 + v36.m128i_i64[1] + 16);
      v41 = v20;
      *(__m128i *)v40 = v19;
      if ( v19.m128i_i64[0] )
      {
        _InterlockedAdd((volatile signed __int32 *)v19.m128i_i64[0], 1u);
        si128 = _mm_load_si128((const __m128i *)v40);
        v43 = v41;
        *(__m128i *)ptr = si128;
        if ( si128.m128i_i64[0] )
          _InterlockedAdd((volatile signed __int32 *)si128.m128i_i64[0], 1u);
      }
      else
      {
        v43 = v20;
        *(__m128i *)ptr = v19;
      }
      if ( (unsigned __int8)QT::QString::startsWith(ptr, 60, 1) && (unsigned __int8)QT::QString::endsWith(ptr, 62, 1) )
      {
        QT::QString::mid(v44, ptr, 1, v43 - 2);
        v21 = v43;
        a2 = (__m128)_mm_load_si128(v44);
        v44[0] = _mm_load_si128((const __m128i *)ptr);
        v43 = v44[1].m128i_i64[0];
        v44[1].m128i_i64[0] = v21;
        *(__m128 *)ptr = a2;
        sub_16D970((void **)v44);
      }
      if ( v43 )
      {
        v13 = operator new(0x80u);
        *(_QWORD *)v13 = &deskcfg_target_t___vtable;
        *(_QWORD *)(v13 + 32) = 0;
        *(_QWORD *)(v13 + 48) = 0;
        *(_DWORD *)(v13 + 40) = 0;
        *(_OWORD *)(v13 + 16) = 0;
        sub_1CD1B0(v13, 0, v14, v15, 0.0);
        *(_QWORD *)v13 = &ida_deskcfg_t___vtable;
        *(_QWORD *)(v13 + 56) = 0;
        *(_QWORD *)(v13 + 96) = 0;
        *(_QWORD *)(v13 + 120) = 0;
        *(_OWORD *)(v13 + 64) = 0;
        *(_OWORD *)(v13 + 80) = 0;
        *(_OWORD *)(v13 + 104) = 0;
        sub_1CFF10((const __m128i *)v13, (const QT::QString *)ptr, 0.0, a2);
        QT::QString::operator=(v13 + 104, v40);
        v16 = v40[1];
        if ( !v40[1] )
          v16 = &QT::QString::_empty;
        if ( !(unsigned int)QT::QString::compare_helper(v16, v41, "<Debugger>", 10, 1) && v35 )
          QT::QString::operator=(v13 + 16, &v34);
        v17 = v39;
        v18 = v38;
        if ( *((_QWORD *)&v39 + 1) < (unsigned __int64)(v39 + 1) )
        {
          v38 = qvector_reserve(&v38, v38, v39 + 1, 8);
          v18 = v38;
          v17 = v39;
        }
        *(_QWORD *)(v18 + 8 * v17) = v13;
        *(_QWORD *)&v39 = v39 + 1;
      }
      if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
        free(ptr[0]);
      if ( v40[0] && !_InterlockedSub((volatile signed __int32 *)v40[0], 1u) )
        free(v40[0]);
      v10 += 24;
    }
    while ( v11 != v10 );
  }
  v22 = (const char *)&v38;
  memset(v44, 0, 24);
  sub_1DC380(v44[0].m128i_i64, &v38);
  v23 = v44[0].m128i_i64[0];
  v24 = v44[0].m128i_i64[0] + (v44[0].m128i_i64[1] << 6);
  if ( v24 != v44[0].m128i_i64[0] )
  {
    v25 = (_QWORD *)v44[0].m128i_i64[0];
    do
    {
      v22 = (const char *)(v25 + 1);
      sub_268730(*v25, v25 + 1, 0);
      v25 += 8;
    }
    while ( (_QWORD *)v24 != v25 );
    v23 = v44[0].m128i_i64[0];
  }
  if ( v23 )
  {
    v26 = v44[0].m128i_i64[1];
    if ( v44[0].m128i_i64[1] )
    {
      v27 = 0;
      do
      {
        v28 = (_QWORD *)(v23 + (v27 << 6));
        v29 = (void *)*v28;
        if ( *v28 )
        {
          jvalue_t_clear(*v28);
          v22 = (const char *)&off_18;
          operator delete(v29, 0x18u);
        }
        v30 = v28[5];
        if ( v30 )
        {
          v28[6] = 0;
          qfree(v30, v22);
        }
        v31 = v28[1];
        if ( v31 )
        {
          v28[2] = 0;
          qfree(v31, v22);
        }
        ++v27;
        v23 = v44[0].m128i_i64[0];
      }
      while ( v26 != v27 );
    }
    v44[0].m128i_i64[1] = 0;
    qfree(v23, v22);
  }
  sub_1CD2F0(&v38, v22);
  sub_1AF880((__int64)&v36);
  sub_16D970((void **)&v34);
  v45 = &ida_deskcfg_t___vtable;
  v50 = 0;
  v49 = v33;
  v51 = 0;
  sub_16D970((void **)&v55);
  sub_16D970((void **)&v53);
  v45 = &deskcfg_target_t___vtable;
  if ( v33 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
  v50 = 0;
  v51 = 0;
  sub_16D970((void **)&v46);
  return v57 - __readfsqword(0x28u);
}
