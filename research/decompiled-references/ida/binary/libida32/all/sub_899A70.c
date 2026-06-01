void __fastcall sub_899A70(_QWORD *a1)
{
  bool v1; // zf

  v1 = a1[1] == 0;
  *a1 = &off_2B13FD8;
  if ( !v1 )
  {
    if ( !under_debugger )
      interr(2600);
    BUG();
  }
  operator delete(a1, 0x18u);
}

