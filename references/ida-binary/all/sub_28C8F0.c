__int64 __fastcall sub_28C8F0(__int64 a1)
{
  __int64 v1; // rbx
  _QWORD *func; // rax
  _QWORD *v4; // rbx

  v1 = *(_QWORD *)(a1 + 88);
  if ( !get_func(v1) )
    return 0;
  if ( !sub_28AB20(unk_8D0AD8, 150) )
    return 1;
  func = (_QWORD *)get_func(v1);
  v4 = func;
  if ( !func )
    return 0;
  sub_28E6F0(*func);
  del_func(*v4);
  return 1;
}
