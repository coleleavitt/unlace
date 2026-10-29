void __fastcall sub_8B1D00(_QWORD *a1)
{
  void *v1; // rax

  *a1 = &off_2B14A28;
  v1 = (void *)a1[2];
  if ( v1 )
  {
    a1[3] = 0;
    qfree(v1);
  }
}

