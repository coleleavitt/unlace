unsigned __int64 __fastcall sub_42C800(QT::QAbstractItemView *this)
{
  __int64 v1; // rax
  __int64 (__fastcall *v2)(__int64); // rax
  QT::QStatusBar *v3; // rbp
  size_t v4; // rax
  char *v5; // rbx
  unsigned __int64 v6; // rdx
  double v7; // xmm0_8
  char *s; // [rsp+0h] [rbp-88h] BYREF
  __int128 v10; // [rsp+8h] [rbp-80h]
  void *ptr[4]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v12; // [rsp+40h] [rbp-48h]
  __int128 v13; // [rsp+48h] [rbp-40h]
  __int128 v14; // [rsp+58h] [rbp-30h] BYREF
  unsigned __int64 v15; // [rsp+68h] [rbp-20h]

  v1 = *(_QWORD *)this;
  v15 = __readfsqword(0x28u);
  v2 = *(__int64 (__fastcall **)(__int64))(v1 + 1040);
  if ( v2 == sub_429F30 )
  {
    if ( *((_BYTE *)this + 2408) )
      return v15 - __readfsqword(0x28u);
    v3 = *((QT::QStatusBar **)this + 300);
  }
  else
  {
    v3 = (QT::QStatusBar *)v2((__int64)this);
  }
  if ( v3 )
  {
    v10 = 0;
    v13 = 0;
    s = nullptr;
    v12 = 0;
    v14 = -1;
    sub_48FB10(this);
    if ( !*((_QWORD *)&v14 + 1) )
      (*(void (__fastcall **)(QT::QAbstractItemView *, char **, __int128 *))(*(_QWORD *)this + 1200LL))(this, &s, &v14);
    if ( (_QWORD)v10 )
    {
      v4 = v10 - 1;
      v5 = s;
      v6 = (unsigned __int64)(v10 - 1) >> 63;
    }
    else
    {
      LOBYTE(v6) = 0;
      v4 = 0;
      v5 = (char *)&s1;
    }
    if ( !v5 || (_BYTE)v6 )
    {
      v4 = 0;
      if ( v5 )
        v4 = strlen(v5);
    }
    v7 = QT::QString::fromUtf8(ptr, v4, v5);
    QT::QStatusBar::showMessage(v3, (const QT::QString *)ptr, 0);
    if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
      free(ptr[0]);
    if ( v12 )
    {
      *(_QWORD *)&v13 = 0;
      v7 = qfree(v12, (const char *)ptr, v7);
    }
    if ( s )
    {
      *(_QWORD *)&v10 = 0;
      qfree(s, (const char *)ptr, v7);
    }
  }
  return v15 - __readfsqword(0x28u);
}
