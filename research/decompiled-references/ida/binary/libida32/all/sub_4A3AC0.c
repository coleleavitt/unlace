unsigned __int64 __fastcall sub_4A3AC0(__int64 a1, unsigned int a2)
{
  int v2; // eax
  __int64 v4; // rsi
  unsigned int v5; // eax
  __int64 v6; // rcx
  __int64 v7; // r8
  int v8; // r9d
  unsigned int v9; // ebp
  int v10; // r13d
  unsigned int v11; // r13d
  unsigned int v12; // ebp
  __int64 v13; // rsi
  int v14; // eax
  __int64 v15; // rsi
  int v17; // ecx
  int v18; // r8d
  int v19; // r9d
  int v20; // [rsp+4h] [rbp-54h] BYREF
  int v21; // [rsp+8h] [rbp-50h] BYREF
  unsigned int v22; // [rsp+Ch] [rbp-4Ch] BYREF
  void *ptr; // [rsp+10h] [rbp-48h] BYREF
  __int128 v24; // [rsp+18h] [rbp-40h]
  unsigned __int64 v25; // [rsp+28h] [rbp-30h]

  v2 = *(_DWORD *)(a1 + 24);
  v25 = __readfsqword(0x28u);
  v4 = *(_QWORD *)a1;
  LODWORD(ptr) = v2;
  v5 = sub_79B3A0(&ptr, v4, 1, 65);
  if ( a2 >= v5 )
  {
    if ( !under_debugger )
      interr(1312);
    BUG();
  }
  ptr = nullptr;
  v9 = v5;
  v24 = 0;
  v10 = sub_4A3A00(a1, (__int64)&ptr, a2, v6, v7, v8);
  if ( *(_DWORD *)(a1 + 28) == 7 || (get_merge_state(a1, &ptr) & 2) != 0 )
  {
    v11 = a2 + 1;
    if ( a2 + 1 < v9 )
    {
LABEL_12:
      netnode_supshift(*(unsigned int *)(a1 + 24), v11, a2, v9 - v11, 83);
      netnode_supshift(*(unsigned int *)(a1 + 24), v11, a2, v9 - v11, 82);
LABEL_5:
      v12 = v9 - 1;
      v13 = *(_QWORD *)a1;
      v20 = *(_DWORD *)(a1 + 24);
      sub_79B4D0(&v20, v13, v12, 83);
      netnode_supdel(*(unsigned int *)(a1 + 24), v12, 82);
      v14 = *(_DWORD *)(a1 + 24);
      v15 = *(_QWORD *)a1;
      v22 = v12;
      v21 = v14;
      sub_79B440(&v21, v15, 1, &v22, 4, 65);
      if ( ptr )
      {
        *(_QWORD *)&v24 = 0;
        qfree(ptr);
      }
      return v25 - __readfsqword(0x28u);
    }
  }
  else
  {
    sub_514A50(*(_DWORD *)(a1 + 28), 0, v10, v17, v18, v19);
    v11 = a2 + 1;
    if ( a2 + 1 < v9 )
      goto LABEL_12;
  }
  if ( v9 >= v11 )
    goto LABEL_5;
  if ( ptr )
  {
    *(_QWORD *)&v24 = 0;
    qfree(ptr);
  }
  return v25 - __readfsqword(0x28u);
}

