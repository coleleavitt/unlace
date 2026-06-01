void __fastcall sub_C9F60(_QWORD *a1)
{
  _QWORD *v1; // rbx
  void *v2; // rbp

  v1 = (_QWORD *)a1[1];
  while ( v1 )
  {
    v2 = v1;
    v1 = (_QWORD *)*v1;
    sub_C9E30((__int64)v2);
    operator delete(v2, 0x38u);
  }
}

