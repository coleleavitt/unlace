void *__fastcall sub_4DC6F0(__int64 a1, const char *a2)
{
  __int64 v3; // r13
  __int64 i; // rbp
  __int64 *v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // rdi
  __int64 v8; // rdi
  _QWORD *v9; // rbx
  void *v10; // rdi
  void *result; // rax

  v3 = *(_QWORD *)(a1 + 32);
  if ( v3 )
  {
    for ( i = 0; i != v3; ++i )
    {
      v5 = (__int64 *)(*(_QWORD *)(a1 + 24) + (i << 7));
      v6 = v5[6];
      if ( v6 )
      {
        v5[7] = 0;
        qfree(v6, a2);
      }
      v7 = v5[3];
      if ( v7 )
      {
        v5[4] = 0;
        qfree(v7, a2);
      }
      v8 = *v5;
      if ( *v5 )
      {
        v5[1] = 0;
        qfree(v8, a2);
      }
    }
  }
  *(_QWORD *)(a1 + 32) = 0;
  sub_4DC530(a1 + 48);
  sub_4DC530(a1 + 208);
  v9 = *(_QWORD **)(a1 + 400);
  while ( v9 )
  {
    v10 = v9;
    v9 = (_QWORD *)*v9;
    operator delete(v10, 0x18u);
  }
  result = memset(*(void **)(a1 + 384), 0, 8LL * *(_QWORD *)(a1 + 392));
  *(_QWORD *)(a1 + 408) = 0;
  *(_QWORD *)(a1 + 400) = 0;
  return result;
}
