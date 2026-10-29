__int64 __fastcall sub_9BC500(_QWORD *a1, unsigned int a2, char a3, __int64 a4)
{
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // r15
  signed int v8; // r14d
  unsigned int v9; // ebp
  __int64 v10; // rdx
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rsi
  unsigned int v14; // ebp
  void *v16; // r14
  int v17; // eax
  int v18; // eax
  void *v19; // r14
  int v20; // eax
  int v21; // eax
  signed int v22; // [rsp+Ch] [rbp-4Ch]
  __int64 v24; // [rsp+18h] [rbp-40h]
  __int64 v25; // [rsp+18h] [rbp-40h]
  __int64 v26; // [rsp+18h] [rbp-40h]
  __int64 v27; // [rsp+18h] [rbp-40h]

  v5 = a1[4];
  if ( v5 )
    v22 = *(_DWORD *)(v5 - 4);
  else
    v22 = 0;
  v6 = *(_QWORD *)(a1[71] + 24LL * (*(_DWORD *)(a1[74] + 4LL * a2) & 0xFFFFFFF));
  if ( !v6 )
    return (unsigned int)-1;
  v7 = v6 + 40LL * *(unsigned int *)(v6 - 4);
  if ( v6 == v7 )
    return (unsigned int)-1;
  v8 = v22;
  if ( !a3 )
  {
    while ( 1 )
    {
      v9 = *(_DWORD *)(v6 + 32);
      if ( v9 != -1 && a2 != v9 )
      {
        if ( *(int *)v6 > 0 )
        {
          v27 = *(_QWORD *)(a1[78] + 8LL * v9);
          if ( !v27 )
            goto LABEL_24;
          v11 = sub_999800((__int64)a1, v9);
          v10 = v27 + 16;
        }
        else
        {
          v24 = *(_QWORD *)(a1[77] + 8LL * v9);
          if ( !v24 )
            goto LABEL_24;
          v10 = sub_999800((__int64)a1, v9);
          v11 = v24 + 16;
        }
        if ( sub_3ED700((__int64)qword_1C7F2C0, v11, v10) )
        {
LABEL_24:
          if ( (int)v9 < v8 )
          {
            v16 = qword_1C7F2C0;
            if ( (*(_BYTE *)(v6 + 4) & 1) != 0 )
            {
              sub_182C690(qword_1C7F2C0, a4, v6);
            }
            else
            {
              v17 = *(_DWORD *)v6;
              *(_BYTE *)(a4 + 4) &= ~1u;
              *(_DWORD *)a4 = v17;
            }
            if ( (*(_BYTE *)(v6 + 20) & 1) != 0 )
            {
              sub_182C690(v16, a4 + 16, v6 + 16);
            }
            else
            {
              v18 = *(_DWORD *)(v6 + 16);
              *(_BYTE *)(a4 + 20) &= ~1u;
              *(_DWORD *)(a4 + 16) = v18;
            }
            v8 = v9;
          }
        }
      }
      v6 += 40;
      if ( v7 == v6 )
        goto LABEL_26;
    }
  }
  do
  {
    v14 = *(_DWORD *)(v6 + 32);
    if ( v14 == -1 || a2 == v14 )
      goto LABEL_15;
    if ( *(int *)v6 >= 0 )
    {
      v25 = *(_QWORD *)(a1[77] + 8LL * v14);
      if ( v25 )
      {
        v12 = sub_999800((__int64)a1, v14);
        v13 = v25 + 16;
        goto LABEL_13;
      }
    }
    else if ( *(_QWORD *)(a1[78] + 8LL * v14) )
    {
      v26 = *(_QWORD *)(a1[78] + 8LL * v14);
      v13 = sub_999800((__int64)a1, v14);
      v12 = v26 + 16;
LABEL_13:
      if ( !sub_3ED700((__int64)qword_1C7F2C0, v13, v12) )
        goto LABEL_15;
    }
    if ( v8 > (int)v14 )
    {
      v19 = qword_1C7F2C0;
      if ( (*(_BYTE *)(v6 + 4) & 1) != 0 )
      {
        sub_182C690(qword_1C7F2C0, a4, v6);
      }
      else
      {
        v20 = *(_DWORD *)v6;
        *(_BYTE *)(a4 + 4) &= ~1u;
        *(_DWORD *)a4 = v20;
      }
      if ( (*(_BYTE *)(v6 + 20) & 1) != 0 )
      {
        sub_182C690(v19, a4 + 16, v6 + 16);
      }
      else
      {
        v21 = *(_DWORD *)(v6 + 16);
        *(_BYTE *)(a4 + 20) &= ~1u;
        *(_DWORD *)(a4 + 16) = v21;
      }
      v8 = v14;
    }
LABEL_15:
    v6 += 40;
  }
  while ( v7 != v6 );
LABEL_26:
  if ( v8 >= v22 )
    return (unsigned int)-1;
  return (unsigned int)v8;
}

