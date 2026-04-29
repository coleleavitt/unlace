__int64 __fastcall sub_106770(__int64 a1, unsigned __int64 a2, __int64 a3, _QWORD *a4)
{
  unsigned __int64 *v7; // r8
  __int64 v8; // rdi
  __int64 v9; // rdx
  unsigned __int64 *v10; // rbp
  __int64 i; // rax
  unsigned __int64 *v12; // rsi
  unsigned __int64 v13; // rdi
  char *v14; // r12
  __int64 (__fastcall **v15)(__int64, unsigned __int64); // rax
  __int64 result; // rax
  unsigned __int8 v17; // r12
  int *v18; // rbp
  unsigned __int64 *v19; // r13
  _QWORD *j; // r8
  unsigned __int8 v21; // al
  __int64 v22; // rax
  __int64 v23; // [rsp+8h] [rbp-50h]
  _QWORD *v25; // [rsp+18h] [rbp-40h]

  v7 = *(unsigned __int64 **)(a1 + 8);
  v8 = *(_QWORD *)(a1 + 16);
  v9 = 8 * v8;
  v10 = v7;
  for ( i = (8 * v8) >> 3; i > 0; i >>= 1 )
  {
    while ( 1 )
    {
      v12 = &v10[i >> 1];
      if ( *v12 >= a2 )
        break;
      v10 = v12 + 1;
      i = i - 1 - (i >> 1);
      if ( i <= 0 )
        goto LABEL_5;
    }
  }
LABEL_5:
  if ( &v7[v8] != v10 && a2 == *v10 )
    return 0;
  v13 = v8 + 1;
  v14 = (char *)((char *)v10 - (char *)v7);
  if ( *(_QWORD *)(a1 + 24) < v13 )
  {
    v22 = qvector_reserve(a1 + 8, v7, v13, 8);
    *(_QWORD *)(a1 + 8) = v22;
    v10 = (unsigned __int64 *)&v14[v22];
    v9 = 8LL * *(_QWORD *)(a1 + 16);
  }
  memmove(v10 + 1, v10, v9 - (_QWORD)v14);
  *v10 = a2;
  v15 = *(__int64 (__fastcall ***)(__int64, unsigned __int64))a1;
  ++*(_QWORD *)(a1 + 16);
  result = (*v15)(a1, a2);
  if ( !(_DWORD)result )
  {
    v17 = *(_BYTE *)(a2 + 32);
    v18 = *(int **)a2;
    v23 = *(_QWORD *)(a2 + 24) + *(int *)(a2 + 40);
    if ( 4LL * *(_QWORD *)(a2 + 8) )
    {
      do
      {
        v19 = (unsigned __int64 *)(*a4 + 24LL * *v18);
        for ( j = sub_103BE0(v19, a2); j != (_QWORD *)*v19; j = sub_106700(v25) )
        {
          v21 = *((_BYTE *)j + 56);
          if ( v21 >= v17 && (v17 < v21 || v23 <= j[6]) )
            break;
          v25 = j;
          result = sub_106770(a1, j + 3, a4, a3);
          if ( (_DWORD)result )
            return result;
        }
        ++v18;
      }
      while ( v18 != (int *)(*(_QWORD *)a2 + 4LL * *(_QWORD *)(a2 + 8)) );
    }
    return 0;
  }
  return result;
}
