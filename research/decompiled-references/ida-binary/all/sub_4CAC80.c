__int64 *__fastcall sub_4CAC80(QT::QWidget *a1, __int64 a2, int a3, double a4)
{
  unsigned int v6; // ebp
  __int64 *v7; // rax
  __int64 v8; // r13
  __int64 v9; // rcx
  int v10; // eax
  __int64 *v11; // rbx
  void (__fastcall *v12)(__int64 *, _QWORD, __int64); // r13
  unsigned int v13; // eax
  __int64 v14; // rsi
  __int64 v15; // rax
  int v16; // eax
  unsigned int v18; // eax
  __int64 v19; // rax
  int v20; // eax
  __int64 v21; // rcx
  int v22; // [rsp+Ch] [rbp-6Ch]
  __int64 v23; // [rsp+10h] [rbp-68h]
  __int64 v24; // [rsp+10h] [rbp-68h]
  void (__fastcall *v25)(__int64 *, _QWORD, __int64); // [rsp+10h] [rbp-68h]
  __int64 v26; // [rsp+10h] [rbp-68h]
  __int64 v27; // [rsp+18h] [rbp-60h]
  _QWORD v28[9]; // [rsp+30h] [rbp-48h] BYREF

  v28[1] = __readfsqword(0x28u);
  v6 = 1 - (((a3 & 0xA) == 0) - 1);
  v22 = a3 & 0xC;
  v7 = *((__int64 **)a1 + 5);
  v8 = *v7;
  if ( *v7 && (v9 = sub_4CE740(*v7)) != 0 && (v10 = *(_DWORD *)(v8 + 40), v10 != 2) )
  {
    if ( v10 == 1 )
    {
      v26 = v9;
      v20 = QT::QSplitter::orientation(*(QT::QSplitter **)(v8 + 104));
      v21 = v26;
      if ( v6 == v20 )
        v21 = v8;
      v11 = (__int64 *)v21;
    }
    else
    {
      v23 = v9;
      v11 = (__int64 *)operator new(0x70u);
      sub_4D0770((QT::QWidget *)v11);
      QT::QSplitter::setOrientation(v11[13], v6);
      v27 = v23;
      LODWORD(v23) = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v23 + 448LL))(v23, v8);
      (*(void (__fastcall **)(__int64 *, _QWORD, __int64))(*v11 + 472))(v11, (unsigned int)v23, v8);
      (*(void (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v27 + 472LL))(v27, (unsigned int)v23, v11);
    }
  }
  else
  {
    v11 = (__int64 *)operator new(0x70u);
    sub_4D0770((QT::QWidget *)v11);
    QT::QSplitter::setOrientation(v11[13], v6);
    if ( v8 )
    {
      if ( *(_DWORD *)(v8 + 40) == 1 && (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v8 + 464LL))(v8) == 1 )
      {
        v24 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v8 + 456LL))(v8, 0);
        v12 = *(void (__fastcall **)(__int64 *, _QWORD, __int64))(*v11 + 472);
        v13 = (*(__int64 (__fastcall **)(__int64 *))(*v11 + 512))(v11);
        v12(v11, v13, v24);
      }
      else
      {
        v25 = *(void (__fastcall **)(__int64 *, _QWORD, __int64))(*v11 + 472);
        v18 = (*(__int64 (__fastcall **)(__int64 *))(*v11 + 512))(v11);
        v25(v11, v18, v8);
      }
    }
    QT::QWidget::setParent((QT::QWidget *)v11, a1);
    **((_QWORD **)a1 + 5) = v11;
    sub_4C5F10(a1);
  }
  v14 = 0;
  *((_BYTE *)v11 + 44) = *(_BYTE *)(a2 + 44);
  if ( v22 )
    v14 = (*(unsigned int (__fastcall **)(__int64 *, _QWORD))(*v11 + 464))(v11, 0);
  v15 = *v11;
  ++dword_8D1D3C;
  (*(void (__fastcall **)(__int64 *, __int64, __int64))(v15 + 472))(v11, v14, a2);
  if ( *((_DWORD *)v11 + 10) == 1 )
    sub_4CA670((__int64)a1, (QT::QSplitter **)v11, a2, v6, a3);
  v28[0] = DockArea::enforceVisibility;
  sub_4CF2F0(v28);
  v16 = dword_8D1D3C;
  if ( dword_8D1D3C <= 0 || (--dword_8D1D3C, v16 == 1) )
  {
    v19 = sub_47A690((__int64)QT::QCoreApplication::self);
    if ( v19 )
      sub_4C9440(v19, a4);
  }
  return v11;
}
