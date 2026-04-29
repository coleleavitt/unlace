_QWORD *__fastcall sub_375330(__int64 a1)
{
  _QWORD *v1; // rbp
  __int64 v2; // rbx
  void *v3; // rdi

  v1 = *(_QWORD **)(a1 + 1128);
  v2 = v1[5];
  while ( v2 )
  {
    sub_36C110(*(_QWORD **)(v2 + 24));
    v3 = (void *)v2;
    v2 = *(_QWORD *)(v2 + 16);
    operator delete(v3, 0x28u);
  }
  v1[5] = 0;
  v1[6] = v1 + 4;
  v1[7] = v1 + 4;
  v1[8] = 0;
  return v1 + 4;
}
