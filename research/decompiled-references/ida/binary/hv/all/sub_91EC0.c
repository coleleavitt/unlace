void __fastcall sub_91EC0(_QWORD *a1)
{
  void *v2; // rdi

  *a1 = off_163F38;
  v2 = (void *)a1[3];
  if ( v2 )
  {
    a1[4] = 0;
    j__free(v2);
  }
  operator delete(a1, 0x48u);
}

