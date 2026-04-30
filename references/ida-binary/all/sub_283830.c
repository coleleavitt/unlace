void __fastcall FlatRenderer__::vfunc_3(QT::QObject *this, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __m128i v5; // xmm3
  __m128i v7; // xmm2
  __m128i v8; // xmm1
  __m128i v9; // xmm0
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  unsigned __int64 v13; // r12
  void **v14; // rbx
  void *v15; // rdi
  __m128i v16; // xmm4
  __m128i v17; // xmm5
  __m128i v18; // xmm1
  __m128i v19; // xmm0
  const char *v20; // rsi
  void *v21; // rdi
  void **v22; // rbx
  unsigned __int64 v23; // r12
  void *v24; // rdi
  __int64 v25; // rdi
  __int64 v26; // rdx
  __int64 v27; // r12
  __int64 i; // rbx
  __int64 *v29; // rax
  __int64 v30; // rdi
  __int64 v31; // rdi
  __int64 v32; // rdx
  __int64 v33; // r12
  __int64 j; // rbx
  __int64 *v35; // rax
  __int64 v36; // rdi
  __m128i v37; // [rsp+0h] [rbp-98h] BYREF
  __m128i v38; // [rsp+10h] [rbp-88h] BYREF
  __m128i v39; // [rsp+20h] [rbp-78h] BYREF
  __m128i v40; // [rsp+30h] [rbp-68h]
  __m128i v41; // [rsp+40h] [rbp-58h] BYREF
  __m128i v42; // [rsp+50h] [rbp-48h]
  unsigned __int64 v43; // [rsp+68h] [rbp-30h]

  v5 = _mm_loadu_si128((const __m128i *)((char *)this + 360));
  v43 = __readfsqword(0x28u);
  v7 = _mm_loadu_si128((const __m128i *)((char *)this + 376));
  v8 = _mm_loadu_si128((const __m128i *)((char *)this + 392));
  v38 = v5;
  *(_QWORD *)this = &FlatRenderer___vtable;
  v9 = _mm_loadu_si128((const __m128i *)((char *)this + 408));
  v39 = v8;
  v40 = v9;
  v41 = v5;
  v37 = v7;
  v42 = v7;
  sub_283600((__int64 **)&v41, (__int64 **)&v39, a3, a4, a5);
  v13 = *((_QWORD *)this + 52) + 8LL;
  v14 = (void **)(v7.m128i_i64[1] + 8);
  if ( v7.m128i_i64[1] + 8 < v13 )
  {
    do
    {
      v15 = *v14++;
      operator delete(v15, 0x110u);
    }
    while ( (unsigned __int64)v14 < v13 );
  }
  v16 = _mm_load_si128(&v38);
  v17 = _mm_load_si128(&v37);
  *((_DWORD *)this + 106) = 0;
  v18 = _mm_loadu_si128((const __m128i *)((char *)this + 360));
  v19 = _mm_loadu_si128((const __m128i *)((char *)this + 376));
  v20 = (const char *)&v39;
  *(__m128i *)((char *)this + 392) = v16;
  *(__m128i *)((char *)this + 408) = v17;
  v39 = v16;
  v40 = v17;
  v41 = v18;
  v42 = v19;
  sub_283600((__int64 **)&v41, (__int64 **)&v39, v10, v11, v12);
  v21 = *((void **)this + 43);
  if ( v21 )
  {
    v22 = *((void ***)this + 48);
    v23 = *((_QWORD *)this + 52) + 8LL;
    if ( (unsigned __int64)v22 < v23 )
    {
      do
      {
        v24 = *v22++;
        operator delete(v24, 0x110u);
      }
      while ( (unsigned __int64)v22 < v23 );
      v21 = *((void **)this + 43);
    }
    v20 = (const char *)(8LL * *((_QWORD *)this + 44));
    operator delete(v21, (unsigned __int64)v20);
  }
  linearray_t_dtr((char *)this + 264);
  v25 = *((_QWORD *)this + 39);
  if ( v25 )
  {
    *((_QWORD *)this + 40) = 0;
    *(double *)v19.m128i_i64 = qfree(v25, v20);
  }
  v26 = *((_QWORD *)this + 33);
  if ( v26 )
  {
    v27 = *((_QWORD *)this + 34);
    if ( v27 )
    {
      for ( i = 0; i != v27; ++i )
      {
        v29 = (__int64 *)(v26 + 24 * i);
        v30 = *v29;
        if ( *v29 )
        {
          v29[1] = 0;
          *(double *)v19.m128i_i64 = qfree(v30, v20, *(double *)v19.m128i_i64);
          v26 = *((_QWORD *)this + 33);
        }
      }
    }
    *((_QWORD *)this + 34) = 0;
    *(double *)v19.m128i_i64 = qfree(v26, v20, *(double *)v19.m128i_i64);
  }
  linearray_t_dtr((char *)this + 184);
  v31 = *((_QWORD *)this + 29);
  if ( v31 )
  {
    *((_QWORD *)this + 30) = 0;
    *(double *)v19.m128i_i64 = qfree(v31, v20, *(double *)v19.m128i_i64);
  }
  v32 = *((_QWORD *)this + 23);
  if ( v32 )
  {
    v33 = *((_QWORD *)this + 24);
    if ( v33 )
    {
      for ( j = 0; j != v33; ++j )
      {
        v35 = (__int64 *)(v32 + 24 * j);
        v36 = *v35;
        if ( *v35 )
        {
          v35[1] = 0;
          *(double *)v19.m128i_i64 = qfree(v36, v20, *(double *)v19.m128i_i64);
          v32 = *((_QWORD *)this + 23);
        }
      }
    }
    *((_QWORD *)this + 24) = 0;
    qfree(v32, v20, *(double *)v19.m128i_i64);
  }
  sub_174E40(this, (__int64)v20);
}
