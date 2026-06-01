void __fastcall sub_FFFDE0(_QWORD *a1)
{
  void *v1; // rbx

  v1 = (void *)*a1;
  if ( *a1 )
  {
    sub_223C180(*a1);
    operator delete(v1, 0x18u);
  }
}
