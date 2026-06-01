void *__fastcall invalidate_cache_for_tlc(__int64 a1)
{
  __int64 v1; // r13
  void *result; // rax
  __int64 v3; // rdi
  __int64 v4; // rcx
  __int64 *v5; // rbx
  __int64 v6; // rbp
  __int64 *v7; // r12
  char *v8; // rdx
  __int64 v9; // r15
  __int64 i; // r14
  char *v11; // rax
  void *v12; // rdi

  v1 = *(_QWORD *)(qword_2CCB598 + 1656);
  result = (void *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
  v3 = *(_QWORD *)(v1 + 24);
  v4 = *(_QWORD *)(v1 + 16);
  if ( 8 * v3 )
  {
    v5 = *(__int64 **)(v1 + 16);
    while ( 1 )
    {
      v6 = *v5;
      v7 = v5++;
      if ( result == *(void **)(v6 + 48) )
        break;
      if ( (__int64 *)(v4 + 8 * v3) == v5 )
        return result;
    }
    if ( v6 )
    {
      v8 = *(char **)(v6 + 56);
      *(_QWORD *)(v6 + 48) = 0;
      if ( v8 )
      {
        v9 = *(_QWORD *)(v6 + 64);
        if ( v9 )
        {
          for ( i = 0; i != v9; ++i )
          {
            v11 = &v8[24 * i];
            v12 = *(void **)v11;
            if ( *(_QWORD *)v11 )
            {
              *((_QWORD *)v11 + 1) = 0;
              qfree(v12);
              v8 = *(char **)(v6 + 56);
            }
          }
        }
        *(_QWORD *)(v6 + 64) = 0;
        qfree(v8);
      }
      sub_5567B0(*(char **)(v6 + 16));
      operator delete((void *)v6, 0x58u);
      v4 = *(_QWORD *)(v1 + 16);
      v3 = *(_QWORD *)(v1 + 24);
    }
    result = memmove(v7, v5, v4 + 8 * v3 - (_QWORD)v7 - 8);
    --*(_QWORD *)(v1 + 24);
  }
  return result;
}
