void __fastcall sub_75D1F0(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 *v5; // rbp
  __int64 v6; // rcx
  unsigned __int64 v7; // rax
  _QWORD *v8; // r12
  __int64 v9; // rax
  _QWORD *v10; // rax
  unsigned __int64 v11; // rdx
  size_t v12; // r12
  void *v13; // r13
  unsigned __int64 v14; // rdx

  if ( !*a1 )
  {
    v11 = a1[1];
    if ( v11 == 1 )
    {
      a1[6] = 0;
      v13 = a1 + 6;
    }
    else
    {
      if ( v11 >> 60 )
      {
        v14 = v11 >> 61;
        if ( v14 )
          sub_2E883E(a1, a2, v14, a4, a5);
        std::__throw_bad_alloc();
      }
      v12 = 8 * v11;
      v13 = (void *)operator new(8 * v11);
      memset(v13, 0, v12);
    }
    *a1 = v13;
  }
  v5 = *(__int64 **)(a2 + 16);
  if ( v5 )
  {
    v6 = operator new(0x10u);
    *(_QWORD *)v6 = 0;
    v7 = *((unsigned int *)v5 + 2);
    a1[2] = v6;
    *(_DWORD *)(v6 + 8) = v7;
    if ( v6 )
      *(_QWORD *)(*a1 + 8 * (v7 % a1[1])) = a1 + 2;
    while ( 1 )
    {
      v5 = (__int64 *)*v5;
      if ( !v5 )
        break;
      while ( 1 )
      {
        v8 = (_QWORD *)v6;
        v9 = operator new(0x10u);
        *(_QWORD *)v9 = 0;
        v6 = v9;
        *(_DWORD *)(v9 + 8) = *((_DWORD *)v5 + 2);
        *v8 = v9;
        v10 = (_QWORD *)(*a1 + 8 * ((unsigned __int64)*(unsigned int *)(v9 + 8) % a1[1]));
        if ( *v10 )
          break;
        *v10 = v8;
        v5 = (__int64 *)*v5;
        if ( !v5 )
          return;
      }
    }
  }
}

