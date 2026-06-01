void __fastcall sub_6999C0(__int64 a1, __int64 a2)
{
  void *v2; // rbx

  v2 = *(void **)(a1 + 16);
  if ( v2 )
  {
    sub_698F50(*(_QWORD **)(a1 + 16), a2);
    operator delete(v2, 0xC0u);
  }
}

