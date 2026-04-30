unsigned __int64 __fastcall sub_523AF0(QT::QAbstractScrollArea *this)
{
  __int64 v1; // rax
  __int64 (__fastcall *v2)(__int64); // rax
  QT::QStatusBar *v3; // rbp
  __int64 v4; // r12
  const char *v5; // rdx
  __int64 v6; // rbx
  __int64 v7; // r13
  unsigned __int64 v8; // r12
  char *v9; // rsi
  size_t v10; // rax
  char *v11; // rbx
  unsigned __int64 v12; // rdx
  double v13; // xmm0_8
  char *v15; // rsi
  __int64 v16; // r13
  char *s; // [rsp+10h] [rbp-A8h] BYREF
  int v18[4]; // [rsp+18h] [rbp-A0h]
  void *ptr[4]; // [rsp+30h] [rbp-88h] BYREF
  int v20[2]; // [rsp+50h] [rbp-68h] BYREF
  int v21[4]; // [rsp+58h] [rbp-60h]
  int v22[2]; // [rsp+68h] [rbp-50h]
  int v23[2]; // [rsp+70h] [rbp-48h]
  int v24[4]; // [rsp+78h] [rbp-40h]
  unsigned __int64 v25; // [rsp+88h] [rbp-30h]

  v1 = *(_QWORD *)this;
  v25 = __readfsqword(0x28u);
  v2 = *(__int64 (__fastcall **)(__int64))(v1 + 1040);
  if ( v2 == sub_429F30 )
  {
    if ( *((_BYTE *)this + 2408) )
      return v25 - __readfsqword(0x28u);
    v3 = *((QT::QStatusBar **)this + 300);
  }
  else
  {
    v3 = (QT::QStatusBar *)v2((__int64)this);
  }
  if ( v3 )
  {
    *(_OWORD *)v18 = 0;
    s = nullptr;
    *(_QWORD *)v20 = 0;
    *(_QWORD *)v22 = 0xFFFFFFFFLL;
    *(_QWORD *)v23 = 0;
    *(_OWORD *)v21 = 0;
    *(_OWORD *)v24 = 0;
    sub_496570(this, (__int64)v20, 192);
    if ( v22[1] > 0 && v22[0] >= 0 )
      sub_169A50((__int64 *)&s, (__int64)"Line %d of %d", v22[0] + 1, v22[1]);
    if ( *(_QWORD *)v24 > 1u )
    {
      v4 = *(_QWORD *)v18;
      if ( *(_QWORD *)v18 <= 1u )
        goto LABEL_10;
      v15 = s;
      v16 = *(_QWORD *)v18 - 1LL;
      if ( *(_QWORD *)&v18[2] < (unsigned __int64)(*(_QWORD *)v18 + 2LL) )
      {
        s = (char *)qvector_reserve(&s, s, *(_QWORD *)v18 + 2LL, 1);
        v15 = s;
      }
      *(_QWORD *)v18 = v4 + 2;
      v15[v4 + 1] = 0;
      *(_WORD *)&s[v16] = 8236;
      if ( *(_QWORD *)v24 )
LABEL_10:
        v5 = *(const char **)v23;
      else
        v5 = &s1;
      sub_16FAA0((__int64 *)&s, (__int64)"%s", v5);
    }
    if ( (*((_BYTE *)this + 1985) & 0x10) != 0 )
    {
      v6 = *(_QWORD *)v18;
      if ( *(_QWORD *)v18 )
      {
        v7 = *(_QWORD *)v18 + 10LL;
        v8 = *(_QWORD *)v18 + 11LL;
        v6 = *(_QWORD *)v18 - 1LL;
      }
      else
      {
        v8 = 12;
        v7 = 11;
      }
      v9 = s;
      if ( *(_QWORD *)&v18[2] < v8 )
      {
        s = (char *)qvector_reserve(&s, s, v8, 1);
        v9 = s;
      }
      *(_QWORD *)v18 = v8;
      v9[v7] = 0;
      qmemcpy(&s[v6], " (outdated)", 11);
    }
    if ( *(_QWORD *)v18 )
    {
      v10 = *(_QWORD *)v18 - 1LL;
      v11 = s;
      v12 = (unsigned __int64)(*(_QWORD *)v18 - 1LL) >> 63;
    }
    else
    {
      LOBYTE(v12) = 0;
      v10 = 0;
      v11 = (char *)&s1;
    }
    if ( !v11 || (_BYTE)v12 )
    {
      v10 = 0;
      if ( v11 )
        v10 = strlen(v11);
    }
    v13 = QT::QString::fromUtf8(ptr, v10, v11);
    QT::QStatusBar::showMessage(v3, (const QT::QString *)ptr, 0);
    if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
      free(ptr[0]);
    if ( *(_QWORD *)v23 )
    {
      *(_QWORD *)v24 = 0;
      v13 = qfree(*(_QWORD *)v23, (const char *)ptr, v13);
    }
    if ( *(_QWORD *)v20 )
    {
      *(_QWORD *)v21 = 0;
      v13 = qfree(*(_QWORD *)v20, (const char *)ptr, v13);
    }
    if ( s )
    {
      *(_QWORD *)v18 = 0;
      qfree(s, (const char *)ptr, v13);
    }
  }
  return v25 - __readfsqword(0x28u);
}
