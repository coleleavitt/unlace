void __fastcall sub_46B0C0(_QWORD *a1)
{
  void *v1; // rax

  *a1 = &off_2B016E8;
  v1 = (void *)a1[5];
  if ( v1 )
  {
    a1[6] = 0;
    qfree(v1);
  }
}

