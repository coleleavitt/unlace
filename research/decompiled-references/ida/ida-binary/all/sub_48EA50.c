unsigned __int64 __fastcall sub_48EA50(QT::QAbstractItemView *this, __int64 a2, __int64 *a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rbx
  __int64 v6; // r13
  __int64 v9; // r15
  __int64 v10; // rax
  const char **v11; // rsi
  _QWORD **v12; // rbx
  __m128i v13; // kr00_16
  const char **v14; // rax
  __m128i v15; // xmm0
  void *v16; // rdi
  _QWORD v19[4]; // [rsp+8h] [rbp-A8h] BYREF
  const char **v20; // [rsp+28h] [rbp-88h] BYREF
  __m128i v21; // [rsp+30h] [rbp-80h]
  int v22; // [rsp+48h] [rbp-68h] BYREF
  void *v23; // [rsp+50h] [rbp-60h]
  int *v24; // [rsp+58h] [rbp-58h]
  int *v25; // [rsp+60h] [rbp-50h]
  __int64 v26; // [rsp+68h] [rbp-48h]
  unsigned __int64 v27; // [rsp+70h] [rbp-40h]

  v5 = *a3;
  v6 = *a3 + 16 * a3[1];
  v27 = __readfsqword(0x28u);
  v22 = 0;
  v20 = nullptr;
  v23 = nullptr;
  v24 = &v22;
  v25 = &v22;
  v26 = 0;
  v21 = 0;
  if ( v6 == v5 )
  {
    if ( !a2 )
      return v27 - __readfsqword(0x28u);
    v12 = nullptr;
    v11 = nullptr;
    v13 = 0u;
  }
  else
  {
    do
    {
      v9 = -1;
      if ( a4 != -1 )
        v9 = a4 - v21.m128i_i64[0];
      v19[0] = (*(__int64 (__fastcall **)(QT::QAbstractItemView *))(*(_QWORD *)this + 800LL))(this);
      v19[1] = &v20;
      v19[2] = a5;
      v19[3] = v9;
      v10 = QT::QAbstractItemView::model(this);
      v11 = *(const char ***)(v10 + 216);
      if ( !v11 )
        v11 = *(const char ***)(v10 + 208);
      sub_489640(v19, v11, v5);
      v5 += 16;
    }
    while ( v6 != v5 );
    v12 = (_QWORD **)v23;
    if ( !a2 )
      goto LABEL_11;
    v11 = v20;
    v13 = v21;
  }
  v14 = *(const char ***)a2;
  v15 = _mm_loadu_si128((const __m128i *)(a2 + 8));
  *(_QWORD *)a2 = v11;
  *(__m128i *)(a2 + 8) = v13;
  v20 = v14;
  v21 = v15;
LABEL_11:
  while ( v12 )
  {
    sub_4887C0(v12[3]);
    v16 = v12;
    v12 = (_QWORD **)v12[2];
    v11 = (const char **)&qword_28;
    operator delete(v16, 0x28u);
  }
  if ( v20 )
  {
    v21.m128i_i64[0] = 0;
    qfree(v20, (const char *)v11);
  }
  return v27 - __readfsqword(0x28u);
}
