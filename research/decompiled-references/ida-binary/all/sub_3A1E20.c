unsigned __int64 __fastcall sub_3A1E20(__int64 a1, __int64 a2, char a3)
{
  __int64 v5; // r12
  __int64 v7; // rsi
  void (__fastcall *v8)(__m128i *, __int64, __int64, _QWORD, __m128i *); // rax
  __m128i v9; // xmm0
  int v10; // eax
  __m128i *v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rax
  __m128i v14; // xmm0
  __int64 v15; // [rsp+0h] [rbp-A8h]
  __m128i *v16; // [rsp+0h] [rbp-A8h]
  unsigned int v17; // [rsp+0h] [rbp-A8h]
  int v18; // [rsp+8h] [rbp-A0h]
  __m128i *v19; // [rsp+8h] [rbp-A0h]
  __m128i v20; // [rsp+10h] [rbp-98h] BYREF
  __int64 v21; // [rsp+20h] [rbp-88h]
  __m128i v22; // [rsp+30h] [rbp-78h] BYREF
  __int64 v23; // [rsp+40h] [rbp-68h]
  __m128i v24; // [rsp+50h] [rbp-58h] BYREF
  __int64 v25; // [rsp+60h] [rbp-48h]
  unsigned __int64 v26; // [rsp+68h] [rbp-40h]

  v26 = __readfsqword(0x28u);
  v5 = sub_49AD60(a1);
  v15 = sub_4A0BB0(a1, *(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL), 0, 0);
  if ( v15 < 0 )
    return v26 - __readfsqword(0x28u);
  v7 = QT::QAbstractItemView::model(*(QT::QAbstractItemView **)(a1 + 2472));
  v8 = *(void (__fastcall **)(__m128i *, __int64, __int64, _QWORD, __m128i *))(*(_QWORD *)v7 + 96LL);
  v24 = (__m128i)0xFFFFFFFFFFFFFFFFLL;
  v25 = 0;
  v8(&v20, v7, v15, 0, &v24);
  if ( (v20.m128i_i32[1] | v20.m128i_i32[0]) < 0 || !v21 )
    return v26 - __readfsqword(0x28u);
  v9 = _mm_load_si128(&v20);
  v23 = v21;
  v10 = *(_DWORD *)a2;
  v22 = v9;
  if ( v10 == -2 )
  {
    v12 = 3;
    v11 = &v22;
    goto LABEL_14;
  }
  v11 = &v22;
  if ( v10 < -1 )
    goto LABEL_13;
  v12 = 2;
  v11 = &v22;
  if ( v10 != -1 )
  {
    if ( v10 )
    {
      v18 = 0;
      do
      {
        v16 = v11;
        v13 = QT::QAbstractItemView::model(*(QT::QAbstractItemView **)(a1 + 2472));
        (*(void (__fastcall **)(__m128i *, __int64, _QWORD, _QWORD, __m128i *))(*(_QWORD *)v13 + 112LL))(
          &v24,
          v13,
          (unsigned int)(v22.m128i_i32[0] - 1),
          0,
          v16);
        v11 = v16;
        if ( (v24.m128i_i32[1] | v24.m128i_i32[0]) < 0 )
          break;
        if ( !v25 )
          break;
        v14 = _mm_load_si128(&v24);
        ++v18;
        v23 = v25;
        v22 = v14;
      }
      while ( *(_DWORD *)a2 > v18 );
    }
LABEL_13:
    v12 = 1;
  }
LABEL_14:
  if ( a3 )
  {
    v19 = v11;
    v17 = v12;
    QT::QAbstractItemView::setCurrentIndex(v5, &v20);
    v11 = v19;
    v12 = v17;
  }
  (*(void (__fastcall **)(__int64, __m128i *, __int64))(*(_QWORD *)v5 + 488LL))(v5, v11, v12);
  return v26 - __readfsqword(0x28u);
}
