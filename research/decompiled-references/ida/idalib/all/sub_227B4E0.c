void __fastcall sub_227B4E0(__int64 a1)
{
  bool v1; // zf
  void *v2; // rdi

  v1 = *(_DWORD *)(a1 + 44) == 1;
  *(_QWORD *)a1 = &unk_2C76210;
  if ( v1 )
  {
    v2 = *(void **)(a1 + 16);
    if ( v2 )
      operator delete[](v2);
  }
}
