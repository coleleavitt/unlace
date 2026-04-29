char __fastcall sub_1EF140(__int64 a1, __int64 a2, int a3)
{
  unsigned int v4; // r14d
  signed int v5; // r15d
  int v6; // ebx
  int v7; // ebp
  int v9; // eax

  v4 = *(_DWORD *)(a1 + 72);
  v5 = *(_DWORD *)(*(_QWORD *)(a1 + 1504) + 80LL);
  v6 = round_down_power2();
  if ( v6 > 1 )
  {
    while ( a3 % v6 )
    {
      v6 >>= 1;
      if ( v6 == 1 )
        goto LABEL_6;
    }
  }
  if ( (v6 & (v6 - 1)) == 0 )
  {
LABEL_6:
    v7 = 2 * v5;
    if ( 2 * v5 >= v6 )
    {
      if ( v5 > v6 )
      {
        if ( v4 > 0x10 )
        {
LABEL_9:
          if ( v4 != 176 && v4 != 256 )
          {
LABEL_11:
            if ( !(unsigned __int8)getinf_flag() )
              goto LABEL_13;
          }
LABEL_12:
          v5 = v6;
          goto LABEL_13;
        }
LABEL_29:
        v4 = getinf();
        goto LABEL_9;
      }
      if ( v4 > 0x10 )
      {
LABEL_16:
        if ( v4 != 176 && v4 != 256 )
        {
LABEL_18:
          if ( (unsigned __int8)getinf_flag() )
            v5 = v6;
          if ( *(char *)(a2 + 25) < 0 )
            return 0;
          return sub_1EEEF0(a2, *(_QWORD *)(a1 + 1504), nullptr, v5, *(_DWORD *)(a1 + 72));
        }
LABEL_13:
        if ( *(char *)(a2 + 25) < 0 )
          return 0;
        return sub_1EEEF0(a2, *(_QWORD *)(a1 + 1504), nullptr, v5, *(_DWORD *)(a1 + 72));
      }
LABEL_37:
      v4 = getinf();
      goto LABEL_16;
    }
    if ( v4 <= 0x10 )
    {
      v9 = getinf();
      if ( v9 == 176 || v9 == 256 )
      {
        if ( v5 > v7 )
        {
LABEL_28:
          v6 = 2 * v5;
          goto LABEL_29;
        }
LABEL_36:
        v6 = 2 * v5;
        goto LABEL_37;
      }
    }
    else if ( v4 == 256 || v4 == 176 )
    {
      if ( v5 > v7 )
        v5 *= 2;
      goto LABEL_13;
    }
    if ( (unsigned __int8)getinf_flag() )
      goto LABEL_12;
    if ( v5 > v7 )
    {
      v6 = 2 * v5;
      if ( v4 > 0x10 )
        goto LABEL_11;
      goto LABEL_28;
    }
    v6 = 2 * v5;
    if ( v4 > 0x10 )
      goto LABEL_18;
    goto LABEL_36;
  }
  if ( under_debugger )
    BUG();
  interr();
  return sub_1EF340(2858);
}
