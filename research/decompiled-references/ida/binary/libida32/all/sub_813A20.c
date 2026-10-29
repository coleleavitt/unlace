void __fastcall sub_813A20(_QWORD *a1)
{
  void *v1; // rax

  *a1 = off_2B12D00;
  v1 = (void *)a1[3];
  if ( v1 )
  {
    a1[4] = 0;
    qfree(v1);
  }
}

