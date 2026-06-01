bool __fastcall sub_2D3720(__int64 a1, __int64 a2, __int64 a3, double a4)
{
  __int64 v6; // rax
  unsigned __int16 v8; // ax
  __int64 v9; // rax
  int v10; // ecx
  int v11; // esi
  int v12; // edx
  __int64 v13; // rdi
  int v14; // eax
  QT::QWidget *v15; // r14
  unsigned int v16; // r13d
  unsigned int v17; // r12d
  char v18; // al
  unsigned int v19; // edx
  unsigned int v20; // ecx
  int v21; // r12d
  int v22; // ebp
  _QWORD v23[9]; // [rsp+0h] [rbp-48h] BYREF

  v23[1] = __readfsqword(0x28u);
  if ( *(_QWORD *)(a1 + 16) != a2 )
  {
    v6 = *(_QWORD *)(a1 + 24);
    if ( !v6 || v6 != a2 )
      return 0;
  }
  v8 = *(_WORD *)(a3 + 8);
  if ( v8 > 0x1Fu )
  {
    if ( v8 == 82 )
    {
LABEL_25:
      if ( qword_8CCE70 && *(char *)(*((_QWORD *)qword_8CCE70 + 4) + 9LL) < 0 )
        QT::QWidget::close(qword_8CCE70);
    }
    return 0;
  }
  if ( v8 <= 1u )
    return 0;
  switch ( *(_WORD *)(a3 + 8) )
  {
    case 2:
    case 4:
      goto LABEL_20;
    case 5:
      if ( qword_8CCE70 && *(char *)(*((_QWORD *)qword_8CCE70 + 4) + 9LL) < 0 )
      {
        v9 = QT::QCursor::pos((QT::QCursor *)a1);
        v10 = *(_DWORD *)(a1 + 556);
        v11 = *(_DWORD *)(a1 + 560);
        v12 = v9;
        v13 = v9 >> 32;
        if ( v10 >= (int)v9 )
          v12 = v10;
        if ( v10 > (int)v9 )
          v10 = v9;
        if ( v12 - v10 > 4 )
          goto LABEL_20;
        v14 = HIDWORD(v9);
        if ( v11 >= (int)v13 )
          v14 = v11;
        if ( v11 > (int)v13 )
          v11 = v13;
        if ( v14 - v11 > 4 )
        {
LABEL_20:
          if ( qword_8CCE70 )
          {
            if ( *(char *)(*((_QWORD *)qword_8CCE70 + 4) + 9LL) < 0 )
              QT::QWidget::close(qword_8CCE70);
          }
        }
      }
      QT::QBasicTimer::start(a1 + 552, dword_8BA8F0, a1);
      return 0;
    case 6:
      v22 = *(_DWORD *)(a3 + 64);
      QT::QBasicTimer::stop((QT::QBasicTimer *)(a1 + 552));
      if ( (unsigned int)(v22 - 16777248) > 1 && v22 != 16777225 )
        goto LABEL_25;
      return 0;
    case 9:
      goto LABEL_25;
    case 0xB:
      if ( qword_8CCE70 && *(char *)(*((_QWORD *)qword_8CCE70 + 4) + 9LL) < 0 )
        QT::QWidget::close(qword_8CCE70);
      QT::QBasicTimer::stop((QT::QBasicTimer *)(a1 + 552));
      return 0;
    case 0x1F:
      v15 = qword_8CCE70;
      if ( !qword_8CCE70 || *(char *)(*((_QWORD *)qword_8CCE70 + 4) + 9LL) >= 0 )
        return 0;
      v16 = *(_DWORD *)(a3 + 88);
      v17 = *(_DWORD *)(a3 + 92);
      if ( !*(_QWORD *)(a3 + 88) )
        goto LABEL_34;
      break;
    default:
      return 0;
  }
  while ( 1 )
  {
    v23[0] = __PAIR64__(v17, v16);
    v18 = sub_2D3570((__int64)v15, a3, (__int64)v23, a4);
    v19 = v16;
    v20 = v17;
    v16 = v23[0];
    v17 = HIDWORD(v23[0]);
    if ( !v18 )
      break;
    if ( __PAIR64__(v20, v19) == v23[0] )
    {
      v21 = LODWORD(v23[0]) | HIDWORD(v23[0]);
      return (v21 | *(_DWORD *)(a1 + 564) & 1) == 0;
    }
    if ( !v23[0] )
    {
LABEL_34:
      v21 = 0;
      return (v21 | *(_DWORD *)(a1 + 564) & 1) == 0;
    }
  }
  v21 = v19 | v20;
  return (v21 | *(_DWORD *)(a1 + 564) & 1) == 0;
}
