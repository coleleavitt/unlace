unsigned __int64 __fastcall CoinModelLinkedList::updateDeleted(__int64 *a1, __int64 a2, __int64 a3, __int64 *a4)
{
  unsigned __int64 result; // rax
  int v6; // esi
  __int64 v7; // r15
  int v8; // edx
  __int64 v9; // rax
  int v10; // ebx
  __int64 v11; // r11
  __int64 v12; // rax
  int v13; // ebp
  __int64 v14; // r14
  __int64 v15; // r10
  int *v16; // r9
  int *v17; // r12
  int *v18; // rdx
  int v19; // r8d
  __int64 v20; // rcx
  int v21; // r9d
  int *v22; // r14
  int *v23; // rdx
  int v24; // r13d
  __int64 v25; // rbp
  unsigned int v26; // edx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // [rsp+0h] [rbp-58h]
  __int64 v31; // [rsp+10h] [rbp-48h]
  __int64 v32; // [rsp+20h] [rbp-38h]

  result = *((int *)a4 + 9);
  v6 = *(_DWORD *)(a4[3] + 4 * result);
  if ( v6 < 0 )
    return result;
  v7 = *a4;
  v8 = *(_DWORD *)(a4[2] + 4 * result);
  v9 = *((int *)a1 + 9);
  v29 = a1[2];
  v32 = a1[3];
  v10 = *(_DWORD *)(v32 + 4 * v9);
  *(_DWORD *)(v29 + 4 * v9) = v8;
  result = v32 + 4LL * *((int *)a1 + 9);
  if ( *(_DWORD *)result == v6 )
    return result;
  *(_DWORD *)result = v6;
  v11 = v6;
  v12 = a3 + 16LL * v6;
  if ( *((_DWORD *)a1 + 12) )
    v13 = *(_DWORD *)(v12 + 4);
  else
    v13 = *(_DWORD *)v12 & 0x7FFFFFFF;
  v14 = a1[1];
  v15 = *a1;
  v16 = (int *)(v29 + 4LL * v13);
  v31 = v14;
  v17 = (int *)(*a1 + 4LL * v6);
  v18 = (int *)(v14 + 4LL * v6);
  if ( *v16 >= 0 )
  {
    v19 = *v17;
    v20 = *v18;
    if ( *v17 < 0 || v10 == v19 )
    {
      *v16 = v20;
      if ( (int)v20 >= 0 )
        goto LABEL_9;
    }
    else
    {
      *(_DWORD *)(v14 + 4LL * v19) = v20;
      if ( (int)v20 >= 0 )
      {
LABEL_9:
        *(_DWORD *)(v15 + 4 * v20) = v19;
        goto LABEL_10;
      }
    }
    *(_DWORD *)(v32 + 4LL * v13) = v19;
  }
LABEL_10:
  *(_DWORD *)(v12 + 4) = -1;
  *(_QWORD *)(v12 + 8) = 0;
  *v18 = -1;
  result = *(unsigned int *)(v7 + 4LL * v6);
  if ( v10 != (_DWORD)result )
  {
    while ( 1 )
    {
      v27 = 4LL * (int)result;
      v17 = (int *)(v15 + v27);
      if ( (result & 0x80000000) == 0LL )
        break;
LABEL_19:
      *(_DWORD *)(v15 + 4 * v11) = result;
      v26 = *(_DWORD *)(v7 + 4LL * (int)result);
      v6 = result;
      if ( v10 == v26 )
        goto LABEL_25;
      result = v26;
      v11 = v6;
    }
    v28 = a3 + 16LL * (int)result;
    if ( *((_DWORD *)a1 + 12) )
      v21 = *(_DWORD *)(v28 + 4);
    else
      v21 = *(_DWORD *)v28 & 0x7FFFFFFF;
    v22 = (int *)(v29 + 4LL * v21);
    v23 = (int *)(v31 + v27);
    if ( *v22 < 0 )
    {
LABEL_18:
      *(_DWORD *)(v28 + 4) = -1;
      *(_QWORD *)(v28 + 8) = 0;
      *v23 = v6;
      goto LABEL_19;
    }
    v24 = *v17;
    v25 = *v23;
    if ( *v17 < 0 || v10 == v24 )
    {
      *v22 = v25;
      if ( (int)v25 >= 0 )
        goto LABEL_17;
    }
    else
    {
      *(_DWORD *)(v31 + 4LL * v24) = v25;
      if ( (int)v25 >= 0 )
      {
LABEL_17:
        *(_DWORD *)(v15 + 4 * v25) = v24;
        goto LABEL_18;
      }
    }
    *(_DWORD *)(v32 + 4LL * v21) = v24;
    goto LABEL_18;
  }
  result = (unsigned int)v6;
LABEL_25:
  if ( v10 >= 0 )
    *(_DWORD *)(v31 + 4LL * v10) = result;
  *v17 = v10;
  return result;
}

