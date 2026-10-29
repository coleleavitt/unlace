_BOOL8 __fastcall sub_193E30(__int64 a1, double a2, double a3, __m128 a4)
{
  __int64 v4; // rax
  bool v5; // bp
  __int64 v6; // rbx
  QT::QAbstractItemView *v7; // rax
  QT::QAbstractItemView *v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rsi
  __m128 si128; // xmm0
  __int64 v12; // rax
  __m128i v13; // xmm0
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __m128i v19; // [rsp+0h] [rbp-78h] BYREF
  __int64 v20; // [rsp+18h] [rbp-60h] BYREF
  __int64 v21; // [rsp+27h] [rbp-51h] BYREF
  char v22; // [rsp+2Fh] [rbp-49h]
  _BYTE v23[24]; // [rsp+30h] [rbp-48h] BYREF
  __m128i v24; // [rsp+48h] [rbp-30h]
  unsigned __int64 v25; // [rsp+58h] [rbp-20h]

  v25 = __readfsqword(0x28u);
  v4 = sub_17D870(a1);
  v5 = v4 != 0;
  if ( v4 )
  {
    v6 = v4;
    sub_1FB9E0(v4, &v20);
    v7 = (QT::QAbstractItemView *)sub_1FB940(v6);
    v8 = v7;
    if ( v7 )
    {
      v9 = QT::QAbstractItemView::model(v7);
      v10 = *(_QWORD *)(v9 + 216);
      if ( !v10 )
        v10 = *(_QWORD *)(v9 + 208);
      *(_OWORD *)v23 = -1;
      v21 = v20;
      v22 = 0;
      dirtree_find_entry(v23, v10, &v21);
      si128 = (__m128)_mm_load_si128((const __m128i *)v23);
      if ( si128.m128_u64[0] != -1 || !_mm_movehl_ps(a4, si128).m128_u64[0] )
      {
        memset(v23, 0, sizeof(v23));
        v19 = (__m128i)si128;
        v24 = (__m128i)-1LL;
        v12 = qvector_reserve(v23, 0, 1, 16);
        v13 = _mm_load_si128(&v19);
        *(_QWORD *)v23 = v12;
        *(__m128i *)(v12 + 16LL * (*(_QWORD *)&v23[8])++) = v13;
        v24 = v13;
        (*(void (__fastcall **)(QT::QAbstractItemView *, _BYTE *, _BYTE *, __int64, _QWORD, __int64, __int64, __int64))(*(_QWORD *)v8 + 792LL))(
          v8,
          v23,
          v23,
          7,
          0,
          v14,
          v19.m128i_i64[0],
          v19.m128i_i64[1]);
        if ( *(_QWORD *)v23 )
        {
          *(_QWORD *)&v23[8] = 0;
          qfree(*(_QWORD *)v23, v23, v15, v16, v17);
        }
      }
    }
  }
  return v5;
}
