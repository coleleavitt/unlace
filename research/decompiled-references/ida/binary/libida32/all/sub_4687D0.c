void __fastcall sub_4687D0(_QWORD *a1)
{
  void *v1; // rax

  *a1 = &off_2AFFBB8;
  v1 = (void *)a1[6];
  if ( v1 )
  {
    a1[7] = 0;
    qfree(v1);
  }
}

