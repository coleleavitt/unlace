__int64 __fastcall sub_48EE60(QT::QAbstractItemView *this, __int64 a2, double a3, __m128 a4)
{
  __int64 v5; // rax
  __int64 v6; // rsi
  __int64 v7; // rbx
  __m128 v8; // xmm0
  __m128 v10; // [rsp+0h] [rbp-58h] BYREF
  __m128i v11; // [rsp+10h] [rbp-48h] BYREF
  __int64 v12; // [rsp+20h] [rbp-38h]
  unsigned __int64 v13; // [rsp+28h] [rbp-30h]

  v13 = __readfsqword(0x28u);
  v5 = QT::QAbstractItemView::model(this);
  v6 = *(_QWORD *)(v5 + 216);
  v7 = v5;
  if ( !v6 )
    v6 = *(_QWORD *)(v5 + 208);
  v11 = (__m128i)-1LL;
  dirtree_find_entry(&v11, v6, a2);
  v8 = (__m128)_mm_load_si128(&v11);
  if ( v8.m128_u64[0] != -1 || !_mm_movehl_ps(a4, v8).m128_u64[0] )
  {
    v10 = v8;
    sub_48B610((__int64)&v11, v7, (__int64 *)&v10);
    if ( (v11.m128i_i32[1] | v11.m128i_i32[0]) >= 0 && v12 )
      sub_48ED80(this, (__int64)&v11);
  }
  return 1;
}
