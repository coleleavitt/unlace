__int64 __fastcall copyloc_watch_ah_t__::vfunc_4(__int64 a1, QT::QAbstractItemView *a2)
{
  QT::QGuiApplication *v2; // rdi
  __int64 v3; // rax
  bool v4; // zf
  __int64 v5; // rbx
  unsigned __int64 v6; // rbp
  __int64 v7; // rbx
  const char *v8; // rbp
  unsigned __int64 v9; // rdx
  size_t v10; // rax
  double v11; // xmm0_8
  void *dest; // [rsp+0h] [rbp-58h] BYREF
  __int128 v14; // [rsp+8h] [rbp-50h]
  void *ptr[7]; // [rsp+20h] [rbp-38h] BYREF

  ptr[3] = (void *)__readfsqword(0x28u);
  v2 = a2;
  v3 = sub_3E0310(a2);
  if ( !v3 )
    return 0;
  v4 = *(_DWORD *)(v3 + 56) == 4;
  dest = nullptr;
  v5 = v3;
  v14 = 0;
  if ( !v4 )
  {
    v6 = *(_QWORD *)(v3 + 224);
    if ( v6 >= 2 )
    {
      dest = (void *)qvector_reserve(&dest, 0, *(_QWORD *)(v3 + 224), 1);
      *(_QWORD *)&v14 = v6;
      *((char *)dest + v6 - 1) = 0;
      v2 = (QT::QGuiApplication *)dest;
      memcpy(dest, *(const void **)(v5 + 216), v6 - 1);
    }
  }
  v7 = QT::QGuiApplication::clipboard(v2);
  if ( (_QWORD)v14 )
  {
    v10 = v14 - 1;
    v8 = (const char *)dest;
    v9 = (unsigned __int64)(v14 - 1) >> 63;
    if ( !dest )
    {
LABEL_15:
      v10 = 0;
      if ( v8 )
        v10 = strlen(v8);
      goto LABEL_8;
    }
  }
  else
  {
    v8 = &s1;
    LOBYTE(v9) = 0;
    v10 = 0;
    if ( !&s1 )
      goto LABEL_15;
  }
  if ( (_BYTE)v9 )
    goto LABEL_15;
LABEL_8:
  v11 = QT::QString::fromUtf8(ptr, v10, v8);
  QT::QClipboard::setText(v7, ptr, 0);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  if ( dest )
  {
    *(_QWORD *)&v14 = 0;
    qfree(dest, (const char *)ptr, v11);
  }
  return 0;
}
