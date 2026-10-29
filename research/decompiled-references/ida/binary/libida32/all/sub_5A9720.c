void __fastcall sub_5A9720(_QWORD *a1)
{
  void *v1; // rax

  *a1 = off_2B05C20;
  v1 = (void *)a1[3];
  if ( v1 )
  {
    a1[4] = 0;
    qfree(v1);
  }
}

