void __fastcall sub_155AD0(_QWORD *a1)
{
  *a1 = &off_235170;
  merge_handler_dtr();
  if ( a1[12] )
  {
    a1[13] = 0;
    qfree();
  }
  if ( a1[2] )
  {
    a1[3] = 0;
    qfree();
  }
  operator delete(a1, 0x98u);
}

