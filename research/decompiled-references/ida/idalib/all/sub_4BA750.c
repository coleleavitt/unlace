unsigned __int64 __fastcall sub_4BA750(__int64 *a1, __int64 a2, char a3, __int64 a4)
{
  __int64 v5; // rax
  __int64 v6; // rsi
  unsigned int v7; // eax
  __int64 v8; // rsi
  unsigned int v9; // ebx
  unsigned int v10; // r14d
  unsigned int v11; // r15d
  unsigned int v12; // eax
  __int64 v13; // rbx
  __int64 v14; // r15
  __int64 v15; // rsi
  __int64 v16; // rsi
  __int64 v17; // rbx
  const char *v18; // rdx
  unsigned int v19; // esi
  unsigned int v22; // [rsp+8h] [rbp-60h]
  __int64 v24; // [rsp+18h] [rbp-50h] BYREF
  _QWORD v25[9]; // [rsp+20h] [rbp-48h] BYREF

  v5 = *(_QWORD *)a2;
  v25[1] = __readfsqword(0x28u);
  v6 = *a1;
  v25[0] = v5;
  v7 = sub_7BE710(v25, v6, 1, 65);
  v8 = *a1;
  v9 = v7;
  v10 = v7;
  v11 = v7;
  v25[0] = *(_QWORD *)a2;
  v12 = sub_7BE710(v25, v8, 0, 65) + 1;
  if ( v12 <= v9 )
    v11 = v12;
  v22 = v11;
  if ( v12 < v9 )
  {
    v13 = v11;
    do
    {
      v15 = *a1;
      v25[0] = *(_QWORD *)a2;
      v14 = v25[0];
      sub_7BE850(v25, v15, v13, 83);
      netnode_supdel(v14, v13++, 82);
    }
    while ( (unsigned int)v13 < v10 );
  }
  v16 = *a1;
  v24 = *(_QWORD *)a2;
  v25[0] = v22 + 1;
  sub_7BE7C0(&v24, v16, 1, v25, 8, 65);
  v17 = *a1;
  if ( (*(_BYTE *)(a2 + 8) & 1) != 0 )
  {
    if ( !under_debugger )
      interr(1308);
    BUG();
  }
  sub_4B6E60(*a1, *(_QWORD *)a2, v22, a4, 0);
  v25[0] = *(_QWORD *)a2;
  sub_7BE850(v25, v17, v22, 82);
  sub_4BA010(a1, a2, nullptr, v22, a3, 1);
  v18 = haystack;
  if ( *(_QWORD *)(a4 + 56) )
    v18 = *(const char **)(a4 + 48);
  sub_4B70F0(*a1, *(_QWORD *)a2, (__int64)v18, a4, 0);
  v19 = navstack_t_stack_index(a2);
  return navstack_t_set_stack_entry(a2, v19, a4);
}
