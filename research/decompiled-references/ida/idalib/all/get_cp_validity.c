__int64 __fastcall get_cp_validity(unsigned int a1, unsigned int a2, unsigned int a3)
{
  unsigned int v3; // ebp
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // r12
  __int64 v7; // r13

  v3 = a3;
  v4 = a2;
  if ( a3 == -1 )
    v3 = a2 + 1;
  v5 = sub_5A9ED0(qword_2CCB598, a1);
  if ( a2 >= v3 )
    return 1;
  v6 = v5;
  v7 = v5 + 48;
  while ( *(_QWORD *)(v6 + 56) && rangeset_t_find_range(v7, v4) )
  {
    if ( (unsigned int)++v4 >= v3 )
      return 1;
  }
  return 0;
}
