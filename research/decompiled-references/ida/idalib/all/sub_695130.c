unsigned __int64 __fastcall sub_695130(__int64 a1, __int64 a2, __int64 *a3)
{
  _QWORD *v4; // rsi
  __int64 v6; // rax
  __int64 v7; // r13
  __int64 v8; // r14
  __int64 v9; // r15
  int v10; // r8d
  int v11; // r9d
  const char *v12; // rdx
  const char *v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rbp
  __int64 v18; // r14
  int v19; // r8d
  int v20; // r9d
  const char *v21; // rdx
  int v22; // ecx
  const char *v23; // r8
  __int64 v24; // rdx
  __int64 v25; // rsi
  __int64 v26; // rax
  __int64 i; // [rsp+8h] [rbp-A0h]
  __int64 j; // [rsp+8h] [rbp-A0h]
  _BYTE v30[88]; // [rsp+10h] [rbp-98h] BYREF
  unsigned __int64 v31; // [rsp+68h] [rbp-40h]

  v4 = *(_QWORD **)(a2 + 1672);
  v31 = __readfsqword(0x28u);
  sub_42D210((__int64)v30, v4);
  v6 = *(_QWORD *)(a2 + 1816);
  v7 = *(_QWORD *)(v6 + 32);
  v8 = v6 + 16;
  for ( i = v6; v8 != v7; v7 = std::_Rb_tree_increment(v7, "EATIF(%s): %s", v12, v13) )
  {
    v14 = a3[1];
    v15 = *a3;
    if ( a3[2] < (unsigned __int64)(v14 + 1) )
    {
      v16 = qvector_reserve(a3, v15, v14 + 1, 24);
      v14 = a3[1];
      *a3 = v16;
      v15 = v16;
    }
    v9 = v15 + 24 * v14;
    *(_OWORD *)(v9 + 8) = 0;
    *(_QWORD *)v9 = 0;
    ++a3[1];
    dstr_tinfo(v7 + 40);
    sub_42D250((__int64)v30, *(_QWORD *)(v7 + 32), nullptr, 0, v10, v11);
    sub_35A790((char **)v9);
  }
  v17 = *(_QWORD *)(i + 80);
  for ( j = i + 64; j != v17; v17 = std::_Rb_tree_increment(v17, "OPTIF(%s/%d): %s", v21, v22, v23) )
  {
    v24 = a3[1];
    v25 = *a3;
    if ( a3[2] < (unsigned __int64)(v24 + 1) )
    {
      v26 = qvector_reserve(a3, v25, v24 + 1, 24);
      v24 = a3[1];
      *a3 = v26;
      v25 = v26;
    }
    v18 = v25 + 24 * v24;
    *(_OWORD *)(v18 + 8) = 0;
    *(_QWORD *)v18 = 0;
    ++a3[1];
    dstr_tinfo(v17 + 48);
    sub_42D250((__int64)v30, *(_QWORD *)(v17 + 32), nullptr, 0, v19, v20);
    sub_35A790((char **)v18);
  }
  return v31 - __readfsqword(0x28u);
}
