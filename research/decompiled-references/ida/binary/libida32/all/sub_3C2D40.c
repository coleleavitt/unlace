__int64 __fastcall sub_3C2D40(_QWORD *a1, unsigned int a2)
{
  unsigned int v2; // ebx
  _QWORD *v3; // r12
  __int64 v4; // rax
  unsigned int v6; // r13d
  __int64 v7; // rsi
  unsigned int addr; // eax

  if ( *((_DWORD *)a1 + 385) == a2 )
    return *((unsigned int *)a1 + 386);
  *((_DWORD *)a1 + 385) = a2;
  v2 = a2;
  v3 = a1 + 129;
  v4 = sub_3C2B90(a1, a2);
  if ( !v4 )
    goto LABEL_9;
LABEL_3:
  v2 = *(_DWORD *)(v4 + 4);
  if ( !(unsigned __int8)sub_3EA400(a1, v2) && !rangeset_t_find_range(v3, v2) )
  {
    if ( (unsigned __int8)sub_3E9640(a1) )
    {
      v6 = sub_3E9EF0(a1, v2);
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
    v4 = sub_3C2B90(a1, v2);
    if ( v4 )
      goto LABEL_3;
LABEL_9:
    if ( (unsigned __int8)sub_614FB0(*a1, 9) )
    {
      if ( (unsigned __int8)is_spec_ea(v2) )
        v2 = v2 + (unsigned __int8)sub_614FB0(*a1, 9) - 1;
    }
    v2 = sub_3BD3E0((__int64)a1, v2);
  }
  *((_DWORD *)a1 + 386) = v2;
  return v2;
}

