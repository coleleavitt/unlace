__int64 __fastcall sub_3BD3E0(__int64 a1, unsigned int a2)
{
  __int64 v3; // r13
  unsigned int v5; // ebx
  unsigned int v6; // r12d
  unsigned int addr; // eax
  unsigned int v8; // eax
  unsigned __int64 v9; // rdx
  __int64 v10; // r12
  _DWORD *v11; // rdi
  int v12; // eax
  unsigned int v13; // edx

  v3 = a1 + 1032;
LABEL_2:
  if ( !(unsigned __int8)sub_3E9640(a1) )
    goto LABEL_20;
LABEL_3:
  v5 = a2 + 1;
  v6 = sub_3E9EF0(a1, a2);
  if ( v6 == a2 + 1 )
    goto LABEL_6;
  while ( 1 )
  {
    v5 = v6;
    addr = rangeset_t_next_addr(v3, a2);
    if ( addr <= v6 )
      v5 = addr;
LABEL_6:
    if ( v5 == -1 )
      return v5;
    v8 = sub_3B9AA0(a1, v5, 4);
    if ( (v8 & 0x600) != 0x200 )
      return v5;
    v9 = *(_QWORD *)(a1 + 1024);
    if ( v9 <= 0xFFFFFFFFFFFFFFFDLL )
    {
      a2 = v5;
      if ( (v5 & 1) == 0 )
      {
        v13 = v8 >> 20;
        if ( (v8 & 0xFFF00000) == 0 || __CFADD__(v5, v13 - 1) )
          return v5;
        a2 = v5 + v13 - 1;
      }
      goto LABEL_2;
    }
    v10 = a1 + 896;
    v11 = *(_DWORD **)(a1 + 992);
    if ( v9 == -1 )
      v10 = a1 + 944;
    if ( *(_DWORD *)(a1 + 1016) != v5 )
      goto LABEL_12;
    while ( 2 )
    {
      v12 = v11[9];
      if ( !v12 )
      {
        if ( (v11[10] & 0x600) != 0x200 )
          goto LABEL_16;
LABEL_12:
        if ( *(_DWORD **)(v10 + 24) == v11 )
        {
LABEL_16:
          if ( !under_debugger )
            interr(72);
          BUG();
        }
        v11 = (_DWORD *)std::_Rb_tree_decrement();
        continue;
      }
      break;
    }
    if ( v11 == (_DWORD *)(v10 + 8) )
      goto LABEL_16;
    a2 = v11[8] + v12 - 1;
    if ( (unsigned __int8)sub_3E9640(a1) )
      goto LABEL_3;
LABEL_20:
    v6 = -1;
  }
}

