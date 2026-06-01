void __fastcall sub_2223530(__int64 a1, unsigned __int8 *a2, size_t a3)
{
  unsigned __int8 *v5; // rbx
  unsigned __int8 *v6; // r13
  __int64 v7; // r12
  unsigned int v8; // eax
  unsigned __int64 v9; // r12
  unsigned int v10; // r14d
  int v11; // eax
  unsigned __int8 v12; // al
  unsigned int v13; // eax
  __int64 v14; // r15
  __int64 v15; // rdi
  unsigned __int64 v16; // r14
  size_t v17; // r12
  __int64 v18; // rax
  char *v19; // rdx
  unsigned __int64 v20; // r12
  int v21; // eax
  char v22; // al
  __int64 v23; // rdi
  unsigned __int8 *v24; // [rsp+0h] [rbp-48h]
  char *v25; // [rsp+8h] [rbp-40h]

  v5 = a2;
  if ( !*(_QWORD *)(a1 + 80) )
  {
LABEL_2:
    v6 = &v5[a3];
    if ( v5 >= v6 )
      return;
    while ( (unsigned __int8)(*v5 - 32) > 0x5Eu )
    {
      v8 = sub_2218990(*v5);
      v9 = v6 - v5;
      v10 = v8;
      if ( v8 > (int)v6 - (int)v5 )
      {
        *(_QWORD *)(a1 + 80) = 0;
        v23 = 0;
        if ( v9 > *(_QWORD *)(a1 + 88) )
        {
          sub_2236E10(a1 + 72, a1 + 96, v6 - v5, 1);
          v23 = *(_QWORD *)(a1 + 80);
        }
        memcpy((void *)(*(_QWORD *)(a1 + 72) + v23), v5, v6 - v5);
        *(_QWORD *)(a1 + 80) += v9;
        return;
      }
      v7 = v8;
      v11 = sub_2254910(v5, v8);
      if ( v11 != -1 )
        *(_DWORD *)(a1 + 56) += v11;
      if ( v10 > 1 )
        goto LABEL_5;
      v12 = *v5;
      if ( *v5 == 10 )
      {
        ++*(_DWORD *)(a1 + 60);
LABEL_17:
        *(_DWORD *)(a1 + 56) = 0;
        goto LABEL_5;
      }
      if ( v12 == 13 )
        goto LABEL_17;
      if ( v12 == 9 )
      {
        v5 += v7;
        *(_DWORD *)(a1 + 56) += -*(_DWORD *)(a1 + 56) & 7;
        if ( v6 <= v5 )
          return;
      }
      else
      {
LABEL_5:
        v5 += v7;
        if ( v6 <= v5 )
          return;
      }
    }
    ++*(_DWORD *)(a1 + 56);
    v7 = 1;
    goto LABEL_5;
  }
  v13 = sub_2218990(**(_BYTE **)(a1 + 72));
  v14 = *(_QWORD *)(a1 + 80);
  v15 = a1 + 72;
  v16 = v13;
  v17 = v13 - v14;
  if ( a3 >= v17 )
  {
    v24 = &a2[v17];
    v18 = v14;
    if ( v16 > *(_QWORD *)(a1 + 88) )
    {
      sub_2236E10(v15, a1 + 96, v16, 1);
      v18 = *(_QWORD *)(a1 + 80);
    }
    v19 = *(char **)(a1 + 72);
    if ( a2 != v24 )
    {
      memcpy(&v19[v18], a2, v17);
      v19 = *(char **)(a1 + 72);
      v18 = *(_QWORD *)(a1 + 80);
    }
    v20 = v18 + v17;
    v25 = v19;
    *(_QWORD *)(a1 + 80) = v20;
    v21 = sub_2254910(v19, v20);
    if ( v21 != -1 )
      *(_DWORD *)(a1 + 56) += v21;
    if ( v20 > 1 )
      goto LABEL_30;
    v22 = *v25;
    if ( *v25 == 10 )
    {
      ++*(_DWORD *)(a1 + 60);
    }
    else if ( v22 != 13 )
    {
      if ( v22 == 9 )
        *(_DWORD *)(a1 + 56) += -*(_DWORD *)(a1 + 56) & 7;
      goto LABEL_30;
    }
    *(_DWORD *)(a1 + 56) = 0;
LABEL_30:
    *(_QWORD *)(a1 + 80) = 0;
    v5 = v24;
    a3 = v14 + a3 - v16;
    goto LABEL_2;
  }
  if ( a3 + v14 > *(_QWORD *)(a1 + 88) )
  {
    sub_2236E10(v15, a1 + 96, a3 + v14, 1);
    v14 = *(_QWORD *)(a1 + 80);
  }
  if ( a3 )
  {
    memcpy((void *)(v14 + *(_QWORD *)(a1 + 72)), a2, a3);
    v14 = *(_QWORD *)(a1 + 80);
  }
  *(_QWORD *)(a1 + 80) = v14 + a3;
}
