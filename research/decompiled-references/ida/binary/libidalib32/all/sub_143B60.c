__int64 __fastcall sub_143B60(_QWORD *a1)
{
  __int64 v2; // rdi

  *a1 = &unk_23B3B0;
  if ( a1 != (_QWORD *)qword_2553C0 )
  {
    if ( !under_debugger )
      interr();
    BUG();
  }
  v2 = a1[6];
  qword_2553C0 = 0;
  if ( v2 )
  {
    a1[7] = 0;
    qfree();
  }
  return sub_1743E0(a1 + 1);
}

