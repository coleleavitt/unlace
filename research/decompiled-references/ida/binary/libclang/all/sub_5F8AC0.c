void __fastcall sub_5F8AC0(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // rax
  void *v3; // r15
  signed __int64 v4; // rbp
  __int64 v5; // rax
  __int64 v6; // rdx
  bool v7; // cf
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // r13
  char *v10; // r14
  unsigned __int64 v11; // rsi

  v2 = *(_QWORD **)(a1 + 8);
  if ( v2 != *(_QWORD **)(a1 + 16) )
  {
    *v2 = *a2;
    *(_QWORD *)(a1 + 8) += 8LL;
    return;
  }
  v3 = *(void **)a1;
  v4 = (signed __int64)v2 - *(_QWORD *)a1;
  v5 = v4 >> 3;
  if ( v4 >> 3 == 0xFFFFFFFFFFFFFFFLL )
    std::__throw_length_error("vector::_M_realloc_append");
  v6 = 1;
  if ( v5 )
    v6 = v4 >> 3;
  v7 = __CFADD__(v6, v5);
  v8 = v6 + v5;
  if ( v7 )
  {
    v9 = 0x7FFFFFFFFFFFFFF8LL;
  }
  else
  {
    if ( v8 > 0xFFFFFFFFFFFFFFFLL )
      v8 = 0xFFFFFFFFFFFFFFFLL;
    v9 = 8 * v8;
  }
  v10 = (char *)operator new(v9);
  *(_QWORD *)&v10[v4] = *a2;
  if ( v4 > 0 )
  {
    memcpy(v10, v3, v4);
    v11 = *(_QWORD *)(a1 + 16) - (_QWORD)v3;
LABEL_14:
    operator delete(v3, v11);
    goto LABEL_12;
  }
  if ( v3 )
  {
    v11 = *(_QWORD *)(a1 + 16) - (_QWORD)v3;
    goto LABEL_14;
  }
LABEL_12:
  *(_QWORD *)a1 = v10;
  *(_QWORD *)(a1 + 8) = &v10[v4 + 8];
  *(_QWORD *)(a1 + 16) = &v10[v9];
}

