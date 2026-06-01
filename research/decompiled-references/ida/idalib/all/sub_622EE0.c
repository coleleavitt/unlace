void __fastcall sub_622EE0(_QWORD *a1, unsigned __int64 a2)
{
  _QWORD *v4; // rdx
  _QWORD **v5; // rsi
  unsigned __int64 v6; // r9
  unsigned __int64 v7; // rdx
  __int64 v8; // r11
  __int64 v9; // r12
  _QWORD *v10; // rax
  _QWORD *v11; // r8
  __int64 v12; // rdi
  _QWORD *v13; // rbp
  _QWORD *v14; // rax
  _QWORD *v15; // rcx
  __int64 v16; // rdx
  void *v17; // rdi
  void *v18; // rdi
  __int64 v19; // rdx

  if ( !a1[3] )
  {
    v4 = (_QWORD *)a1[2];
    v5 = (_QWORD **)(a1 + 2);
    if ( !v4 )
      return;
    while ( v4[1] != a2 )
    {
      v5 = (_QWORD **)v4;
      if ( !*v4 )
        return;
      v4 = (_QWORD *)*v4;
    }
    v13 = *v5;
    v12 = *a1;
    v15 = (_QWORD *)**v5;
    v9 = 8LL * ((*v5)[1] % a1[1]);
    v8 = (*v5)[1] % a1[1];
    v14 = (_QWORD *)(*a1 + v9);
    if ( v5 == (_QWORD **)*v14 )
    {
LABEL_24:
      if ( v15 )
      {
        v19 = v15[1] % a1[1];
        if ( v8 != v19 )
        {
          *(_QWORD *)(v12 + 8 * v19) = v5;
          *(_QWORD *)(*a1 + v9) = 0;
          v15 = (_QWORD *)*v13;
        }
      }
      else
      {
        *v14 = 0;
        v15 = (_QWORD *)*v13;
      }
LABEL_18:
      *v5 = v15;
      v17 = (void *)v13[5];
      if ( v17 )
      {
        v13[6] = 0;
        qfree(v17);
      }
      v18 = (void *)v13[2];
      if ( v18 )
      {
        v13[3] = 0;
        qfree(v18);
      }
      operator delete(v13, 0x48u);
      --a1[3];
      return;
    }
LABEL_15:
    if ( v15 )
    {
      v16 = v15[1] % a1[1];
      if ( v8 != v16 )
      {
        *(_QWORD *)(v12 + 8 * v16) = v5;
        v15 = (_QWORD *)*v13;
      }
    }
    goto LABEL_18;
  }
  v6 = a1[1];
  v7 = a2 % v6;
  v5 = *(_QWORD ***)(*a1 + 8 * (a2 % v6));
  v8 = v7;
  v9 = 8 * v7;
  if ( !v5 )
    return;
  v10 = *v5;
  if ( (*v5)[1] == a2 )
  {
LABEL_13:
    if ( !v5 )
      return;
    v12 = *a1;
    v13 = *v5;
    v14 = (_QWORD *)(*a1 + v9);
    v15 = (_QWORD *)**v5;
    if ( v5 == (_QWORD **)*v14 )
      goto LABEL_24;
    goto LABEL_15;
  }
  while ( 1 )
  {
    v11 = (_QWORD *)*v10;
    if ( !*v10 )
      break;
    v5 = (_QWORD **)v10;
    if ( v7 != v11[1] % v6 )
      break;
    v10 = (_QWORD *)*v10;
    if ( v11[1] == a2 )
      goto LABEL_13;
  }
}
