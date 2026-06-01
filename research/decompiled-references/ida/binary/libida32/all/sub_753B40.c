void __fastcall sub_753B40(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  char *v6; // r12
  __int64 v7; // r10
  _QWORD *v8; // rsi
  unsigned __int64 v9; // r9
  _QWORD *v10; // rcx
  unsigned __int64 v11; // rdx
  char *v12; // rax

  if ( a2 == 1 )
  {
    v7 = a1 + 48;
    *(_QWORD *)(a1 + 48) = 0;
    v6 = (char *)(a1 + 48);
  }
  else
  {
    if ( a2 >> 60 )
    {
      if ( a2 >> 61 )
        sub_2E883E(a1, a2, a3, a4, a5);
      std::__throw_bad_alloc();
    }
    v6 = (char *)operator new(8 * a2);
    memset(v6, 0, 8 * a2);
    v7 = a1 + 48;
  }
  v8 = *(_QWORD **)(a1 + 16);
  *(_QWORD *)(a1 + 16) = 0;
  if ( v8 )
  {
    v9 = 0;
    do
    {
      while ( 1 )
      {
        v10 = v8;
        v8 = (_QWORD *)*v8;
        v11 = *((unsigned int *)v10 + 2) % a2;
        v12 = &v6[8 * v11];
        if ( !*(_QWORD *)v12 )
          break;
        *v10 = **(_QWORD **)v12;
        **(_QWORD **)v12 = v10;
        if ( !v8 )
          goto LABEL_11;
      }
      *v10 = *(_QWORD *)(a1 + 16);
      *(_QWORD *)(a1 + 16) = v10;
      *(_QWORD *)v12 = a1 + 16;
      if ( *v10 )
        *(_QWORD *)&v6[8 * v9] = v10;
      v9 = v11;
    }
    while ( v8 );
  }
LABEL_11:
  if ( *(_QWORD *)a1 != v7 )
    operator delete(*(void **)a1, 8LL * *(_QWORD *)(a1 + 8));
  *(_QWORD *)(a1 + 8) = a2;
  *(_QWORD *)a1 = v6;
}

