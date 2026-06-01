void __fastcall sub_C8AA0(_QWORD *a1)
{
  _QWORD *v1; // rbx
  void *v2; // rbp

  v1 = (_QWORD *)a1[1];
  while ( v1 )
  {
    v2 = v1;
    v1 = (_QWORD *)*v1;
    sub_C8970((__int64)v2);
    operator delete(v2, 0x38u);
  }
}

