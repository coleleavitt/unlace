__int64 __fastcall sub_3DCE60(_QWORD *a1, __int64 a2, __int64 a3, char a4)
{
  int v5; // r13d
  unsigned int v6; // r12d
  unsigned int v8; // ebx
  int v10; // eax
  int v11; // r14d
  _QWORD **v12; // r9
  _QWORD *v13; // rdi
  _QWORD *v14; // r14
  __int64 v15; // r15
  unsigned int v16; // eax
  __int64 v17; // rcx
  void *v18; // rdi
  __int64 i; // rax
  __int64 v20; // r10
  __int64 v21; // rsi
  void *v22; // rax
  void *v23; // [rsp+8h] [rbp-60h]
  _QWORD **v24; // [rsp+8h] [rbp-60h]
  _QWORD *v25; // [rsp+10h] [rbp-58h]
  char v26; // [rsp+1Fh] [rbp-49h]
  int v27; // [rsp+20h] [rbp-48h] BYREF
  char v28; // [rsp+24h] [rbp-44h]
  unsigned __int64 v29; // [rsp+28h] [rbp-40h]

  v5 = a4 & 1;
  v6 = a2;
  v8 = a3;
  v29 = __readfsqword(0x28u);
  if ( sub_375980(0x41u, a2, a3, a4 & 1) < 0 )
    return 0;
  if ( qword_2CA1648 )
    qword_2CA1648(v8, 1);
  if ( (unsigned int)sub_3BCF60((__int64)a1, a2) == v8 )
  {
    v11 = a4 & 6;
    if ( v11 != 4 )
    {
      if ( (_DWORD)a2 == *((_DWORD *)a1 + 530) )
        *((_BYTE *)a1 + 2176) = 0;
      sub_3CA660(a1, v8, 0x10000);
      if ( v5 )
      {
        if ( v11 == 2 )
          goto LABEL_8;
        if ( (_DWORD)a2 != *((_DWORD *)a1 + 530) )
        {
          sub_3DC140(a1, (unsigned int)a2, v8);
          goto LABEL_8;
        }
        v26 = 1;
        goto LABEL_26;
      }
      if ( v11 == 2 )
        return 0;
    }
  }
  v26 = 0;
  if ( *((_DWORD *)a1 + 530) != (_DWORD)a2 )
    goto LABEL_6;
LABEL_26:
  v12 = (_QWORD **)a1[268];
  v13 = (_QWORD *)a1[269];
  v25 = a1 + 267;
  if ( !v12 )
  {
    if ( v25 == v13 )
    {
LABEL_39:
      a1[268] = 0;
      a1[271] = 0;
      a1[269] = v25;
      a1[270] = v25;
    }
    goto LABEL_6;
  }
  v14 = a1 + 267;
  v15 = (__int64)v12;
  while ( 1 )
  {
    v16 = *(_DWORD *)(v15 + 32);
    if ( v16 >= v8 )
      break;
    v15 = *(_QWORD *)(v15 + 24);
LABEL_29:
    if ( !v15 )
    {
      if ( v25 == v14 && v14 == v13 )
      {
        do
        {
LABEL_38:
          v23 = v12;
          sub_3DBA60(v12[3]);
          v18 = v23;
          v24 = *((_QWORD ***)v23 + 2);
          operator delete(v18, 0x28u);
          v12 = v24;
        }
        while ( v24 );
        goto LABEL_39;
      }
      goto LABEL_6;
    }
  }
  v17 = *(_QWORD *)(v15 + 16);
  if ( v8 < v16 )
  {
    v14 = (_QWORD *)v15;
    v15 = *(_QWORD *)(v15 + 16);
    goto LABEL_29;
  }
  for ( i = *(_QWORD *)(v15 + 24); i; i = *(_QWORD *)(i + 24) )
  {
    while ( 1 )
    {
      v20 = *(_QWORD *)(i + 16);
      if ( v8 >= *(_DWORD *)(i + 32) )
        break;
      v14 = (_QWORD *)i;
      i = *(_QWORD *)(i + 16);
      if ( !v20 )
        goto LABEL_47;
    }
  }
LABEL_47:
  while ( v17 )
  {
    while ( 1 )
    {
      v21 = *(_QWORD *)(v17 + 16);
      if ( *(_DWORD *)(v17 + 32) < v8 )
        break;
      v15 = v17;
      v17 = *(_QWORD *)(v17 + 16);
      if ( !v21 )
        goto LABEL_50;
    }
    v17 = *(_QWORD *)(v17 + 24);
  }
LABEL_50:
  if ( (_QWORD *)v15 == v13 && v14 == v25 )
    goto LABEL_38;
  while ( v14 != (_QWORD *)v15 )
  {
    v15 = std::_Rb_tree_increment();
    v22 = (void *)std::_Rb_tree_rebalance_for_erase();
    operator delete(v22, 0x28u);
    --a1[271];
  }
LABEL_6:
  if ( !(unsigned __int8)sub_3DC140(a1, v6, v8) && !v26 )
    return 0;
LABEL_8:
  v28 = 0;
  v27 = -1;
  if ( (unsigned __int8)sub_3DC4D0(a1, (__int64)&v27, v8) )
    return 0;
  if ( !(unsigned __int8)sub_3FD660(a1, &v27, v8) )
    sub_3CA860((_DWORD)a1, v8);
  if ( !v5 )
    return 0;
  v10 = sub_3B9AA0((__int64)a1, v8, 4);
  if ( (v10 & 0x10000) != 0 )
    return 0;
  if ( (~(_WORD)v10 & 0x600) != 0 )
  {
    if ( (get_aflags(v8) & 0x20000000) == 0 || !(unsigned __int8)sub_67EC60(*a1, v8, 10) )
    {
      if ( (unsigned int)sub_39D100((__int64)a1, v8, 30) != v8 )
        sub_39F7C0(v8);
      return 1;
    }
    return 0;
  }
  if ( (v10 & 0x10000000) != 0 || (get_aflags(v8) & 0x20000000) != 0 && (unsigned __int8)sub_67EC60(*a1, v8, 10) )
    return 0;
  sub_3A1A90(a1, v8, v8 + 1, 0xAu);
  return 1;
}

