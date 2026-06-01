__int64 __fastcall sub_3E2A00(_QWORD *a1, unsigned __int64 a2, void *a3, char a4)
{
  int v5; // r13d
  int v10; // eax
  int v11; // r14d
  _QWORD *v12; // r9
  _QWORD *v13; // rdi
  _QWORD *v14; // r14
  _QWORD *v15; // r15
  unsigned __int64 v16; // rax
  _QWORD *v17; // rcx
  void *v18; // rdi
  _QWORD *i; // rax
  __int64 v20; // r10
  __int64 v21; // rsi
  void *v22; // rax
  void *v23; // [rsp+8h] [rbp-70h]
  _QWORD *v24; // [rsp+8h] [rbp-70h]
  void *v25; // [rsp+8h] [rbp-70h]
  _QWORD *v26; // [rsp+10h] [rbp-68h]
  char v27; // [rsp+1Fh] [rbp-59h]
  __int64 v28; // [rsp+20h] [rbp-58h] BYREF
  char v29; // [rsp+28h] [rbp-50h]
  unsigned __int64 v30; // [rsp+38h] [rbp-40h]

  v5 = a4 & 1;
  v30 = __readfsqword(0x28u);
  if ( sub_3792E0(0x41u, a2, a3, a4 & 1) < 0 )
    return 0;
  if ( qword_2CCB548 )
    qword_2CCB548(a3, 1);
  if ( (void *)sub_3C1F00(a1, a2) == a3 )
  {
    v11 = a4 & 6;
    if ( v11 != 4 )
    {
      if ( a2 == a1[276] )
        *((_BYTE *)a1 + 2264) = 0;
      sub_3CFF40(a1, a3, (__int64)&stru_10000);
      if ( v5 )
      {
        if ( v11 == 2 )
          goto LABEL_8;
        if ( a2 != a1[276] )
        {
          sub_3E1C40(a1, a2, (__int64)a3);
          goto LABEL_8;
        }
        v27 = 1;
        goto LABEL_26;
      }
      if ( v11 == 2 )
        return 0;
    }
  }
  v27 = 0;
  if ( a1[276] != a2 )
    goto LABEL_6;
LABEL_26:
  v12 = (_QWORD *)a1[279];
  v13 = (_QWORD *)a1[280];
  v26 = a1 + 278;
  if ( !v12 )
  {
    if ( v26 == v13 )
    {
LABEL_39:
      a1[279] = 0;
      a1[282] = 0;
      a1[280] = v26;
      a1[281] = v26;
    }
    goto LABEL_6;
  }
  v14 = a1 + 278;
  v15 = v12;
  while ( 1 )
  {
    v16 = v15[4];
    if ( v16 >= (unsigned __int64)a3 )
      break;
    v15 = (_QWORD *)v15[3];
LABEL_29:
    if ( !v15 )
    {
      if ( v26 == v14 && v14 == v13 )
      {
        do
        {
LABEL_38:
          v23 = v12;
          sub_3E1870((_QWORD *)v12[3]);
          v18 = v23;
          v24 = *((_QWORD **)v23 + 2);
          operator delete(v18, 0x30u);
          v12 = v24;
        }
        while ( v24 );
        goto LABEL_39;
      }
      goto LABEL_6;
    }
  }
  v17 = (_QWORD *)v15[2];
  if ( (unsigned __int64)a3 < v16 )
  {
    v14 = v15;
    v15 = (_QWORD *)v15[2];
    goto LABEL_29;
  }
  for ( i = (_QWORD *)v15[3]; i; i = (_QWORD *)i[3] )
  {
    while ( 1 )
    {
      v20 = i[2];
      if ( (unsigned __int64)a3 >= i[4] )
        break;
      v14 = i;
      i = (_QWORD *)i[2];
      if ( !v20 )
        goto LABEL_47;
    }
  }
LABEL_47:
  while ( v17 )
  {
    while ( 1 )
    {
      v21 = v17[2];
      if ( v17[4] < (unsigned __int64)a3 )
        break;
      v15 = v17;
      v17 = (_QWORD *)v17[2];
      if ( !v21 )
        goto LABEL_50;
    }
    v17 = (_QWORD *)v17[3];
  }
LABEL_50:
  if ( v15 == v13 && v14 == v26 )
    goto LABEL_38;
  while ( v14 != v15 )
  {
    v25 = v15;
    v15 = (_QWORD *)std::_Rb_tree_increment(v15);
    v22 = (void *)std::_Rb_tree_rebalance_for_erase(v25, v26);
    operator delete(v22, 0x30u);
    --a1[282];
  }
LABEL_6:
  if ( !(unsigned __int8)sub_3E1C40(a1, a2, (__int64)a3) && !v27 )
    return 0;
LABEL_8:
  v29 = 0;
  v28 = -1;
  if ( (unsigned __int8)sub_3E2000(a1, (__int64)&v28, (__int64)a3) )
    return 0;
  if ( !(unsigned __int8)sub_4108F0(a1, &v28, a3) )
    sub_3D0150((_DWORD)a1, (_DWORD)a3);
  if ( !v5 )
    return 0;
  v10 = sub_3BE900(a1, (unsigned __int64)a3, 4);
  if ( (v10 & 0x10000) != 0 )
    return 0;
  if ( (~(_WORD)v10 & 0x600) != 0 )
  {
    if ( (get_aflags(a3) & 0x20000000) == 0 || !(unsigned __int8)sub_69F350(*a1, a3, 10) )
    {
      if ( (void *)sub_3A1F40((__int64)a1, (unsigned __int64)a3, 30) != a3 )
        sub_3A4240((char *)a3);
      return 1;
    }
    return 0;
  }
  if ( (v10 & 0x10000000) != 0 || (get_aflags(a3) & 0x20000000) != 0 && (unsigned __int8)sub_69F350(*a1, a3, 10) )
    return 0;
  sub_3A61A0(a1, (unsigned __int64)a3, (unsigned __int64)a3 + 1, 0xAu);
  return 1;
}
