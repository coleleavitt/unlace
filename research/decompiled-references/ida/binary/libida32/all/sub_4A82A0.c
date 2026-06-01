void __fastcall sub_4A82A0(_QWORD *a1)
{
  void *v2; // rdi
  void *v3; // rdi

  v2 = (void *)a1[6];
  if ( v2 )
  {
    a1[7] = 0;
    qfree(v2);
  }
  v3 = (void *)a1[5];
  if ( v3 )
    qfree(v3);
}

