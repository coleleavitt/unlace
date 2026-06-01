__int64 __fastcall sub_1DBAE60(__int64 a1, __int64 a2)
{
  _QWORD **v2; // rax
  _QWORD **v3; // r10
  _QWORD **v4; // rdi
  _QWORD *v5; // rdx
  __int64 v6; // rax
  _QWORD *v7; // r9
  __int64 v8; // r8
  __int64 v9; // rax
  _QWORD *v10; // rcx
  _QWORD *v11; // rax

  v2 = *(_QWORD ***)(a1 + 80);
  v3 = &v2[*(unsigned int *)(a1 + 88)];
  v4 = v2;
  if ( v2 == v3 )
    return 0;
  while ( 1 )
  {
    v5 = (_QWORD *)**v4;
    v6 = 8LL * *((unsigned int *)*v4 + 2);
    v7 = &v5[(unsigned __int64)v6 / 8];
    v8 = v6 >> 3;
    v9 = v6 >> 5;
    if ( v9 )
      break;
    v10 = (_QWORD *)**v4;
LABEL_15:
    if ( v8 == 2 )
      goto LABEL_29;
    if ( v8 == 3 )
    {
      if ( a2 == *v10 )
        goto LABEL_21;
      ++v10;
LABEL_29:
      if ( a2 == *v10 )
        goto LABEL_21;
      ++v10;
      goto LABEL_31;
    }
    if ( v8 != 1 )
      goto LABEL_18;
LABEL_31:
    if ( a2 == *v10 && v7 != v10 )
      return 1;
LABEL_18:
    if ( v3 == ++v4 )
      return 0;
  }
  if ( a2 == *v5 )
  {
    if ( v7 != v5 )
      return 1;
    goto LABEL_18;
  }
  v10 = v5 + 1;
  if ( a2 == v5[1] || (v10 = v5 + 2, a2 == v5[2]) || (v10 = v5 + 3, v11 = &v5[4 * v9], a2 == v5[3]) )
  {
LABEL_21:
    if ( v7 != v10 )
      return 1;
    goto LABEL_18;
  }
  while ( 1 )
  {
    v10 = v5 + 4;
    if ( v11 == v5 + 4 )
    {
      v8 = v7 - v10;
      goto LABEL_15;
    }
    if ( a2 == v5[4] )
      goto LABEL_21;
    if ( a2 == v5[5] )
    {
      v10 = v5 + 5;
      goto LABEL_21;
    }
    if ( a2 == v5[6] )
    {
      if ( v7 == v5 + 6 )
        goto LABEL_18;
      return 1;
    }
    if ( a2 == v5[7] )
      break;
    v5 += 4;
  }
  if ( v7 == v5 + 7 )
    goto LABEL_18;
  return 1;
}
