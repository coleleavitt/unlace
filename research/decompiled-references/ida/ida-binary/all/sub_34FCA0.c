unsigned __int64 __fastcall sub_34FCA0(__int64 a1)
{
  int v1; // eax
  void (__fastcall *v2)(_QWORD *, _QWORD **); // rbp
  _QWORD *v3; // rbx
  __int64 v4; // r15
  __int64 v5; // r13
  const char *v6; // r14
  _QWORD *v7; // rax
  _QWORD *v9; // [rsp+0h] [rbp-58h] BYREF
  __int128 v10; // [rsp+8h] [rbp-50h]
  unsigned __int64 v11; // [rsp+18h] [rbp-40h]

  v11 = __readfsqword(0x28u);
  v1 = QT::QTabWidget::currentIndex(*(QT::QTabWidget **)(*(_QWORD *)(a1 + 56) + 16LL));
  v2 = *(void (__fastcall **)(_QWORD *, _QWORD **))(QT::QCoreApplication::self[2] + 136LL);
  if ( v1 == 5 )
  {
    v3 = QT::QCoreApplication::self + 2;
    v9 = nullptr;
    v4 = 36;
    v10 = 0;
    v5 = 35;
    v6 = "/user-guide/disassembler/graph-view";
    goto LABEL_5;
  }
  if ( v1 > 5 )
  {
    if ( v1 == 6 )
    {
      v3 = QT::QCoreApplication::self + 2;
      v9 = nullptr;
      v4 = 56;
      v10 = 0;
      v5 = 55;
      v6 = "/user-guide/user-interface/menu-bar/view/lumina-options";
      goto LABEL_5;
    }
  }
  else
  {
    if ( v1 == 4 )
    {
      v9 = nullptr;
      v3 = QT::QCoreApplication::self + 2;
      v4 = 57;
      v10 = 0;
      v5 = 56;
      v6 = "/user-guide/user-interface/menu-bar/view/browser-options";
LABEL_5:
      v7 = (_QWORD *)qvector_reserve(&v9, 0, v4, 1);
      v9 = v7;
      *(_QWORD *)&v10 = v4;
      *v7 = *(_QWORD *)v6;
      *(_QWORD *)((char *)v7 + v5 - 8) = *(_QWORD *)&v6[v5 - 8];
      qmemcpy(
        (void *)((unsigned __int64)(v7 + 1) & 0xFFFFFFFFFFFFFFF8LL),
        (const void *)(v6 - ((const char *)v7 - ((unsigned __int64)(v7 + 1) & 0xFFFFFFFFFFFFFFF8LL))),
        8LL * (((unsigned int)v5 + (_DWORD)v7 - (((_DWORD)v7 + 8) & 0xFFFFFFF8)) >> 3));
      *((_BYTE *)v9 + v5) = 0;
      goto LABEL_6;
    }
    if ( v1 >= 0 )
    {
      v3 = QT::QCoreApplication::self + 2;
      v9 = nullptr;
      v4 = 44;
      v10 = 0;
      v5 = 43;
      v6 = "/user-guide/user-interface/menu-bar/options";
      goto LABEL_5;
    }
  }
  v9 = nullptr;
  v3 = QT::QCoreApplication::self + 2;
  v10 = 0;
LABEL_6:
  v2(v3, &v9);
  if ( v9 )
  {
    *(_QWORD *)&v10 = 0;
    qfree(v9, (const char *)&v9);
  }
  return v11 - __readfsqword(0x28u);
}
