__int64 __fastcall sub_1CB4F0(__int64 *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rsi
  const void *v5; // rbp
  __int64 v6; // rbx
  __int64 v7; // rsi
  size_t v8; // rax
  size_t v9; // r12
  void *v11; // rdi
  size_t v12; // r13
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax

  v2 = sub_33F2B0(a2);
  v3 = a1[1];
  v4 = *a1;
  v5 = (const void *)v2;
  if ( a1[2] < (unsigned __int64)(v3 + 1) )
  {
    v14 = qvector_reserve(a1, v4, v3 + 1, 48);
    v3 = a1[1];
    *a1 = v14;
    v4 = v14;
  }
  v6 = v4 + 48 * v3;
  *(_QWORD *)v6 = 0;
  *(_OWORD *)(v6 + 8) = 0;
  *(_QWORD *)(v6 + 24) = 0;
  *(_OWORD *)(v6 + 32) = 0;
  ++a1[1];
  v7 = *(_QWORD *)v6;
  if ( *(_QWORD *)(v6 + 16) <= 9u )
  {
    v13 = qvector_reserve(v6, v7, 10, 1);
    *(_QWORD *)v6 = v13;
    v7 = v13;
  }
  *(_QWORD *)(v6 + 8) = 10;
  *(_QWORD *)v7 = 0x5F646E616276616ELL;
  *(_BYTE *)(v7 + 8) = 116;
  *(_BYTE *)(*(_QWORD *)v6 + 9LL) = 0;
  if ( v5 && (v8 = strlen((const char *)v5), (v9 = v8) != 0) )
  {
    v11 = *(void **)(v6 + 24);
    v12 = v8 + 1;
    if ( *(_QWORD *)(v6 + 40) < v8 + 1 )
    {
      v15 = qvector_reserve(v6 + 24, *(_QWORD *)(v6 + 24), v12, 1);
      *(_QWORD *)(v6 + 24) = v15;
      v11 = (void *)v15;
    }
    *(_QWORD *)(v6 + 32) = v12;
    memmove(v11, v5, v9);
    *(_BYTE *)(*(_QWORD *)(v6 + 24) + v9) = 0;
    return 1;
  }
  else
  {
    *(_QWORD *)(v6 + 32) = 0;
    return 1;
  }
}
