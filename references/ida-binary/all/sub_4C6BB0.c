__int64 __fastcall sub_4C6BB0(__int64 a1, __int64 a2, double a3)
{
  __int64 v3; // rax
  __int64 v4; // r15
  __int64 v5; // rax
  __int64 v6; // r14
  __int64 v7; // rax
  __int64 v8; // r12
  int v9; // ebp
  __int64 v10; // rax
  __int64 (__fastcall ***v11)(_QWORD); // rbx
  __int64 result; // rax
  __int64 (__fastcall **v13)(); // [rsp+0h] [rbp-68h] BYREF
  __int64 v14; // [rsp+8h] [rbp-60h]
  __int64 v15; // [rsp+10h] [rbp-58h]
  char v16; // [rsp+18h] [rbp-50h]
  unsigned __int64 v17; // [rsp+28h] [rbp-40h]

  v17 = __readfsqword(0x28u);
  if ( !*(_QWORD *)(a2 + 16) )
    return 0;
  if ( **(_QWORD **)(a1 + 40) )
  {
    v14 = a2;
    v13 = DockArea::findDockView;
    v15 = 0;
    v16 = 1;
    if ( (unsigned int)sub_4CF2F0(&v13) == 1 )
      return v15;
    v3 = *(_QWORD *)(a2 + 16);
    v4 = *(_QWORD *)(a2 + 8);
    if ( (-v3 < 0 || v3 == 0) && v3 > 0 )
    {
      v5 = 2 * v3;
      v6 = v4 + v5;
      v7 = QT::QtPrivate::qustrchr(v5 >> 1, *(_QWORD *)(a2 + 8), 44);
      if ( v6 != v7 && v7 - v4 != -2 )
      {
        v13 = DockArea::findDockView;
        v14 = a2;
        v15 = 0;
        v16 = 0;
        if ( (unsigned int)sub_4CF2F0(&v13) == 1 )
          return v15;
      }
    }
  }
  v8 = *(_QWORD *)(a1 + 8);
  if ( *(__int64 *)(v8 + 40) <= 0 )
    return 0;
  v9 = 0;
  v10 = 0;
  while ( 1 )
  {
    v11 = *(__int64 (__fastcall ****)(_QWORD))(*(_QWORD *)(v8 + 32) + 8 * v10);
    if ( (_UNKNOWN **)(**v11)(v11) == &off_898320 )
    {
      result = sub_4C6BB0(v11, a2, a3);
      if ( result )
        break;
    }
    v10 = ++v9;
    if ( v9 >= *(_QWORD *)(v8 + 40) )
      return 0;
  }
  return result;
}
