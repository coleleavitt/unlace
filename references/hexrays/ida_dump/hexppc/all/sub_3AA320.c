unsigned __int64 __fastcall sub_3AA320(__int64 a1, __int64 **a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rdx
  size_t v6; // r15
  const char *v7; // r8
  __int64 *v9; // rbx
  int *v10; // r14
  __int64 v11; // rax
  __int64 v12; // r12
  size_t v13; // r9
  __int64 v14; // rsi
  unsigned __int64 v15; // rdx
  __int64 v17; // rax
  size_t v18; // rax
  unsigned __int64 v19; // [rsp+8h] [rbp-50h]
  const char *v20; // [rsp+8h] [rbp-50h]
  const char *v21; // [rsp+10h] [rbp-48h]
  size_t v22; // [rsp+18h] [rbp-40h]

  v5 = 5 * a5;
  v6 = 0;
  v7 = (const char *)&unk_405793;
  v9 = *a2;
  v10 = (int *)(**(_QWORD **)(a1 + 184) + 8 * v5);
  v11 = v10[7];
  if ( (unsigned int)v11 <= 3 )
  {
    if ( !*(&off_4D4640 + v11) )
      goto LABEL_5;
    v20 = (const char *)*(&off_4D4640 + v11);
    v18 = strlen(v20);
    v7 = v20;
    v6 = v18;
  }
  v12 = v9[1];
  v13 = v6;
  if ( v12 )
  {
    --v12;
    v14 = *v9;
    v13 = v12 + v6;
    v15 = v12 + v6 + 1;
    if ( v9[2] >= v15 )
      goto LABEL_4;
LABEL_7:
    v22 = v13;
    v21 = v7;
    v19 = v15;
    v17 = qvector_reserve(v9, v14, v15, 1);
    v13 = v22;
    v7 = v21;
    *v9 = v17;
    v15 = v19;
    v14 = v17;
    goto LABEL_4;
  }
  v14 = *v9;
  v15 = v6 + 1;
  if ( v9[2] < v6 + 1 )
    goto LABEL_7;
LABEL_4:
  v9[1] = v15;
  *(_BYTE *)(v14 + v13) = 0;
  memmove((void *)(v12 + *v9), v7, v6);
  v9 = *a2;
LABEL_5:
  sub_67E30(v9 + 3, (__int64)"%d", v10[4] + 1);
  sub_67E30(*a2 + 6, (__int64)"%d", v10[5]);
  return sub_3A5BF0(*a2 + 9, *(_QWORD *)(*(_QWORD *)(a1 + 184) + 24LL), v10[4]);
}
