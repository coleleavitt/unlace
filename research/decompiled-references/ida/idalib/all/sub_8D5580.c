void __fastcall sub_8D5580(_QWORD *a1)
{
  void *v1; // rax

  *a1 = &off_2B3E0F8;
  v1 = (void *)a1[2];
  if ( v1 )
  {
    a1[3] = 0;
    qfree(v1);
  }
}
