__int64 __fastcall copyline_watch_ah_t__::vfunc_4(__int64 a1, QT::QAbstractItemView *a2)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  const char *v4; // rbp
  unsigned __int64 v5; // rdx
  size_t v6; // rax
  double v7; // xmm0_8
  const char *v9; // [rsp+0h] [rbp-58h] BYREF
  __int128 v10; // [rsp+8h] [rbp-50h]
  void *ptr[7]; // [rsp+20h] [rbp-38h] BYREF

  ptr[3] = (void *)__readfsqword(0x28u);
  v2 = sub_3E0310(a2);
  if ( !v2 )
    return 0;
  v9 = nullptr;
  v10 = 0;
  sub_3DC3E0(&v9, v2);
  v3 = QT::QGuiApplication::clipboard((QT::QGuiApplication *)&v9);
  if ( (_QWORD)v10 )
  {
    v6 = v10 - 1;
    v4 = v9;
    v5 = (unsigned __int64)(v10 - 1) >> 63;
    if ( !v9 )
    {
LABEL_12:
      v6 = 0;
      if ( v4 )
        v6 = strlen(v4);
      goto LABEL_5;
    }
  }
  else
  {
    v4 = &s1;
    LOBYTE(v5) = 0;
    v6 = 0;
    if ( !&s1 )
      goto LABEL_12;
  }
  if ( (_BYTE)v5 )
    goto LABEL_12;
LABEL_5:
  v7 = QT::QString::fromUtf8(ptr, v6, v4);
  QT::QClipboard::setText(v3, ptr, 0);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  if ( v9 )
  {
    *(_QWORD *)&v10 = 0;
    qfree(v9, (const char *)ptr, v7);
  }
  return 0;
}
