unsigned __int64 __fastcall sub_523860(QT::QAbstractItemView *this, __int64 a2, __int64 a3, unsigned int a4, char a5)
{
  char *v5; // r14
  const char *v10; // rsi
  __int64 v11; // rbx
  __int64 v12; // rcx
  size_t v13; // r8
  __int64 v14; // rdi
  __m128i v15; // xmm0
  __m128i v16; // xmm0
  unsigned __int64 v17; // rbp
  size_t v18; // rcx
  __int64 v19; // rdi
  __m128i v20; // xmm0
  const char *v21; // rsi
  __int64 v22; // rdi
  __int64 v23; // rbp
  __int64 v24; // rbx
  __int64 v25; // rax
  __int64 (__fastcall *v27)(QT::QAbstractItemView *); // rax
  void *v28; // rax
  void *v29; // rax
  void *v30; // rax
  size_t na; // [rsp+8h] [rbp-90h]
  size_t nb; // [rsp+8h] [rbp-90h]
  __int64 n; // [rsp+8h] [rbp-90h]
  __m128i v34; // [rsp+10h] [rbp-88h] BYREF
  __int64 v35; // [rsp+20h] [rbp-78h] BYREF
  __int128 v36; // [rsp+28h] [rbp-70h]
  __int64 v37; // [rsp+38h] [rbp-60h] BYREF
  __int128 v38; // [rsp+40h] [rbp-58h]
  char v39; // [rsp+50h] [rbp-48h]
  unsigned __int64 v40; // [rsp+58h] [rbp-40h]

  v5 = (char *)this + 304;
  v40 = __readfsqword(0x28u);
  if ( (unsigned __int8)sub_4E0B00((__int64)this + 304, a5) )
  {
    v35 = 0;
    v37 = 0;
    v39 = 0;
    v36 = 0;
    v38 = 0;
    if ( !a2 )
    {
      v27 = *(__int64 (__fastcall **)(QT::QAbstractItemView *))(*(_QWORD *)this + 968LL);
      if ( v27 == sub_51F1D0 )
        sub_4962F0(this, (__int64)&v35, 7);
      else
        ((void (__fastcall *)(QT::QAbstractItemView *, __int64 *, __int64))v27)(this, &v35, 7);
    }
    v10 = (const char *)&v35;
    v11 = (*(__int64 (__fastcall **)(QT::QAbstractItemView *, __int64 *, _QWORD))(*(_QWORD *)this + 1032LL))(
            this,
            &v35,
            a4);
    if ( a2 )
    {
      v12 = *(_QWORD *)(a2 + 8);
      v13 = 0;
      if ( v12 )
      {
        v34.m128i_i64[0] = *(_QWORD *)(a2 + 8);
        n = 16 * v12;
        v28 = (void *)qalloc_or_throw(16 * v12);
        v10 = *(const char **)a2;
        v29 = memcpy(v28, *(const void **)a2, n);
        v12 = v34.m128i_i64[0];
        v13 = (size_t)v29;
      }
      v14 = *(_QWORD *)(v11 + 72);
      v15 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v12, (__m128i)(unsigned __int64)v12);
      if ( v14 )
      {
        *(_QWORD *)(v11 + 80) = 0;
        na = v13;
        v34 = v15;
        qfree(v14, v10);
        v15 = _mm_load_si128(&v34);
        v13 = na;
      }
      *(_QWORD *)(v11 + 72) = v13;
      *(__m128i *)(v11 + 80) = v15;
      v16 = _mm_loadu_si128((const __m128i *)(a2 + 24));
      *(_DWORD *)(v11 + 136) |= 2u;
      *(__m128i *)(v11 + 96) = v16;
    }
    if ( a3 )
    {
      v17 = *(_QWORD *)(a3 + 8);
      v18 = 0;
      if ( v17 )
      {
        v30 = (void *)qalloc_or_throw(16 * v17);
        v10 = *(const char **)a3;
        v18 = (size_t)memcpy(v30, *(const void **)a3, 16 * v17);
      }
      v19 = *(_QWORD *)(v11 + 112);
      v20 = _mm_unpacklo_epi64((__m128i)v17, (__m128i)v17);
      if ( v19 )
      {
        *(_QWORD *)(v11 + 120) = 0;
        nb = v18;
        v34 = v20;
        qfree(v19, v10);
        v20 = _mm_load_si128(&v34);
        v18 = nb;
      }
      *(_DWORD *)(v11 + 136) |= 4u;
      *(_QWORD *)(v11 + 112) = v18;
      *(__m128i *)(v11 + 120) = v20;
    }
    v21 = (const char *)v11;
    sub_4E0B20((__int64)v5, v11, a5);
    sub_4DE2C0(&v37);
    v22 = v35;
    if ( v35 )
    {
      v23 = v36;
      if ( (_QWORD)v36 )
      {
        v24 = 0;
        do
        {
          v25 = v24++;
          sub_4DE2C0((__int64 *)(32 * v25 + v22));
          v22 = v35;
        }
        while ( v23 != v24 );
      }
      *(_QWORD *)&v36 = 0;
      qfree(v22, v21);
    }
  }
  return v40 - __readfsqword(0x28u);
}
