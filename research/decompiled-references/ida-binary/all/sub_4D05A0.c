unsigned __int64 __fastcall sub_4D05A0(QT::QWidget *this, int a2)
{
  volatile signed __int32 *v3; // rdi
  QT::QWidget *v4; // rdi
  __m128i si128; // xmm0
  __int64 v7; // rdx
  void *ptr[2]; // [rsp+0h] [rbp-8h] BYREF
  __int64 vars8; // [rsp+10h] [rbp+8h]
  __m128i vars18[2]; // [rsp+20h] [rbp+18h] BYREF
  void *vars38[2]; // [rsp+40h] [rbp+38h] BYREF
  __int64 vars48; // [rsp+50h] [rbp+48h]
  unsigned __int64 vars50; // [rsp+58h] [rbp+50h]
  void **vars68; // [rsp+70h] [rbp+68h]

  vars68 = &ptr[1];
  vars50 = __readfsqword(0x28u);
  *((_DWORD *)this + 16) = a2;
  vars8 = 0;
  *(_OWORD *)ptr = 0;
  if ( a2 >= 0 )
  {
    QT::QWidget::windowTitle((QT::QWidget *)vars18);
    sub_4D01F0(vars38, (unsigned __int16 *)this + 28, (const QT::QString *)vars18);
    v3 = (volatile signed __int32 *)ptr[0];
    *(__m128i *)ptr = _mm_load_si128((const __m128i *)vars38);
    vars8 = vars48;
    if ( !v3 || _InterlockedSub(v3, 1u) )
      goto LABEL_4;
LABEL_16:
    free((void *)v3);
    goto LABEL_4;
  }
  QT::QWidget::windowTitle((QT::QWidget *)vars18);
  sub_4D03E0((QT::QString *)vars38, (QT::QWidget *)((char *)this + 56), vars18);
  si128 = _mm_load_si128((const __m128i *)ptr);
  v7 = vars8;
  *(__m128i *)ptr = _mm_load_si128((const __m128i *)vars38);
  vars8 = vars48;
  vars48 = v7;
  *(__m128i *)vars38 = si128;
  if ( si128.m128i_i64[0] && !_InterlockedSub((volatile signed __int32 *)si128.m128i_i64[0], 1u) )
  {
    v3 = (volatile signed __int32 *)vars38[0];
    goto LABEL_16;
  }
LABEL_4:
  if ( vars18[0].m128i_i64[0] && !_InterlockedSub((volatile signed __int32 *)vars18[0].m128i_i64[0], 1u) )
    free((void *)vars18[0].m128i_i64[0]);
  QT::QWidget::setWindowTitle(this, (const QT::QString *)ptr);
  v4 = (QT::QWidget *)sub_4CD420(this, 1u);
  if ( v4 )
    QT::QWidget::setWindowTitle(v4, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  return vars50 - __readfsqword(0x28u);
}
