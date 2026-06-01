__int64 __fastcall sub_4B5400(__int64 a1, const char *a2)
{
  _BYTE *v2; // rbp
  size_t v3; // rax
  size_t v4; // r13
  size_t v5; // r12
  void *v6; // rax
  __int64 v7; // rax
  size_t v8; // r12
  __int64 v9; // r14
  __int64 v10; // r13
  __int64 v12; // rax

  v2 = a2;
  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  if ( !a2 )
  {
LABEL_9:
    v10 = 3;
    v9 = 2;
    v8 = 0;
    goto LABEL_10;
  }
  v3 = strlen(a2);
  v4 = v3 + 1;
  v5 = v3;
  v6 = (void *)qvector_reserve(a1, 0, v3 + 1, 1);
  *(_QWORD *)a1 = v6;
  *(_QWORD *)(a1 + 8) = v4;
  memmove(v6, a2, v5);
  *(_BYTE *)(*(_QWORD *)a1 + v5) = 0;
  v7 = *(_QWORD *)(a1 + 8);
  v2 = *(_BYTE **)a1;
  if ( !v7 )
  {
    if ( *(_QWORD *)(a1 + 16) > 2u )
    {
      *(_QWORD *)(a1 + 8) = 3;
      v2[2] = 0;
      goto LABEL_13;
    }
    goto LABEL_9;
  }
  v8 = v7 - 1;
  if ( (unsigned __int64)(v7 - 1) > 1 )
  {
    if ( *v2 == 36 && v2[1] == 32 )
      return a1;
    v9 = v7 + 1;
    v10 = v7 + 2;
    if ( *(_QWORD *)(a1 + 16) >= (unsigned __int64)(v7 + 2) )
    {
      *(_QWORD *)(a1 + 8) = v10;
      v2[v7 + 1] = 0;
LABEL_12:
      memmove((void *)(*(_QWORD *)a1 + 2LL), *(const void **)a1, v8);
      goto LABEL_13;
    }
    goto LABEL_10;
  }
  v9 = v7 + 1;
  v10 = v7 + 2;
  if ( *(_QWORD *)(a1 + 16) < (unsigned __int64)(v7 + 2) )
  {
LABEL_10:
    v12 = qvector_reserve(a1, v2, v10, 1);
    *(_QWORD *)a1 = v12;
    v2 = (_BYTE *)v12;
  }
  *(_QWORD *)(a1 + 8) = v10;
  v2[v9] = 0;
  if ( v8 )
    goto LABEL_12;
LABEL_13:
  **(_WORD **)a1 = 8228;
  return a1;
}
