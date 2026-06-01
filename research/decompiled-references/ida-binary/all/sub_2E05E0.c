__int64 __fastcall sub_2E05E0(__int64 a1, __int64 a2, double a3)
{
  __int64 result; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdi
  int v7; // eax
  _QWORD *func; // rax
  __int64 v9; // rdi

  result = (*(__int64 (__fastcall **)(_QWORD *, __int64, __int64))(QT::QCoreApplication::self[2] + 40LL))(
             QT::QCoreApplication::self + 2,
             a1,
             a2);
  if ( (int)result <= 3 )
  {
    v6 = *(_QWORD *)(a2 + 232);
    if ( v6 )
    {
      v7 = *(_DWORD *)(a2 + 8);
      if ( v7 == 46 || v7 == 61 )
      {
        v9 = sub_1F3AB0(v6, 0, v4, v5, a3);
        if ( !v9
          || !(*(unsigned __int8 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v9 + 72LL))(
                v9,
                *(_QWORD *)(*(_QWORD *)(a2 + 232) + 728LL)) )
        {
          return 7;
        }
        return 3;
      }
      if ( v7 == 27 )
      {
        if ( !sub_1EC200(v6) )
        {
          func = (_QWORD *)get_func(*(_QWORD *)(a2 + 88));
          if ( !func || *func != *(_QWORD *)(a2 + 88) )
            return 7;
        }
        return 3;
      }
      if ( *(_QWORD *)(a2 + 688) )
        return 3;
    }
    return 7;
  }
  return result;
}
