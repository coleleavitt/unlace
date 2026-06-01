unsigned __int64 __fastcall sub_1BC450(
        QT::QWidget *this,
        double a2,
        double a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rbp
  unsigned __int64 v11; // rbp
  unsigned __int64 v12; // rbp
  unsigned __int8 isChecked; // al
  double v14; // xmm4_8
  double v15; // xmm5_8
  const void *v17; // r13
  void *v18; // rax
  const void *v19; // r13
  void *v20; // rax
  const void *v21; // r13
  void *v22; // rax
  const void *v23; // r13
  void *v24; // rax
  __int64 v25; // [rsp+0h] [rbp-48h] BYREF
  __int128 v26; // [rsp+8h] [rbp-40h]
  unsigned __int64 v27; // [rsp+18h] [rbp-30h]

  v27 = __readfsqword(0x28u);
  v25 = 0;
  v26 = 0;
  sub_1BA9A0((__int64)this, (__int64)&v25, 0.0, a3, a4, a5, a6, a7, a8, a9);
  sub_52B3C0((char *)this + 160, &v25);
  if ( (void **)((char *)this + 160) != &qword_8CAE60 )
  {
    v9 = *((_QWORD *)this + 21);
    if ( v9 > 1 )
    {
      v23 = *((const void **)this + 20);
      v24 = qword_8CAE60;
      if ( *((_QWORD *)&xmmword_8CAE68 + 1) < v9 )
      {
        v24 = (void *)qvector_reserve(&qword_8CAE60, qword_8CAE60, *((_QWORD *)this + 21), 1);
        qword_8CAE60 = v24;
      }
      *(_QWORD *)&xmmword_8CAE68 = v9;
      memmove(v24, v23, v9 - 1);
      *((char *)qword_8CAE60 + v9 - 1) = 0;
    }
    else
    {
      *(_QWORD *)&xmmword_8CAE68 = 0;
    }
  }
  if ( (void **)((char *)this + 184) != &qword_8CAE78 )
  {
    v10 = *((_QWORD *)this + 24);
    if ( v10 > 1 )
    {
      v21 = *((const void **)this + 23);
      v22 = qword_8CAE78;
      if ( *((_QWORD *)&xmmword_8CAE80 + 1) < v10 )
      {
        v22 = (void *)qvector_reserve(&qword_8CAE78, qword_8CAE78, *((_QWORD *)this + 24), 1);
        qword_8CAE78 = v22;
      }
      *(_QWORD *)&xmmword_8CAE80 = v10;
      memmove(v22, v21, v10 - 1);
      *((char *)qword_8CAE78 + v10 - 1) = 0;
    }
    else
    {
      *(_QWORD *)&xmmword_8CAE80 = 0;
    }
  }
  if ( (void **)((char *)this + 208) != &qword_8CAE90 )
  {
    v11 = *((_QWORD *)this + 27);
    if ( v11 > 1 )
    {
      v19 = *((const void **)this + 26);
      v20 = qword_8CAE90;
      if ( *((_QWORD *)&xmmword_8CAE98 + 1) < v11 )
      {
        v20 = (void *)qvector_reserve(&qword_8CAE90, qword_8CAE90, *((_QWORD *)this + 27), 1);
        qword_8CAE90 = v20;
      }
      *(_QWORD *)&xmmword_8CAE98 = v11;
      memmove(v20, v19, v11 - 1);
      *((char *)qword_8CAE90 + v11 - 1) = 0;
    }
    else
    {
      *(_QWORD *)&xmmword_8CAE98 = 0;
    }
  }
  if ( (void **)((char *)this + 232) != &qword_8CAEA8 )
  {
    v12 = *((_QWORD *)this + 30);
    if ( v12 > 1 )
    {
      v17 = *((const void **)this + 29);
      v18 = qword_8CAEA8;
      if ( *((_QWORD *)&xmmword_8CAEB0 + 1) < v12 )
      {
        v18 = (void *)qvector_reserve(&qword_8CAEA8, qword_8CAEA8, *((_QWORD *)this + 30), 1);
        qword_8CAEA8 = v18;
      }
      *(_QWORD *)&xmmword_8CAEB0 = v12;
      memmove(v18, v17, v12 - 1);
      *((char *)qword_8CAEA8 + v12 - 1) = 0;
    }
    else
    {
      *(_QWORD *)&xmmword_8CAEB0 = 0;
    }
  }
  isChecked = QT::QAbstractButton::isChecked(*(QT::QAbstractButton **)(*((_QWORD *)this + 32) + 1008LL));
  sub_1B2FD0(isChecked);
  sub_1BBDA0((QT::QWidget **)this, 1u, 0.0, a3, a4, a5, v14, v15, a8, a9);
  if ( v25 )
  {
    *(_QWORD *)&v26 = 0;
    qfree(v25, (_BYTE *)&dword_0 + 1);
  }
  return v27 - __readfsqword(0x28u);
}
