void __fastcall sub_36FC60(__int64 a1)
{
  __int64 v1; // rbx
  void *v2; // rdi

  clear_tinfo_t(a1 + 48);
  v1 = *(_QWORD *)(a1 + 16);
  while ( v1 )
  {
    sub_366CD0(*(_QWORD **)(v1 + 24));
    v2 = (void *)v1;
    v1 = *(_QWORD *)(v1 + 16);
    operator delete(v2, 0x28u);
  }
}
