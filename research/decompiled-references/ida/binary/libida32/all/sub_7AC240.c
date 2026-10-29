void __fastcall sub_7AC240(_QWORD *a1)
{
  void *v2; // rdi

  *a1 = &off_2B10B60;
  a1[8] = 0;
  a1[10] = 0;
  sub_7AC180(a1, -1);
  v2 = (void *)a1[5];
  if ( v2 )
  {
    a1[6] = 0;
    qfree(v2);
  }
  operator delete(a1, 0x68u);
}

