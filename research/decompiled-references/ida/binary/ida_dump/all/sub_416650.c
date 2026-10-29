void __fastcall sub_416650(__int64 a1)
{
  void *v1; // rdi

  v1 = *(void **)(a1 + 8);
  if ( v1 )
    operator delete(v1, 0x10u);
}
