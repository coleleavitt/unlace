unsigned __int64 __fastcall sub_51D5A0(__int64 a1, const __m128i *a2)
{
  __m128i v2; // xmm0
  __int64 v3; // rdx
  void **v4; // rbx
  void *v5; // r12
  __int64 v6; // rax
  QT::QCompleter *v7; // rax
  QT::QCompleter *v8; // rax
  QT::QWidget *v9; // rax
  void **v10; // rbx
  void **v11; // rbp
  void **i; // r14
  __int64 v14; // [rsp+0h] [rbp-68h] BYREF
  __int128 v15; // [rsp+8h] [rbp-60h]
  void *v16[2]; // [rsp+18h] [rbp-50h] BYREF
  __int64 v17; // [rsp+28h] [rbp-40h]
  unsigned __int64 v18; // [rsp+38h] [rbp-30h]

  v18 = __readfsqword(0x28u);
  v14 = 0;
  v17 = 0;
  v15 = 0;
  *(_OWORD *)v16 = 0;
  sub_4F65D0((__int64)&v14, "UIFLTR");
  sub_4F6A20((__int64)&v14, a2, 0.0);
  v2 = _mm_loadu_si128((const __m128i *)v16);
  v3 = v17;
  if ( v2.m128i_i64[0] )
    _InterlockedAdd((volatile signed __int32 *)v2.m128i_i64[0], 1u);
  v4 = (void **)*(&xmmword_8D24A0 + 1);
  v5 = xmmword_8D24A0;
  *(__m128i *)&xmmword_8D24A0 = v2;
  v6 = qword_8D24B0;
  qword_8D24B0 = v3;
  if ( v5 && !_InterlockedSub((volatile signed __int32 *)v5, 1u) )
  {
    for ( i = &v4[3 * v6]; i != v4; v4 += 3 )
    {
      if ( *v4 && !_InterlockedSub((volatile signed __int32 *)*v4, 1u) )
        free(*v4);
    }
    free(v5);
  }
  if ( QT::QLineEdit::completer(*(QT::QLineEdit **)(a1 + 64)) )
  {
    v7 = (QT::QCompleter *)QT::QLineEdit::completer(*(QT::QLineEdit **)(a1 + 64));
    if ( QT::QCompleter::popup(v7) )
    {
      v8 = (QT::QCompleter *)QT::QLineEdit::completer(*(QT::QLineEdit **)(a1 + 64));
      v9 = (QT::QWidget *)QT::QCompleter::popup(v8);
      QT::QWidget::hide(v9);
    }
  }
  if ( v16[0] && !_InterlockedSub((volatile signed __int32 *)v16[0], 1u) )
  {
    v10 = (void **)v16[1];
    v11 = (void **)((char *)v16[1] + 24 * v17);
    if ( v16[1] != v11 )
    {
      do
      {
        if ( *v10 && !_InterlockedSub((volatile signed __int32 *)*v10, 1u) )
          free(*v10);
        v10 += 3;
      }
      while ( v11 != v10 );
    }
    free(v16[0]);
  }
  if ( v14 )
  {
    *(_QWORD *)&v15 = 0;
    qfree(v14, a2->m128i_i8);
  }
  return v18 - __readfsqword(0x28u);
}
