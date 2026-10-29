void __fastcall sub_6255A0(__int64 a1, __int64 *a2)
{
  __int64 *v2; // rbx
  __int64 *v3; // r13
  __int64 v4; // rbp
  __int64 v5; // rax
  bool v6; // cf
  unsigned __int64 v7; // rbp
  unsigned __int64 v8; // rbp
  __int64 v9; // r14
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 *v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rbx
  __int64 v15; // [rsp+8h] [rbp-40h]

  v2 = *(__int64 **)(a1 + 8);
  v3 = *(__int64 **)a1;
  v4 = ((__int64)v2 - *(_QWORD *)a1) >> 3;
  if ( v4 == 0xFFFFFFFFFFFFFFFLL )
    std::__throw_length_error("vector::_M_realloc_append");
  v5 = 1;
  if ( v4 )
    v5 = (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 3;
  v6 = __CFADD__(v5, v4);
  v7 = v5 + v4;
  if ( v6 )
  {
    v8 = 0x7FFFFFFFFFFFFFF8LL;
  }
  else
  {
    if ( v7 > 0xFFFFFFFFFFFFFFFLL )
      v7 = 0xFFFFFFFFFFFFFFFLL;
    v8 = 8 * v7;
  }
  v15 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
  v9 = operator new(v8);
  v10 = *a2;
  *a2 = 0;
  *(_QWORD *)(v9 + v15) = v10;
  if ( v3 == v2 )
  {
    v11 = v9;
  }
  else
  {
    v11 = v9;
    v12 = v3;
    do
    {
      v13 = *v12;
      v11 += 8;
      ++v12;
      *(_QWORD *)(v11 - 8) = v13;
      *(v12 - 1) = 0;
    }
    while ( v11 != v9 + (char *)v2 - (char *)v3 );
  }
  v14 = v11 + 8;
  if ( v3 )
    operator delete(v3, *(_QWORD *)(a1 + 16) - (_QWORD)v3);
  *(_QWORD *)a1 = v9;
  *(_QWORD *)(a1 + 8) = v14;
  *(_QWORD *)(a1 + 16) = v8 + v9;
}

