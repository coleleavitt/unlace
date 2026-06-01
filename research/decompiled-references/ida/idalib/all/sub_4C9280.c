_QWORD *sub_4C9280()
{
  _QWORD *v0; // r12
  __int64 v1; // rbx
  _QWORD *v2; // rbp
  void *v3; // rdi

  v0 = *(_QWORD **)(qword_2CCB598 + 1720);
  v1 = v0[3];
  while ( v1 )
  {
    v2 = (_QWORD *)v1;
    sub_4C8FC0(*(_QWORD **)(v1 + 24));
    v3 = *(void **)(v1 + 32);
    v1 = *(_QWORD *)(v1 + 16);
    if ( v3 )
    {
      v2[5] = 0;
      qfree(v3);
    }
    operator delete(v2, 0x40u);
  }
  v0[3] = 0;
  v0[4] = v0 + 2;
  v0[5] = v0 + 2;
  v0[6] = 0;
  return v0 + 2;
}
