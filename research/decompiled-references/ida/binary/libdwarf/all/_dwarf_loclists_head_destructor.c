void __fastcall dwarf_loclists_head_destructor(__int64 a1)
{
  _QWORD *v1; // rbx
  void *v3; // rdi

  v1 = *(_QWORD **)(a1 + 80);
  if ( v1 )
  {
    do
    {
      v3 = v1;
      v1 = (_QWORD *)v1[18];
      free(v3);
    }
    while ( v1 );
    *(_QWORD *)(a1 + 8) = 0;
    *(_OWORD *)(a1 + 80) = 0;
  }
}

