void __fastcall sub_80A6E0(_QWORD *a1)
{
  void *v1; // rax

  *a1 = &off_2B3C5F0;
  v1 = (void *)a1[2];
  if ( v1 )
  {
    a1[3] = 0;
    qfree(v1);
  }
}
