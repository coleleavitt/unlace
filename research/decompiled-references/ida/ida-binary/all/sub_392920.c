void __fastcall sub_392920(__int64 a1, __int64 *a2, __int64 *a3)
{
  __int64 *v3; // r15
  __int64 *v4; // r13
  __int64 v5; // rax
  __int64 v6; // rcx
  bool v7; // cf
  unsigned __int64 v8; // rax
  __int64 v9; // rbp
  __int64 v10; // rax
  __int64 *v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rbx
  __int64 v15; // [rsp+0h] [rbp-48h]

  v3 = *(__int64 **)(a1 + 8);
  v4 = *(__int64 **)a1;
  v5 = ((__int64)v3 - *(_QWORD *)a1) >> 3;
  if ( v5 == 0xFFFFFFFFFFFFFFFLL )
    std::__throw_length_error("vector::_M_realloc_insert");
  v6 = 1;
  if ( v5 )
    v6 = (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 3;
  v7 = __CFADD__(v6, v5);
  v8 = v6 + v5;
  if ( v7 )
  {
    v15 = 0x7FFFFFFFFFFFFFF8LL;
  }
  else
  {
    if ( v8 > 0xFFFFFFFFFFFFFFFLL )
      v8 = 0xFFFFFFFFFFFFFFFLL;
    v15 = 8 * v8;
  }
  v9 = operator new(v15);
  v10 = *a3;
  *a3 = 0;
  *(_QWORD *)(v9 + (char *)a2 - (char *)v4) = v10;
  if ( a2 == v4 )
  {
    v12 = v9;
  }
  else
  {
    v11 = v4;
    v12 = v9;
    do
    {
      v13 = *v11;
      v12 += 8;
      ++v11;
      *(_QWORD *)(v12 - 8) = v13;
    }
    while ( v12 != v9 + (char *)a2 - (char *)v4 );
  }
  v14 = v12 + 8;
  if ( a2 != v3 )
  {
    v14 += (char *)v3 - (char *)a2;
    memcpy((void *)(v12 + 8), a2, (char *)v3 - (char *)a2);
  }
  if ( v4 )
    operator delete(v4, *(_QWORD *)(a1 + 16) - (_QWORD)v4);
  *(_QWORD *)a1 = v9;
  *(_QWORD *)(a1 + 8) = v14;
  *(_QWORD *)(a1 + 16) = v9 + v15;
}
