QT::QWidget *__fastcall sub_4CB350(__int64 a1, QT::QWidget *a2, QT::QWidget *a3, int a4, double a5)
{
  unsigned int v6; // r13d
  __int64 v7; // rax
  QT::QSplitter **v8; // rbx
  QT::QWidget *v9; // rbp
  unsigned int v10; // eax
  __int64 v11; // rax
  int v12; // eax
  __int64 v14; // rax
  __int64 v15; // rax
  unsigned int v16; // eax
  __int64 (__fastcall *v17)(__int64, QT::QWidget *); // rax
  int v18; // eax
  int v19; // r12d
  __int64 (__fastcall *v20)(__int64, QT::QWidget *); // rax
  int v21; // eax
  unsigned int v22; // [rsp+10h] [rbp-58h]
  void (__fastcall *v23)(QT::QWidget *, _QWORD, QT::QWidget *); // [rsp+10h] [rbp-58h]
  void (__fastcall *v24)(QT::QWidget *, _QWORD, QT::QWidget *); // [rsp+10h] [rbp-58h]
  int v26; // [rsp+1Ch] [rbp-4Ch]
  _QWORD v27[9]; // [rsp+20h] [rbp-48h] BYREF

  v27[1] = __readfsqword(0x28u);
  if ( a3 == a2 )
    return nullptr;
  v6 = 1 - (((a4 & 0xA) == 0) - 1);
  ++dword_8D1D3C;
  v26 = a4 & 0xC;
  v7 = sub_4CE740(a3);
  v8 = (QT::QSplitter **)v7;
  if ( v7 )
  {
    v9 = (QT::QWidget *)v7;
    if ( *(_DWORD *)(v7 + 40) == 1 )
      goto LABEL_4;
LABEL_5:
    v9 = (QT::QWidget *)operator new(0x70u);
    sub_4D0770(v9);
    *(_QWORD *)&a5 = _mm_sub_epi32(
                       _mm_add_epi32(
                         _mm_loadl_epi64((const __m128i *)(*((_QWORD *)a3 + 4) + 28LL)),
                         _mm_loadl_epi64((const __m128i *)&qword_5DBD90)),
                       _mm_loadl_epi64((const __m128i *)(*((_QWORD *)a3 + 4) + 20LL))).m128i_u64[0];
    *(double *)v27 = a5;
    QT::QWidget::resize(v9, v27);
    QT::QSplitter::setOrientation(*((_QWORD *)v9 + 13), v6);
    v22 = (*((__int64 (__fastcall **)(QT::QSplitter **, QT::QWidget *))*v8 + 56))(v8, a3);
    (*((void (__fastcall **)(QT::QSplitter **))*v8 + 61))(v8);
    (*((void (__fastcall **)(QT::QSplitter **, _QWORD, QT::QWidget *))*v8 + 59))(v8, v22, v9);
    (*((void (__fastcall **)(QT::QSplitter **, _QWORD))*v8 + 60))(v8, v22);
    v23 = *(void (__fastcall **)(QT::QWidget *, _QWORD, QT::QWidget *))(*(_QWORD *)v9 + 472LL);
    v10 = (*(__int64 (__fastcall **)(QT::QWidget *))(*(_QWORD *)v9 + 512LL))(v9);
    v23(v9, v10, a3);
    v11 = *(_QWORD *)v9;
    if ( v26 )
    {
      v24 = *(void (__fastcall **)(QT::QWidget *, _QWORD, QT::QWidget *))(v11 + 472);
      v16 = (*(__int64 (__fastcall **)(QT::QWidget *))(v11 + 512))(v9);
      v24(v9, v16, a2);
    }
    else
    {
      (*(void (__fastcall **)(QT::QWidget *, _QWORD, QT::QWidget *))(v11 + 472))(v9, 0, a2);
    }
    sub_4CA670(a1, (QT::QSplitter **)v9, (__int64)a2, v6, a4);
    (*(void (__fastcall **)(QT::QWidget *, __int64))(*(_QWORD *)a3 + 104LL))(a3, 1);
    if ( *((_DWORD *)v8 + 10) == 1 )
    {
      v15 = sub_4CE6E0(a3);
      if ( v15 )
      {
        if ( *(char *)(*(_QWORD *)(v15 + 32) + 9LL) < 0 )
          (*((void (__fastcall **)(QT::QSplitter **))*v8 + 62))(v8);
      }
    }
    sub_4C5F10((_QWORD *)a1);
    goto LABEL_9;
  }
  v8 = (QT::QSplitter **)operator new(0x70u);
  sub_4D0770((QT::QWidget *)v8);
  QT::QSplitter::setOrientation(v8[13], v6);
  (*((void (__fastcall **)(QT::QSplitter **, _QWORD, QT::QWidget *))*v8 + 59))(v8, 0, a3);
  v9 = (QT::QWidget *)v8;
  QT::QWidget::setParent((QT::QWidget *)v8, (QT::QWidget *)a1);
  **(_QWORD **)(a1 + 40) = v8;
  sub_4C5F10((_QWORD *)a1);
  if ( *((_DWORD *)v8 + 10) != 1 || !v8 )
    goto LABEL_5;
LABEL_4:
  if ( v6 != (unsigned int)QT::QSplitter::orientation(v8[13]) )
    goto LABEL_5;
  v17 = *((__int64 (__fastcall **)(__int64, QT::QWidget *))*v8 + 56);
  if ( v17 == sub_4C4740 )
    v18 = QT::QSplitter::indexOf(v8[13], a3);
  else
    v18 = v17((__int64)v8, a3);
  v19 = v18;
  v20 = *((__int64 (__fastcall **)(__int64, QT::QWidget *))*v8 + 56);
  if ( v20 == sub_4C4740 )
    v21 = QT::QSplitter::indexOf(v8[13], a2);
  else
    v21 = v20((__int64)v8, a2);
  (*((void (__fastcall **)(QT::QSplitter **, _QWORD, QT::QWidget *))*v8 + 59))(
    v8,
    v19 - (v19 > v21 && v21 >= 0) - ((unsigned int)(v26 == 0) - 1),
    a2);
  sub_4CA670(a1, v8, (__int64)a2, v6, a4);
LABEL_9:
  v12 = dword_8D1D3C;
  if ( dword_8D1D3C <= 0 || (--dword_8D1D3C, v12 == 1) )
  {
    v14 = sub_47A690((__int64)QT::QCoreApplication::self);
    if ( v14 )
      sub_4C9440(v14, a5);
  }
  return v9;
}
