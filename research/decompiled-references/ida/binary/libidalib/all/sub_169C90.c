void __fastcall sub_169C90(__int64 a1)
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
      *(_QWORD *)(v1 + 916) = *(_QWORD *)(a1 + 72);
      *(_WORD *)(v1 + 924) = *(_WORD *)(a1 + 80);
    }
  }
  v2 = *(_QWORD *)(a1 + 32);
  *(_QWORD *)a1 = &off_22F558;
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
  sub_99FE0(a1 + 8, v3, a1 + 16);
  v4 = *(_QWORD *)(a1 + 24);
  while ( v4 )
  {
    sub_159530(*(_QWORD **)(v4 + 24));
    v5 = (void *)v4;
    v4 = *(_QWORD *)(v4 + 16);
    operator delete(v5, 0x28u);
  }
}

