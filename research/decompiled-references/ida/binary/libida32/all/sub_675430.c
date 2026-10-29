unsigned __int64 __fastcall sub_675430(__int64 a1, __int64 a2, __int64 *a3)
{
  _QWORD *v4; // rsi
  __int64 v6; // rax
  __int64 v7; // r13
  __int64 v8; // r14
  __int64 v9; // r15
  int v10; // r8d
  int v11; // r9d
  __int64 v12; // rdx
  __int64 v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rbp
  __int64 v16; // r14
  int v17; // r8d
  int v18; // r9d
  __int64 v19; // rdx
  __int64 v20; // rsi
  __int64 v21; // rax
  __int64 i; // [rsp+8h] [rbp-A0h]
  __int64 j; // [rsp+8h] [rbp-A0h]
  _BYTE v25[88]; // [rsp+10h] [rbp-98h] BYREF
  unsigned __int64 v26; // [rsp+68h] [rbp-40h]

  v4 = *(_QWORD **)(a2 + 1480);
  v26 = __readfsqword(0x28u);
  sub_419620((__int64)v25, v4);
  v6 = *(_QWORD *)(a2 + 1624);
  v7 = *(_QWORD *)(v6 + 32);
  v8 = v6 + 16;
  for ( i = v6; v8 != v7; v7 = std::_Rb_tree_increment() )
  {
    v12 = a3[1];
    v13 = *a3;
    if ( a3[2] < (unsigned __int64)(v12 + 1) )
    {
      v14 = qvector_reserve(a3, v13, v12 + 1, 24);
      v12 = a3[1];
      *a3 = v14;
      v13 = v14;
    }
    v9 = v13 + 24 * v12;
    *(_OWORD *)(v9 + 8) = 0;
    *(_QWORD *)v9 = 0;
    ++a3[1];
    dstr_tinfo(v7 + 40);
    sub_419660((__int64)v25, *(_DWORD *)(v7 + 32), nullptr, 0, v10, v11);
    sub_3573A0((char **)v9);
  }
  v15 = *(_QWORD *)(i + 80);
  for ( j = i + 64; j != v15; v15 = std::_Rb_tree_increment() )
  {
    v19 = a3[1];
    v20 = *a3;
    if ( a3[2] < (unsigned __int64)(v19 + 1) )
    {
      v21 = qvector_reserve(a3, v20, v19 + 1, 24);
      v19 = a3[1];
      *a3 = v21;
      v20 = v21;
    }
    v16 = v20 + 24 * v19;
    *(_OWORD *)(v16 + 8) = 0;
    *(_QWORD *)v16 = 0;
    ++a3[1];
    dstr_tinfo(v15 + 40);
    sub_419660((__int64)v25, *(_DWORD *)(v15 + 32), nullptr, 0, v17, v18);
    sub_3573A0((char **)v16);
  }
  return v26 - __readfsqword(0x28u);
}

