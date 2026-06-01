void __fastcall sub_227B480(_DWORD *a1)
{
  bool v1; // zf
  void *v2; // rdi

  v1 = a1[11] == 1;
  *(_QWORD *)a1 = &unk_2C76210;
  if ( v1 )
  {
    v2 = *((void **)a1 + 2);
    if ( v2 )
      operator delete[](v2);
  }
}
