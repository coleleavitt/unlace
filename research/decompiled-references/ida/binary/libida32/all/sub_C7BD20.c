void __fastcall sub_C7BD20(__int64 a1, size_t a2)
{
  size_t v2; // rbp
  size_t v3; // rax
  bool v4; // cf
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // r14
  char *v7; // r14
  char *v8; // r13
  void *v9; // r15
  size_t v10; // rdx

  if ( a2 )
  {
    v2 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
    if ( a2 <= *(_QWORD *)(a1 + 16) - *(_QWORD *)(a1 + 8) )
    {
      *(_QWORD *)(a1 + 8) = (char *)memset(*(void **)(a1 + 8), 0, a2) + a2;
      return;
    }
    if ( ~(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) < a2 )
      std::__throw_length_error("vector::_M_default_append");
    v3 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
    if ( a2 >= v2 )
      v3 = a2;
    v4 = __CFADD__(v2, v3);
    v5 = v2 + v3;
    v6 = v5;
    if ( v4 )
    {
      v6 = -1;
    }
    else if ( !v5 )
    {
      v7 = nullptr;
      v8 = nullptr;
      goto LABEL_10;
    }
    v8 = (char *)operator new(v6);
    v7 = &v8[v6];
LABEL_10:
    memset(&v8[v2], 0, a2);
    v9 = *(void **)a1;
    v10 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
    if ( v10 )
    {
      memmove(v8, *(const void **)a1, v10);
    }
    else if ( !v9 )
    {
LABEL_12:
      *(_QWORD *)a1 = v8;
      *(_QWORD *)(a1 + 16) = v7;
      *(_QWORD *)(a1 + 8) = &v8[v2 + a2];
      return;
    }
    operator delete(v9);
    goto LABEL_12;
  }
}

