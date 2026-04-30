void __fastcall sub_176BF0(void **a1)
{
  void *v1; // rdi
  void (*v2)(void); // rax

  v1 = *a1;
  if ( v1 )
  {
    v2 = *(void (**)(void))(*(_QWORD *)v1 + 8LL);
    if ( (char *)v2 == (char *)renderer_model_reload_strategy_t__::vfunc_1 )
      operator delete(v1, 0x18u);
    else
      v2();
  }
}
