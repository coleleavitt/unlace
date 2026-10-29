unsigned __int64 __fastcall navstack_t_stack_clear(__int64 a1, __int64 a2)
{
  __int64 v3; // r13
  unsigned int v4; // eax
  __int64 v5; // r12
  __int64 i; // rbx
  __int64 v7; // r15
  __int64 v8; // [rsp+18h] [rbp-50h] BYREF
  __int64 v9; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v10; // [rsp+28h] [rbp-40h]

  v10 = __readfsqword(0x28u);
  if ( (*(_BYTE *)(a1 + 8) & 1) != 0 )
    return v10 - __readfsqword(0x28u);
  v3 = qword_2CCB598;
  v9 = *(_QWORD *)a1;
  v4 = sub_7BE710(&v9, qword_2CCB598, 1, 65);
  if ( v4 > 1 )
  {
    v5 = v4;
    for ( i = 1; i != v5; ++i )
    {
      v9 = *(_QWORD *)a1;
      v7 = v9;
      sub_7BE850(&v9, v3, i, 83);
      netnode_supdel(v7, i, 82);
    }
  }
  v8 = *(_QWORD *)a1;
  v9 = 1;
  sub_7BE7C0(&v8, v3, 1, &v9, 8, 65);
  v8 = *(_QWORD *)a1;
  v9 = 0;
  sub_7BE7C0(&v8, v3, 0, &v9, 8, 65);
  if ( !*(_QWORD *)(a2 + 40) )
    return v10 - __readfsqword(0x28u);
  else
    return sub_4B6E60(qword_2CCB598, *(_QWORD *)a1, 0, a2, 0);
}
