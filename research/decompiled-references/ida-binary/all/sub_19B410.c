__int64 __fastcall sub_19B410(__int64 a1, double a2, double a3, __m128 a4)
{
  const QT::QObject *v5; // rsi
  QT::QAbstractItemView *v6; // rax
  QT::QAbstractItemView *v7; // rsi
  QT::QAbstractItemView *v8; // rbx
  __int64 bpt_kernel_interface; // rax
  __int64 v10; // rbp
  __int64 v11; // rax
  __int64 v12; // rsi
  __int64 v13; // rax
  __m128 si128; // xmm0
  __int64 v15; // rax
  __m128i v16; // xmm0
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v22; // rdi
  __m128i v23; // [rsp+0h] [rbp-B8h] BYREF
  __int64 v24; // [rsp+17h] [rbp-A1h] BYREF
  char v25; // [rsp+1Fh] [rbp-99h]
  _BYTE v26[24]; // [rsp+20h] [rbp-98h] BYREF
  __m128i v27; // [rsp+38h] [rbp-80h]
  _BYTE v28[56]; // [rsp+50h] [rbp-68h] BYREF
  unsigned __int64 v29; // [rsp+88h] [rbp-30h]

  v29 = __readfsqword(0x28u);
  v5 = (const QT::QObject *)sub_2DC6E0("Breakpoints");
  v6 = (QT::QAbstractItemView *)QT::QMetaObject::cast((QT::QMetaObject *)&off_8809A0, v5);
  if ( v6 )
  {
    v7 = v6;
    v8 = v6;
    sub_496080(v28, v6, 0);
    bpt_kernel_interface = get_bpt_kernel_interface(v28, v7);
    v10 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)bpt_kernel_interface + 312LL))(
            bpt_kernel_interface,
            a1,
            0);
    if ( v10 )
    {
      v11 = QT::QAbstractItemView::model(v8);
      v12 = *(_QWORD *)(v11 + 216);
      if ( !v12 )
        v12 = *(_QWORD *)(v11 + 208);
      v13 = *(_QWORD *)(v10 + 88);
      v25 = 0;
      v24 = v13;
      *(_OWORD *)v26 = -1;
      dirtree_find_entry(v26, v12, &v24);
      si128 = (__m128)_mm_load_si128((const __m128i *)v26);
      if ( si128.m128_u64[0] != -1 || !_mm_movehl_ps(a4, si128).m128_u64[0] )
      {
        memset(v26, 0, sizeof(v26));
        v23 = (__m128i)si128;
        v27 = (__m128i)-1LL;
        v15 = qvector_reserve(v26, 0, 1, 16);
        v16 = _mm_load_si128(&v23);
        *(_QWORD *)v26 = v15;
        *(__m128i *)(v15 + 16LL * (*(_QWORD *)&v26[8])++) = v16;
        v27 = v16;
        (*(void (__fastcall **)(QT::QAbstractItemView *, _BYTE *, _QWORD, __int64, _QWORD, __int64, __int64, __int64))(*(_QWORD *)v8 + 792LL))(
          v8,
          v26,
          0,
          7,
          0,
          v17,
          v23.m128i_i64[0],
          v23.m128i_i64[1]);
        if ( *(_QWORD *)v26 )
        {
          *(_QWORD *)&v26[8] = 0;
          qfree(*(_QWORD *)v26, v26, v18, v19, v20);
        }
      }
    }
    sub_490100(v28);
    return v10;
  }
  else
  {
    v22 = get_bpt_kernel_interface(&off_8809A0, v5);
    return (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v22 + 312LL))(v22, a1, 0);
  }
}
