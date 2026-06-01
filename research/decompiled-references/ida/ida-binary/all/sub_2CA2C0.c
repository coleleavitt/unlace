void __fastcall sub_2CA2C0(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, double a5)
{
  QT::QAbstractScrollArea *v6; // rbp
  __int64 v7; // rax
  __int64 v8; // r12
  int v9; // ebp
  int v10; // eax
  int v11; // ebp
  int v12; // edi
  int v13; // ecx
  double v14; // [rsp+8h] [rbp-20h]

  *((_BYTE *)a1 + 16) = (_DWORD)a2 == -1;
  if ( (_DWORD)a2 != -1 )
  {
LABEL_2:
    *((_DWORD *)a1 + 3) = a2;
    return;
  }
  v6 = (QT::QAbstractScrollArea *)*a1;
  if ( (unsigned int)sub_1EB590(*a1, a2, a3, a4, a5) == 1 && *((_QWORD *)v6 + 111) )
  {
    v7 = QT::QAbstractScrollArea::viewport((QT::QAbstractScrollArea *)*a1);
    v14 = (double)(*(_DWORD *)(*(_QWORD *)(v7 + 32) + 28LL) + 1 - *(_DWORD *)(*(_QWORD *)(v7 + 32) + 20LL));
    sub_2855D0(*(_QWORD *)(*a1 + 888LL));
    v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a1 + 720LL))(*a1, 0);
    v9 = (int)(v14 / a5) - sub_2CA210(*a1, v8, a5);
    v10 = sub_2C9780(a1, v8);
    v11 = v9 - 4;
    v12 = *((_DWORD *)a1 + 2);
    v13 = v10 + 1;
    if ( *((_BYTE *)a1 + 28) )
    {
      v13 += v12;
      --v11;
    }
    LODWORD(a2) = (v11 / v13) & 0xFFFFFFFD;
    if ( v12 != 1 )
      LODWORD(a2) = v11 / v13;
    if ( !(_DWORD)a2 )
      LODWORD(a2) = 1;
    goto LABEL_2;
  }
}
