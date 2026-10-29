unsigned __int64 __fastcall sub_3C7F00(_QWORD *a1, __int64 a2)
{
  unsigned __int64 v2; // rbx
  _QWORD *v3; // r12
  __int64 v4; // rax
  unsigned __int64 v6; // r13
  unsigned __int64 v7; // rsi
  unsigned __int64 addr; // rax

  if ( a1[200] == a2 )
    return a1[201];
  a1[200] = a2;
  v2 = a2;
  v3 = a1 + 130;
  v4 = sub_3C7D00(a1, a2);
  if ( !v4 )
    goto LABEL_9;
LABEL_3:
  v2 = *(_QWORD *)(v4 + 8);
  if ( !(unsigned __int8)sub_3FD360(a1, v2) && !rangeset_t_find_range(v3, v2) )
  {
    if ( (unsigned __int8)sub_3FC580(a1) )
    {
      v6 = sub_3FCE10(a1, v2);
      if ( v6 == v2 + 1 )
      {
        v2 = v6;
        goto LABEL_4;
      }
    }
    else
    {
      v6 = -1;
    }
    v7 = v2;
    v2 = v6;
    addr = rangeset_t_next_addr(v3, v7);
    if ( addr <= v6 )
      v2 = addr;
  }
LABEL_4:
  while ( v2 != -1 && (getinf(45) & 0x20) == 0 && (get_aflags(v2) & 0x10) != 0 )
  {
    v4 = sub_3C7D00(a1, v2);
    if ( v4 )
      goto LABEL_3;
LABEL_9:
    if ( (unsigned __int8)sub_631AD0(*a1, 9) )
    {
      if ( (unsigned __int8)is_spec_ea(v2) )
        v2 += (unsigned __int8)sub_631AD0(*a1, 9) - 1;
    }
    v2 = sub_3C2450(a1, v2);
  }
  a1[201] = v2;
  return v2;
}
