__int64 *__fastcall sub_698E00(__int64 *a1, const char *a2)
{
  __int64 v3; // rax
  size_t v4; // rax
  __int64 v5; // r12
  size_t v6; // r13
  size_t v7; // r14
  __int64 v8; // rsi
  __int64 v10; // rax

  *a1 = 0;
  *(_OWORD *)(a1 + 1) = 0;
  v3 = qvector_reserve(a1, 0, 4, 1);
  *a1 = v3;
  a1[1] = 4;
  *(_WORD *)v3 = 9252;
  *(_BYTE *)(v3 + 2) = 32;
  *(_BYTE *)(*a1 + 3) = 0;
  if ( a2 )
  {
    v4 = strlen(a2);
    v5 = a1[1];
    v6 = v4;
    v7 = v4;
    if ( v5 )
    {
      --v5;
      v7 = v4 + v5;
    }
    v8 = *a1;
    if ( a1[2] < v7 + 1 )
    {
      v10 = qvector_reserve(a1, v8, v7 + 1, 1);
      *a1 = v10;
      v8 = v10;
    }
    a1[1] = v7 + 1;
    *(_BYTE *)(v8 + v7) = 0;
    memmove((void *)(v5 + *a1), a2, v6);
  }
  return a1;
}

