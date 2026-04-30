__int64 __fastcall database_persistent_t__::vfunc_4(__int64 a1, const __m128i *a2, char a3, double a4, __m128 a5)
{
  unsigned int v6; // eax
  unsigned int v7; // r12d
  __m128 v9; // xmm1
  __int64 v10; // rax
  __m128i v11; // xmm0
  void *v12; // rsi
  __m128i v13; // xmm0
  char v14; // r15
  void *v15; // rsi
  __m128i v16; // [rsp+10h] [rbp-B8h] BYREF
  __int64 v17; // [rsp+20h] [rbp-A8h]
  __m128i v18; // [rsp+30h] [rbp-98h] BYREF
  __int64 v19; // [rsp+40h] [rbp-88h]
  __m128i v20[2]; // [rsp+50h] [rbp-78h] BYREF
  __m128i v21; // [rsp+70h] [rbp-58h] BYREF
  __int64 v22; // [rsp+80h] [rbp-48h]
  unsigned __int64 v23; // [rsp+88h] [rbp-40h]

  v23 = __readfsqword(0x28u);
  v6 = netnode_inited();
  if ( !(_BYTE)v6 )
    return 0;
  v7 = v6;
  sub_1CE9C0(&v21, a2, a4, a5);
  v9 = (__m128)_mm_load_si128(&v21);
  v10 = *(_QWORD *)(a1 + 24);
  v11 = _mm_loadu_si128((const __m128i *)(a1 + 8));
  *(_QWORD *)(a1 + 24) = v22;
  *(__m128 *)(a1 + 8) = v9;
  v22 = v10;
  v21 = v11;
  sub_16D970((void **)&v21);
  if ( !*(_QWORD *)(a1 + 24) )
    return v7;
  QT::QString::toUtf8_helper((QT::QString *)&v21, (const QT::QString *)(a1 + 8));
  v12 = (void *)v21.m128i_i64[1];
  if ( !v21.m128i_i64[1] )
    v12 = &QT::QByteArray::_empty;
  if ( netnode_hashval(*(_QWORD *)(a1 + 32), v12, 0, 0, 72) < 0 && !a3 )
  {
    sub_17F470((void **)&v21);
    QT::QString::assign(a1 + 8, &unk_5C2F25, 0);
    return 0;
  }
  sub_17F470((void **)&v21);
  v13 = _mm_loadu_si128((const __m128i *)(a1 + 8));
  v17 = *(_QWORD *)(a1 + 24);
  v16 = v13;
  if ( v13.m128i_i64[0] )
    _InterlockedAdd((volatile signed __int32 *)v13.m128i_i64[0], 1u);
  v19 = 0;
  v18 = 0;
  do
  {
    sub_1CE9C0(v20, &v16, 0.0, v9);
    QT::QString::toUtf8_helper((QT::QString *)&v21, (const QT::QString *)v20);
    v15 = (void *)v21.m128i_i64[1];
    if ( !v21.m128i_i64[1] )
      v15 = &QT::QByteArray::_empty;
    netnode_hashset(*(_QWORD *)(a1 + 32), v15, &unk_5C2F25, 0, 72);
    sub_17F470((void **)&v21);
    sub_16D970((void **)v20);
    sub_1CE950((QT::QString *)&v21, &v16);
    v14 = sub_1CF020((QT::QString *)&v21, &v16, &v18);
    sub_16D970((void **)&v21);
  }
  while ( v14 );
  sub_16D970((void **)&v18);
  sub_16D970((void **)&v16);
  return v7;
}
