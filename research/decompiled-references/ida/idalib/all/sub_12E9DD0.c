void __fastcall sub_12E9DD0(__int64 a1, __int64 a2)
{
  void *v2; // rbx

  v2 = *(void **)(a1 + 144);
  *(_QWORD *)(a1 + 144) = a2;
  if ( v2 )
  {
    sub_1602330(v2);
    operator delete(v2, 0x4420u);
  }
}
