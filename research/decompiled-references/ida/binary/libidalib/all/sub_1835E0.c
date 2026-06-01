void *__fastcall sub_1835E0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r13
  __int64 i; // rbp
  _QWORD *v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  _QWORD *v10; // rbx
  void *v11; // rdi
  void *result; // rax

  v5 = *(_QWORD *)(a1 + 32);
  if ( v5 )
  {
    for ( i = 0; i != v5; ++i )
    {
      v7 = (_QWORD *)(*(_QWORD *)(a1 + 24) + (i << 7));
      if ( v7[6] )
      {
        v7[7] = 0;
        qfree();
      }
      if ( v7[3] )
      {
        v7[4] = 0;
        qfree();
      }
      if ( *v7 )
      {
        v7[1] = 0;
        qfree();
      }
    }
  }
  *(_QWORD *)(a1 + 32) = 0;
  sub_183410(a1 + 48, a2, a3, a4);
  sub_183410(a1 + 208, a2, v8, v9);
  v10 = *(_QWORD **)(a1 + 400);
  while ( v10 )
  {
    v11 = v10;
    v10 = (_QWORD *)*v10;
    operator delete(v11, 0x18u);
  }
  result = memset(*(void **)(a1 + 384), 0, 8LL * *(_QWORD *)(a1 + 392));
  *(_QWORD *)(a1 + 408) = 0;
  *(_QWORD *)(a1 + 400) = 0;
  return result;
}

