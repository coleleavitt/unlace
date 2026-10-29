void *__fastcall sub_3C65C0(__int64 a1)
{
  _QWORD *v2; // rbp
  _QWORD *v3; // rbx
  void *v4; // rdi
  void *v5; // rdi
  void *result; // rax

  v2 = *(_QWORD **)(a1 + 16);
  while ( v2 )
  {
    v3 = v2;
    v2 = (_QWORD *)*v2;
    v4 = (void *)v3[5];
    if ( v4 )
    {
      v3[6] = 0;
      qfree(v4);
    }
    v5 = (void *)v3[2];
    if ( v5 )
    {
      v3[3] = 0;
      qfree(v5);
    }
    operator delete(v3, 0x48u);
  }
  result = memset(*(void **)a1, 0, 8LL * *(_QWORD *)(a1 + 8));
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 16) = 0;
  return result;
}

