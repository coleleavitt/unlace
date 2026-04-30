__int64 __fastcall hvui_progressor_t__::vfunc_1(__int64 a1, const char *a2, __int64 a3)
{
  char v5; // cl
  __int64 v6; // rax
  __int64 v7; // rdx
  bool v8; // zf
  __int64 v9; // rdx
  __int64 v10; // rax

  if ( !sub_426230(a1, a2) )
    return 0;
  if ( (unsigned __int8)a2 > 7u )
  {
    if ( (_BYTE)a2 != 8 )
      return 0;
    v5 = *(_BYTE *)(a1 + 24);
    a3 += *(_QWORD *)(a1 + 16);
    v6 = 1000;
    *(_QWORD *)(a1 + 16) = a3;
    if ( v5 != 5 )
    {
      v6 = 2;
      if ( v5 != 6 )
        v6 = 0x8000;
    }
    if ( a3 < v6 )
      return 0;
LABEL_12:
    pretty_print_size(a1 + 25, 8, a3);
    sub_456EB0(a1);
    return 0;
  }
  if ( (unsigned __int8)a2 > 1u )
  {
    v10 = 1000;
    if ( (_BYTE)a2 != 5 )
    {
      v10 = 2;
      if ( (_BYTE)a2 != 6 )
        v10 = 0x8000;
    }
    if ( a3 < v10 )
      return 0;
    *(_BYTE *)(a1 + 24) = (_BYTE)a2;
    *(_QWORD *)(a1 + 16) = a3;
    *(_QWORD *)(a1 + 8) = 0;
    goto LABEL_12;
  }
  if ( !(_BYTE)a2 )
  {
    v8 = *(_BYTE *)(a1 + 64) == 0;
    *(_QWORD *)(a1 + 48) = 0;
    *(_BYTE *)(a1 + 25) = 0;
    *(_OWORD *)(a1 + 8) = 0;
    if ( !v8 )
    {
      if ( QT::QCoreApplication::self )
        sub_541CC0(QT::QCoreApplication::self + 2);
      *(_BYTE *)(a1 + 64) = 0;
    }
    return 0;
  }
  if ( !*(_BYTE *)(a1 + 64) )
    return 0;
  v7 = a3 + *(_QWORD *)(a1 + 8);
  v8 = *(_BYTE *)(a1 + 24) == 5;
  *(_QWORD *)(a1 + 8) = v7;
  if ( v8 && __ROR8__(0x8F5C28F5C28F5C29LL * v7 + 0x51EB851EB851EB8LL, 2) > 0x28F5C28F5C28F5CuLL )
    return 0;
  sub_456EB0(a1);
  return (unsigned __int8)sub_541EF0(a1, a2, v9);
}
