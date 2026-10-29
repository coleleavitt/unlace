void __fastcall sub_6CFAA0(_QWORD *a1)
{
  void *v1; // rbp

  v1 = (void *)a1[2];
  if ( v1 )
  {
    operator delete();
    operator delete();
    operator delete(v1, 0x40u);
  }
  operator delete(a1, 0x18u);
}

