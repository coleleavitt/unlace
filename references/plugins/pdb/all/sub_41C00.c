__int64 __fastcall sub_41C00(_QWORD *a1, unsigned __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  _QWORD *v6; // rax
  __int64 v7; // rbx
  unsigned __int64 v8; // rax
  const char *v9; // rdx
  const char *v10; // rsi
  __int64 v12; // rax
  __int64 v13; // rdi
  _QWORD *v14; // r12
  __int64 v15; // rdi
  __int64 v16; // rdi
  __int64 v17; // rbx
  _QWORD *v18; // rbp
  __int64 v19; // rdi

  if ( (debug & 0x40000) != 0 )
    sub_29350();
  v6 = (_QWORD *)a1[8];
  v7 = (__int64)(a1 + 7);
  if ( !v6 )
    goto LABEL_12;
  do
  {
    while ( 1 )
    {
      a4 = v6[2];
      a3 = v6[3];
      if ( v6[4] < a2 )
        break;
      v7 = (__int64)v6;
      v6 = (_QWORD *)v6[2];
      if ( !a4 )
        goto LABEL_8;
    }
    v6 = (_QWORD *)v6[3];
  }
  while ( a3 );
LABEL_8:
  if ( a1 + 7 == (_QWORD *)v7 || a2 < *(_QWORD *)(v7 + 32) )
  {
LABEL_12:
    if ( a1[9] == v7 )
      return 0;
    v7 = std::_Rb_tree_decrement(v7, a2, a3, a4, a5);
    v8 = *(_QWORD *)(v7 + 32);
    if ( a2 < v8 || a2 >= *(_QWORD *)(v7 + 128) + v8 )
      return 0;
  }
  if ( *(_BYTE *)(v7 + 136) )
    return v7 + 40;
  sub_244A0();
  v9 = src;
  if ( a1[13] )
  {
    v9 = (const char *)a1[12];
    v10 = src;
    if ( !*(_QWORD *)(v7 + 104) )
      goto LABEL_16;
    goto LABEL_31;
  }
  v10 = src;
  if ( *(_QWORD *)(v7 + 104) )
LABEL_31:
    v10 = *(const char **)(v7 + 96);
LABEL_16:
  if ( (int)sub_411B0((__int64 *)(v7 + 40), v10, v9, *(_QWORD *)(v7 + 120)) >= 0 )
  {
    *(_BYTE *)(v7 + 136) = 1;
    return v7 + 40;
  }
  v12 = std::_Rb_tree_rebalance_for_erase(v7, a1 + 7);
  v13 = *(_QWORD *)(v12 + 152);
  v14 = (_QWORD *)v12;
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
  v15 = v14[18];
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
  v16 = v14[12];
  if ( v16 )
  {
    v14[13] = 0;
    qfree(v16);
  }
  v17 = v14[8];
  while ( v17 )
  {
    v18 = (_QWORD *)v17;
    sub_27580(*(_QWORD **)(v17 + 24));
    v19 = *(_QWORD *)(v17 + 32);
    v17 = *(_QWORD *)(v17 + 16);
    if ( v19 )
    {
      v18[5] = 0;
      qfree(v19);
    }
    operator delete(v18, 0x40u);
  }
  operator delete(v14, 0xA8u);
  --a1[11];
  return 0;
}
