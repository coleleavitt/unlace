__int64 __fastcall set_undo_param(int a1, unsigned __int64 a2)
{
  __int64 v2; // rbp
  _QWORD *v3; // r12
  _QWORD *v4; // rbx
  void *v5; // rdi
  void *v6; // rdi
  unsigned __int64 v8; // rax
  _QWORD *v9; // rax
  void *v10; // rdi
  void *v11; // rdi
  _QWORD *v12; // rbx
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rcx
  _QWORD *v15; // r13
  _QWORD *v16; // r12
  void *v17; // rdi
  void *v18; // rdi

  v2 = *(_QWORD *)(qword_2CCB598 + 1848);
  if ( a1 != 2 )
  {
    if ( a1 != 3 )
    {
      if ( a1 != 1 )
      {
        if ( !under_debugger )
          interr(1755);
        BUG();
      }
      *(_QWORD *)(v2 + 96) = a2;
      if ( !a2 )
        goto LABEL_5;
      return 1;
    }
    *(_BYTE *)(v2 + 112) = a2 != 0;
    if ( a2 || (unsigned __int8)sub_3A1A70() )
      return 1;
LABEL_5:
    v3 = *(_QWORD **)(v2 + 8);
    if ( (_QWORD *)(v2 + 8) != v3 )
    {
      do
      {
        v4 = v3;
        v3 = (_QWORD *)*v3;
        *(_QWORD *)v4[1] = v3;
        v3[1] = v4[1];
        v5 = (void *)v4[5];
        if ( v5 )
        {
          v4[6] = 0;
          qfree(v5);
        }
        v6 = (void *)v4[2];
        if ( v6 )
        {
          v4[3] = 0;
          qfree(v6);
        }
        qfree(v4);
        --*(_QWORD *)(v2 + 24);
      }
      while ( (_QWORD *)(v2 + 8) != v3 );
      v3 = *(_QWORD **)(v2 + 8);
    }
    *(_QWORD *)(v2 + 32) = v3;
    *(_QWORD *)(v2 + 104) = 0;
    *(_BYTE *)(v2 + 120) = 0;
    return 1;
  }
  *(_QWORD *)(v2 + 88) = a2;
  if ( !a2 )
    goto LABEL_5;
  v8 = *(_QWORD *)(v2 + 24);
  if ( a2 >= v8 )
    return 1;
  while ( 1 )
  {
    v12 = *(_QWORD **)(v2 + 8);
    v13 = *(_QWORD *)(v2 + 104);
    v14 = v12[3] + v12[6];
    if ( v13 < v14 )
      sub_57E1C0();
    *(_QWORD *)(v2 + 104) = v13 - v14;
    if ( *(_QWORD **)(v2 + 32) == v12 || v8 == 1 )
      break;
    v9 = (_QWORD *)*v12;
    *(_QWORD *)v12[1] = *v12;
    v9[1] = v12[1];
    v10 = (void *)v12[5];
    if ( v10 )
    {
      v12[6] = 0;
      qfree(v10);
    }
    v11 = (void *)v12[2];
    if ( v11 )
    {
      v12[3] = 0;
      qfree(v11);
    }
    qfree(v12);
    v8 = *(_QWORD *)(v2 + 24) - 1LL;
    *(_QWORD *)(v2 + 24) = v8;
    if ( *(_QWORD *)(v2 + 88) >= v8 )
      return 1;
  }
  v15 = (_QWORD *)(v2 + 8);
  if ( v12 != (_QWORD *)(v2 + 8) )
  {
    do
    {
      v16 = v12;
      v12 = (_QWORD *)*v12;
      *(_QWORD *)v16[1] = v12;
      v12[1] = v16[1];
      v17 = (void *)v16[5];
      if ( v17 )
      {
        v16[6] = 0;
        qfree(v17);
      }
      v18 = (void *)v16[2];
      if ( v18 )
      {
        v16[3] = 0;
        qfree(v18);
      }
      qfree(v16);
      --*(_QWORD *)(v2 + 24);
    }
    while ( v15 != v12 );
    v15 = *(_QWORD **)(v2 + 8);
  }
  *(_QWORD *)(v2 + 32) = v15;
  *(_QWORD *)(v2 + 104) = 0;
  *(_BYTE *)(v2 + 120) = 0;
  return 1;
}
