void __fastcall sub_16C9F0(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rbx
  __int64 v3; // rsi
  __int64 v4; // rbx
  void *v5; // rdi

  if ( !*(_BYTE *)(a1 + 64) )
  {
    v1 = *(_QWORD *)(a1 + 56);
    if ( v1 )
    {
      if ( *(_DWORD *)(v1 + 924) == 1 )
        dto_copy_to_inf();
    }
  }
  v2 = *(_QWORD *)(a1 + 32);
  *(_QWORD *)a1 = &off_22E4D8;
  if ( v2 == a1 + 16 )
  {
    v3 = a1 + 16;
  }
  else
  {
    do
    {
      (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v2 + 32) + 32LL))(*(_QWORD *)(v2 + 32), a1);
      v2 = std::_Rb_tree_increment();
    }
    while ( a1 + 16 != v2 );
    v3 = *(_QWORD *)(a1 + 32);
  }
  sub_99EA0(a1 + 8, v3, a1 + 16);
  v4 = *(_QWORD *)(a1 + 24);
  while ( v4 )
  {
    sub_158CB0(*(_QWORD **)(v4 + 24));
    v5 = (void *)v4;
    v4 = *(_QWORD *)(v4 + 16);
    operator delete(v5, 0x28u);
  }
}

