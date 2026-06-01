void __fastcall sub_227B560(_DWORD *a1)
{
  bool v2; // zf
  void *v3; // rdi

  v2 = a1[11] == 1;
  *(_QWORD *)a1 = &unk_2C76210;
  if ( v2 && (v3 = *((void **)a1 + 2)) != nullptr )
  {
    operator delete[](v3);
    operator delete(a1, 0x38u);
  }
  else
  {
    operator delete(a1, 0x38u);
  }
}
