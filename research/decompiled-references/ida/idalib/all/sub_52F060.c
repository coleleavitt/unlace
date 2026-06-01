__int64 __fastcall sub_52F060(__int64 *a1, __int64 a2, _QWORD *a3, __int16 a4)
{
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // rsi
  int v9; // r15d
  void *v10; // rax
  unsigned __int64 v11; // rbp
  unsigned __int64 v12; // rax
  __int64 v14; // rdx
  char v15; // cl
  __int64 v16; // rsi
  __int64 *v17; // [rsp+0h] [rbp-68h]
  unsigned __int64 v18; // [rsp+8h] [rbp-60h]
  void *ptr; // [rsp+10h] [rbp-58h] BYREF
  __int128 v20; // [rsp+18h] [rbp-50h]
  unsigned __int64 v21; // [rsp+28h] [rbp-40h]

  v21 = __readfsqword(0x28u);
  if ( !a2 || !a3 )
    return 0;
  v17 = *(__int64 **)(*a1 + 1672);
  if ( (a4 & 4) == 0 )
    goto LABEL_4;
  v14 = *a3;
  ptr = nullptr;
  v20 = 0;
  if ( sub_52ED50(a1, (__int64)&ptr, v14) && (unsigned __int8)sub_6CBF50(&ptr) )
  {
    if ( ptr )
    {
      *(_QWORD *)&v20 = 0;
      qfree(ptr);
    }
    return 0;
  }
  if ( ptr )
  {
    *(_QWORD *)&v20 = 0;
    qfree(ptr);
  }
LABEL_4:
  v18 = sub_52EB40((__int64)a1, a2);
  if ( (*(_BYTE *)(a2 + 28) & 0x40) != 0 )
    goto LABEL_19;
  if ( (a4 & 0x100) == 0 )
  {
    if ( !(unsigned __int8)sub_6BB290(*(_QWORD *)(*a1 + 1672)) )
    {
      v15 = 0;
      goto LABEL_20;
    }
LABEL_19:
    sub_6BF220(v17, *a3, 1);
    v15 = 1;
LABEL_20:
    v7 = *a3;
    v16 = *a3;
    sub_3CA1F0(v17, *a3, *((_DWORD *)a3 + 6), v15);
    if ( (get_merge_state(v17, v16) & 2) != 0 && (a4 & 0x100) == 0 )
      sub_3E39C0((__int64)v17, v7, 1);
    goto LABEL_7;
  }
  v7 = *a3;
  v8 = *a3;
  sub_3CA1F0(v17, *a3, *((_DWORD *)a3 + 6), 0);
  get_merge_state(v17, v8);
LABEL_7:
  v9 = a4 & 1;
  v10 = (void *)sub_3BDD60(v17, v7);
  ptr = v10;
  if ( (a4 & 0x80) != 0 )
  {
    if ( (a4 & 1) != 0 )
    {
      sub_694E60(v17, v7, 0, 1, (*(_BYTE *)(a2 + 28) & 0x40) != 0);
    }
    else
    {
      netnode_supdel_range(v10, 0, -1, 65);
      netnode_supdel_range(ptr, 0, -1, 83);
    }
  }
  else
  {
    sub_3E34B0((__int64)v17, v7);
    sub_7BF0F0((int)&ptr);
  }
  v11 = ((__int64)a3 - *(_QWORD *)(a2 + 16)) >> 5;
  memmove(a3, a3 + 4, 32 * (*(unsigned int *)(a2 + 8) - 1LL - v11));
  v12 = (unsigned int)(*(_DWORD *)(a2 + 8) - 1);
  *(_DWORD *)(a2 + 8) = v12;
  if ( (*(_BYTE *)(a2 + 28) & 2) != 0 && v11 < v12 )
  {
    do
    {
      *(_QWORD *)(*(_QWORD *)(a2 + 16) + 32 * v11 + 8) = v11;
      ++v11;
    }
    while ( v11 < *(unsigned int *)(a2 + 8) );
  }
  if ( v9 )
    sub_52EBC0(*(_QWORD **)(*a1 + 1672), *(_QWORD *)(*a1 + 1872), a2, v18);
  return 1;
}
