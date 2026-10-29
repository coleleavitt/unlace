void __fastcall sub_586DB0(_QWORD *a1)
{
  void *v1; // rax

  a1[1] = 0;
  *a1 = &off_2B05298;
  v1 = (void *)a1[3];
  if ( v1 )
  {
    a1[4] = 0;
    qfree(v1);
  }
}

