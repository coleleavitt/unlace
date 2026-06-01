__int64 __fastcall sub_85BB50(_QWORD *a1, __int64 a2)
{
  __int64 v2; // r12
  unsigned int *v5; // rdi
  __int64 v6; // rsi
  __int64 v7; // rax
  __int64 v8; // rdx
  char *v9; // rax
  unsigned int *v10; // rdi
  __int64 v11; // rax
  unsigned int v12; // ebp
  __int64 result; // rax
  __int64 v14; // r12
  __int64 v15; // rax
  _BOOL8 v16; // rdx
  _DWORD *v17; // rax
  unsigned int v18; // r13d
  __int64 v19; // rdx
  char *v20; // rax
  __int64 v21; // r14
  __int64 v22; // rax
  _BOOL8 v23; // rdx
  _DWORD *v24; // rax

  v2 = (__int64)(a1 - 6);
  v5 = **(unsigned int ***)(a2 + 176);
  v6 = *(_QWORD *)(a1[4] + 1720LL);
  if ( !v6 )
    goto LABEL_15;
  v7 = *v5;
  if ( (unsigned int)v7 >= *(_DWORD *)(v6 - 4) )
    goto LABEL_15;
  v8 = *(_QWORD *)(v6 + 8 * v7);
  if ( !v8 )
    goto LABEL_15;
  v9 = (char *)(v8 + 88);
  if ( *(int *)(v8 + 88) >> 8 == -1 )
    goto LABEL_15;
  while ( *((_DWORD *)a1 - 9) != *v9 )
  {
    v9 = *((char **)v9 + 1);
    if ( !v9 )
      goto LABEL_15;
  }
  if ( *(int *)v9 >> 8 == -1 )
  {
LABEL_15:
    v18 = sub_859A80(v2, v5);
    if ( (unsigned int)sub_FF9FB0(a1[56], v18) == -1 )
    {
      v21 = a1[56];
      v22 = sub_15D1F10(**(_QWORD **)(a1[5] + 8LL * v18));
      v23 = 0;
      v24 = *(_DWORD **)(v22 + 24);
      if ( v24 && *v24 == 5 )
        v23 = v24[1] == 1;
      sub_1006C00(v21, v18, v23);
    }
    v6 = *(_QWORD *)(a1[4] + 1720LL);
    v10 = **(unsigned int ***)(a2 + 184);
    if ( !v6 )
      goto LABEL_10;
    v11 = *v10;
    if ( (unsigned int)v11 >= *(_DWORD *)(v6 - 4) )
      goto LABEL_10;
  }
  else
  {
    v10 = **(unsigned int ***)(a2 + 184);
    v11 = *v10;
    if ( (unsigned int)v11 >= *(_DWORD *)(v6 - 4) )
    {
LABEL_10:
      v12 = sub_859A80(v2, v10);
      result = sub_FF9FB0(a1[56], v12);
      if ( (_DWORD)result == -1 )
      {
        v14 = a1[56];
        v15 = sub_15D1F10(**(_QWORD **)(a1[5] + 8LL * v12));
        v16 = 0;
        v17 = *(_DWORD **)(v15 + 24);
        if ( v17 )
        {
          if ( *v17 == 5 )
            v16 = v17[1] == 1;
        }
        return sub_1006C00(v14, v12, v16);
      }
      return result;
    }
  }
  v19 = *(_QWORD *)(v6 + 8 * v11);
  if ( !v19 )
    goto LABEL_10;
  v20 = (char *)(v19 + 88);
  if ( *(int *)(v19 + 88) >> 8 == -1 )
    goto LABEL_10;
  while ( *((_DWORD *)a1 - 9) != *v20 )
  {
    v20 = *((char **)v20 + 1);
    if ( !v20 )
      goto LABEL_10;
  }
  result = (unsigned int)(*(int *)v20 >> 8);
  if ( (_DWORD)result == -1 )
    goto LABEL_10;
  return result;
}

