void __fastcall sub_60D4A0(_QWORD *a1)
{
  void *v1; // rax

  *a1 = &off_2B08F60;
  v1 = (void *)a1[10];
  if ( v1 )
  {
    a1[11] = 0;
    qfree(v1);
  }
}

