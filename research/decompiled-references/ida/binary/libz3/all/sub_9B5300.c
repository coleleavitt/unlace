__int64 __fastcall sub_9B5300(_QWORD *a1, unsigned int a2, char a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // r15
  signed int v7; // r14d
  unsigned int v8; // ebp
  int *v9; // rax
  unsigned int v11; // ebp
  int *v12; // rax
  void *v13; // r14
  int v14; // eax
  int v15; // eax
  int *v16; // rax
  void *v17; // r14
  int v18; // eax
  int v19; // eax
  int *v20; // rax
  signed int v21; // [rsp+Ch] [rbp-4Ch]
  __int64 v23; // [rsp+18h] [rbp-40h]
  __int64 v24; // [rsp+18h] [rbp-40h]
  __int64 v25; // [rsp+18h] [rbp-40h]
  __int64 v26; // [rsp+18h] [rbp-40h]

  v4 = a1[4];
  if ( v4 )
    v21 = *(_DWORD *)(v4 - 4);
  else
    v21 = 0;
  v5 = *(_QWORD *)(a1[79] + 24LL * (*(_DWORD *)(a1[82] + 4LL * a2) & 0xFFFFFFF));
  if ( !v5 )
    return (unsigned int)-1;
  v6 = v5 + 40LL * *(unsigned int *)(v5 - 4);
  if ( v5 == v6 )
    return (unsigned int)-1;
  v7 = v21;
  if ( !a3 )
  {
    while ( 1 )
    {
      v8 = *(_DWORD *)(v5 + 32);
      if ( v8 == -1 || a2 == v8 )
        goto LABEL_12;
      if ( *(int *)v5 <= 0 )
        break;
      v26 = *(_QWORD *)(a1[86] + 8LL * v8);
      if ( !v26 )
        goto LABEL_11;
      v16 = sub_9AA900((__int64)a1, v8);
      if ( sub_927C80((__int64)v16, v26 + 16) && (int)v8 < v7 )
      {
LABEL_32:
        v17 = qword_1C7F2C0;
        if ( (*(_BYTE *)(v5 + 4) & 1) != 0 )
        {
          sub_182C690(qword_1C7F2C0, a4, v5);
        }
        else
        {
          v18 = *(_DWORD *)v5;
          *(_BYTE *)(a4 + 4) &= ~1u;
          *(_DWORD *)a4 = v18;
        }
        if ( (*(_BYTE *)(v5 + 20) & 1) != 0 )
        {
          sub_182C690(v17, a4 + 16, v5 + 16);
        }
        else
        {
          v19 = *(_DWORD *)(v5 + 16);
          *(_BYTE *)(a4 + 20) &= ~1u;
          *(_DWORD *)(a4 + 16) = v19;
        }
        v7 = v8;
      }
LABEL_12:
      v5 += 40;
      if ( v6 == v5 )
        goto LABEL_13;
    }
    v23 = *(_QWORD *)(a1[85] + 8LL * v8);
    if ( v23 )
    {
      v9 = sub_9AA900((__int64)a1, v8);
      if ( !sub_927C80(v23 + 16, (__int64)v9) )
        goto LABEL_12;
    }
LABEL_11:
    if ( (int)v8 < v7 )
      goto LABEL_32;
    goto LABEL_12;
  }
  do
  {
    v11 = *(_DWORD *)(v5 + 32);
    if ( v11 == -1 || a2 == v11 )
      goto LABEL_17;
    if ( *(int *)v5 >= 0 )
    {
      v24 = *(_QWORD *)(a1[85] + 8LL * v11);
      if ( v24 )
      {
        v20 = sub_9AA900((__int64)a1, v11);
        if ( !sub_927C80(v24 + 16, (__int64)v20) )
          goto LABEL_17;
      }
    }
    else if ( *(_QWORD *)(a1[86] + 8LL * v11) )
    {
      v25 = *(_QWORD *)(a1[86] + 8LL * v11);
      v12 = sub_9AA900((__int64)a1, v11);
      if ( !sub_927C80((__int64)v12, v25 + 16) || v7 <= (int)v11 )
        goto LABEL_17;
      goto LABEL_24;
    }
    if ( v7 <= (int)v11 )
      goto LABEL_17;
LABEL_24:
    v13 = qword_1C7F2C0;
    if ( (*(_BYTE *)(v5 + 4) & 1) != 0 )
    {
      sub_182C690(qword_1C7F2C0, a4, v5);
    }
    else
    {
      v14 = *(_DWORD *)v5;
      *(_BYTE *)(a4 + 4) &= ~1u;
      *(_DWORD *)a4 = v14;
    }
    if ( (*(_BYTE *)(v5 + 20) & 1) != 0 )
    {
      sub_182C690(v13, a4 + 16, v5 + 16);
    }
    else
    {
      v15 = *(_DWORD *)(v5 + 16);
      *(_BYTE *)(a4 + 20) &= ~1u;
      *(_DWORD *)(a4 + 16) = v15;
    }
    v7 = v11;
LABEL_17:
    v5 += 40;
  }
  while ( v6 != v5 );
LABEL_13:
  if ( v7 >= v21 )
    return (unsigned int)-1;
  return (unsigned int)v7;
}

