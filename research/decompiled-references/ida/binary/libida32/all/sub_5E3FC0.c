unsigned __int8 *__fastcall sub_5E3FC0(unsigned __int8 *a1)
{
  unsigned __int8 *v1; // r12
  __int64 current_config; // rax
  unsigned __int64 v3; // r13
  __int64 v4; // r14
  int v5; // ebx
  __int64 v6; // rax
  unsigned __int8 *v7; // rbp

  v1 = a1;
  current_config = get_current_config();
  v3 = *(_QWORD *)(current_config + 16);
  if ( !a1 )
    v1 = (unsigned __int8 *)&byte_22CD811;
  if ( !v3 )
    return nullptr;
  v4 = *(_QWORD *)(current_config + 8);
  v5 = 0;
  v6 = 0;
  while ( 1 )
  {
    v7 = (unsigned __int8 *)(v4 + 26 * v6);
    if ( (unsigned int)sub_5DF710(v1, v7, 0) )
      break;
    v6 = ++v5;
    if ( v5 >= v3 )
      return nullptr;
  }
  return v7 + 10;
}

