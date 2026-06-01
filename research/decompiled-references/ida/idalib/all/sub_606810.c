__int64 __fastcall sub_606810(__int64 *a1, __int64 a2)
{
  __int64 v3; // rax
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rsi
  unsigned __int64 v7; // r12
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rsi
  __int64 v10; // rsi
  size_t v12; // rdx
  const void *v13; // rsi
  void *v14; // rdi
  __int64 v15; // rax

  v3 = sub_605D50(a1, a2);
  if ( v3 != -1 )
  {
    v4 = v3;
    if ( !v3 )
    {
      if ( !under_debugger )
        interr(1421);
      BUG();
    }
    v5 = a1[1];
    v6 = (*(_QWORD *)(a2 + 8) == 0) + *(_QWORD *)(a2 + 8) - 1LL;
    if ( !v5 )
      return 1;
    v7 = v4 - 1;
    v8 = v5 - 1;
    if ( v4 - 1 >= v8 )
      return 1;
    v9 = v4 + v6;
    if ( v9 < v8 )
    {
      v12 = v8 - v9;
      v13 = (const void *)(*a1 + v9);
      v14 = (void *)(v7 + *a1);
      v7 += v12;
      memmove(v14, v13, v12);
      v4 = v7 + 1;
      v10 = *a1;
      if ( a1[2] >= v7 + 1 )
        goto LABEL_7;
    }
    else
    {
      v10 = *a1;
      if ( a1[2] >= v4 )
      {
LABEL_7:
        a1[1] = v4;
        *(_BYTE *)(v10 + v7) = 0;
        return 1;
      }
    }
    v15 = qvector_reserve(a1, v10, v4, 1);
    *a1 = v15;
    v10 = v15;
    goto LABEL_7;
  }
  return 0;
}
