void __fastcall sub_7E74C0(_QWORD *a1)
{
  void *v1; // rax

  *a1 = &off_2B125C0;
  v1 = (void *)a1[2];
  if ( v1 )
  {
    a1[3] = 0;
    qfree(v1);
  }
}

