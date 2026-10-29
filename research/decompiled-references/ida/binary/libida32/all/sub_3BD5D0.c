__int64 __fastcall sub_3BD5D0(__int64 a1, unsigned int a2)
{
  unsigned int v4; // eax
  unsigned int v5; // eax
  unsigned __int64 v6; // rdx
  __int64 v7; // r12
  unsigned int *v8; // rdi
  unsigned int v10; // edx

  while ( 1 )
  {
    v4 = sub_3B8820(a1, a2);
    a2 = v4;
    if ( v4 == -1 )
      return 0xFFFFFFFFLL;
    v5 = sub_3B9AA0(a1, v4, 4);
    if ( (v5 & 0x600) != 0x200 )
      return a2;
    v6 = *(_QWORD *)(a1 + 1024);
    if ( v6 > 0xFFFFFFFFFFFFFFFDLL )
      break;
    if ( (a2 & 1) != 0 )
    {
      v10 = v5 >> 20;
      if ( (v5 & 0xFFF00000) == 0 || a2 < v10 )
        return a2;
      a2 = a2 + 1 - v10;
    }
  }
  v7 = a1 + 896;
  v8 = *(unsigned int **)(a1 + 992);
  if ( v6 == -1 )
    v7 = a1 + 944;
  if ( a2 == *(_DWORD *)(a1 + 1016) )
    goto LABEL_9;
  while ( 1 )
  {
    if ( *(unsigned int **)(v7 + 24) == v8 )
      goto LABEL_13;
    v8 = (unsigned int *)std::_Rb_tree_decrement();
LABEL_9:
    if ( v8[9] )
      break;
    if ( (v8[10] & 0x600) != 0x200 )
      goto LABEL_13;
  }
  if ( v8 == (unsigned int *)(v7 + 8) )
  {
LABEL_13:
    if ( !under_debugger )
      interr(73);
    BUG();
  }
  return v8[8];
}

