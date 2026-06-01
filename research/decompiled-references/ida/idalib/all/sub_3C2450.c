unsigned __int64 __fastcall sub_3C2450(_QWORD *a1, __int64 a2)
{
  _QWORD *v3; // r13
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // r12
  unsigned __int64 addr; // rax
  unsigned int v8; // eax
  unsigned __int64 v9; // rdx
  _QWORD *v10; // r12
  __int64 v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rax
  bool v14; // cf
  __int64 v15; // rax

  v3 = a1 + 130;
LABEL_2:
  if ( !(unsigned __int8)sub_3FC580(a1) )
    goto LABEL_20;
LABEL_3:
  v5 = a2 + 1;
  v6 = sub_3FCE10(a1, a2);
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
    v8 = sub_3BE900(a1, v5, 4);
    if ( (v8 & 0x600) != 0x200 )
      return v5;
    v9 = a1[129];
    if ( v9 <= 0xFFFFFFFFFFFFFFFDLL )
    {
      a2 = v5;
      if ( (v5 & 1) == 0 )
      {
        if ( (v8 & 0xFFF00000) == 0 )
          return v5;
        v13 = (int)((v8 >> 20) - 1);
        v14 = __CFADD__(v5, v13);
        v15 = v5 + v13;
        if ( v14 )
          return v5;
        a2 = v15;
      }
      goto LABEL_2;
    }
    v10 = a1 + 113;
    v11 = a1[125];
    if ( v9 == -1 )
      v10 = a1 + 119;
    if ( a1[128] != v5 )
      goto LABEL_12;
    while ( 2 )
    {
      v12 = *(_QWORD *)(v11 + 40);
      if ( !v12 )
      {
        if ( (*(_DWORD *)(v11 + 48) & 0x600) != 0x200 )
          goto LABEL_16;
LABEL_12:
        if ( v10[3] == v11 )
        {
LABEL_16:
          if ( !under_debugger )
            interr(72);
          BUG();
        }
        v11 = std::_Rb_tree_decrement(v11);
        continue;
      }
      break;
    }
    if ( (_QWORD *)v11 == v10 + 1 )
      goto LABEL_16;
    a2 = *(_QWORD *)(v11 + 32) + v12 - 1;
    if ( (unsigned __int8)sub_3FC580(a1) )
      goto LABEL_3;
LABEL_20:
    v6 = -1;
  }
}
