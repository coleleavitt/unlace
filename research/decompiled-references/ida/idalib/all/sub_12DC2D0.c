void __fastcall sub_12DC2D0(__int64 a1)
{
  void *v1; // rbx

  v1 = *(void **)(a1 + 16);
  if ( v1 )
  {
    sub_12DC1F0(*(_QWORD **)(a1 + 16));
    operator delete(v1, 0xD0u);
  }
}
