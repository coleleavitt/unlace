unsigned __int64 __fastcall sub_1B56A0(__int64 a1)
{
  int v1; // eax
  _QWORD *v2; // rbx
  void (__fastcall *v3)(_QWORD *, _QWORD **); // rbp
  __int64 v5; // r15
  __int64 v6; // r13
  const char *v7; // r14
  _QWORD *v8; // rax
  _QWORD *v9; // [rsp+0h] [rbp-58h] BYREF
  __int128 v10; // [rsp+8h] [rbp-50h]
  unsigned __int64 v11; // [rsp+18h] [rbp-40h]

  v11 = __readfsqword(0x28u);
  v1 = QT::QTabWidget::currentIndex(*(QT::QTabWidget **)(*(_QWORD *)(a1 + 256) + 40LL));
  v2 = QT::QCoreApplication::self + 2;
  v3 = *(void (__fastcall **)(_QWORD *, _QWORD **))(QT::QCoreApplication::self[2] + 136LL);
  v9 = nullptr;
  v10 = 0;
  if ( v1 )
  {
    if ( v1 != 4 )
      goto LABEL_3;
    v5 = 36;
    v6 = 35;
    v7 = "/user-guide/disassembler/graph-view";
  }
  else
  {
    v5 = 44;
    v6 = 43;
    v7 = "/user-guide/user-interface/menu-bar/options";
  }
  v8 = (_QWORD *)qvector_reserve(&v9, 0, v5, 1);
  v9 = v8;
  *(_QWORD *)&v10 = v5;
  *v8 = *(_QWORD *)v7;
  *(_QWORD *)((char *)v8 + v6 - 8) = *(_QWORD *)&v7[v6 - 8];
  qmemcpy(
    (void *)((unsigned __int64)(v8 + 1) & 0xFFFFFFFFFFFFFFF8LL),
    (const void *)(v7 - ((const char *)v8 - ((unsigned __int64)(v8 + 1) & 0xFFFFFFFFFFFFFFF8LL))),
    8LL * (((unsigned int)v6 + (_DWORD)v8 - (((_DWORD)v8 + 8) & 0xFFFFFFF8)) >> 3));
  *((_BYTE *)v9 + v6) = 0;
LABEL_3:
  v3(v2, &v9);
  if ( v9 )
  {
    *(_QWORD *)&v10 = 0;
    qfree(v9, (const char *)&v9);
  }
  return v11 - __readfsqword(0x28u);
}
