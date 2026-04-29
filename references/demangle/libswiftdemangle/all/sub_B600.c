void __fastcall sub_B600(_QWORD *a1)
{
  _QWORD *v2; // rbx
  void *v3; // rdi
  __int64 v4; // rax

  v2 = (_QWORD *)a1[3];
  *a1 = &off_47C88;
  while ( v2 )
  {
    v3 = v2;
    v2 = (_QWORD *)*v2;
    free(v3);
  }
  v4 = a1[5];
  if ( v4 )
    *(_BYTE *)(v4 + 48) = 0;
  operator delete(a1, 0x38u);
}
