unsigned __int64 __fastcall sub_1E4790(QT::QWidget *this)
{
  __int64 v1; // rax
  __int64 v2; // rbp
  __int64 v4; // rdi
  const char *v5; // rsi
  __int64 v6; // rdi
  const char *v8; // [rsp+8h] [rbp-30h] BYREF
  const char *v9; // [rsp+10h] [rbp-28h] BYREF
  unsigned __int64 v10; // [rsp+18h] [rbp-20h]

  v10 = __readfsqword(0x28u);
  v1 = *((_QWORD *)this + 5);
  if ( *(_BYTE *)(v1 + 64) )
    return v10 - __readfsqword(0x28u);
  v2 = *(_QWORD *)(v1 + 56);
  if ( !v2 )
    return v10 - __readfsqword(0x28u);
  v4 = *(_QWORD *)(v2 + 888);
  if ( !v4 )
    return QT::QWidget::update(this);
  v5 = (const char *)&v8;
  if ( (unsigned __int8)sub_2845C0(v4, &v8, &v9, 0) )
  {
    v6 = *((_QWORD *)this + 6);
    if ( v6 && *((_QWORD *)this + 7) )
    {
      v5 = v8;
      if ( !(unsigned int)sub_1F0900(v2, v8, *((_QWORD *)this + 6)) )
      {
        v5 = v9;
        if ( !(unsigned int)sub_1F0900(v2, v9, *((_QWORD *)this + 7)) )
          return v10 - __readfsqword(0x28u);
      }
      v6 = *((_QWORD *)this + 6);
    }
    qfree(v6, v5);
    qfree(*((_QWORD *)this + 7), v5);
    *((_OWORD *)this + 3) = 0;
    return QT::QWidget::update(this);
  }
  return v10 - __readfsqword(0x28u);
}
