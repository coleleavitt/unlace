char __fastcall sub_6B650(__int64 a1, __int64 a2, __int64 a3, __int64 *a4, char a5)
{
  __int64 v7; // r14
  __int64 v8; // rax
  unsigned __int64 v9; // r14
  char result; // al

  v7 = ea2node();
  v8 = netnode_lower_bound();
  if ( v8 == -1 )
  {
    netnode_suplast();
  }
  else if ( v7 != v8 )
  {
    netnode_supprev();
  }
  v9 = node2ea();
  if ( v9 == -1 )
    return a5 && (unsigned __int8)sub_6B420(a1, a2, *a4) && v9 >= *(_QWORD *)(a2 + 8);
  if ( (int)get_func_chunknum() < 0 )
    return a5 && (unsigned __int8)sub_6B420(a1, a2, *a4) && v9 >= *(_QWORD *)(a2 + 8);
  if ( *a4 == v9 )
    return a5 && (unsigned __int8)sub_6B420(a1, a2, *a4) && v9 >= *(_QWORD *)(a2 + 8);
  result = sub_6B420(a1, a2, v9);
  if ( !result )
    return a5 && (unsigned __int8)sub_6B420(a1, a2, *a4) && v9 >= *(_QWORD *)(a2 + 8);
  return result;
}
