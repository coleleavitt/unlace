__int64 __fastcall sub_5329D0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  size_t v3; // rax
  const char *v4; // rbp
  size_t v5; // rdx
  double v6; // xmm0_8
  double v7; // xmm0_8
  const __m128i *v8; // rax
  __m128i v9; // xmm0
  const char *v10; // r13
  size_t v11; // r15
  void *v12; // rax
  void *ptr[4]; // [rsp+10h] [rbp-D8h] BYREF
  void *v15[2]; // [rsp+30h] [rbp-B8h] BYREF
  __int64 v16; // [rsp+40h] [rbp-A8h]
  void *v17[4]; // [rsp+50h] [rbp-98h] BYREF
  void *v18[4]; // [rsp+70h] [rbp-78h] BYREF
  void *v19[11]; // [rsp+90h] [rbp-58h] BYREF

  v2 = *(_QWORD *)(a2 + 8);
  v19[3] = (void *)__readfsqword(0x28u);
  if ( v2 )
  {
    v3 = v2 - 1;
    v4 = *(const char **)a2;
    v5 = v3 >> 63;
  }
  else
  {
    LOBYTE(v5) = 0;
    v3 = 0;
    v4 = &s1;
  }
  if ( !v4 || (_BYTE)v5 )
  {
    v3 = 0;
    if ( v4 )
      v3 = strlen(v4);
  }
  v6 = QT::QString::fromUtf8(ptr, v3, v4);
  sub_5326A0((QT::QString *)v17, (const QT::QString *)ptr, 0x2Bu, 0x2Du);
  v7 = QT::QString::fromUtf8(v19, 6, "Numpad", v6);
  QT::QString::fromUtf8(v18, 4, "Num-", v7);
  v8 = (const __m128i *)QT::QString::replace(v17, v18, v19, 1);
  v9 = _mm_loadu_si128(v8);
  v16 = v8[1].m128i_i64[0];
  *(__m128i *)v15 = v9;
  if ( v9.m128i_i64[0] )
    _InterlockedAdd((volatile signed __int32 *)v9.m128i_i64[0], 1u);
  if ( v18[0] && !_InterlockedSub((volatile signed __int32 *)v18[0], 1u) )
    free(v18[0]);
  if ( v19[0] && !_InterlockedSub((volatile signed __int32 *)v19[0], 1u) )
    free(v19[0]);
  if ( v17[0] && !_InterlockedSub((volatile signed __int32 *)v17[0], 1u) )
    free(v17[0]);
  QT::QString::toUtf8_helper((QT::QString *)v19, (const QT::QString *)v15);
  v10 = (const char *)v19[1];
  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  if ( v10 || (v10 = (const char *)&QT::QByteArray::_empty) != nullptr )
  {
    v11 = strlen(v10);
    v12 = (void *)qvector_reserve(a1, 0, v11 + 1, 1);
    *(_QWORD *)a1 = v12;
    *(_QWORD *)(a1 + 8) = v11 + 1;
    memmove(v12, v10, v11);
    *(_BYTE *)(*(_QWORD *)a1 + v11) = 0;
  }
  if ( v19[0] && !_InterlockedSub((volatile signed __int32 *)v19[0], 1u) )
    free(v19[0]);
  if ( v15[0] && !_InterlockedSub((volatile signed __int32 *)v15[0], 1u) )
    free(v15[0]);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  return a1;
}
