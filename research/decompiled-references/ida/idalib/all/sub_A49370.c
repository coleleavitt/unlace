void __fastcall sub_A49370(__int64 a1, size_t a2)
{
  void *v2; // rcx
  void *v3; // r13
  size_t v4; // rbx
  size_t v5; // r14
  size_t v6; // rax
  bool v7; // cf
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rdx
  char *v10; // r15
  char *v11; // rax
  char *v12; // [rsp+0h] [rbp-40h]
  unsigned __int64 v13; // [rsp+0h] [rbp-40h]

  if ( a2 )
  {
    v2 = *(void **)(a1 + 8);
    v3 = *(void **)a1;
    v4 = (size_t)v2 - *(_QWORD *)a1;
    v5 = v4;
    if ( a2 <= *(_QWORD *)(a1 + 16) - (_QWORD)v2 )
    {
      *(_QWORD *)(a1 + 8) = (char *)memset(v2, 0, a2) + a2;
      return;
    }
    if ( ~v4 < a2 )
      std::__throw_length_error("vector::_M_default_append");
    v6 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
    if ( a2 >= v4 )
      v6 = a2;
    v7 = __CFADD__(v4, v6);
    v8 = v4 + v6;
    v9 = v8;
    if ( v7 )
    {
      v9 = -1;
    }
    else if ( !v8 )
    {
      v12 = nullptr;
      v10 = nullptr;
      goto LABEL_11;
    }
    v13 = v9;
    v11 = (char *)operator new(v9);
    v3 = *(void **)a1;
    v10 = v11;
    v12 = &v11[v13];
    v4 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
LABEL_11:
    memset(&v10[v5], 0, a2);
    if ( v4 )
    {
      memmove(v10, v3, v4);
    }
    else if ( !v3 )
    {
LABEL_13:
      *(_QWORD *)a1 = v10;
      *(_QWORD *)(a1 + 8) = &v10[a2 + v5];
      *(_QWORD *)(a1 + 16) = v12;
      return;
    }
    operator delete(v3);
    goto LABEL_13;
  }
}
