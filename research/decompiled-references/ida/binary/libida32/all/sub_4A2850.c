unsigned __int64 __fastcall sub_4A2850(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  __int64 v9; // rax
  int dirtree_id; // eax
  __int64 v11; // rdi
  unsigned int v12; // eax
  __int64 v13; // rax
  int v14; // eax
  __int64 v16; // rsi
  int v17; // eax
  int v18; // r13d
  __int64 v19; // rax
  __int64 v20; // rsi
  int v21; // [rsp+Ch] [rbp-3Ch] BYREF
  int v22; // [rsp+10h] [rbp-38h] BYREF
  int v23; // [rsp+14h] [rbp-34h] BYREF
  unsigned __int64 v24; // [rsp+18h] [rbp-30h]

  v24 = __readfsqword(0x28u);
  *a1 = a2;
  v9 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a3 + 40) + 16LL))(*(_QWORD *)(a3 + 40));
  a1[2] = a4;
  a1[1] = v9;
  a1[3] = 0x7FFFFFFFFLL;
  *((_DWORD *)a1 + 8) = 0;
  if ( !v9 )
  {
    if ( !under_debugger )
      interr(2027);
    BUG();
  }
  dirtree_id = bookmarks_t_get_dirtree_id(a3, a4);
  v11 = a1[1];
  *((_DWORD *)a1 + 7) = dirtree_id;
  if ( (*(int (__fastcall **)(__int64))(*(_QWORD *)v11 + 112LL))(v11) >= 0 )
  {
    v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1[1] + 112LL))(a1[1]);
    if ( get_place_class(&v23, 0, v12) && (v23 & 1) != 0 )
      *((_DWORD *)a1 + 8) |= 2u;
    v21 = -1;
    netnode_check(&v21, "$ BMARKS ", 0, 1);
    v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1[1] + 120LL))(a1[1]);
    v14 = sub_79C090(&v21, *a1, v13, 72);
    *((_DWORD *)a1 + 6) = v14;
    if ( v14 )
      goto LABEL_11;
    if ( a5 )
    {
      netnode_check(a1 + 3, 0, 0, 1);
      v16 = *a1;
      v17 = *((_DWORD *)a1 + 6);
      v23 = 0;
      v22 = v17;
      sub_79B440(&v22, v16, 1, &v23, 4, 65);
      v18 = *((_DWORD *)a1 + 6);
      v19 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1[1] + 120LL))(a1[1]);
      v20 = *a1;
      v23 = v18;
      sub_79C0D0(&v21, v20, v19, &v23, 4, 72);
      v14 = *((_DWORD *)a1 + 6);
    }
    if ( v14 )
LABEL_11:
      *((_DWORD *)a1 + 8) |= 1u;
  }
  return v24 - __readfsqword(0x28u);
}

