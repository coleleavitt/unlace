__int64 __fastcall sub_85B950(__int64 a1, __int64 a2)
{
  unsigned int *v4; // rdi
  __int64 v5; // rsi
  __int64 v6; // rax
  __int64 v7; // rdx
  char *v8; // rax
  unsigned int *v9; // rdi
  __int64 v10; // rax
  unsigned int v11; // ebp
  __int64 result; // rax
  __int64 v13; // r12
  __int64 v14; // rax
  _BOOL8 v15; // rdx
  _DWORD *v16; // rax
  unsigned int v17; // r12d
  __int64 v18; // rdx
  char *v19; // rax
  __int64 v20; // r13
  __int64 v21; // rax
  _BOOL8 v22; // rdx
  _DWORD *v23; // rax

  v4 = **(unsigned int ***)(a2 + 176);
  v5 = *(_QWORD *)(*(_QWORD *)(a1 + 80) + 1720LL);
  if ( !v5 )
    goto LABEL_15;
  v6 = *v4;
  if ( (unsigned int)v6 >= *(_DWORD *)(v5 - 4) )
    goto LABEL_15;
  v7 = *(_QWORD *)(v5 + 8 * v6);
  if ( !v7 )
    goto LABEL_15;
  v8 = (char *)(v7 + 88);
  if ( *(int *)(v7 + 88) >> 8 == -1 )
    goto LABEL_15;
  while ( *(_DWORD *)(a1 + 12) != *v8 )
  {
    v8 = *((char **)v8 + 1);
    if ( !v8 )
      goto LABEL_15;
  }
  if ( *(int *)v8 >> 8 == -1 )
  {
LABEL_15:
    v17 = sub_859A80(a1, v4);
    if ( (unsigned int)sub_FF9FB0(*(_QWORD *)(a1 + 496), v17) == -1 )
    {
      v20 = *(_QWORD *)(a1 + 496);
      v21 = sub_15D1F10(**(_QWORD **)(*(_QWORD *)(a1 + 88) + 8LL * v17));
      v22 = 0;
      v23 = *(_DWORD **)(v21 + 24);
      if ( v23 && *v23 == 5 )
        v22 = v23[1] == 1;
      sub_1006C00(v20, v17, v22);
    }
    v5 = *(_QWORD *)(*(_QWORD *)(a1 + 80) + 1720LL);
    v9 = **(unsigned int ***)(a2 + 184);
    if ( !v5 )
      goto LABEL_10;
    v10 = *v9;
    if ( (unsigned int)v10 >= *(_DWORD *)(v5 - 4) )
      goto LABEL_10;
  }
  else
  {
    v9 = **(unsigned int ***)(a2 + 184);
    v10 = *v9;
    if ( (unsigned int)v10 >= *(_DWORD *)(v5 - 4) )
    {
LABEL_10:
      v11 = sub_859A80(a1, v9);
      result = sub_FF9FB0(*(_QWORD *)(a1 + 496), v11);
      if ( (_DWORD)result == -1 )
      {
        v13 = *(_QWORD *)(a1 + 496);
        v14 = sub_15D1F10(**(_QWORD **)(*(_QWORD *)(a1 + 88) + 8LL * v11));
        v15 = 0;
        v16 = *(_DWORD **)(v14 + 24);
        if ( v16 )
        {
          if ( *v16 == 5 )
            v15 = v16[1] == 1;
        }
        return sub_1006C00(v13, v11, v15);
      }
      return result;
    }
  }
  v18 = *(_QWORD *)(v5 + 8 * v10);
  if ( !v18 )
    goto LABEL_10;
  v19 = (char *)(v18 + 88);
  if ( *(int *)(v18 + 88) >> 8 == -1 )
    goto LABEL_10;
  while ( *(_DWORD *)(a1 + 12) != *v19 )
  {
    v19 = *((char **)v19 + 1);
    if ( !v19 )
      goto LABEL_10;
  }
  result = (unsigned int)(*(int *)v19 >> 8);
  if ( (_DWORD)result == -1 )
    goto LABEL_10;
  return result;
}

