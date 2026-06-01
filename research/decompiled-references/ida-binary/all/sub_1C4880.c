void __fastcall sub_1C4880(int a1, void *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v5; // rbp

  if ( a1 )
  {
    if ( a1 == 1 )
    {
      v4 = **(_QWORD **)(a4 + 16);
      v5 = **(_QWORD **)(a4 + 8);
      mark_builtin_widgets(64, 0, 1);
      sub_27E9E0(v5, v4 - v5);
    }
  }
  else if ( a2 )
  {
    operator delete(a2, 0x10u);
  }
}
