__int64 __fastcall registry_persistent_t__::vfunc_13(__int64 a1, __int64 *a2, const QT::QString *a3)
{
  void *v4; // rbp
  const char *v5; // rsi
  unsigned int v6; // ebp
  __int64 v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rdx
  __m128i v10; // xmm0
  __int64 v12; // [rsp+0h] [rbp-88h] BYREF
  __m128i v13; // [rsp+8h] [rbp-80h] BYREF
  void *v14; // [rsp+20h] [rbp-68h] BYREF
  const char *v15; // [rsp+28h] [rbp-60h]
  void *v16; // [rsp+40h] [rbp-48h] BYREF
  void *v17; // [rsp+48h] [rbp-40h]
  unsigned __int64 v18; // [rsp+58h] [rbp-30h]

  v18 = __readfsqword(0x28u);
  v12 = 0;
  v13 = 0;
  QT::QString::toUtf8_helper((QT::QString *)&v16, a3);
  v4 = v17;
  if ( !v17 )
    v4 = &QT::QByteArray::_empty;
  QT::QString::toUtf8_helper((QT::QString *)&v14, (const QT::QString *)&unk_8CB2A0);
  v5 = v15;
  if ( !v15 )
    v5 = (const char *)&QT::QByteArray::_empty;
  v6 = reg_str_get(&v12, v5, v4);
  sub_17F470(&v14);
  sub_17F470(&v16);
  v7 = v12;
  if ( a2 && (_BYTE)v6 )
  {
    v8 = *a2;
    v9 = a2[2];
    *a2 = v12;
    v10 = _mm_loadu_si128(&v13);
    v12 = v8;
    v7 = v8;
    v13.m128i_i64[1] = v9;
    *(__m128i *)(a2 + 1) = v10;
  }
  if ( v7 )
  {
    v13.m128i_i64[0] = 0;
    qfree(v7, v5);
  }
  return v6;
}
