__int64 __fastcall sub_58A430(__int64 a1, __int64 a2, const void *a3, size_t a4)
{
  unsigned __int64 v7; // r13
  __int64 *v8; // r14
  unsigned __int64 v9; // rdx
  __int64 v11; // rsi
  __int64 v12; // rax

  if ( *(_BYTE *)(a1 + 16) )
  {
    memcpy((void *)(a2 + *(_QWORD *)(a1 + 24)), a3, a4);
    return 1;
  }
  v7 = a2 + a4;
  if ( *(_QWORD *)(a1 + 8) < a2 + a4 )
    *(_QWORD *)(a1 + 8) = v7;
  v8 = *(__int64 **)(a1 + 32);
  v9 = v8[1];
  if ( v9 >= v7 )
  {
    if ( !a4 )
      return 1;
LABEL_7:
    memcpy((void *)(a2 + **(_QWORD **)(a1 + 32)), a3, a4);
    return 1;
  }
  v11 = *v8;
  if ( v8[2] < v7 )
  {
    v12 = qvector_reserve(*(_QWORD *)(a1 + 32), v11, v7, 1);
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
