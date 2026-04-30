QT::QWidget *__fastcall sub_190220(_QWORD *a1, __int64 a2, const char *a3, __int64 a4)
{
  size_t v7; // rax
  QT::QWidget *v8; // rax
  __m128i si128; // xmm0
  QT::QWidget *v10; // r14
  __int64 v11; // rax
  __int64 v12; // rsi
  __int64 v14; // rax
  void *ptr[2]; // [rsp+0h] [rbp-78h] BYREF
  __int64 v16; // [rsp+10h] [rbp-68h]
  void *v17[2]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v18; // [rsp+30h] [rbp-48h]
  unsigned __int64 v19; // [rsp+38h] [rbp-40h]

  v19 = __readfsqword(0x28u);
  v7 = 0;
  if ( a3 )
    v7 = strlen(a3);
  QT::QString::fromUtf8(ptr, v7, a3);
  v8 = (QT::QWidget *)operator new(0x38u);
  si128 = _mm_load_si128((const __m128i *)ptr);
  v10 = v8;
  v18 = v16;
  *(__m128i *)v17 = si128;
  if ( si128.m128i_i64[0] )
    _InterlockedAdd((volatile signed __int32 *)si128.m128i_i64[0], 1u);
  sub_18DAD0(v8, (__int64)a1, (__int64)v17, a4);
  if ( v17[0] && !_InterlockedSub((volatile signed __int32 *)v17[0], 1u) )
    free(v17[0]);
  v11 = a1[10];
  v12 = a1[9];
  if ( a1[11] < (unsigned __int64)(v11 + 1) )
  {
    v14 = qvector_reserve(a1 + 9, v12, v11 + 1, 8);
    a1[9] = v14;
    v12 = v14;
    v11 = a1[10];
  }
  *(_QWORD *)(v12 + 8 * v11) = v10;
  ++a1[10];
  QT::QBoxLayout::addWidget(a2, v10, 0, 32);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  return v10;
}
