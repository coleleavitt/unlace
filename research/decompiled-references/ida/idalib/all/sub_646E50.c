void __fastcall sub_646E50(_QWORD *a1)
{
  void *v1; // rax

  *a1 = off_2B371C0;
  v1 = (void *)a1[4];
  if ( v1 )
  {
    a1[5] = 0;
    qfree(v1);
  }
}
