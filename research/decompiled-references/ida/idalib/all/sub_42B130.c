void __fastcall sub_42B130(_QWORD *a1)
{
  void *v1; // rax

  *a1 = &off_2B283E8;
  v1 = (void *)a1[4];
  if ( v1 )
  {
    a1[5] = 0;
    qfree(v1);
  }
}
