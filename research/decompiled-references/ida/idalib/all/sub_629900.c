void __fastcall sub_629900(_QWORD *a1)
{
  void *v1; // rax

  *a1 = &off_2B32F20;
  v1 = (void *)a1[10];
  if ( v1 )
  {
    a1[11] = 0;
    qfree(v1);
  }
}
