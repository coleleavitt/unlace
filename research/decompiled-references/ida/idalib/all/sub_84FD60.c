void __fastcall sub_84FD60(void **a1)
{
  void *v1; // rax

  v1 = *a1;
  if ( *a1 )
  {
    a1[1] = nullptr;
    qfree(v1);
  }
}
