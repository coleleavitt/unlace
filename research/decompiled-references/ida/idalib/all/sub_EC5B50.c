void __fastcall sub_EC5B50(void **a1)
{
  unsigned int *v1; // rbx

  v1 = (unsigned int *)*a1;
  if ( *a1 )
  {
    operator delete(*(_QWORD *)v1, 16LL * v1[4], 8);
    operator delete(v1, 0x18u);
  }
}
