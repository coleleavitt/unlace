void __fastcall sub_586F20(_QWORD *a1)
{
  __int64 v2; // rbx
  void *v3; // rdi

  if ( a1 )
  {
    v2 = a1[4];
    while ( v2 )
    {
      sub_586D10(*(_QWORD **)(v2 + 24));
      v3 = (void *)v2;
      v2 = *(_QWORD *)(v2 + 16);
      operator delete(v3, 0x30u);
    }
    operator delete(a1, 0x40u);
  }
}
