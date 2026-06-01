__int64 __fastcall sub_1D5CD0(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // rax
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rsi
  __int64 v9; // r12
  __int64 v10; // rax
  __int64 v11; // r12
  __int64 v12; // rax
  __int64 not_tail; // r12
  __int64 v14; // r13
  __int64 v15; // rax

  v3 = a1[1];
  v4 = *a1;
  *((_BYTE *)a1 + 400) = 0;
  a1[3] = v3;
  a1[49] = -1;
  if ( *(char *)(*(_QWORD *)(*(_QWORD *)(v4 + 1496) + 8LL) + 10LL) >= 0 || sub_CFF70() != 1 )
  {
    a1[3] = -1;
    goto LABEL_3;
  }
  v8 = a1[3];
  if ( v8 != -1 )
  {
    if ( v8 == a1[1] )
    {
      a1[3] = -1;
      if ( (get_flags_ex() & 0x10000) != 0 )
      {
        not_tail = prev_not_tail();
        if ( not_tail != -1 )
        {
          v14 = *a1;
          v15 = sub_330F80(*a1);
          if ( (unsigned __int8)sub_332920(v14 + 8, v15) )
          {
            if ( (~((unsigned __int16)get_flags_ex() >> 8) & 6) == 0 )
              a1[49] = not_tail;
          }
        }
      }
    }
    else
    {
      *((_BYTE *)a1 + 400) = 0;
      if ( v8 >= a1[2] )
      {
        v9 = *a1;
        v10 = sub_330F80(*a1);
        if ( !(unsigned __int8)sub_332920(v9 + 8, v10) )
          return 4294967266LL;
      }
    }
LABEL_3:
    if ( !(unsigned int)decode_insn() )
      return 4294967294LL;
    if ( a1[3] == -1 )
      goto LABEL_5;
    if ( !(unsigned int)decode_insn() )
      return 4294967294LL;
    v7 = a1[3];
    if ( v7 + *((unsigned __int16 *)a1 + 29) < a1[2] )
    {
LABEL_9:
      if ( v7 != -1 && v7 < a1[2] )
      {
        a1[1] = *((unsigned __int16 *)a1 + 29) + v7;
        return 0;
      }
LABEL_5:
      a1[1] += *(unsigned __int16 *)(a2 + 26);
      return 0;
    }
    v11 = *a1;
    v12 = sub_330F80(*a1);
    if ( (unsigned __int8)sub_332920(v11 + 8, v12) )
    {
      v7 = a1[3];
      goto LABEL_9;
    }
    return 4294967266LL;
  }
  return 4294967264LL;
}
