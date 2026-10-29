void __fastcall sub_17B880(__int64 a1)
{
  void **v1; // r12
  void **v2; // r14
  _QWORD *v3; // rbx
  __int64 v4; // r15
  __int64 v5; // rbx

  *(_QWORD *)a1 = &off_234B60;
  v1 = *(void ***)(a1 + 64);
  v2 = &v1[*(_QWORD *)(a1 + 72)];
  if ( v2 != v1 )
  {
    do
    {
      v3 = *v1;
      if ( *v1 )
      {
        v4 = v3[4];
        *v3 = &off_22E4D8;
        if ( (_QWORD *)v4 != v3 + 2 )
        {
          do
          {
            (*(void (__fastcall **)(_QWORD, _QWORD *))(**(_QWORD **)(v4 + 32) + 32LL))(*(_QWORD *)(v4 + 32), v3);
            v4 = std::_Rb_tree_increment();
          }
          while ( v3 + 2 != (_QWORD *)v4 );
        }
        sub_17B6B0((_QWORD *)v3[3]);
        operator delete(v3, 0x58u);
      }
      ++v1;
    }
    while ( v2 != v1 );
    v1 = *(void ***)(a1 + 64);
  }
  if ( v1 )
  {
    *(_QWORD *)(a1 + 72) = 0;
    qfree();
  }
  v5 = *(_QWORD *)(a1 + 32);
  for ( *(_QWORD *)a1 = &off_22E4D8; a1 + 16 != v5; v5 = std::_Rb_tree_increment() )
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v5 + 32) + 32LL))(*(_QWORD *)(v5 + 32), a1);
  sub_17B6B0(*(_QWORD **)(a1 + 24));
}

