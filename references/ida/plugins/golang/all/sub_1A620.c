__int64 __fastcall sub_1A620(__int64 *a1, unsigned __int64 a2, __int64 a3, _QWORD *a4)
{
  unsigned int tinfo_property; // r14d
  unsigned int dword; // eax
  unsigned int v7; // ebp
  int v9; // eax
  bool v10; // dl
  __int64 tinfo_size; // rax
  unsigned __int64 v12; // r15
  _QWORD *v13; // r12
  unsigned int v14; // eax
  _QWORD *v15; // r8
  bool v16; // r9
  _QWORD *v17; // rbx
  unsigned __int64 v18; // rax
  _QWORD *v19; // rdx
  __int64 v20; // rax
  _QWORD *i; // rax
  __int64 v22; // rdi
  __int64 v23; // rsi
  __int64 v24; // rbx
  void *v25; // rax
  __int64 v26; // rbp
  unsigned __int64 v27; // rbp
  _QWORD *v28; // [rsp+8h] [rbp-60h]
  bool v29; // [rsp+17h] [rbp-51h]
  unsigned __int64 v30[10]; // [rsp+18h] [rbp-50h] BYREF

  v30[0] = a2;
  v30[2] = __readfsqword(0x28u);
  tinfo_property = get_tinfo_property();
  while ( (get_tinfo_property() & 0xF) == 0xA )
  {
    if ( *(_BYTE *)(*a1 + 565) == 4 )
    {
      dword = get_dword();
      v30[0] = dword;
      if ( !dword )
        return 0;
    }
    else
    {
      v30[0] = get_qword();
      if ( !v30[0] )
        return 0;
    }
    if ( !(unsigned __int8)is_mapped() )
      return 0;
    v30[1] = get_tinfo_property();
    copy_tinfo_t();
    clear_tinfo_t();
    tinfo_property = get_tinfo_property();
  }
  if ( *((_DWORD *)a1 + 2) == tinfo_property )
  {
    v26 = *a1;
    get_tinfo_tid();
    if ( *(_BYTE *)(v26 + 565) == 4 )
      get_dword();
    else
      get_qword();
    if ( (unsigned __int8)is_mapped() )
    {
      v27 = *(_BYTE *)(v26 + 565) == 4 ? (unsigned int)get_dword() : get_qword();
      if ( get_max_strlit_length() >= v27 )
      {
        create_data();
        sub_7D60();
      }
    }
    return 1;
  }
  v9 = *((_DWORD *)a1 + 3);
  if ( v9 && v9 == tinfo_property )
  {
    v20 = getseg();
    if ( v20 && (*(_BYTE *)(v20 + 42) & 2) == 0 )
    {
      sub_114E0(*a1);
      return (unsigned int)sub_15CE0((_QWORD *)*a1, v30[0], 0);
    }
    return 0;
  }
  sub_14E00(a4, v30);
  v29 = v10;
  if ( !v10 )
    return 0;
  tinfo_size = get_tinfo_size();
  v12 = v30[0];
  v13 = a4 + 1;
  v14 = sub_1AD20(a1, v30[0], tinfo_size, tinfo_property, a4);
  v15 = (_QWORD *)a4[2];
  v28 = a4 + 1;
  v16 = v29;
  v7 = v14;
  if ( v15 )
  {
    v17 = (_QWORD *)a4[2];
    while ( 1 )
    {
      v18 = v17[4];
      if ( v18 < v12 )
      {
        v17 = (_QWORD *)v17[3];
      }
      else
      {
        v19 = (_QWORD *)v17[2];
        if ( v12 >= v18 )
        {
          for ( i = (_QWORD *)v17[3]; i; i = (_QWORD *)i[3] )
          {
            while ( 1 )
            {
              v22 = i[2];
              if ( v12 >= i[4] )
                break;
              v13 = i;
              i = (_QWORD *)i[2];
              if ( !v22 )
                goto LABEL_32;
            }
          }
LABEL_32:
          while ( v19 )
          {
            while ( 1 )
            {
              v23 = v19[2];
              if ( v19[4] < v12 )
                break;
              v17 = v19;
              v19 = (_QWORD *)v19[2];
              if ( !v23 )
                goto LABEL_35;
            }
            v19 = (_QWORD *)v19[3];
          }
LABEL_35:
          if ( (_QWORD *)a4[3] != v17 || v28 != v13 )
          {
            if ( v13 != v17 )
            {
              do
              {
                v24 = std::_Rb_tree_increment();
                v25 = (void *)std::_Rb_tree_rebalance_for_erase();
                operator delete(v25, 0x28u);
                --a4[5];
              }
              while ( (_QWORD *)v24 != v13 );
            }
            return v7;
          }
LABEL_24:
          sub_5970(v15);
          a4[2] = 0;
          a4[5] = 0;
          a4[3] = v28;
          a4[4] = v28;
          return v7;
        }
        v13 = v17;
        v17 = (_QWORD *)v17[2];
      }
      if ( !v17 )
      {
        v16 = v13 == v28;
        goto LABEL_22;
      }
    }
  }
  v13 = a4 + 1;
LABEL_22:
  if ( (_QWORD *)a4[3] == v13 && v16 )
    goto LABEL_24;
  return v7;
}
