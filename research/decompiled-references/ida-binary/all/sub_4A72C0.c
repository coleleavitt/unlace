unsigned __int64 __fastcall sub_4A72C0(__int64 a1, QT::QAbstractScrollArea *a2)
{
  int v2; // ebp
  int v3; // r13d
  int v4; // ebx
  const char *v5; // rbp
  unsigned __int64 v6; // r14
  __int64 v7; // rdx
  unsigned __int64 v8; // rax
  char *v9; // rsi
  __int64 v10; // rbx
  __int64 v11; // r13
  __int64 v12; // r14
  QT::QStatusBar *v13; // rbx
  size_t v14; // rdx
  char *v15; // r12
  size_t v16; // rax
  double v17; // xmm0_8
  __int64 v19; // rax
  _DWORD v20[4]; // [rsp+0h] [rbp-A8h] BYREF
  __int64 v21; // [rsp+10h] [rbp-98h]
  char *s; // [rsp+20h] [rbp-88h] BYREF
  __int128 v23; // [rsp+28h] [rbp-80h]
  void *ptr; // [rsp+40h] [rbp-68h] BYREF
  int v25[4]; // [rsp+48h] [rbp-60h]
  int v26[2]; // [rsp+58h] [rbp-50h]
  int v27[2]; // [rsp+60h] [rbp-48h]
  int v28[4]; // [rsp+68h] [rbp-40h]
  int v29[2]; // [rsp+78h] [rbp-30h]

  *(_QWORD *)v29 = __readfsqword(0x28u);
  QT::QAbstractItemView::currentIndex((QT::QAbstractItemView *)v20);
  v2 = v20[0];
  if ( v20[0] < 0 || v20[1] < 0 || !v21 )
  {
    s = nullptr;
    v23 = 0;
    if ( (*(_BYTE *)(a1 + 1785) & 0x10) != 0 )
    {
      v8 = *((_QWORD *)&v23 + 1);
      v9 = s;
      v5 = nullptr;
      v11 = 0;
      v10 = 12;
      v12 = 11;
      goto LABEL_34;
    }
    goto LABEL_17;
  }
  if ( *(QT::QAbstractScrollArea **)(a1 + 2472) != a2 )
  {
    *(_OWORD *)v25 = 0;
    ptr = nullptr;
    *(_QWORD *)v26 = 0xFFFFFFFFLL;
    *(_QWORD *)v27 = 0;
    *(_OWORD *)v28 = 0;
    sub_496570(a2, (__int64)&ptr, 192);
    v3 = v26[1];
    v4 = v26[0];
    v5 = *(const char **)v27;
    v6 = *(_QWORD *)v28;
    if ( ptr )
    {
      *(_QWORD *)v25 = 0;
      qfree(ptr, (const char *)&ptr);
    }
    s = nullptr;
    v23 = 0;
    if ( v3 > 0 && v4 >= 0 )
      sub_169A50((__int64 *)&s, (__int64)"Line %d of %d", v4 + 1, v3);
    if ( v6 > 1 )
      sub_16FAA0((__int64 *)&s, (__int64)", %s", v5);
    goto LABEL_12;
  }
  LOBYTE(v16) = sub_4DF9A0(a1 + 104);
  if ( (_BYTE)v16 )
  {
    v19 = *(_QWORD *)(sub_4E07A0(a1 + 104, -2) + 16);
    s = nullptr;
    v23 = 0;
    if ( (int)v19 > 0 )
    {
      sub_169A50((__int64 *)&s, (__int64)"Line %d of %d", v2 + 1, v19);
      v5 = nullptr;
LABEL_12:
      v7 = v23;
      if ( (*(_BYTE *)(a1 + 1785) & 0x10) == 0 )
        goto LABEL_18;
      v8 = *((_QWORD *)&v23 + 1);
      v9 = s;
      if ( (_QWORD)v23 )
      {
        v10 = v23 + 11;
        v11 = v23 - 1;
        v12 = v23 + 10;
        if ( *((_QWORD *)&v23 + 1) >= (unsigned __int64)(v23 + 11) )
        {
LABEL_35:
          *(_QWORD *)&v23 = v10;
          v9[v12] = 0;
          qmemcpy(&s[v11], " (outdated)", 11);
          v7 = v23;
LABEL_18:
          v13 = *(QT::QStatusBar **)(a1 + 2088);
          if ( v7 )
          {
            v14 = v7 - 1;
            v15 = s;
            v16 = v14 >> 63;
          }
          else
          {
            LOBYTE(v16) = 0;
            v14 = 0;
            v15 = (char *)&s1;
          }
          goto LABEL_20;
        }
LABEL_15:
        s = (char *)qvector_reserve(&s, v9, v10, 1);
        v9 = s;
        goto LABEL_35;
      }
      v11 = 0;
      v10 = 12;
      v12 = 11;
LABEL_34:
      if ( v8 >= 0xC )
        goto LABEL_35;
      goto LABEL_15;
    }
    if ( (*(_BYTE *)(a1 + 1785) & 0x10) != 0 )
    {
      v8 = *((_QWORD *)&v23 + 1);
      v9 = nullptr;
      v10 = 12;
      v5 = nullptr;
      v12 = 11;
      v11 = 0;
      goto LABEL_34;
    }
LABEL_17:
    v7 = v23;
    v5 = nullptr;
    goto LABEL_18;
  }
  s = nullptr;
  v23 = 0;
  if ( (*(_BYTE *)(a1 + 1785) & 0x10) != 0 )
  {
    v12 = 11;
    v5 = nullptr;
    v11 = 0;
    v10 = 12;
    v9 = nullptr;
    goto LABEL_15;
  }
  v13 = *(QT::QStatusBar **)(a1 + 2088);
  v5 = nullptr;
  v14 = 0;
  v15 = (char *)&s1;
LABEL_20:
  if ( !v15 || (_BYTE)v16 )
  {
    v14 = 0;
    if ( v15 )
      v14 = strlen(v15);
  }
  v17 = QT::QString::fromUtf8(&ptr, v14, v15);
  QT::QStatusBar::showMessage(v13, (const QT::QString *)&ptr, 0);
  if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
    free(ptr);
  if ( s )
  {
    *(_QWORD *)&v23 = 0;
    v17 = qfree(s, (const char *)&ptr, v17);
  }
  if ( v5 )
    qfree(v5, (const char *)&ptr, v17);
  return *(_QWORD *)v29 - __readfsqword(0x28u);
}
