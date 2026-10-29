void __fastcall sub_7A99F0(_QWORD *a1)
{
  void *v1; // rax

  v1 = (void *)a1[1];
  if ( v1 )
  {
    a1[2] = 0;
    qfree(v1);
  }
}

