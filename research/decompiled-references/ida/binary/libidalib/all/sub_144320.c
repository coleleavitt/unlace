void __fastcall sub_144320(_QWORD *a1)
{
  __int64 v2; // rdi

  *a1 = &unk_23C3B0;
  if ( a1 != (_QWORD *)qword_256580 )
  {
    if ( !under_debugger )
      interr();
    BUG();
  }
  v2 = a1[6];
  qword_256580 = 0;
  if ( v2 )
  {
    a1[7] = 0;
    qfree();
  }
  sub_174EE0(a1 + 1);
  operator delete(a1, 0x58u);
}

