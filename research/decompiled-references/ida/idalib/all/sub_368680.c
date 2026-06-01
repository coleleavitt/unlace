void __fastcall sub_368680(_QWORD *a1)
{
  void *v1; // rax

  *a1 = &off_2B25910;
  v1 = (void *)a1[1];
  if ( v1 )
  {
    a1[2] = 0;
    qfree(v1);
  }
}
