_QWORD *__fastcall sub_82BF0(_QWORD *a1, __int64 *a2)
{
  __int64 i; // rbx
  __int64 *v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // rcx
  __int64 *v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rax
  unsigned __int64 *v9; // rdx
  __int64 v10; // rax
  _QWORD *result; // rax
  __int64 v12; // r8
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rax
  unsigned __int64 *v16; // r9
  unsigned __int64 v17; // r8
  _QWORD *v18; // rax
  unsigned __int64 *v19; // r9
  _QWORD *v20; // rax

LABEL_1:
  for ( i = *a2; ; *(_QWORD *)v5 = i )
  {
    v3 = (__int64 *)(i & 0xFFFFFFFFFFFFFFFCLL);
    v4 = *v3;
    if ( (*v3 & 2) != 0 || (v4 & 1) == 0 )
      goto LABEL_11;
    v5 = v4 & 0xFFFFFFFFFFFFFFFCLL;
    v6 = *(__int64 **)((v4 & 0xFFFFFFFFFFFFFFFCLL) + 8);
    if ( v6 != v3 )
      break;
    v6 = *(__int64 **)(v5 + 16);
    v12 = *v6;
    if ( (*v6 & 2) != 0 || (v12 = *v6 & 1, !(_DWORD)v12) )
    {
      if ( (__int64 *)v3[2] == a2 )
      {
        sub_82A70(a1, (unsigned __int64)v3, (__int64)v6, v5, v12);
        a2 = v3;
        v13 = *(_QWORD *)(*v3 & 0xFFFFFFFFFFFFFFFCLL);
        v3 = (__int64 *)(*v3 & 0xFFFFFFFFFFFFFFFCLL);
        v5 = v13 & 0xFFFFFFFFFFFFFFFCLL;
      }
      else
      {
        v13 = *v3;
      }
      *v3 = v13 & 0xFFFFFFFFFFFFFFFELL;
      v14 = *(_QWORD *)(v5 + 8);
      v15 = *(_QWORD *)v5 | 1LL;
      *(_QWORD *)v5 = v15;
      if ( (*(_BYTE *)v14 & 2) != 0 )
      {
        if ( !under_debugger )
        {
          a1 = (_QWORD *)(&stru_D68 + 9);
          v20 = (_QWORD *)interr(3441, a2, v14, v5, v12);
LABEL_36:
          v20[1] = v9;
LABEL_30:
          v9[1] = v5;
          goto LABEL_31;
        }
LABEL_42:
        BUG();
      }
      v16 = *(unsigned __int64 **)(v14 + 16);
      *(_QWORD *)(v5 + 8) = v16;
      if ( (*v16 & 2) == 0 )
      {
        *v16 = v5 | *v16 & 3;
        v15 = *(_QWORD *)v5;
      }
      *(_QWORD *)v14 = *(_QWORD *)v14 & 3LL | v15 & 0xFFFFFFFFFFFFFFFCLL;
      v17 = v14 & 0xFFFFFFFFFFFFFFFCLL;
      v18 = (_QWORD *)(*(_QWORD *)v5 & 0xFFFFFFFFFFFFFFFCLL);
      if ( v18 == (_QWORD *)*a1 )
      {
        *v18 = v17 | *v18 & 3LL;
      }
      else if ( v5 == v18[2] )
      {
        v18[2] = v14;
      }
      else
      {
        v18[1] = v14;
      }
      *(_QWORD *)(v14 + 16) = v5;
LABEL_31:
      *(_QWORD *)v5 = v17 | *(_QWORD *)v5 & 3LL;
      goto LABEL_1;
    }
LABEL_14:
    a2 = (__int64 *)(v4 & 0xFFFFFFFFFFFFFFFCLL);
    *v3 = v4 & 0xFFFFFFFFFFFFFFFELL;
    *v6 &= ~1uLL;
    i = *(_QWORD *)v5 | 1LL;
  }
  v7 = *v6;
  if ( (*v6 & 2) == 0 )
  {
    v7 = *v6 & 1;
    if ( (_DWORD)v7 )
      goto LABEL_14;
  }
  if ( (__int64 *)v3[1] == a2 )
  {
    sub_82B30(a1, (unsigned __int64)v3, (__int64)v6, v5, v7);
    a2 = v3;
    v8 = *(_QWORD *)(*v3 & 0xFFFFFFFFFFFFFFFCLL);
    v3 = (__int64 *)(*v3 & 0xFFFFFFFFFFFFFFFCLL);
    v5 = v8 & 0xFFFFFFFFFFFFFFFCLL;
  }
  else
  {
    v8 = *v3;
  }
  *v3 = v8 & 0xFFFFFFFFFFFFFFFELL;
  v9 = *(unsigned __int64 **)(v5 + 16);
  v10 = *(_QWORD *)v5 | 1LL;
  *(_QWORD *)v5 = v10;
  if ( (*(_BYTE *)v9 & 2) == 0 )
  {
    v19 = (unsigned __int64 *)v9[1];
    *(_QWORD *)(v5 + 16) = v19;
    if ( (*v19 & 2) == 0 )
    {
      *v19 = v5 | *v19 & 3;
      v10 = *(_QWORD *)v5;
    }
    *v9 = *v9 & 3 | v10 & 0xFFFFFFFFFFFFFFFCLL;
    v17 = (unsigned __int64)v9 & 0xFFFFFFFFFFFFFFFCLL;
    v20 = (_QWORD *)(*(_QWORD *)v5 & 0xFFFFFFFFFFFFFFFCLL);
    if ( v20 == (_QWORD *)*a1 )
    {
      *v20 = v17 | *v20 & 3LL;
    }
    else
    {
      if ( v5 == v20[1] )
        goto LABEL_36;
      v20[2] = v9;
    }
    goto LABEL_30;
  }
  if ( under_debugger )
    goto LABEL_42;
  a1 = (_QWORD *)(&stru_D68 + 8);
  interr(3440, a2, v9, v5, v7);
LABEL_11:
  result = (_QWORD *)(*(_QWORD *)*a1 & 0xFFFFFFFFFFFFFFFCLL);
  if ( (*result & 2) == 0 )
    *result &= ~1uLL;
  return result;
}
