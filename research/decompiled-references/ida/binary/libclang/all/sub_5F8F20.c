void __fastcall sub_5F8F20(char *a1, char *a2)
{
  __int64 v2; // r15
  __int64 v3; // r14
  unsigned int *v4; // rsi
  unsigned int *v5; // rbp
  size_t v6; // rcx
  size_t v7; // rbx
  size_t v8; // rdx
  int v9; // eax
  char *i; // r15
  __int64 v11; // r12
  size_t v12; // rdx
  unsigned int *v13; // rsi
  size_t v14; // r13
  int v15; // eax
  char *v16; // [rsp+0h] [rbp-58h]
  size_t v17; // [rsp+10h] [rbp-48h]

  if ( a1 == a2 )
    return;
  v16 = a1 + 8;
  if ( a2 == a1 + 8 )
    return;
  while ( 1 )
  {
LABEL_5:
    v2 = *(_QWORD *)a1;
    v3 = *(_QWORD *)v16;
    v4 = *(unsigned int **)(*(_QWORD *)(*(_QWORD *)a1 + 40LL) + 16LL);
    v5 = *(unsigned int **)(*(_QWORD *)(*(_QWORD *)v16 + 40LL) + 16LL);
    v6 = *v4;
    v7 = *v5;
    v8 = v7;
    if ( v6 <= v7 )
      v8 = *v4;
    if ( v8 )
    {
      v17 = *v4;
      v9 = memcmp(v5 + 4, v4 + 4, v8);
      v6 = v17;
      if ( v9 )
        break;
    }
    if ( v7 >= v6 )
      goto LABEL_10;
LABEL_20:
    if ( v16 - a1 <= 8 )
    {
      if ( v16 - a1 == 8 )
        *(_QWORD *)v16 = v2;
    }
    else
    {
      memmove(a1 + 8, a1, v16 - a1);
    }
    v16 += 8;
    *(_QWORD *)a1 = v3;
    if ( a2 == v16 )
      return;
  }
  if ( v9 < 0 )
    goto LABEL_20;
LABEL_10:
  for ( i = v16; ; i -= 8 )
  {
    v11 = *((_QWORD *)i - 1);
    v12 = v7;
    v13 = *(unsigned int **)(*(_QWORD *)(v11 + 40) + 16LL);
    v14 = *v13;
    if ( v14 <= v7 )
      v12 = *v13;
    if ( v12 )
    {
      v15 = memcmp(v5 + 4, v13 + 4, v12);
      if ( v15 )
        break;
    }
    if ( v7 >= v14 )
      goto LABEL_4;
LABEL_16:
    *(_QWORD *)i = v11;
    v5 = *(unsigned int **)(*(_QWORD *)(v3 + 40) + 16LL);
    v7 = *v5;
  }
  if ( v15 < 0 )
    goto LABEL_16;
LABEL_4:
  v16 += 8;
  *(_QWORD *)i = v3;
  if ( a2 != v16 )
    goto LABEL_5;
}

