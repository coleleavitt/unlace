__int64 __fastcall sub_2E33E0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, double a5)
{
  __int64 v5; // rbp
  __int64 result; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  QT::QWidget *v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rax

  v5 = 0;
  if ( !*(_BYTE *)(a1 + 64) )
    v5 = *(_QWORD *)(a1 + 56);
  sub_27ED20(v5, a2, a5, a3, a4);
  result = sub_2EDA50(a1, 1);
  v9 = (QT::QWidget *)result;
  if ( result )
  {
    result = sub_1EB590(v5, 1, v7, v8, a5);
    if ( (_DWORD)result == 1 )
    {
      if ( *(_QWORD *)(v5 + 888) )
      {
        result = *(unsigned int *)(v5 + 948);
        v10 = *(unsigned int *)(v5 + 952);
        if ( (_DWORD)result == 10 || (_DWORD)result == 6 || (_DWORD)result == 11 )
        {
          v10 &= 1u;
          if ( (_DWORD)v10 )
            return result;
        }
        else
        {
          result = (unsigned int)(result - 1);
          if ( (unsigned int)result > 1 )
            return result;
        }
        v11 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a2 + 128LL))(a2, 1, v10);
        if ( v11 != -1 )
          sub_39AE00(v9, v11);
        return QT::QWidget::update(v9);
      }
    }
  }
  return result;
}
