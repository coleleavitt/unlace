unsigned __int64 __fastcall sub_538A10(QT::QObject *this, _QWORD *a2)
{
  bool v2; // zf
  __m128i v3; // xmm3
  __m128i v4; // xmm1
  __m128i v5; // xmm2
  __m128i v6; // xmm0
  __m128i v7; // xmm0
  void **v8; // rbx
  __int64 v9; // r12
  __m128i ptr; // [rsp+0h] [rbp-C8h] BYREF
  __int64 v12; // [rsp+10h] [rbp-B8h]
  __m128i v13; // [rsp+20h] [rbp-A8h] BYREF
  __m128i v14; // [rsp+30h] [rbp-98h] BYREF
  __m128i v15; // [rsp+40h] [rbp-88h] BYREF
  __m128i v16; // [rsp+50h] [rbp-78h] BYREF
  _OWORD v17[3]; // [rsp+60h] [rbp-68h] BYREF
  __m128i v18; // [rsp+90h] [rbp-38h] BYREF
  unsigned __int64 v19; // [rsp+A8h] [rbp-20h]

  v2 = a2[1] == 0;
  v19 = __readfsqword(0x28u);
  v13 = 0;
  v14.m128i_i64[0] = 0;
  v14.m128i_i64[1] = 2;
  if ( !v2 )
  {
    sub_538920(&ptr, a2);
    QT::QVariant::QVariant(&v15, &ptr);
    v3 = _mm_load_si128(&v15);
    v15 = 0;
    v4 = _mm_load_si128(&v13);
    v5 = _mm_load_si128(&v16);
    v18.m128i_i64[0] = 0;
    v18.m128i_i64[1] = 2;
    v6 = _mm_load_si128(&v18);
    v17[2] = v4;
    v16 = v6;
    v7 = _mm_load_si128(&v14);
    v13 = v3;
    v18 = v7;
    v14 = v5;
    v17[0] = v4;
    v17[1] = v7;
    QT::QVariant::~QVariant((QT::QVariant *)v17);
    QT::QVariant::~QVariant((QT::QVariant *)&v15);
    if ( ptr.m128i_i64[0] )
    {
      if ( !_InterlockedSub((volatile signed __int32 *)ptr.m128i_i64[0], 1u) )
      {
        v8 = (void **)ptr.m128i_i64[1];
        v9 = ptr.m128i_i64[1] + 24 * v12;
        if ( ptr.m128i_i64[1] != v9 )
        {
          do
          {
            if ( *v8 && !_InterlockedSub((volatile signed __int32 *)*v8, 1u) )
              free(*v8);
            v8 += 3;
          }
          while ( (void **)v9 != v8 );
        }
        free((void *)ptr.m128i_i64[0]);
      }
    }
  }
  QT::QObject::doSetProperty(this, "__perma_popup_actions", (const QT::QVariant *)&v13, nullptr);
  QT::QVariant::~QVariant((QT::QVariant *)&v13);
  return v19 - __readfsqword(0x28u);
}
