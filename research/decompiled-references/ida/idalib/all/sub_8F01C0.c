void __fastcall sub_8F01C0(_QWORD *a1)
{
  bool v1; // zf
  void *v3; // rdi
  void *v4; // rdi

  v1 = a1[18] == 0;
  *a1 = &off_2B3FE00;
  if ( !v1 || a1[19] || a1[23] )
  {
    if ( !under_debugger )
      interr(2606);
    BUG();
  }
  v3 = (void *)a1[20];
  if ( v3 )
  {
    a1[21] = 0;
    qfree(v3);
  }
  v4 = (void *)a1[3];
  a1[1] = 0;
  *a1 = &unk_2BFC820;
  a1[2] = 0;
  if ( v4 )
  {
    a1[4] = 0;
    qfree(v4);
  }
  operator delete(a1, 0xC0u);
}
