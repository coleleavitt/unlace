void __fastcall sub_1C5280(int a1, void *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  _QWORD *func; // rax

  if ( a1 )
  {
    if ( a1 == 1 )
    {
      v4 = **(_QWORD **)(a4 + 8);
      func = (_QWORD *)get_func(v4);
      if ( func )
      {
        if ( v4 == *func )
          mark_builtin_widgets(8, 0, 1);
      }
    }
  }
  else if ( a2 )
  {
    operator delete(a2, 0x10u);
  }
}
