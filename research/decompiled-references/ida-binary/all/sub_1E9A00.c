void __fastcall sub_1E9A00(__int64 a1, const char *a2)
{
  void *v2; // rbp
  bool v4; // zf
  __int64 v5; // rdi
  __int64 v6; // rdi
  __int64 v7; // rdi
  __int64 v8; // rdi
  __int64 v9; // rdi
  __int64 v10; // rdi
  __int64 module_data; // rax
  void *v12; // rbp

  v2 = *(void **)(a1 + 128);
  if ( v2 )
  {
    navstack_t_deregister_live(*(_QWORD *)(a1 + 128));
    a2 = (const char *)&word_10;
    operator delete(v2, 0x10u);
  }
  v4 = *(_BYTE *)(a1 + 136) == 0;
  *(_QWORD *)(a1 + 128) = 0;
  if ( !v4 )
  {
    module_data = get_module_data((unsigned int)dword_8CD7F0);
    v12 = (void *)module_data;
    if ( module_data )
    {
      sub_302A00(module_data);
      a2 = (_BYTE *)(elf_gnu_hash_bucket + 64);
      operator delete(v12, 0x398u);
    }
    clr_module_data((unsigned int)dword_8CD7F0);
  }
  v5 = *(_QWORD *)(a1 + 104);
  if ( v5 )
  {
    *(_QWORD *)(a1 + 112) = 0;
    qfree(v5, a2);
  }
  v6 = *(_QWORD *)(a1 + 40);
  if ( v6 )
  {
    qfree(v6, a2);
    *(_QWORD *)(a1 + 40) = 0;
  }
  v7 = *(_QWORD *)(a1 + 48);
  if ( v7 )
  {
    *(_QWORD *)(a1 + 56) = 0;
    qfree(v7, a2);
    *(_QWORD *)(a1 + 48) = 0;
    *(_QWORD *)(a1 + 64) = 0;
  }
  v8 = *(_QWORD *)(a1 + 72);
  if ( v8 )
  {
    *(_QWORD *)(a1 + 80) = 0;
    qfree(v8, a2);
  }
  v9 = *(_QWORD *)(a1 + 48);
  if ( v9 )
  {
    *(_QWORD *)(a1 + 56) = 0;
    qfree(v9, a2);
  }
  v10 = *(_QWORD *)(a1 + 40);
  if ( v10 )
    qfree(v10, a2);
}
