__int64 __fastcall sub_1F73F0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, double a5)
{
  __int64 v5; // r13
  _DWORD *v6; // rbx
  __int64 result; // rax
  double v9; // xmm1_8
  int v10; // eax
  int v11; // eax
  __int64 v12; // rdi
  bool v13; // zf

  if ( !*(_QWORD *)(a1 + 424) )
    goto LABEL_25;
  v5 = a1;
  v6 = (_DWORD *)a2;
  *(_DWORD *)a2 = *(_DWORD *)(a1 + 416);
  result = sub_47B6A0(QT::QCoreApplication::self, a3);
  *(_DWORD *)(a2 + 24) = result;
  if ( a3 )
  {
    a2 = a3;
    v6[7] = sub_47B770(QT::QCoreApplication::self, a3);
    QT::QEventPoint::position(*(QT::QEventPoint **)(a3 + 48));
    *(_QWORD *)&v9 = *(_QWORD *)&a5 & 0x8000000000000000LL | 0x3FE0000000000000LL;
    a5 = a5 + v9;
    v6[1] = (int)a5;
    a1 = *(_QWORD *)(a3 + 48);
    QT::QEventPoint::position((QT::QEventPoint *)a1);
    v6[2] = (int)(v9 + COERCE_DOUBLE(*(_QWORD *)&v9 & 0x8000000000000000LL | 0x3FE0000000000000LL));
    if ( !*(_BYTE *)(v5 + 968) )
    {
      a1 = 0;
LABEL_9:
      a2 = (__int64)(v6 + 4);
      (*(void (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)a1 + 528LL))(a1, v6 + 4);
      if ( !*(_BYTE *)(v5 + 968) )
      {
        v12 = 0;
        return (*(__int64 (__fastcall **)(__int64, _DWORD *, __int64))(*(_QWORD *)v12 + 536LL))(v12, v6 + 8, a3);
      }
      if ( *(_QWORD *)(v5 + 424) )
      {
        v11 = *(_DWORD *)(v5 + 416);
        if ( v11 == 2 )
        {
          v12 = *(_QWORD *)(v5 + 896);
        }
        else if ( v11 == 3 )
        {
          v12 = *(_QWORD *)(v5 + 904);
        }
        else
        {
          v12 = 0;
          if ( v11 == 1 )
            v12 = *(_QWORD *)(v5 + 888);
        }
        return (*(__int64 (__fastcall **)(__int64, _DWORD *, __int64))(*(_QWORD *)v12 + 536LL))(v12, v6 + 8, a3);
      }
      goto LABEL_25;
    }
    if ( *(_QWORD *)(v5 + 424) )
    {
      v10 = *(_DWORD *)(v5 + 416);
      if ( v10 == 2 )
      {
        a1 = *(_QWORD *)(v5 + 896);
      }
      else if ( v10 == 3 )
      {
        a1 = *(_QWORD *)(v5 + 904);
      }
      else
      {
        a1 = 0;
        if ( v10 == 1 )
          a1 = *(_QWORD *)(v5 + 888);
      }
      goto LABEL_9;
    }
LABEL_25:
    sub_1E69C0(a5, a1, a2, a3, a4);
    return sub_1F7610();
  }
  v13 = *(_DWORD *)a2 == 1;
  *(_DWORD *)(a2 + 28) = 0;
  *(_QWORD *)(a2 + 4) = -1;
  if ( v13 )
    *(_QWORD *)(a2 + 16) = -1;
  else
    *(_QWORD *)(a2 + 16) = 0;
  return result;
}
