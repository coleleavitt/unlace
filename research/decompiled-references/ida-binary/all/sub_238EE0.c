void __fastcall sub_238EE0(__int64 a1, const char *a2)
{
  _QWORD *v2; // rbx
  void *v3; // rbp

  v2 = *(_QWORD **)(a1 + 8);
  while ( v2 )
  {
    v3 = v2;
    v2 = (_QWORD *)*v2;
    sub_238680((__int64)v3, a2);
    a2 = (const char *)&word_38;
    operator delete(v3, 0x38u);
  }
  *(_OWORD *)(a1 + 8) = 0;
}
