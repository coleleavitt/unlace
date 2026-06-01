void __fastcall sub_365130(_QWORD *a1)
{
  void *v1; // rax

  *a1 = &off_2AFC830;
  v1 = (void *)a1[1];
  if ( v1 )
  {
    a1[2] = 0;
    qfree(v1);
  }
}

