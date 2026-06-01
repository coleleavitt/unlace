void __fastcall std::vector<std::string>::_M_realloc_insert<std::string>(__int64 a1, char *a2, _QWORD *a3)
{
  char *v3; // rbp
  char *v4; // r14
  __int64 v5; // rax
  __int64 v6; // rcx
  char *v8; // rbx
  bool v9; // cf
  unsigned __int64 v10; // rax
  signed __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // r12
  __int64 v14; // r8
  char *v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rsi
  __int64 v19; // rbp
  __int64 v20; // rdx
  unsigned __int64 v21; // r12
  __int64 v22; // rax
  __int64 v23; // [rsp+0h] [rbp-48h]
  _QWORD *v24; // [rsp+8h] [rbp-40h]

  v3 = *(char **)(a1 + 8);
  v4 = *(char **)a1;
  v5 = (__int64)&v3[-*(_QWORD *)a1] >> 3;
  if ( v5 == 0xFFFFFFFFFFFFFFFLL )
    std::__throw_length_error("vector::_M_realloc_insert");
  v6 = 1;
  v8 = a2;
  if ( v5 )
    v6 = (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 3;
  v9 = __CFADD__(v6, v5);
  v10 = v6 + v5;
  v11 = a2 - v4;
  if ( v9 )
  {
    v21 = 0x7FFFFFFFFFFFFFF8LL;
  }
  else
  {
    if ( !v10 )
    {
      v12 = 8;
      v13 = 0;
      v14 = 0;
      goto LABEL_7;
    }
    if ( v10 > 0xFFFFFFFFFFFFFFFLL )
      v10 = 0xFFFFFFFFFFFFFFFLL;
    v21 = 8 * v10;
  }
  v24 = a3;
  v22 = operator new(v21);
  v11 = a2 - v4;
  a3 = v24;
  v14 = v22;
  v13 = v22 + v21;
  v12 = v22 + 8;
LABEL_7:
  *(_QWORD *)(v14 + v11) = *a3;
  *a3 = &std::string::_Rep::_S_empty_rep_storage + 3;
  if ( a2 != v4 )
  {
    v15 = v4;
    v16 = v14;
    v17 = v14 + a2 - v4;
    do
    {
      v18 = *(_QWORD *)v15;
      v16 += 8;
      v15 += 8;
      *(_QWORD *)(v16 - 8) = v18;
    }
    while ( v17 != v16 );
    v12 = v17 + 8;
  }
  if ( a2 == v3 )
  {
    v19 = v12;
  }
  else
  {
    v19 = v12 + v3 - a2;
    do
    {
      v20 = *(_QWORD *)v8;
      v12 += 8;
      v8 += 8;
      *(_QWORD *)(v12 - 8) = v20;
    }
    while ( v12 != v19 );
  }
  if ( v4 )
  {
    v23 = v14;
    operator delete(v4, *(_QWORD *)(a1 + 16) - (_QWORD)v4);
    v14 = v23;
  }
  *(_QWORD *)a1 = v14;
  *(_QWORD *)(a1 + 8) = v19;
  *(_QWORD *)(a1 + 16) = v13;
}

