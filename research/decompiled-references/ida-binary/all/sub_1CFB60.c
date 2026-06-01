__int64 __fastcall database_persistent_t__::vfunc_11(__int64 a1, __int64 a2, const QT::QString *a3)
{
  __m128i v4; // xmm0
  __int64 v6; // rdx
  void *v7; // rsi
  __int64 v8; // rbx
  size_t v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __m128i v14; // [rsp+0h] [rbp-478h] BYREF
  __int64 v15; // [rsp+10h] [rbp-468h]
  void *v16; // [rsp+20h] [rbp-458h] BYREF
  void *v17; // [rsp+28h] [rbp-450h]
  char s[1032]; // [rsp+40h] [rbp-438h] BYREF
  unsigned __int64 v19; // [rsp+448h] [rbp-30h]

  v4 = _mm_loadu_si128((const __m128i *)(a2 + 8));
  v19 = __readfsqword(0x28u);
  v6 = *(_QWORD *)(a2 + 24);
  v14 = v4;
  v15 = v6;
  if ( v4.m128i_i64[0] )
    _InterlockedAdd((volatile signed __int32 *)v4.m128i_i64[0], 1u);
  QT::QString::append((QT::QString *)&v14, a3);
  QT::QString::toUtf8_helper((QT::QString *)&v16, (const QT::QString *)&v14);
  v7 = v17;
  if ( !v17 )
    v7 = &QT::QByteArray::_empty;
  v8 = netnode_hashval(*(_QWORD *)(a2 + 32), v7, s, 1024, 72);
  sub_17F470(&v16);
  sub_16D970((void **)&v14);
  if ( v8 < 0 )
  {
    sub_1CC990(a1, (const char *)&unk_5C2F25);
  }
  else
  {
    v9 = strlen(s);
    QT::QString::fromUtf8(a1, v9, s, v10, v11, v12, *(_OWORD *)&v14, v15);
  }
  return a1;
}
