__int64 __fastcall sub_2EDA70(__int64 a1, __int64 a2, __int64 a3, __int64 a4, double a5)
{
  int v5; // ebp
  int v6; // r12d
  __int64 result; // rax
  _DWORD *v8; // rdx

  if ( *(_BYTE *)(a1 + 64) )
  {
    sub_2ED710(a5, a1, a2, a3, a4);
    return sub_2EDAC0();
  }
  else
  {
    v5 = a2;
    v6 = a3;
    result = QT::QSplitter::indexOf((QT::QSplitter *)a1, *(QT::QWidget **)(a1 + 56));
    v8 = (_DWORD *)(a1 + 160);
    if ( v6 > (int)result )
    {
      v8 = (_DWORD *)(a1 + 164);
      result = (unsigned int)(*(_DWORD *)(*(_QWORD *)(a1 + 32) + 28LL)
                            + -3
                            - a2
                            - *(_DWORD *)(*(_QWORD *)(a1 + 32) + 20LL));
      v5 = *(_DWORD *)(*(_QWORD *)(a1 + 32) + 28LL) + -3 - a2 - *(_DWORD *)(*(_QWORD *)(a1 + 32) + 20LL);
    }
    *v8 = v5;
  }
  return result;
}
