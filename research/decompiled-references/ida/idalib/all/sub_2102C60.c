void *__fastcall sub_2102C60(__int64 a1)
{
  _QWORD *v2; // rbx
  __int64 v3; // rbp
  _QWORD *v4; // r12
  void *v5; // rdi
  void *v6; // rdi
  void *result; // rax

  v2 = *(_QWORD **)(a1 + 16);
  if ( v2 )
  {
    do
    {
      v3 = v2[3];
      v4 = (_QWORD *)*v2;
      if ( v3 )
      {
        v5 = *(void **)(v3 + 56);
        if ( v5 )
          operator delete(v5);
        sub_2102C60(v3);
        if ( *(_QWORD *)v3 != v3 + 48 )
          operator delete(*(void **)v3);
        operator delete((void *)v3, 0x60u);
      }
      v6 = v2;
      v2 = v4;
      operator delete(v6);
    }
    while ( v4 );
  }
  result = memset(*(void **)a1, 0, 8LL * *(_QWORD *)(a1 + 8));
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 16) = 0;
  return result;
}
