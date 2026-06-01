__int64 __fastcall sub_570D20(__int64 a1, unsigned int a2, const void *a3, size_t a4)
{
  __int64 v6; // rbp
  size_t v7; // r12
  __int64 *v8; // r13
  size_t v9; // rdx
  __int64 v11; // rsi
  __int64 v12; // rax

  v6 = a2;
  if ( *(_BYTE *)(a1 + 12) )
  {
    memcpy((void *)(a2 + *(_QWORD *)(a1 + 16)), a3, a4);
    return 1;
  }
  v7 = a4 + a2;
  if ( *(_DWORD *)(a1 + 8) < (unsigned int)a4 + a2 )
    *(_DWORD *)(a1 + 8) = v7;
  v8 = *(__int64 **)(a1 + 24);
  v9 = v8[1];
  if ( v9 >= v7 )
  {
    if ( !a4 )
      return 1;
LABEL_7:
    memcpy((void *)(v6 + **(_QWORD **)(a1 + 24)), a3, a4);
    return 1;
  }
  v11 = *v8;
  if ( v8[2] < v7 )
  {
    v12 = qvector_reserve(*(_QWORD *)(a1 + 24), v11, a4 + v6, 1);
    v9 = v8[1];
    *v8 = v12;
    v11 = v12;
  }
  memset((void *)(v11 + v9), 0, v7 - v9);
  v8[1] = v7;
  if ( a4 )
    goto LABEL_7;
  return 1;
}

