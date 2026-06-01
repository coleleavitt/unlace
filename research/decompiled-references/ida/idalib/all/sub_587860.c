__int64 __fastcall sub_587860(__int64 *a1, unsigned int a2, void *a3)
{
  __int64 *v3; // r13
  _QWORD *v4; // rax
  void *v5; // rbx
  _QWORD *v6; // r12
  __int64 v7; // rsi
  _QWORD *v8; // rbp
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rsi
  void *v13; // rax
  __int64 v14; // rsi
  __int64 v15; // [rsp+0h] [rbp-58h] BYREF
  unsigned int v16; // [rsp+Ch] [rbp-4Ch] BYREF
  void *ptr; // [rsp+10h] [rbp-48h] BYREF
  __int128 v18; // [rsp+18h] [rbp-40h]
  unsigned __int64 v19; // [rsp+28h] [rbp-30h]

  v3 = a1;
  v16 = a2;
  v15 = (__int64)a3;
  v19 = __readfsqword(0x28u);
  if ( a3 == (void *)-1LL )
  {
    v14 = *a1++;
    v6 = v3 + 3;
    v15 = sub_7BE710(a1, v14, v16, 65);
    v5 = (void *)v15;
    v4 = (_QWORD *)v3[4];
    if ( !v4 )
      return 0;
    v7 = 1;
LABEL_3:
    v8 = v6;
    do
    {
      while ( 1 )
      {
        v9 = v4[2];
        v10 = v4[3];
        if ( v4[4] < (unsigned __int64)v5 )
          break;
        v8 = v4;
        v4 = (_QWORD *)v4[2];
        if ( !v9 )
          goto LABEL_7;
      }
      v4 = (_QWORD *)v4[3];
    }
    while ( v10 );
LABEL_7:
    if ( v8 == v6 || (unsigned __int64)v5 < v8[4] )
    {
      if ( !(_BYTE)v7 )
        goto LABEL_10;
    }
    else if ( (_BYTE)v7 )
    {
      if ( (unsigned __int8)must_journal(a1, v7, v10) )
      {
        ptr = nullptr;
        v18 = 0;
        sub_3A0A80((__int64 *)&ptr, v8[4]);
        sub_3A0970((__int64 *)&ptr, *((_DWORD *)v8 + 10));
        add_undo_record(152, ptr, v18);
        if ( ptr )
        {
          *(_QWORD *)&v18 = 0;
          qfree(ptr);
        }
      }
      v13 = (void *)std::_Rb_tree_rebalance_for_erase(v8, v6);
      operator delete(v13, 0x30u);
      --v3[7];
      sub_7BE850(v3 + 1, *v3, v16, 65);
      return 1;
    }
    return 0;
  }
  v4 = (_QWORD *)a1[4];
  v5 = a3;
  v6 = a1 + 3;
  v7 = 0;
  if ( v4 )
    goto LABEL_3;
LABEL_10:
  sub_587660(v3 + 2, (void **)&v15, &v16, 0x97u);
  v11 = *v3;
  ptr = v5;
  sub_7BE7C0(v3 + 1, v11, v16, &ptr, 8, 65);
  return 1;
}
