void __fastcall sub_91E10(_QWORD *a1)
{
  void *v1; // rax

  *a1 = off_163F38;
  v1 = (void *)a1[3];
  if ( v1 )
  {
    a1[4] = 0;
    j__free(v1);
  }
}

