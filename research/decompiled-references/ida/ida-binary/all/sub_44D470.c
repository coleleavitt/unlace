__int64 __fastcall sub_44D470(
        QT::QAbstractItemView *this,
        __int64 a2,
        __int64 a3,
        double a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        double a8,
        double a9,
        __m128 a10,
        __m128 a11)
{
  __int64 v13; // rdx
  unsigned int v14; // ebx
  __m128i v16; // xmm0
  __int64 v18; // rax
  double v19; // xmm4_8
  double v20; // xmm5_8
  const __m128i *v21; // r8
  __int64 v22; // r12
  __int64 v23; // rbx
  __m128i *v24; // r15
  const __m128i *v25; // r12
  const char *v26; // rsi
  int v27; // eax
  __int64 v28; // rdi
  int v29; // r14d
  char *v30; // rbx
  __int64 v31; // r13
  __int64 v32; // rdx
  __m128i v33; // xmm0
  __int64 v34; // rsi
  __int64 v35; // rax
  __m128i v36; // xmm0
  __int64 v37; // rsi
  __int64 v38; // rax
  __int64 v39; // r12
  _QWORD *v40; // rax
  unsigned __int64 v41; // rdx
  __int64 v42; // rax
  __int64 v43; // rdx
  __m128i v44; // [rsp+8h] [rbp-90h] BYREF
  _BYTE *v45; // [rsp+18h] [rbp-80h]
  __int64 v46; // [rsp+20h] [rbp-78h] BYREF
  __int128 v47; // [rsp+28h] [rbp-70h]
  _BYTE v48[24]; // [rsp+40h] [rbp-58h] BYREF
  unsigned __int64 v49; // [rsp+58h] [rbp-40h]

  v49 = __readfsqword(0x28u);
  v13 = *(_QWORD *)(a3 + 8);
  if ( (*((_BYTE *)this + 232) & 0x20) != 0 )
  {
    v14 = 0;
    if ( v13 == 1 )
    {
      *(__m128i *)v48 = _mm_loadu_si128((const __m128i *)*(_QWORD *)a3);
      v42 = sub_443320(this, (__int64)v48);
      if ( v42 )
      {
        v43 = *((_QWORD *)this + 317);
        if ( v43 )
        {
          *(_DWORD *)(v43 + 56) = *(_DWORD *)(v42 + 84);
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 317) + 440LL))(*((_QWORD *)this + 317));
        }
      }
      return 2;
    }
    return v14;
  }
  v16.m128i_i64[0] = 0;
  v46 = 0;
  memset(v48, 0, sizeof(v48));
  v47 = 0;
  if ( v13 )
  {
    v46 = qvector_reserve(&v46, 0, v13, 16);
    v41 = *(_QWORD *)(a3 + 8);
    if ( *(_QWORD *)&v48[16] < v41 )
      *(_QWORD *)v48 = qvector_reserve(v48, *(_QWORD *)v48, v41, 16);
  }
  v18 = QT::QAbstractItemView::model(this);
  v21 = *(const __m128i **)a3;
  v22 = *(_QWORD *)(a3 + 8);
  v23 = v18;
  v45 = v48;
  v24 = (__m128i *)v21;
  v25 = &v21[v22];
  if ( v25 != v21 )
  {
    do
    {
      if ( (*(unsigned __int8 (__fastcall **)(__int64, _QWORD, __m128i *))(*(_QWORD *)v23 + 536LL))(v23, 0, v24) )
      {
        v32 = *(_QWORD *)&v48[8];
        v33 = _mm_loadl_epi64(v24);
        a5 = (__m128)_mm_loadl_epi64((const __m128i *)&v24->m128i_u64[1]);
        v34 = *(_QWORD *)v48;
        if ( *(_QWORD *)&v48[16] < (unsigned __int64)(*(_QWORD *)&v48[8] + 1LL) )
        {
          v44.m128i_i64[1] = a5.m128_u64[0];
          v44.m128i_i64[0] = v33.m128i_i64[0];
          *(_QWORD *)v48 = qvector_reserve(v45, *(_QWORD *)v48, *(_QWORD *)&v48[8] + 1LL, 16);
          v32 = *(_QWORD *)&v48[8];
          v34 = *(_QWORD *)v48;
          a5 = (__m128)_mm_loadl_epi64((const __m128i *)&v44.m128i_u64[1]);
          v33 = _mm_loadl_epi64(&v44);
        }
        v16 = _mm_unpacklo_epi64(v33, (__m128i)a5);
        *(__m128i *)(v34 + 16 * v32) = v16;
        ++*(_QWORD *)&v48[8];
      }
      else if ( (unsigned __int8)sub_442E70(v23, nullptr, v24) )
      {
        v35 = v47;
        v36 = _mm_loadl_epi64(v24);
        a5 = (__m128)_mm_loadl_epi64((const __m128i *)&v24->m128i_u64[1]);
        v37 = v46;
        if ( *((_QWORD *)&v47 + 1) < (unsigned __int64)(v47 + 1) )
        {
          v44.m128i_i64[1] = a5.m128_u64[0];
          v44.m128i_i64[0] = v36.m128i_i64[0];
          v46 = qvector_reserve(&v46, v46, v47 + 1, 16);
          v37 = v46;
          a5 = (__m128)_mm_loadl_epi64((const __m128i *)&v44.m128i_u64[1]);
          v35 = v47;
          v36 = _mm_loadl_epi64(&v44);
        }
        v16 = _mm_unpacklo_epi64(v36, (__m128i)a5);
        *(__m128i *)(v37 + 16 * v35) = v16;
        *(_QWORD *)&v47 = v47 + 1;
      }
      ++v24;
    }
    while ( v25 != v24 );
  }
  v26 = (const char *)a2;
  v27 = sub_42DB50((__int64)this, *(double *)v16.m128i_i64, a5, a6, a7, v19, v20, a10, a11, a2, (__int64)&v46);
  v28 = *(_QWORD *)v48;
  v29 = v27;
  v30 = *(char **)v48;
  v31 = *(_QWORD *)v48 + 16LL * *(_QWORD *)&v48[8];
  if ( v31 == *(_QWORD *)v48 )
  {
    v14 = 2;
    if ( v27 )
      goto LABEL_8;
  }
  else
  {
    do
    {
      v26 = v30;
      if ( (unsigned __int8)sub_44C720(this, v30, 0) )
      {
        v38 = sub_5313F0(unk_8CAA40);
      }
      else
      {
        v26 = v30;
        v39 = sub_443320(this, (__int64)v30);
        if ( v39 && (v40 = sub_426230(this, v30), v26 = (const char *)v39, sub_4175F0((__int64)v40, v39)) )
          v38 = sub_5313F0(unk_8CAAF8);
        else
          v38 = sub_5313F0(unk_8CAB00);
      }
      if ( v38 )
        sub_5314B0(v38);
      v30 += 16;
    }
    while ( (char *)v31 != v30 );
    v28 = *(_QWORD *)v48;
    v14 = 2;
    if ( v29 )
    {
LABEL_8:
      if ( !v28 )
        goto LABEL_10;
      goto LABEL_9;
    }
  }
  v14 = 2 * (*(_QWORD *)&v48[8] != 0);
  if ( v28 )
  {
LABEL_9:
    *(_QWORD *)&v48[8] = 0;
    *(double *)v16.m128i_i64 = qfree(v28, v26);
  }
LABEL_10:
  if ( v46 )
  {
    *(_QWORD *)&v47 = 0;
    qfree(v46, v26, *(double *)v16.m128i_i64);
  }
  return v14;
}
