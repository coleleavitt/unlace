void __fastcall declaration_compiler_t__dtor(__int64 a1)
{
  void *v1; // rbp

  v1 = *(void **)(a1 + 32);
  if ( v1 )
  {
    sub_6B4EB0(*(_QWORD *)(a1 + 32));
    operator delete(v1, 0x268u);
  }
  *(_QWORD *)(a1 + 32) = 0;
}

