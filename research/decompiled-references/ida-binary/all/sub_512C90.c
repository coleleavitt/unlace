__int64 __fastcall sub_512C90(__int64 a1, _DWORD *a2, __int64 a3, double *a4, double a5, double a6)
{
  unsigned int v6; // r12d
  int v9; // esi
  unsigned __int64 v10; // rdx
  __int64 v11; // rdx
  bool v12; // zf
  __int64 v13; // rdx
  __int64 v14; // r13
  __int64 v16; // rdx
  double v17; // xmm0_8
  double v18; // xmm0_8
  int v21; // [rsp+1Ch] [rbp-5Ch] BYREF
  int v22; // [rsp+20h] [rbp-58h] BYREF
  __int64 v23; // [rsp+28h] [rbp-50h]
  unsigned __int64 v24; // [rsp+38h] [rbp-40h]

  v6 = 0;
  v24 = __readfsqword(0x28u);
  v9 = *(_DWORD *)a3;
  if ( *(_DWORD *)a3 != -1 )
  {
    v10 = *(unsigned int *)(a3 + 4);
    if ( (_DWORD)v10 != -1 && v10 < *(_QWORD *)(a1 + 64) )
    {
      v11 = 48 * v10;
      v12 = *(_QWORD *)(a1 + 56) + v11 == 0;
      v13 = *(_QWORD *)(a1 + 56) + v11;
      v14 = v13;
      if ( !v12 )
      {
        v22 = QT::QTextLayout::lineForTextPosition(*(QT::QTextLayout **)(v13 + 24), v9);
        v23 = v16;
        LOBYTE(v6) = v16 != 0;
        if ( v16 )
        {
          QT::QTextLine::position((QT::QTextLine *)&v22);
          a2[1] = (int)round((double)*(int *)(v14 + 40) + a6);
          v21 = *(_DWORD *)a3;
          v17 = QT::QTextLine::cursorToX(&v22, &v21, 0);
          v18 = round(v17 + a5);
          *a2 = (int)v18;
          if ( a4 )
          {
            QT::QTextLine::height((QT::QTextLine *)&v22);
            *a4 = v18;
          }
        }
      }
    }
  }
  return v6;
}
