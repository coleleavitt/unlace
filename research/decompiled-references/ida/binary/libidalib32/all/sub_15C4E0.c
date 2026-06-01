void __fastcall sub_15C4E0(__int64 a1)
{
  void *v1; // rbp
  bool v2; // zf
  __int64 module_data; // rax
  void *v4; // rbp

  v1 = *(void **)(a1 + 128);
  if ( v1 )
  {
    navstack_t_deregister_live();
    operator delete(v1, 8u);
  }
  v2 = *(_BYTE *)(a1 + 136) == 0;
  *(_QWORD *)(a1 + 128) = 0;
  if ( !v2 )
  {
    module_data = get_module_data();
    v4 = (void *)module_data;
    if ( module_data )
    {
      sub_142290(module_data);
      operator delete(v4, 0x3A8u);
    }
    clr_module_data();
  }
  if ( *(_QWORD *)(a1 + 104) )
  {
    *(_QWORD *)(a1 + 112) = 0;
    qfree();
  }
  if ( *(_QWORD *)(a1 + 40) )
  {
    qfree();
    *(_QWORD *)(a1 + 40) = 0;
  }
  if ( *(_QWORD *)(a1 + 48) )
  {
    *(_QWORD *)(a1 + 56) = 0;
    qfree();
    *(_QWORD *)(a1 + 48) = 0;
    *(_QWORD *)(a1 + 64) = 0;
  }
  if ( *(_QWORD *)(a1 + 72) )
  {
    *(_QWORD *)(a1 + 80) = 0;
    qfree();
  }
  if ( *(_QWORD *)(a1 + 48) )
  {
    *(_QWORD *)(a1 + 56) = 0;
    qfree();
  }
  if ( *(_QWORD *)(a1 + 40) )
    qfree();
}

