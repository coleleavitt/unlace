void *__fastcall sub_CB5E0(__int64 *a1, __int64 a2, int a3)
{
  __int64 v3; // r15
  __int64 *v4; // r14
  __int64 *v5; // r13
  int i; // ebx
  int v7; // esi
  int v8; // r12d
  int v9; // esi
  int *v10; // rax
  int *j; // rcx
  int v12; // edx
  int *v13; // rax
  int *k; // rcx
  int v15; // edx
  __int64 v16; // rax
  int v17; // edx
  void *result; // rax

  v3 = a3;
  v4 = a1 + 2;
  v5 = a1 + 4;
  for ( i = a3 + 1; (unsigned __int64)i < *(_QWORD *)(a2 + 464); ++i )
  {
    v8 = i - 1;
    v9 = i - 1;
    if ( sub_605B0(a1, i) )
      sub_5FE10(a1, v9);
    else
      sub_5FFC0(a1, v9);
    sub_5FFC0(a1, i);
    if ( sub_605B0(v4, i) )
      sub_5FE10(v4, v8);
    else
      sub_5FFC0(v4, v8);
    sub_5FFC0(v4, i);
    if ( sub_605B0(v5, i) )
      sub_5FE10(v5, v8);
    else
      sub_5FFC0(v5, v8);
    v7 = i;
    sub_5FFC0(v5, v7);
  }
  v10 = (int *)a1[6];
  for ( j = &v10[a1[7]]; v10 != j; ++v10 )
  {
    while ( 1 )
    {
      v12 = *v10;
      if ( (int)v3 >= *v10 )
        break;
      *v10 = v12 - 1;
LABEL_16:
      if ( ++v10 == j )
        goto LABEL_20;
    }
    if ( (_DWORD)v3 != v12 )
      goto LABEL_16;
    *v10 = -1;
  }
LABEL_20:
  v13 = (int *)a1[9];
  for ( k = &v13[a1[10]]; v13 != k; ++v13 )
  {
    while ( 1 )
    {
      v15 = *v13;
      if ( (int)v3 >= *v13 )
        break;
      *v13 = v15 - 1;
LABEL_23:
      if ( ++v13 == k )
        goto LABEL_27;
    }
    if ( (_DWORD)v3 != v15 )
      goto LABEL_23;
    *v13 = -1;
  }
LABEL_27:
  v16 = sub_138DC0(a2, (unsigned int)v3);
  v17 = *(_DWORD *)(v16 + 24);
  BYTE1(v17) &= 0x7Eu;
  *(_DWORD *)(v16 + 24) = v17 | 0x100000;
  result = memmove(
             (void *)(*(_QWORD *)(a2 + 456) + 4 * v3),
             (const void *)(*(_QWORD *)(a2 + 456) + 4 * v3 + 4),
             4 * (*(_QWORD *)(a2 + 464) - v3) - 4);
  --*(_QWORD *)(a2 + 464);
  return result;
}
