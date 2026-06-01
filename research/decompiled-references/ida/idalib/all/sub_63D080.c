void __fastcall sub_63D080(_QWORD *a1)
{
  void *v2; // rdi

  if ( a1 )
  {
    v2 = (void *)a1[2];
    if ( v2 )
    {
      a1[3] = 0;
      qfree(v2);
    }
    operator delete(a1, 0x30u);
  }
}
