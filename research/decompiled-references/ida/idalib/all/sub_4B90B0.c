unsigned __int64 __fastcall sub_4B90B0(__int64 a1, unsigned int a2)
{
  void *v2; // rax
  __int64 v4; // rsi
  unsigned int v5; // eax
  __int64 v6; // rcx
  __int64 v7; // r8
  int v8; // r9d
  __int64 v9; // r13
  unsigned int v10; // r12d
  int v11; // r14d
  __int64 v12; // rbp
  __int64 v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rsi
  int v17; // ecx
  int v18; // r8d
  int v19; // r9d
  __int64 v20; // [rsp+8h] [rbp-60h] BYREF
  __int64 v21; // [rsp+10h] [rbp-58h] BYREF
  __int64 v22; // [rsp+18h] [rbp-50h] BYREF
  void *ptr; // [rsp+20h] [rbp-48h] BYREF
  __int128 v24; // [rsp+28h] [rbp-40h]
  unsigned __int64 v25; // [rsp+38h] [rbp-30h]

  v2 = *(void **)(a1 + 24);
  v25 = __readfsqword(0x28u);
  v4 = *(_QWORD *)a1;
  ptr = v2;
  v5 = sub_7BE710(&ptr, v4, 1, 65);
  if ( a2 >= v5 )
  {
    if ( !under_debugger )
      interr(1312);
    BUG();
  }
  v9 = a2;
  v10 = v5;
  v24 = 0;
  ptr = nullptr;
  v11 = sub_4B8FF0((__int64 *)a1, (__int64)&ptr, a2, v6, v7, v8);
  if ( *(_DWORD *)(a1 + 32) == 7 || (get_merge_state(a1, &ptr) & 2) != 0 )
  {
    v12 = a2 + 1;
    if ( (unsigned int)v12 < v10 )
    {
LABEL_12:
      netnode_supshift(*(_QWORD *)(a1 + 24), v12, v9, v10 - (unsigned int)v12, 83);
      netnode_supshift(*(_QWORD *)(a1 + 24), v12, v9, v10 - (unsigned int)v12, 82);
LABEL_5:
      v13 = *(_QWORD *)a1;
      v20 = *(_QWORD *)(a1 + 24);
      sub_7BE850(&v20, v13, v10 - 1, 83);
      netnode_supdel(*(_QWORD *)(a1 + 24), v10 - 1, 82);
      v14 = *(_QWORD *)(a1 + 24);
      v15 = *(_QWORD *)a1;
      v22 = v10 - 1;
      v21 = v14;
      sub_7BE7C0(&v21, v15, 1, &v22, 8, 65);
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
    sub_52CCE0(*(_DWORD *)(a1 + 32), 0, v11, v17, v18, v19);
    v12 = a2 + 1;
    if ( (unsigned int)v12 < v10 )
      goto LABEL_12;
  }
  if ( v10 >= (unsigned int)v12 )
    goto LABEL_5;
  if ( ptr )
  {
    *(_QWORD *)&v24 = 0;
    qfree(ptr);
  }
  return v25 - __readfsqword(0x28u);
}
