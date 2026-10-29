void __fastcall sub_1666AD0(__int64 a1)
{
  void **v1; // rbx

  v1 = *(void ***)(a1 + 2008);
  if ( v1 )
  {
    if ( *v1 )
      operator delete(*v1);
    operator delete(v1, 0x18u);
  }
  *(_QWORD *)(a1 + 2008) = 0;
}
