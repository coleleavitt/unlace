void __fastcall sub_84ED0(__int64 *a1, const char *a2)
{
  size_t v3; // rbp
  size_t v4; // rax
  _BYTE *v5; // rsi
  size_t v6; // r13
  unsigned __int64 v7; // rax
  size_t v8; // r15
  unsigned __int64 v9; // r14
  size_t v10; // r13
  size_t v11; // r14
  __int64 v12; // rsi
  size_t v13; // rbp
  __int64 v14; // rax
  __int64 v15; // rax

  if ( a2 )
  {
    v3 = a1[1];
    if ( v3 > 1 )
    {
      v10 = v3 - 1;
      v11 = v3 + 1;
      v12 = *a1;
      v13 = v3 + 2;
      if ( a1[2] < v13 )
      {
        v15 = qvector_reserve(a1, v12, v13, 1);
        *a1 = v15;
        v12 = v15;
      }
      a1[1] = v13;
      *(_BYTE *)(v12 + v11) = 0;
      memmove((void *)(*a1 + 2), (const void *)*a1, v10);
      *(_WORD *)*a1 = 14906;
      v3 = a1[1];
    }
    v4 = strlen(a2);
    v5 = (_BYTE *)*a1;
    v6 = v4;
    v7 = a1[2];
    if ( v3 )
    {
      --v3;
      v8 = v6 + v3;
      v9 = v6 + v3 + 1;
      if ( v7 >= v9 )
        goto LABEL_5;
    }
    else
    {
      v9 = v6 + 1;
      v8 = v6;
      if ( v7 >= v6 + 1 )
      {
        a1[1] = v9;
        v5[v6] = 0;
LABEL_9:
        memmove((void *)*a1, a2, v6);
        return;
      }
    }
    v14 = qvector_reserve(a1, v5, v9, 1);
    *a1 = v14;
    v5 = (_BYTE *)v14;
LABEL_5:
    a1[1] = v9;
    v5[v8] = 0;
    if ( v3 )
      memmove((void *)(*a1 + v6), (const void *)*a1, v3);
    goto LABEL_9;
  }
}
