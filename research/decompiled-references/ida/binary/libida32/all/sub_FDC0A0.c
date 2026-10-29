void __fastcall sub_FDC0A0(_QWORD *a1, __int64 a2)
{
  void *v2; // rbx

  v2 = (void *)*a1;
  if ( *a1 )
  {
    sub_2218440(*a1, a2);
    operator delete(v2, 0x18u);
  }
}

