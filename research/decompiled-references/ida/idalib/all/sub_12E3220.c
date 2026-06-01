void __fastcall sub_12E3220(__int64 a1)
{
  void *v1; // rbx

  v1 = *(void **)(a1 + 40);
  if ( v1 )
  {
    sub_12E2140(*(_QWORD *)(a1 + 40));
    operator delete(v1, 0x828u);
  }
}
