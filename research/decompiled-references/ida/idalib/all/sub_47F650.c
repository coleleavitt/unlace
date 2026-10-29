void __fastcall sub_47F650(_QWORD *a1)
{
  void *v1; // rax

  *a1 = &off_2B2B6A8;
  v1 = (void *)a1[5];
  if ( v1 )
  {
    a1[6] = 0;
    qfree(v1);
  }
}
