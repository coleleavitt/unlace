unsigned __int64 __fastcall sub_515190(QT::QAbstractScrollArea *this, unsigned __int8 a2, int a3, double a4, double a5)
{
  int v6; // ebp
  unsigned int v7; // r15d
  __int64 v9; // rsi
  int i; // r12d
  __int64 v12; // rax
  __int64 v13; // rdi
  unsigned int CursorPosition; // eax
  _QWORD *v16; // rdi
  const char *v17; // rax
  unsigned int v18; // [rsp+8h] [rbp-50h]
  int v19[2]; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v20; // [rsp+18h] [rbp-40h]

  v6 = -a3;
  v7 = *((_DWORD *)this + 29);
  v20 = __readfsqword(0x28u);
  if ( a3 > 0 )
    v6 = a3;
  v9 = *((unsigned int *)this + 28);
  v18 = a2;
  if ( v6 > 0 )
  {
    for ( i = 0; v6 != i; ++i )
    {
      if ( (unsigned __int64)v7 >= *((_QWORD *)this + 8) )
        break;
      v12 = *((_QWORD *)this + 7) + 48LL * v7;
      if ( !v12 )
        break;
      v13 = *(_QWORD *)(v12 + 24);
      if ( !v13 )
        break;
      if ( a3 < 0 )
      {
        CursorPosition = QT::QTextLayout::previousCursorPosition(v13, v9, v18);
        if ( (_DWORD)v9 != CursorPosition )
        {
LABEL_10:
          v9 = CursorPosition;
          continue;
        }
        if ( !v7 )
          break;
        if ( (unsigned __int64)--v7 >= *((_QWORD *)this + 8) )
          break;
        v16 = (_QWORD *)(*((_QWORD *)this + 7) + 48LL * v7);
        if ( !v16 )
          break;
        v17 = sub_511DC0(v16, nullptr);
        v9 = (unsigned int)qustrlen(v17);
      }
      else
      {
        CursorPosition = QT::QTextLayout::nextCursorPosition(v13, v9, v18);
        if ( (_DWORD)v9 != CursorPosition )
          goto LABEL_10;
        if ( v7 >= (unsigned __int64)(*((_QWORD *)this + 8) - 1LL) )
          break;
        ++v7;
        v9 = 0;
      }
    }
  }
  v19[0] = v9;
  v19[1] = v7;
  sub_514C10(this, v19, 2, 1, a4, a5);
  return v20 - __readfsqword(0x28u);
}
