__int64 __fastcall sub_3F98E0(__int64 a1, __int64 a2)
{
  int v3; // edx
  __m128i v4; // xmm0
  __m128i v6; // xmm0
  int v7; // r13d
  _QWORD *v8; // rbp
  _BYTE *v9; // r12
  _QWORD *v10; // rbx
  __int64 v11; // rax
  unsigned __int64 v12; // rax
  __int64 v13; // rdx
  QT::QVariant *v14; // rcx
  int v15; // eax
  __int64 v16; // rsi
  int v17; // ecx
  int v18; // edx
  __int64 v19; // rax
  __int64 v20; // r14
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r14
  unsigned __int64 v25; // rsi
  QT::QVariant *v26; // [rsp+0h] [rbp-178h]
  unsigned __int64 v27; // [rsp+28h] [rbp-150h] BYREF
  _DWORD v28[4]; // [rsp+30h] [rbp-148h] BYREF
  __int64 v29; // [rsp+40h] [rbp-138h]
  __m128i v30; // [rsp+50h] [rbp-128h] BYREF
  __int64 v31; // [rsp+60h] [rbp-118h]
  __m128i v32; // [rsp+70h] [rbp-108h] BYREF
  __int64 v33; // [rsp+80h] [rbp-F8h]
  _QWORD *v34; // [rsp+90h] [rbp-E8h] BYREF
  _QWORD *v35; // [rsp+98h] [rbp-E0h]
  _QWORD *v36; // [rsp+A0h] [rbp-D8h]
  __m128i v37; // [rsp+B0h] [rbp-C8h] BYREF
  __int64 v38; // [rsp+C0h] [rbp-B8h]
  _DWORD v39[2]; // [rsp+D0h] [rbp-A8h] BYREF
  __int64 v40; // [rsp+D8h] [rbp-A0h]
  __int64 v41; // [rsp+E0h] [rbp-98h]
  _QWORD v42[2]; // [rsp+F0h] [rbp-88h] BYREF
  _BYTE v43[24]; // [rsp+110h] [rbp-68h] BYREF
  __int64 v44; // [rsp+128h] [rbp-50h]
  unsigned __int64 v45; // [rsp+138h] [rbp-40h]

  v45 = __readfsqword(0x28u);
  QT::QAbstractItemView::currentIndex((QT::QAbstractItemView *)v28);
  if ( (v28[1] | v28[0]) < 0 )
    goto LABEL_7;
  if ( !v29 )
    goto LABEL_7;
  (*(void (__fastcall **)(__m128i *, _QWORD, _DWORD *))(**(_QWORD **)(a2 + 120) + 400LL))(
    &v30,
    *(_QWORD *)(a2 + 120),
    v28);
  if ( !v31 )
    goto LABEL_7;
  v3 = v30.m128i_i32[0];
  if ( v30.m128i_i32[1] )
  {
    (*(void (__fastcall **)(__m128i *, __int64, _QWORD, _QWORD, __m128i *))(*(_QWORD *)v31 + 112LL))(
      &v37,
      v31,
      v30.m128i_u32[0],
      0,
      &v30);
    v4 = _mm_loadl_epi64(&v37);
    v30.m128i_i64[1] = v37.m128i_i64[1];
    v31 = v38;
    v30.m128i_i64[0] = v4.m128i_i64[0];
    if ( (_mm_cvtsi128_si32(v4) | _mm_cvtsi128_si32(_mm_shuffle_epi32(v4, 229))) < 0 || !v38 )
      goto LABEL_7;
  }
  else
  {
    v30.m128i_i64[0] = _mm_cvtsi32_si128(v30.m128i_u32[0]).m128i_u64[0];
    if ( v3 < 0 )
    {
LABEL_7:
      *(_QWORD *)(a1 + 16) = 0;
      *(_DWORD *)(a1 + 24) = 0;
      *(_OWORD *)a1 = 0;
      return a1;
    }
  }
  v6 = _mm_load_si128(&v30);
  v7 = 0;
  v8 = nullptr;
  v9 = nullptr;
  v10 = nullptr;
  v33 = v31;
  v32 = v6;
  do
  {
    if ( v32.m128i_i32[1] < 0 )
      break;
    if ( !v33 )
      break;
    v11 = QT::QStandardItemModel::itemFromIndex(*(_QWORD *)(a2 + 112), &v32);
    if ( !v11 )
      break;
    v26 = (QT::QVariant *)v11;
    v12 = sub_3F2920(v11);
    v42[1] = v13;
    v42[0] = v12;
    v14 = v26;
    if ( (_BYTE)v13 )
    {
      if ( v8 == (_QWORD *)v9 )
      {
        v34 = v10;
        v35 = v8;
        v36 = v8;
        sub_3F9800((__int64)&v34, v42);
        v10 = v34;
        v8 = v35;
        v9 = v36;
        v14 = v26;
      }
      else
      {
        *v8++ = v42[0];
      }
    }
    (*(void (__fastcall **)(_BYTE *, QT::QVariant *, __int64))(*(_QWORD *)v14 + 16LL))(v43, v14, 257);
    v27 = v44 & 0xFFFFFFFFFFFFFFFCLL;
    if ( (unsigned __int8)QT::QMetaType::isValid((QT::QMetaType *)&v27) )
    {
      v15 = QT::QVariant::toInt((QT::QVariant *)v43, nullptr);
      if ( !v7 && (unsigned int)(v15 - 1) <= 1 )
        v7 = v15;
    }
    v16 = v33;
    if ( v33 )
    {
      (*(void (__fastcall **)(_DWORD *, __int64, __m128i *))(*(_QWORD *)v33 + 104LL))(v39, v33, &v32);
      v17 = v39[0];
      v18 = v39[1];
      v19 = v40;
      v16 = v41;
    }
    else
    {
      v19 = 0;
      v18 = -1;
      v17 = -1;
    }
    v32.m128i_i64[0] = __PAIR64__(v18, v17);
    v32.m128i_i64[1] = v19;
    v33 = v16;
    QT::QVariant::~QVariant((QT::QVariant *)v43);
  }
  while ( v32.m128i_i32[0] >= 0 );
  v20 = (char *)v8 - (char *)v10;
  if ( v8 == v10 )
  {
    v24 = 0;
    v21 = 0;
    v25 = v9 - (_BYTE *)v10;
  }
  else
  {
    if ( (unsigned __int64)v20 > 0x7FFFFFFFFFFFFFF8LL )
      std::__throw_length_error("cannot create std::vector larger than max_size()");
    v21 = operator new((char *)v8 - (char *)v10);
    v22 = v20 >> 3;
    v23 = v21;
    do
    {
      v23 += 8;
      *(_QWORD *)(v23 - 8) = v8[v22-- - (v20 >> 3) - 1];
    }
    while ( v22 );
    v24 = v21 + v20;
    v25 = v9 - (_BYTE *)v10;
  }
  *(_QWORD *)a1 = v21;
  *(_QWORD *)(a1 + 8) = v24;
  *(_QWORD *)(a1 + 16) = v24;
  *(_DWORD *)(a1 + 24) = v7;
  if ( v10 )
    operator delete(v10, v25);
  return a1;
}
