void __fastcall sub_359A70(_QWORD *a1)
{
  __int64 v2; // rbx
  void *v3; // rdi

  if ( a1 )
  {
    v2 = a1[2];
    while ( v2 )
    {
      sub_359640(*(_QWORD **)(v2 + 24));
      v3 = (void *)v2;
      v2 = *(_QWORD *)(v2 + 16);
      operator delete(v3, 0x30u);
    }
    operator delete(a1, 0x30u);
  }
}
