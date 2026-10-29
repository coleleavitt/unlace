void __fastcall sub_9A7F0(char *a1)
{
  char *v1; // r12
  char *v3; // rbx
  char *v4; // rsi
  __int64 v5; // rbx
  void *v6; // rdi

  v1 = a1 + 16;
  v3 = *((char **)a1 + 4);
  *(_QWORD *)a1 = &off_22E4D8;
  if ( v3 == a1 + 16 )
  {
    v4 = a1 + 16;
  }
  else
  {
    do
    {
      (*(void (__fastcall **)(_QWORD *, char *))(**((_QWORD **)v3 + 4) + 32LL))(*((_QWORD **)v3 + 4), a1);
      v3 = (char *)std::_Rb_tree_increment();
    }
    while ( v1 != v3 );
    v4 = *((char **)a1 + 4);
  }
  sub_99EA0((__int64)(a1 + 8), (__int64)v4, (__int64)v1);
  v5 = *((_QWORD *)a1 + 3);
  while ( v5 )
  {
    sub_99890(*(_QWORD **)(v5 + 24));
    v6 = (void *)v5;
    v5 = *(_QWORD *)(v5 + 16);
    operator delete(v6, 0x28u);
  }
  operator delete(a1, 0x38u);
}

