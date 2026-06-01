void __fastcall sub_5BE430(_QWORD *a1)
{
  __int64 v2; // rbx
  void *v3; // rdi

  if ( a1 )
  {
    v2 = a1[132];
    while ( v2 )
    {
      sub_5BCCE0(*(_QWORD **)(v2 + 24));
      v3 = (void *)v2;
      v2 = *(_QWORD *)(v2 + 16);
      operator delete(v3, 0x28u);
    }
    operator delete(a1, 0x448u);
  }
}

