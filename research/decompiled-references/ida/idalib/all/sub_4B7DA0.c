unsigned __int64 __fastcall sub_4B7DA0(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, char a5, double a6)
{
  __int64 v10; // rax
  int dirtree_id; // eax
  __int64 v12; // rdi
  int v13; // eax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v17; // rsi
  __int64 v18; // rax
  __int64 v19; // r13
  __int64 v20; // rax
  __int64 v21; // rsi
  __int64 v22; // [rsp+0h] [rbp-48h] BYREF
  __int64 v23; // [rsp+8h] [rbp-40h] BYREF
  __int64 v24; // [rsp+10h] [rbp-38h] BYREF
  unsigned __int64 v25; // [rsp+18h] [rbp-30h]

  v25 = __readfsqword(0x28u);
  *a1 = a2;
  v10 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a3 + 40) + 16LL))(*(_QWORD *)(a3 + 40));
  a1[2] = a4;
  a1[1] = v10;
  a1[3] = -1;
  a1[4] = 7;
  if ( !v10 )
  {
    if ( !under_debugger )
      interr(2027);
    BUG();
  }
  dirtree_id = bookmarks_t_get_dirtree_id(a3, a6);
  v12 = a1[1];
  *((_DWORD *)a1 + 8) = dirtree_id;
  if ( (*(int (__fastcall **)(__int64, __int64))(*(_QWORD *)v12 + 112LL))(v12, a4) >= 0 )
  {
    v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1[1] + 112LL))(a1[1]);
    if ( get_place_class(&v24, nullptr, v13) && (v24 & 1) != 0 )
      *((_DWORD *)a1 + 9) |= 2u;
    v22 = -1;
    netnode_check(&v22, "$ BMARKS ", 0, 1);
    v14 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1[1] + 120LL))(a1[1]);
    v15 = sub_7BF490(&v22, *a1, v14, 72);
    a1[3] = v15;
    if ( v15 )
      goto LABEL_11;
    if ( a5 )
    {
      netnode_check(a1 + 3, 0, 0, 1);
      v17 = *a1;
      v18 = a1[3];
      v24 = 0;
      v23 = v18;
      sub_7BE7C0(&v23, v17, 1, &v24, 8, 65);
      v19 = a1[3];
      v20 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1[1] + 120LL))(a1[1]);
      v21 = *a1;
      v24 = v19;
      sub_7BF4E0(&v22, v21, v20, &v24, 8, 72);
      v15 = a1[3];
    }
    if ( v15 )
LABEL_11:
      *((_DWORD *)a1 + 9) |= 1u;
  }
  return v25 - __readfsqword(0x28u);
}
